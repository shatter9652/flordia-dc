// SPDX-License-Identifier: GPL-2.0-only
/*
 * Payload decryption.
 *
 * A file's crypto record names a key, an IV and a pattern. Not every block is
 * encrypted: `first` blocks at the front are, then a run of `on` encrypted
 * blocks every `on + off`, and `tail` blocks at the end. The rest is stored in
 * the clear. Each encrypted block is AES-256-CBC with the previous ciphertext
 * block as its IV, so a block can be decrypted on its own as long as its
 * predecessor is in hand.
 *
 * The key table is decoded elsewhere (the archive's keys are stored white-box
 * encoded in the game image, which this module deliberately does not carry).
 * It is read here as a flat array of records: { u32 id; u8 key[32]; }.
 */

#include <linux/kernel.h>
#include <linux/slab.h>
#include <linux/fs.h>
#include <linux/file.h>
#include <linux/namei.h>
#include <linux/scatterlist.h>
#include <crypto/skcipher.h>

#include "rpf9.h"

#define RPF9_KEY_RECORD 36
#define RPF9_MAX_KEYS 4096

bool rpf9_block_encrypted(const struct rpf9_crypto *c, u64 block, u64 total)
{
	u64 first = c->pattern[0];
	u64 on = c->pattern[1];
	u64 off = c->pattern[2];
	u64 tail = c->pattern[3];
	u64 span, rel;

	if (block < first)
		return true;
	if (tail && block + tail >= total)
		return true;
	if (!on)
		return false;
	span = on + off;
	if (!span)
		return true;
	rel = block - first;
	return (rel % span) < on;
}

const struct rpf9_key *rpf9_key_lookup(const struct rpf9_sb_info *sbi, u32 id)
{
	u32 i;

	for (i = 0; i < sbi->nr_keys; i++)
		if (sbi->keys[i].id == id)
			return &sbi->keys[i];
	return NULL;
}

void rpf9_free_keys(struct rpf9_key *keys)
{
	kfree(keys);
}

int rpf9_load_keys(const char *path, struct rpf9_key **out, u32 *nr_out)
{
	struct file *f;
	loff_t pos = 0, size;
	struct rpf9_key *keys;
	u8 *buf;
	ssize_t got;
	u32 n, i;
	int ret = 0;

	if (!path || !*path)
		return -EINVAL;

	f = filp_open(path, O_RDONLY | O_LARGEFILE, 0);
	if (IS_ERR(f))
		return PTR_ERR(f);

	size = i_size_read(file_inode(f));
	if (size <= 0 || size % RPF9_KEY_RECORD ||
	    size / RPF9_KEY_RECORD > RPF9_MAX_KEYS) {
		ret = -EINVAL;
		goto out_close;
	}

	buf = kvmalloc((size_t)size, GFP_KERNEL);
	if (!buf) {
		ret = -ENOMEM;
		goto out_close;
	}
	got = kernel_read(f, buf, (size_t)size, &pos);
	if (got != size) {
		ret = -EIO;
		goto out_free;
	}

	n = (u32)(size / RPF9_KEY_RECORD);
	keys = kcalloc(n, sizeof(*keys), GFP_KERNEL);
	if (!keys) {
		ret = -ENOMEM;
		goto out_free;
	}
	for (i = 0; i < n; i++) {
		const u8 *p = buf + (u64)i * RPF9_KEY_RECORD;

		keys[i].id = rpf9_rd32(p);
		memcpy(keys[i].bytes, p + 4, sizeof(keys[i].bytes));
	}
	*out = keys;
	*nr_out = n;

out_free:
	kvfree(buf);
out_close:
	fput(f);
	return ret;
}

int rpf9_decrypt_range(struct rpf9_sb_info *sbi, const struct rpf9_file *f, u8 *buf,
		       u64 len, u64 start_block, u64 total_blocks)
{
	const struct rpf9_key *key;
	struct skcipher_request *req;
	struct scatterlist sg;
	u8 iv[RPF9_BLOCK];
	u64 i;
	int ret = 0;

	if (!f->has_crypto || !len)
		return 0;
	if (!sbi->tfm)
		return -EOPNOTSUPP;

	key = rpf9_key_lookup(sbi, f->crypto.key_id);
	if (!key)
		return -ENOKEY;

	req = skcipher_request_alloc(sbi->tfm, GFP_KERNEL);
	if (!req)
		return -ENOMEM;

	mutex_lock(&sbi->lock);
	ret = crypto_skcipher_setkey(sbi->tfm, key->bytes, sizeof(key->bytes));
	if (ret)
		goto out;

	for (i = 0; i < len / RPF9_BLOCK; i++) {
		const u64 block = start_block + i;

		if (!rpf9_block_encrypted(&f->crypto, block, total_blocks))
			continue;

		if (block == 0) {
			memcpy(iv, f->crypto.iv, RPF9_BLOCK);
		} else if (i > 0) {
			memcpy(iv, buf + i * RPF9_BLOCK - RPF9_BLOCK, RPF9_BLOCK);
		} else {
			/* The caller has to hand us the predecessor block. */
			ret = -EINVAL;
			goto out;
		}

		sg_init_one(&sg, buf + i * RPF9_BLOCK, RPF9_BLOCK);
		skcipher_request_set_crypt(req, &sg, &sg, RPF9_BLOCK, iv);
		ret = crypto_skcipher_decrypt(req);
		if (ret)
			goto out;
	}

out:
	mutex_unlock(&sbi->lock);
	skcipher_request_free(req);
	return ret;
}
