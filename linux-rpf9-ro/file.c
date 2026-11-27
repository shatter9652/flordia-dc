// SPDX-License-Identifier: GPL-2.0-only
/*
 * Reading a payload.
 *
 * An entry is served straight out of the backing file. When the entry carries a
 * crypto record the bytes are decrypted on the way out; when it is flagged as
 * deflate the read is refused, because decompressing needs the whole stream and
 * this module does not buffer entries.
 */

#include <linux/kernel.h>
#include <linux/fs.h>
#include <linux/slab.h>
#include <linux/uaccess.h>

#include "rpf9.h"

static ssize_t rpf9_read(struct file *file, char __user *ubuf, size_t count, loff_t *ppos)
{
	struct inode *inode = file_inode(file);
	struct rpf9_file *f = inode->i_private;
	struct rpf9_sb_info *sbi = rpf9_sb(inode->i_sb);
	loff_t pos = *ppos;
	size_t done = 0;
	u64 total_blocks;

	if (pos < 0)
		return -EINVAL;
	if (pos >= inode->i_size)
		return 0;
	if (count > (size_t)(inode->i_size - pos))
		count = (size_t)(inode->i_size - pos);
	if (!count)
		return 0;
	if (f->flags & RPF9_FLAG_DEFLATE)
		return -EOPNOTSUPP;

	total_blocks = f->stored > rpf9_data_start(f)
			       ? DIV_ROUND_UP_ULL(f->stored - rpf9_data_start(f), RPF9_BLOCK)
			       : 0;

	while (done < count) {
		size_t chunk = min_t(size_t, count - done, PAGE_SIZE);
		u64 start = (u64)pos + done;
		u64 want = start & ~(u64)(RPF9_BLOCK - 1);
		u64 origin = want, nbytes;
		loff_t rpos;
		u8 *tmp;
		ssize_t got;
		int ret;

		/*
		 * CBC needs the ciphertext block before the one we want, so start
		 * one block early and leave it out of the decryption.
		 */
		if (f->has_crypto && origin >= RPF9_BLOCK)
			origin -= RPF9_BLOCK;
		nbytes = ALIGN(start + chunk, RPF9_BLOCK) - origin;

		tmp = kmalloc((size_t)nbytes, GFP_KERNEL);
		if (!tmp)
			return done ? done : -ENOMEM;

		rpos = f->offset + rpf9_data_start(f) + origin;
		got = kernel_read(sbi->backing, tmp, (size_t)nbytes, &rpos);
		if (got < 0) {
			kfree(tmp);
			return done ? done : got;
		}
		if ((u64)got < nbytes) {
			kfree(tmp);
			return done ? done : -EIO;
		}

		if (f->has_crypto) {
			u8 *dbuf = tmp;
			u64 dlen = nbytes, dblk = origin / RPF9_BLOCK;

			if (origin != want) {
				dbuf += RPF9_BLOCK;
				dlen -= RPF9_BLOCK;
				dblk++;
			}
			ret = rpf9_decrypt_range(sbi, f, dbuf, dlen, dblk, total_blocks);
			if (ret) {
				kfree(tmp);
				return done ? done : ret;
			}
		}

		if (copy_to_user(ubuf + done, tmp + (start - origin), chunk)) {
			kfree(tmp);
			return done ? done : -EFAULT;
		}
		kfree(tmp);
		done += chunk;
	}

	*ppos = pos + done;
	return done;
}

static ssize_t rpf9_manifest_read(struct file *file, char __user *ubuf, size_t count,
				  loff_t *ppos)
{
	struct rpf9_sb_info *sbi = rpf9_sb(file_inode(file)->i_sb);

	return simple_read_from_buffer(ubuf, count, ppos, sbi->manifest, sbi->manifest_len);
}

const struct file_operations rpf9_file_operations = {
	.owner = THIS_MODULE,
	.read = rpf9_read,
	.llseek = generic_file_llseek,
};

const struct file_operations rpf9_manifest_operations = {
	.owner = THIS_MODULE,
	.read = rpf9_manifest_read,
	.llseek = generic_file_llseek,
};
