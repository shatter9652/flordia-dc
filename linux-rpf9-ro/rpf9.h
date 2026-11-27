/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * linux-rpf9-ro - mount an RPF9 archive read-only.
 *
 * RPF9 is the container Rockstar ships game data in. It is not a block-device
 * filesystem: the whole archive is one file, and its table of contents is a
 * small column store at the front. This module parses that column store the way
 * the game's own loader does, then serves the entries out of the backing file.
 *
 * Nothing here knows a key. Key material and an already-decrypted table of
 * contents are supplied by the caller as module parameters.
 */
#ifndef _RPF9_H
#define _RPF9_H

#include <linux/fs.h>
#include <linux/kernel.h>
#include <linux/mutex.h>
#include <linux/types.h>
#include <crypto/skcipher.h>

#define RPF9_MAGIC 0x52504639u /* '9FPR' little-endian */
#define RPF9_HEADER_SIZE 0x40
#define RPF9_MAX_TOC (64u * 1024u * 1024u)
#define RPF9_BLOCK 16

/* Column hashes: the little-endian u64 opening each 24-byte column record. */
#define RPF9_COL_FILE_ENTRY 0x33F70DFAF2C50989ull
#define RPF9_COL_RESOURCE_ENTRY 0xBA180AFB232D1B4Bull
#define RPF9_COL_CRYPTO 0x286030A358A789FBull
#define RPF9_COL_FILE_ID 0x73BCB72DCE74F11Full
/* Equality-searched 4-byte key: the archive's name hash. */
#define RPF9_COL_LOOKUP_KEY 0xB7076B6245D35FB5ull
/* The single direct column, one u64 per row, addressed by row. */
#define RPF9_COL_DIRECT64 0xB6F5BDB2C66DA2E9ull

/* File-entry flag: the payload is raw deflate. */
#define RPF9_FLAG_DEFLATE 0x100u

struct rpf9_crypto {
	u32 key_id;
	u16 kind;
	u8 iv[RPF9_BLOCK];
	/* first, on, off, tail, unused */
	u64 pattern[5];
};

struct rpf9_key {
	u32 id;
	u8 bytes[32];
};

struct rpf9_file {
	u32 row;
	u64 offset;	/* absolute, from the start of the archive */
	u32 flags;
	u64 stored;	/* bytes on disk */
	u64 unpacked;	/* bytes after decompression */

	bool resource;
	u32 resource_type;

	bool has_crypto;
	struct rpf9_crypto crypto;

	bool has_file_id;
	u64 file_id;

	bool has_lookup_key;
	u32 lookup_key;

	bool has_direct64;
	u64 direct64;
};

struct rpf9_sb_info {
	struct file *backing;
	u8 *toc;
	u64 toc_size;
	struct rpf9_file *files;
	u32 nr_files;
	struct rpf9_key *keys;
	u32 nr_keys;
	struct crypto_skcipher *tfm;
	char *manifest;
	size_t manifest_len;
	struct mutex lock;
};

static inline struct rpf9_sb_info *rpf9_sb(struct super_block *sb)
{
	return sb->s_fs_info;
}

/* A resource is prefixed with 16 zero bytes; its payload starts after them. */
static inline u32 rpf9_data_start(const struct rpf9_file *f)
{
	return f->resource ? RPF9_BLOCK : 0;
}

/* Parses a plaintext table of contents into a file array. */
int rpf9_toc_parse(const u8 *toc, u64 size, struct rpf9_file **out, u32 *nr_out);

/* Reads a decoded key table: records of { u32 id; u8 key[32]; }. */
int rpf9_load_keys(const char *path, struct rpf9_key **out, u32 *nr_out);
void rpf9_free_keys(struct rpf9_key *keys);
const struct rpf9_key *rpf9_key_lookup(const struct rpf9_sb_info *sbi, u32 id);

/*
 * Decrypts `len` bytes of `buf` in place. `start_block` is the block index of
 * buf[0] within the file, and `total_blocks` its whole block count; both feed
 * the pattern. `buf` must hold the ciphertext of the block before start_block
 * when start_block is non-zero, because that block is the CBC IV.
 */
int rpf9_decrypt_range(struct rpf9_sb_info *sbi, const struct rpf9_file *f, u8 *buf,
		       u64 len, u64 start_block, u64 total_blocks);

/* True when block `block` of `total` is encrypted under this record. */
bool rpf9_block_encrypted(const struct rpf9_crypto *c, u64 block, u64 total);

/* Inode numbers: root and the generated manifest are reserved, entries follow. */
#define RPF9_INO_ROOT 1
#define RPF9_INO_MANIFEST 3
#define RPF9_INO_FIRST 4

static inline u32 rpf9_rd32(const u8 *p)
{
	return (u32)p[0] | ((u32)p[1] << 8) | ((u32)p[2] << 16) | ((u32)p[3] << 24);
}

static inline u64 rpf9_rd64(const u8 *p)
{
	return (u64)rpf9_rd32(p) | ((u64)rpf9_rd32(p + 4) << 32);
}

/*
 * An entry's name. The archive indexes on the 64-bit file id, so that is what a
 * row is called; when a row has no file id the 32-bit lookup key and the row
 * number stand in, which is still unique within an archive.
 */
static inline void rpf9_name(const struct rpf9_file *f, char out[17])
{
	u64 v = f->has_file_id ? f->file_id : (((u64)f->lookup_key << 32) | f->row);

	snprintf(out, 17, "%016llx", v);
}

struct inode *rpf9_iget(struct super_block *sb, u64 ino);

extern const struct file_operations rpf9_file_operations;
extern const struct file_operations rpf9_manifest_operations;
extern const struct file_operations rpf9_dir_operations;
extern const struct inode_operations rpf9_dir_inode_operations;

#endif /* _RPF9_H */
