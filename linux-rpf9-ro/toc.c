// SPDX-License-Identifier: GPL-2.0-only
/*
 * The RPF9 column store.
 *
 * The table of contents is not an array of entries. Behind the 0x40-byte
 * header sit a section table, a block of section payloads, a column table, a
 * row index and the column data. Rows are files; a column is one attribute of
 * every file, reached through the row index unless the column is direct.
 *
 *   A = 0x40           nsec x { u16 id, u16, u32 offset from B }
 *   B = A + r16(nsec*8)   bsz bytes of section payload
 *   C = r16(B + bsz)      ncol x 24-byte column records
 *   D = C + ncol*24       rows x indexed x w bytes of row index
 *   T = align8(D + ..)    column data; flag-0 elements at T + offset,
 *                         flag-1 elements at idx_end, one per row
 */

#include <linux/kernel.h>
#include <linux/slab.h>
#include <linux/string.h>

#include "rpf9.h"

struct rpf9_col {
	u64 hash;
	u32 count;
	u32 offset;
	u16 elem_size;
	u16 flags;
};

struct rpf9_toc {
	const u8 *raw;
	u64 size;
	u64 idx_end;
	u64 d;
	u64 t;
	u64 rows;
	u32 w;
	struct rpf9_col *cols;
	u32 ncol;
	u32 *indexed;
	u32 nidx;
};

static inline u16 rd16(const u8 *p)
{
	return (u16)(p[0] | (p[1] << 8));
}

static inline u32 rd32(const u8 *p)
{
	return (u32)p[0] | ((u32)p[1] << 8) | ((u32)p[2] << 16) | ((u32)p[3] << 24);
}

static inline u64 rd64(const u8 *p)
{
	return (u64)rd32(p) | ((u64)rd32(p + 4) << 32);
}

static inline u64 align_up(u64 v, u64 a)
{
	return a < 2 ? v : (v + a - 1) & ~(a - 1);
}

static int rpf9_col_index(const struct rpf9_toc *toc, u64 hash)
{
	u32 i;

	for (i = 0; i < toc->ncol; i++)
		if (toc->cols[i].hash == hash)
			return (int)i;
	return -1;
}

/* Element of `row` in column `col`; false when the row has no value. */
static bool rpf9_index(const struct rpf9_toc *toc, u32 col, u64 row, u32 *element)
{
	const struct rpf9_col *c = &toc->cols[col];
	u64 at;
	u32 value = 0, none, k;
	int pos = -1;

	if (c->flags) {
		*element = (u32)row;
		return true;
	}
	for (k = 0; k < toc->nidx; k++) {
		if (toc->indexed[k] == col) {
			pos = (int)k;
			break;
		}
	}
	if (pos < 0)
		return false;

	at = toc->d + (row * toc->nidx + (u64)pos) * toc->w;
	if (at + toc->w > toc->size)
		return false;
	for (k = 0; k < toc->w; k++)
		value |= (u32)toc->raw[at + k] << (8 * k);

	none = (toc->w >= 4) ? 0xFFFFFFFFu : ((1u << (8 * toc->w)) - 1u);
	if (value == none)
		return false;
	*element = value;
	return true;
}

static const u8 *rpf9_cell(const struct rpf9_toc *toc, u32 col, u32 element)
{
	const struct rpf9_col *c = &toc->cols[col];
	u64 base, at;

	if (c->elem_size == 0)
		return NULL;
	base = c->flags ? toc->idx_end : toc->t + c->offset;
	at = base + (u64)element * c->elem_size;
	if (at + c->elem_size > toc->size)
		return NULL;
	return toc->raw + at;
}

/* Optional companion column: ignore it when its element size disagrees. */
static int rpf9_optional(const struct rpf9_toc *toc, u64 hash, u16 elem_size)
{
	int i = rpf9_col_index(toc, hash);

	if (i < 0 || toc->cols[i].elem_size != elem_size)
		return -1;
	return i;
}

