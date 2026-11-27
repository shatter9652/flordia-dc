// SPDX-License-Identifier: GPL-2.0-only
/*
 * linux-rpf9-ro - mount an RPF9 archive read-only.
 *
 *   modprobe rpf9 [toc_path=/decrypted/toc.bin] [key_path=/decoded/keys.bin]
 *   mount -t rpf9 /path/to/archive.rpf /mnt/rpf9
 *
 * The archive is a file, not a block device, so the mount keeps a struct file
 * open on it and reads through kernel_read. Nothing is written and nothing is
 * cached beyond the table of contents.
 *
 * No key material ships with this module. The archive's own keys are stored
 * white-box encoded inside the game image, and the header stage of the table of
 * contents is protected by a cipher this module does not implement, so a
 * decrypted table of contents is supplied with toc_path. Payload decryption is
 * automatic once a decoded key table is available.
 */

#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/slab.h>
#include <linux/fs.h>
#include <linux/fs_context.h>
#include <linux/file.h>
#include <linux/namei.h>
#include <linux/dcache.h>
#include <linux/limits.h>
#include <linux/mount.h>
#include <crypto/skcipher.h>

#include "rpf9.h"

static char toc_path[PATH_MAX];
static char key_path[PATH_MAX];

module_param_string(toc_path, toc_path, sizeof(toc_path), 0444);
MODULE_PARM_DESC(toc_path, "Decrypted table of contents (defaults to the archive's own)");

module_param_string(key_path, key_path, sizeof(key_path), 0444);
MODULE_PARM_DESC(key_path, "Decoded key table: records of { u32 id; u8 key[32] }");

struct inode *rpf9_iget(struct super_block *sb, u64 ino)
{
	struct rpf9_sb_info *sbi = rpf9_sb(sb);
	struct inode *inode;

	inode = iget_locked(sb, ino);
	if (!inode)
		return ERR_PTR(-ENOMEM);
	if (!(inode_state_read(inode) & I_NEW))
		return inode;

	if (ino == RPF9_INO_MANIFEST) {
		inode->i_mode = S_IFREG | 0444;
		inode->i_size = sbi->manifest_len;
		inode->i_fop = &rpf9_manifest_operations;
	} else if (ino >= RPF9_INO_FIRST && ino < RPF9_INO_FIRST + sbi->nr_files) {
		const struct rpf9_file *f = &sbi->files[ino - RPF9_INO_FIRST];

		inode->i_mode = S_IFREG | 0444;
		inode->i_size = f->unpacked;
		inode->i_private = (void *)f;
		inode->i_fop = &rpf9_file_operations;
	} else {
		unlock_new_inode(inode);
		iput(inode);
		return ERR_PTR(-ENOENT);
	}

	unlock_new_inode(inode);
	return inode;
}

static int rpf9_build_manifest(struct rpf9_sb_info *sbi)
{
	size_t cap = 512 + (size_t)sbi->nr_files * 200;
	char *buf, *p;
	u32 i;

	buf = kvmalloc(cap, GFP_KERNEL);
	if (!buf)
		return -ENOMEM;

	p = buf;
	p += scnprintf(p, cap - (p - buf), "# linux-rpf9-ro\n");
	p += scnprintf(p, cap - (p - buf), "toc_bytes %llu\n", sbi->toc_size);
	p += scnprintf(p, cap - (p - buf), "entries %u\n", sbi->nr_files);
	p += scnprintf(p, cap - (p - buf), "keys %u\n", sbi->nr_keys);
	p += scnprintf(p, cap - (p - buf),
		       "# name offset stored unpacked flags kind key\n");

	for (i = 0; i < sbi->nr_files; i++) {
		const struct rpf9_file *f = &sbi->files[i];
		char name[17];

		rpf9_name(f, name);
		p += scnprintf(p, cap - (p - buf), "%s %llu %llu %llu 0x%x %s %s\n", name,
			       f->offset, f->stored, f->unpacked, f->flags,
			       f->resource ? "resource" : "file",
			       f->has_crypto ? "encrypted" : "plain");
	}

	sbi->manifest = buf;
	sbi->manifest_len = (size_t)(p - buf);
	return 0;
}

static void rpf9_free_info(struct rpf9_sb_info *sbi)
{
	if (!sbi)
		return;
	if (sbi->tfm)
		crypto_free_skcipher(sbi->tfm);
	rpf9_free_keys(sbi->keys);
	kvfree(sbi->files);
	kvfree(sbi->toc);
	kvfree(sbi->manifest);
	if (sbi->backing)
		fput(sbi->backing);
	kfree(sbi);
}

static void rpf9_put_super(struct super_block *sb)
{
	struct rpf9_sb_info *sbi = rpf9_sb(sb);

	if (!sbi)
		return;
	rpf9_free_info(sbi);
	sb->s_fs_info = NULL;
}

static const struct super_operations rpf9_super_operations = {
	.put_super = rpf9_put_super,
};

/* Reads `count` bytes from `file` at offset 0; false unless it got them all. */
static bool rpf9_read_head(struct file *file, void *buf, size_t count)
{
	loff_t pos = 0;

	return kernel_read(file, buf, count, &pos) == (ssize_t)count;
}

