// SPDX-License-Identifier: GPL-2.0-only
/*
 * The single directory an RPF9 archive presents.
 *
 * RPF9 has no hierarchy: the column store is a flat row list. Entries are
 * therefore named by their 64-bit file id, which is what the archive itself
 * indexes on. Names are not recovered here -- the archive's name heap is
 * encrypted with a key the image does not expose to this module.
 *
 * Lookup scans the row list. That is linear, but it keeps no second index and
 * an archive's row count is small next to its payload.
 */

#include <linux/kernel.h>
#include <linux/fs.h>
#include <linux/dcache.h>
#include <linux/string.h>

#include "rpf9.h"

#define RPF9_MANIFEST_NAME "manifest.txt"
#define RPF9_MANIFEST_LEN 12

static int rpf9_iterate_shared(struct file *file, struct dir_context *ctx)
{
	struct inode *inode = file_inode(file);
	struct rpf9_sb_info *sbi = rpf9_sb(inode->i_sb);
	u32 i;

	if (ctx->pos < 2) {
		if (!dir_emit_dots(file, ctx))
			return 0;
	}

	if (ctx->pos == 2) {
		if (!dir_emit(ctx, RPF9_MANIFEST_NAME, RPF9_MANIFEST_LEN, RPF9_INO_MANIFEST,
			      DT_REG))
			return 0;
		ctx->pos = 3;
	}

	for (i = (u32)(ctx->pos - 3); i < sbi->nr_files; i++) {
		char name[17];

		rpf9_name(&sbi->files[i], name);
		if (!dir_emit(ctx, name, 16, (u64)i + RPF9_INO_FIRST, DT_REG))
			return 0;
		ctx->pos = (loff_t)i + 4;
	}
	return 0;
}

static struct dentry *rpf9_lookup(struct inode *dir, struct dentry *dentry,
				  unsigned int flags)
{
	struct rpf9_sb_info *sbi = rpf9_sb(dir->i_sb);
	const char *name = dentry->d_name.name;
	unsigned int len = dentry->d_name.len;
	struct inode *inode = NULL;
	u32 i;

	if (len == RPF9_MANIFEST_LEN && !memcmp(name, RPF9_MANIFEST_NAME, RPF9_MANIFEST_LEN))
		return d_splice_alias(rpf9_iget(dir->i_sb, RPF9_INO_MANIFEST), dentry);

	if (len == 16) {
		for (i = 0; i < sbi->nr_files; i++) {
			char want[17];

			rpf9_name(&sbi->files[i], want);
			if (!memcmp(name, want, 16)) {
				inode = rpf9_iget(dir->i_sb, (u64)i + RPF9_INO_FIRST);
				break;
			}
		}
	}

	return d_splice_alias(inode, dentry);
}

const struct inode_operations rpf9_dir_inode_operations = {
	.lookup = rpf9_lookup,
};

const struct file_operations rpf9_dir_operations = {
	.owner = THIS_MODULE,
	.iterate_shared = rpf9_iterate_shared,
	.llseek = generic_file_llseek,
};