int rpf9_toc_parse(const u8 *toc_buf, u64 size, struct rpf9_file **out, u32 *nr_out)
{
	struct rpf9_toc toc = {};
	struct rpf9_file *files = NULL;
	u64 toc_end, a, b, c, d, t;
	u32 bsz, tail, row, n = 0;
	u16 nsec, ncol, n22;
	int entry_col, res_col, crypto_col, fid_col, key_col, dir_col;
	int ret = -EINVAL;

	if (!toc_buf || size < RPF9_HEADER_SIZE)
		return -EINVAL;
	if (rd32(toc_buf) != RPF9_MAGIC)
		return -EINVAL;

	toc_end = rd32(toc_buf + 0x04);
	toc.idx_end = rd32(toc_buf + 0x08);
	nsec = rd16(toc_buf + 0x1A);
	bsz = rd32(toc_buf + 0x1C);
	ncol = rd16(toc_buf + 0x20);
	n22 = rd16(toc_buf + 0x22);
	toc.rows = rd32(toc_buf + 0x24);
	toc.w = toc_buf[0x2C];
	tail = rd32(toc_buf + 0x30);

	if (toc_end > size || toc.idx_end > toc_end || ncol == 0)
		return -EINVAL;

	a = RPF9_HEADER_SIZE;
	b = a + align_up((u64)nsec * 8, 16);
	c = align_up(b + bsz, 16);
	d = c + (u64)ncol * 24;
	if (d > size)
		return -EINVAL;

	toc.raw = toc_buf;
	toc.size = size;
	toc.d = d;
	toc.ncol = ncol;

	toc.cols = kcalloc(ncol, sizeof(*toc.cols), GFP_KERNEL);
	toc.indexed = kcalloc(ncol, sizeof(*toc.indexed), GFP_KERNEL);
	if (!toc.cols || !toc.indexed) {
		ret = -ENOMEM;
		goto free_toc;
	}

	for (u32 i = 0; i < ncol; i++) {
		const u8 *p = toc_buf + c + (u64)i * 24;

		toc.cols[i].hash = rd64(p);
		toc.cols[i].count = rd32(p + 8);
		toc.cols[i].offset = rd32(p + 12);
		toc.cols[i].elem_size = rd16(p + 16);
		toc.cols[i].flags = rd16(p + 18);
		if (toc.cols[i].flags == 0)
			toc.indexed[toc.nidx++] = i;
	}

	/* Every column is either indexed or one of the n22 direct columns. */
	if ((u64)toc.nidx + n22 != ncol) {
		ret = -EINVAL;
		goto free_toc;
	}
	if (toc.nidx && (toc.w < 1 || toc.w > 4)) {
		ret = -EINVAL;
		goto free_toc;
	}

	t = align_up(d + (u64)toc.nidx * toc.rows * toc.w, 8);
	if (t > size) {
		ret = -EINVAL;
		goto free_toc;
	}
	toc.t = t;

	entry_col = rpf9_col_index(&toc, RPF9_COL_FILE_ENTRY);
	res_col = rpf9_col_index(&toc, RPF9_COL_RESOURCE_ENTRY);
	if (entry_col < 0 && res_col < 0) {
		ret = -EINVAL;
		goto free_toc;
	}
	if (entry_col >= 0 && toc.cols[entry_col].elem_size != 24) {
		ret = -EINVAL;
		goto free_toc;
	}
	if (res_col >= 0 && toc.cols[res_col].elem_size != 20) {
		ret = -EINVAL;
		goto free_toc;
	}

	crypto_col = rpf9_optional(&toc, RPF9_COL_CRYPTO, 64);
	fid_col = rpf9_optional(&toc, RPF9_COL_FILE_ID, 8);
	key_col = rpf9_optional(&toc, RPF9_COL_LOOKUP_KEY, 4);
	dir_col = rpf9_optional(&toc, RPF9_COL_DIRECT64, 8);

	if (toc.rows > (u64)U32_MAX) {
		ret = -EINVAL;
		goto free_toc;
	}
	files = kvcalloc((size_t)toc.rows, sizeof(*files), GFP_KERNEL);
	if (!files) {
		ret = -ENOMEM;
		goto free_toc;
	}

	for (row = 0; row < (u32)toc.rows; row++) {
		struct rpf9_file f = {};
		u32 element = 0, res_element = 0, i;
		const u8 *e;

		if (!(entry_col >= 0 && rpf9_index(&toc, entry_col, row, &element)) &&
		    !(res_col >= 0 && rpf9_index(&toc, res_col, row, &res_element)))
			continue;

		f.row = row;
		if (entry_col >= 0 && rpf9_index(&toc, entry_col, row, &element)) {
			u64 q;

			e = rpf9_cell(&toc, entry_col, element);
			if (!e) {
				ret = -EINVAL;
				goto free_files;
			}
			q = rd64(e);
			f.offset = (q & 0xFFFFFFFFFFull) << 4;
			f.flags = (u32)(q >> 40);
			f.stored = rd64(e + 8) << 4;
			f.unpacked = rd64(e + 16);
		} else {
			u64 q;

			e = rpf9_cell(&toc, res_col, res_element);
			if (!e) {
				ret = -EINVAL;
				goto free_files;
			}
			q = rd64(e);
			f.resource = true;
			f.stored = (u64)rd32(e + 8) << 4;
			f.offset = (u64)rd32(e + 12) << 4;
			f.unpacked = q & 0xFFFFFFF0ull;
			f.resource_type = rd32(e + 16);
		}

		if (crypto_col >= 0 && rpf9_index(&toc, crypto_col, row, &i)) {
			const u8 *p = rpf9_cell(&toc, crypto_col, i);

			if (p) {
				f.has_crypto = true;
				f.crypto.key_id = rd32(p);
				f.crypto.kind = rd16(p + 4);
				memcpy(f.crypto.iv, p + 6, RPF9_BLOCK);
				for (int k = 0; k < 5; k++)
					f.crypto.pattern[k] = rd64(p + 0x18 + k * 8);
			}
		}
		if (fid_col >= 0 && rpf9_index(&toc, fid_col, row, &i)) {
			const u8 *p = rpf9_cell(&toc, fid_col, i);

			if (p) {
				f.has_file_id = true;
				f.file_id = rd64(p);
			}
		}
		if (key_col >= 0 && rpf9_index(&toc, key_col, row, &i)) {
			const u8 *p = rpf9_cell(&toc, key_col, i);

			if (p) {
				f.has_lookup_key = true;
				f.lookup_key = rd32(p);
			}
		}
		if (dir_col >= 0) {
			const u8 *p = rpf9_cell(&toc, dir_col, row);

			if (p) {
				f.has_direct64 = true;
				f.direct64 = rd64(p);
			}
		}

		files[n++] = f;
	}

	*out = files;
	*nr_out = n;
	kfree(toc.cols);
	kfree(toc.indexed);
	return 0;

free_files:
	kvfree(files);
free_toc:
	kfree(toc.cols);
	kfree(toc.indexed);
	return ret;
}