static int rpf9_fill_super(struct super_block *sb, struct fs_context *fc)
{
	struct rpf9_sb_info *sbi;
	struct inode *root;
	u8 hdr[RPF9_HEADER_SIZE];
	u32 toc_end;
	int ret;

	sbi = kzalloc(sizeof(*sbi), GFP_KERNEL);
	if (!sbi)
		return -ENOMEM;
	mutex_init(&sbi->lock);
	sb->s_fs_info = sbi;

	sb->s_flags |= SB_RDONLY | SB_NOATIME;
	sb->s_maxbytes = MAX_LFS_FILESIZE;
	sb->s_time_gran = 1;
	sb->s_op = &rpf9_super_operations;

	if (!fc->source) {
		ret = -EINVAL;
		goto err;
	}

	sbi->backing = filp_open(fc->source, O_RDONLY | O_LARGEFILE, 0);
	if (IS_ERR(sbi->backing)) {
		ret = PTR_ERR(sbi->backing);
		sbi->backing = NULL;
		goto err;
	}

	if (!rpf9_read_head(sbi->backing, hdr, sizeof(hdr))) {
		ret = -EIO;
		goto err;
	}
	if (rpf9_rd32(hdr) != RPF9_MAGIC) {
		pr_err("rpf9: %s is not an RPF9 archive\n", fc->source);
		ret = -EINVAL;
		goto err;
	}

	toc_end = rpf9_rd32(hdr + 0x04);
	if (toc_end < RPF9_HEADER_SIZE || toc_end > RPF9_MAX_TOC) {
		ret = -EINVAL;
		goto err;
	}

	if (toc_path[0]) {
		struct file *tf = filp_open(toc_path, O_RDONLY | O_LARGEFILE, 0);
		loff_t size;

		if (IS_ERR(tf)) {
			ret = PTR_ERR(tf);
			goto err;
		}
		size = i_size_read(file_inode(tf));
		if (size < RPF9_HEADER_SIZE || size > RPF9_MAX_TOC) {
			fput(tf);
			ret = -EINVAL;
			goto err;
		}
		sbi->toc = kvmalloc((size_t)size, GFP_KERNEL);
		if (!sbi->toc) {
			fput(tf);
			ret = -ENOMEM;
			goto err;
		}
		if (!rpf9_read_head(tf, sbi->toc, (size_t)size)) {
			fput(tf);
			ret = -EIO;
			goto err;
		}
		fput(tf);
		sbi->toc_size = (u64)size;
	} else {
		if (hdr[0x2E] != 0) {
			pr_err("rpf9: the table of contents is encrypted; pass toc_path=\n");
			ret = -EINVAL;
			goto err;
		}
		sbi->toc = kvmalloc(toc_end, GFP_KERNEL);
		if (!sbi->toc) {
			ret = -ENOMEM;
			goto err;
		}
		if (!rpf9_read_head(sbi->backing, sbi->toc, toc_end)) {
			ret = -EIO;
			goto err;
		}
		sbi->toc_size = toc_end;
	}

	ret = rpf9_toc_parse(sbi->toc, sbi->toc_size, &sbi->files, &sbi->nr_files);
	if (ret) {
		pr_err("rpf9: bad table of contents (%d)\n", ret);
		goto err;
	}

	if (key_path[0]) {
		ret = rpf9_load_keys(key_path, &sbi->keys, &sbi->nr_keys);
		if (ret) {
			pr_err("rpf9: cannot read key table %s (%d)\n", key_path, ret);
			goto err;
		}
	}

	if (sbi->nr_keys) {
		sbi->tfm = crypto_alloc_skcipher("cbc(aes)", 0, 0);
		if (IS_ERR(sbi->tfm)) {
			ret = PTR_ERR(sbi->tfm);
			sbi->tfm = NULL;
			goto err;
		}
	}

	ret = rpf9_build_manifest(sbi);
	if (ret)
		goto err;

	root = new_inode(sb);
	if (!root) {
		ret = -ENOMEM;
		goto err;
	}
	root->i_ino = RPF9_INO_ROOT;
	root->i_mode = S_IFDIR | 0555;
	set_nlink(root, 2);
	root->i_size = 0;
	root->i_op = &rpf9_dir_inode_operations;
	root->i_fop = &rpf9_dir_operations;
	sb->s_root = d_make_root(root);
	if (!sb->s_root) {
		ret = -ENOMEM;
		goto err;
	}

	pr_info("rpf9: %s: %u entries, %u keys%s\n", fc->source, sbi->nr_files, sbi->nr_keys,
		sbi->tfm ? "" : " (no key table; payloads are served as stored)");
	return 0;

err:
	rpf9_free_info(sbi);
	sb->s_fs_info = NULL;
	return ret;
}

static int rpf9_get_tree(struct fs_context *fc)
{
	return get_tree_nodev(fc, rpf9_fill_super);
}

static const struct fs_context_operations rpf9_context_ops = {
	.get_tree = rpf9_get_tree,
};

static int rpf9_init_fs_context(struct fs_context *fc)
{
	fc->ops = &rpf9_context_ops;
	return 0;
}

static struct file_system_type rpf9_fs_type = {
	.owner = THIS_MODULE,
	.name = "rpf9",
	.init_fs_context = rpf9_init_fs_context,
	.kill_sb = kill_anon_super,
};

static int __init rpf9_init(void)
{
	int ret = register_filesystem(&rpf9_fs_type);

	if (ret)
		pr_err("rpf9: register_filesystem failed (%d)\n", ret);
	else
		pr_info("rpf9: read-only RPF9 support loaded\n");
	return ret;
}

static void __exit rpf9_exit(void)
{
	unregister_filesystem(&rpf9_fs_type);
}

module_init(rpf9_init);
module_exit(rpf9_exit);

MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Read-only RPF9 archive mounts with automatic payload decryption");
MODULE_AUTHOR("gta6decomp");
