// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140147a20  size: 2235 bytes
// Name:    FUN_140147a20
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401482e0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140147a20(longlong param_1,longlong *param_2)

{
  ulonglong *puVar1;
  uint *puVar2;
  short sVar3;
  short sVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  byte bVar14;
  byte bVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  uint *puVar18;
  longlong lVar19;
  longlong lVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  longlong lVar23;
  ulonglong uVar24;
  
  sVar3 = *(short *)(*(longlong *)
                      (*(longlong *)(param_1 + 0x40) + (ulonglong)*(uint *)(param_1 + 0x5e4) * 8) +
                    0xce);
  sVar4 = *(short *)(*(longlong *)
                      (*(longlong *)(_DAT_149265398 + 0x40) +
                      (ulonglong)*(uint *)(_DAT_149265398 + 0x484) * 8) + 0xce);
  lVar7 = *(longlong *)(*param_2 + 0x1aa0);
  bVar14 = ~(byte)sVar4 & 0x3f;
  puVar1 = (ulonglong *)
           ((ulonglong)(uint)(int)sVar3 * 0x220 + lVar7 + (ulonglong)((uint)(int)sVar4 >> 6) * 8);
  *puVar1 = *puVar1 & (-2L << bVar14 | 0xfffffffffffffffeU >> 0x40 - bVar14);
  bVar14 = ~(byte)sVar3 & 0x3f;
  puVar1 = (ulonglong *)
           ((ulonglong)(uint)(int)sVar4 * 0x220 + lVar7 + (ulonglong)((uint)(int)sVar3 >> 6) * 8);
  *puVar1 = *puVar1 & (-2L << bVar14 | 0xfffffffffffffffeU >> 0x40 - bVar14);
  FUN_1401482e0(lVar7);
  lVar7 = *(longlong *)(param_1 + 0x40);
  sVar3 = *(short *)(*(longlong *)(lVar7 + (ulonglong)*(uint *)(param_1 + 0x5f8) * 8) + 0xce);
  sVar4 = *(short *)(*(longlong *)(lVar7 + (ulonglong)*(uint *)(param_1 + 0x69c) * 8) + 0xce);
  lVar8 = *(longlong *)(*param_2 + 0x1aa0);
  puVar1 = (ulonglong *)
           ((ulonglong)(uint)(int)sVar3 * 0x220 + lVar8 + (ulonglong)((uint)(int)sVar4 >> 6) * 8);
  *puVar1 = *puVar1 | 1L << ((ulonglong)(byte)~(byte)sVar4 & 0x3f);
  puVar1 = (ulonglong *)
           ((ulonglong)(uint)(int)sVar4 * 0x220 + lVar8 + (ulonglong)((uint)(int)sVar3 >> 6) * 8);
  *puVar1 = *puVar1 | 1L << ((ulonglong)(byte)~(byte)sVar3 & 0x3f);
  sVar3 = *(short *)(*(longlong *)(lVar7 + (ulonglong)*(uint *)(param_1 + 0x688) * 8) + 0xce);
  sVar4 = *(short *)(*(longlong *)(lVar7 + (ulonglong)_DAT_146c0a248 * 8) + 0xce);
  puVar1 = (ulonglong *)
           ((ulonglong)(uint)(int)sVar3 * 0x220 + lVar8 + (ulonglong)((uint)(int)sVar4 >> 6) * 8);
  *puVar1 = *puVar1 | 1L << ((ulonglong)(byte)~(byte)sVar4 & 0x3f);
  puVar1 = (ulonglong *)
           ((ulonglong)(uint)(int)sVar4 * 0x220 + lVar8 + (ulonglong)((uint)(int)sVar3 >> 6) * 8);
  *puVar1 = *puVar1 | 1L << ((ulonglong)(byte)~(byte)sVar3 & 0x3f);
  sVar3 = *(short *)(*(longlong *)(lVar7 + (ulonglong)*(uint *)(param_1 + 0x68c) * 8) + 0xce);
  sVar4 = *(short *)(*(longlong *)(lVar7 + (ulonglong)_DAT_146c133e4 * 8) + 0xce);
  puVar1 = (ulonglong *)
           ((ulonglong)(uint)(int)sVar3 * 0x220 + lVar8 + (ulonglong)((uint)(int)sVar4 >> 6) * 8);
  *puVar1 = *puVar1 | 1L << ((ulonglong)(byte)~(byte)sVar4 & 0x3f);
  puVar1 = (ulonglong *)
           ((ulonglong)(uint)(int)sVar4 * 0x220 + lVar8 + (ulonglong)((uint)(int)sVar3 >> 6) * 8);
  *puVar1 = *puVar1 | 1L << ((ulonglong)(byte)~(byte)sVar3 & 0x3f);
  sVar3 = *(short *)(*(longlong *)(lVar7 + (ulonglong)*(uint *)(param_1 + 0x6ac) * 8) + 0xce);
  sVar4 = *(short *)(*(longlong *)(lVar7 + (ulonglong)*(uint *)(param_1 + 0x6a8) * 8) + 0xce);
  bVar14 = ~(byte)sVar3 & 0x3f;
  bVar15 = ~(byte)sVar4 & 0x3f;
  puVar1 = (ulonglong *)
           ((ulonglong)(uint)(int)sVar4 * 0x220 + lVar8 + (ulonglong)((uint)(int)sVar3 >> 6) * 8);
  *puVar1 = *puVar1 & (-2L << bVar14 | 0xfffffffffffffffeU >> 0x40 - bVar14);
  puVar1 = (ulonglong *)
           ((ulonglong)(uint)(int)sVar3 * 0x220 + lVar8 + (ulonglong)((uint)(int)sVar4 >> 6) * 8);
  *puVar1 = *puVar1 & (-2L << bVar15 | 0xfffffffffffffffeU >> 0x40 - bVar15);
  uVar5 = *(uint *)(param_1 + 0x63c);
  if (((ulonglong)uVar5 != 0) && (uVar6 = *(uint *)(param_1 + 0x650), (ulonglong)uVar6 != 0)) {
    puVar18 = (uint *)(param_1 + 0x640);
    do {
      lVar23 = 0;
      sVar3 = *(short *)(*(longlong *)(lVar7 + (ulonglong)*puVar18 * 8) + 0xce);
      do {
        puVar2 = (uint *)(param_1 + 0x654 + lVar23);
        lVar23 = lVar23 + 4;
        sVar4 = *(short *)(*(longlong *)(lVar7 + (ulonglong)*puVar2 * 8) + 0xce);
        puVar1 = (ulonglong *)
                 ((ulonglong)(uint)(int)sVar3 * 0x220 + lVar8 +
                 (ulonglong)((uint)(int)sVar4 >> 6) * 8);
        *puVar1 = *puVar1 | 1L << ((ulonglong)(byte)~(byte)sVar4 & 0x3f);
        puVar1 = (ulonglong *)
                 (lVar8 + (ulonglong)((uint)(int)sVar3 >> 6) * 8 +
                 (ulonglong)(uint)(int)sVar4 * 0x220);
        *puVar1 = *puVar1 | 1L << ((ulonglong)(byte)~(byte)sVar3 & 0x3f);
      } while ((ulonglong)uVar6 << 2 != lVar23);
      puVar18 = puVar18 + 1;
    } while (puVar18 != (uint *)(param_1 + 0x640 + (ulonglong)uVar5 * 4));
  }
  uVar16 = (ulonglong)*(uint *)(param_1 + 0x610);
  if (uVar16 != 0) {
    lVar23 = param_1 + 0x618;
    uVar21 = 0;
    uVar17 = uVar16;
    do {
      uVar17 = uVar17 - 1;
      uVar22 = uVar21 + 1;
      if (uVar22 < uVar16) {
        uVar24 = 0;
        sVar3 = *(short *)(*(longlong *)
                            (lVar7 + (ulonglong)*(uint *)(param_1 + 0x614 + uVar21 * 4) * 8) + 0xce)
        ;
        do {
          lVar20 = uVar24 * 4;
          uVar24 = uVar24 + 1;
          sVar4 = *(short *)(*(longlong *)(lVar7 + (ulonglong)*(uint *)(lVar23 + lVar20) * 8) + 0xce
                            );
          puVar1 = (ulonglong *)
                   ((ulonglong)(uint)(int)sVar3 * 0x220 + lVar8 +
                   (ulonglong)((uint)(int)sVar4 >> 6) * 8);
          *puVar1 = *puVar1 | 1L << ((ulonglong)(byte)~(byte)sVar4 & 0x3f);
          puVar1 = (ulonglong *)
                   (lVar8 + (ulonglong)((uint)(int)sVar3 >> 6) * 8 +
                   (ulonglong)(uint)(int)sVar4 * 0x220);
          *puVar1 = *puVar1 | 1L << ((ulonglong)(byte)~(byte)sVar3 & 0x3f);
        } while (uVar17 != uVar24);
      }
      lVar23 = lVar23 + 4;
      uVar21 = uVar22;
    } while (uVar22 != uVar16);
  }
  uVar16 = (ulonglong)*(uint *)(param_1 + 0x624);
  if (uVar16 != 0) {
    puVar18 = (uint *)(param_1 + 0x628);
    do {
      lVar23 = 0;
      sVar3 = *(short *)(*(longlong *)(lVar7 + (ulonglong)*puVar18 * 8) + 0xce);
      bVar14 = ~(byte)sVar3 & 0x3f;
      do {
        puVar2 = (uint *)(param_1 + 0x628 + lVar23);
        lVar23 = lVar23 + 4;
        sVar4 = *(short *)(*(longlong *)(lVar7 + (ulonglong)*puVar2 * 8) + 0xce);
        bVar15 = ~(byte)sVar4 & 0x3f;
        puVar1 = (ulonglong *)
                 ((ulonglong)(uint)(int)sVar3 * 0x220 + lVar8 +
                 (ulonglong)((uint)(int)sVar4 >> 6) * 8);
        *puVar1 = *puVar1 & (-2L << bVar15 | 0xfffffffffffffffeU >> 0x40 - bVar15);
        puVar1 = (ulonglong *)
                 (lVar8 + (ulonglong)((uint)(int)sVar3 >> 6) * 8 +
                 (ulonglong)(uint)(int)sVar4 * 0x220);
        *puVar1 = *puVar1 & (-2L << bVar14 | 0xfffffffffffffffeU >> 0x40 - bVar14);
      } while (uVar16 << 2 != lVar23);
      puVar18 = puVar18 + 1;
    } while (puVar18 != (uint *)(param_1 + 0x628 + uVar16 * 4));
  }
  uVar5 = *(uint *)(param_1 + 0x6b4);
  if ((ulonglong)uVar5 != 0) {
    lVar23 = 0;
    sVar3 = *(short *)(*(longlong *)(lVar7 + (ulonglong)_DAT_14699a538 * 8) + 0xce);
    do {
      puVar18 = (uint *)(param_1 + 0x6b8 + lVar23);
      lVar23 = lVar23 + 4;
      sVar4 = *(short *)(*(longlong *)(lVar7 + (ulonglong)*puVar18 * 8) + 0xce);
      puVar1 = (ulonglong *)
               ((ulonglong)(uint)(int)sVar3 * 0x220 + lVar8 + (ulonglong)((uint)(int)sVar4 >> 6) * 8
               );
      *puVar1 = *puVar1 | 1L << ((ulonglong)(byte)~(byte)sVar4 & 0x3f);
      puVar1 = (ulonglong *)
               (lVar8 + (ulonglong)((uint)(int)sVar3 >> 6) * 8 + (ulonglong)(uint)(int)sVar4 * 0x220
               );
      *puVar1 = *puVar1 | 1L << ((ulonglong)(byte)~(byte)sVar3 & 0x3f);
    } while ((ulonglong)uVar5 << 2 != lVar23);
  }
  lVar23 = *(longlong *)(param_1 + 0x440);
  lVar20 = *(longlong *)(*(longlong *)(lVar23 + 0x50) + 0xf0);
  lVar9 = *(longlong *)(*(longlong *)(lVar23 + 0x90) + 0xf0);
  lVar10 = *(longlong *)(*(longlong *)(lVar23 + 0xa8) + 0xf0);
  lVar11 = *(longlong *)(*(longlong *)(lVar23 + 0x98) + 0xf0);
  sVar3 = *(short *)(*(longlong *)(*(longlong *)(lVar23 + 0x38) + 0xf0) + 0xce);
  lVar12 = *(longlong *)(*(longlong *)(lVar23 + 0xc0) + 0xf0);
  lVar13 = *(longlong *)(*(longlong *)(lVar23 + 0xe0) + 0xf0);
  lVar23 = *(longlong *)(*(longlong *)(lVar23 + 0xb8) + 0xf0);
  sVar4 = *(short *)(*(longlong *)(lVar7 + (ulonglong)*(uint *)(param_1 + 0x5c0) * 8) + 0xce);
  bVar14 = ~(byte)sVar4 & 0x3f;
  uVar16 = -2L << bVar14 | 0xfffffffffffffffeU >> 0x40 - bVar14;
  uVar17 = (ulonglong)(((uint)(int)sVar4 >> 6) << 3);
  puVar1 = (ulonglong *)(uVar17 + (ulonglong)(uint)(int)sVar3 * 0x220 + lVar8);
  *puVar1 = *puVar1 & uVar16;
  lVar19 = (ulonglong)(uint)(int)sVar4 * 0x220 + lVar8;
  bVar14 = ~(byte)sVar3 & 0x3f;
  puVar1 = (ulonglong *)(lVar19 + (ulonglong)((uint)(int)sVar3 >> 6) * 8);
  *puVar1 = *puVar1 & (-2L << bVar14 | 0xfffffffffffffffeU >> 0x40 - bVar14);
  sVar3 = *(short *)(lVar20 + 0xce);
  puVar1 = (ulonglong *)(uVar17 + (ulonglong)(uint)(int)sVar3 * 0x220 + lVar8);
  *puVar1 = *puVar1 & uVar16;
  bVar14 = ~(byte)sVar3 & 0x3f;
  puVar1 = (ulonglong *)(lVar19 + (ulonglong)((uint)(int)sVar3 >> 6) * 8);
  *puVar1 = *puVar1 & (-2L << bVar14 | 0xfffffffffffffffeU >> 0x40 - bVar14);
  sVar3 = *(short *)(lVar9 + 0xce);
  puVar1 = (ulonglong *)(uVar17 + (ulonglong)(uint)(int)sVar3 * 0x220 + lVar8);
  *puVar1 = *puVar1 & uVar16;
  bVar14 = ~(byte)sVar3 & 0x3f;
  puVar1 = (ulonglong *)(lVar19 + (ulonglong)((uint)(int)sVar3 >> 6) * 8);
  *puVar1 = *puVar1 & (-2L << bVar14 | 0xfffffffffffffffeU >> 0x40 - bVar14);
  sVar3 = *(short *)(lVar10 + 0xce);
  puVar1 = (ulonglong *)(uVar17 + (ulonglong)(uint)(int)sVar3 * 0x220 + lVar8);
  *puVar1 = *puVar1 & uVar16;
  bVar14 = ~(byte)sVar3 & 0x3f;
  puVar1 = (ulonglong *)(lVar19 + (ulonglong)((uint)(int)sVar3 >> 6) * 8);
  *puVar1 = *puVar1 & (-2L << bVar14 | 0xfffffffffffffffeU >> 0x40 - bVar14);
  sVar3 = *(short *)(lVar11 + 0xce);
  puVar1 = (ulonglong *)(uVar17 + (ulonglong)(uint)(int)sVar3 * 0x220 + lVar8);
  *puVar1 = *puVar1 & uVar16;
  bVar14 = ~(byte)sVar3 & 0x3f;
  puVar1 = (ulonglong *)(lVar19 + (ulonglong)((uint)(int)sVar3 >> 6) * 8);
  *puVar1 = *puVar1 & (-2L << bVar14 | 0xfffffffffffffffeU >> 0x40 - bVar14);
  sVar3 = *(short *)(lVar23 + 0xce);
  puVar1 = (ulonglong *)(uVar17 + (ulonglong)(uint)(int)sVar3 * 0x220 + lVar8);
  *puVar1 = *puVar1 & uVar16;
  bVar14 = ~(byte)sVar3 & 0x3f;
  puVar1 = (ulonglong *)(lVar19 + (ulonglong)((uint)(int)sVar3 >> 6) * 8);
  *puVar1 = *puVar1 & (-2L << bVar14 | 0xfffffffffffffffeU >> 0x40 - bVar14);
  sVar3 = *(short *)(lVar12 + 0xce);
  puVar1 = (ulonglong *)(uVar17 + (ulonglong)(uint)(int)sVar3 * 0x220 + lVar8);
  *puVar1 = *puVar1 & uVar16;
  bVar14 = ~(byte)sVar3 & 0x3f;
  puVar1 = (ulonglong *)(lVar19 + (ulonglong)((uint)(int)sVar3 >> 6) * 8);
  *puVar1 = *puVar1 & (-2L << bVar14 | 0xfffffffffffffffeU >> 0x40 - bVar14);
  sVar3 = *(short *)(lVar13 + 0xce);
  puVar1 = (ulonglong *)(uVar17 + (ulonglong)(uint)(int)sVar3 * 0x220 + lVar8);
  *puVar1 = *puVar1 & uVar16;
  bVar14 = ~(byte)sVar3 & 0x3f;
  puVar1 = (ulonglong *)(lVar19 + (ulonglong)((uint)(int)sVar3 >> 6) * 8);
  *puVar1 = *puVar1 & (-2L << bVar14 | 0xfffffffffffffffeU >> 0x40 - bVar14);
  lVar23 = *(longlong *)(lVar7 + (ulonglong)*(uint *)(param_1 + 0x694) * 8);
  sVar3 = *(short *)(*(longlong *)(lVar7 + (ulonglong)*(uint *)(param_1 + 0x690) * 8) + 0xce);
  sVar4 = *(short *)(*(longlong *)
                      (*(longlong *)(*(longlong *)(_DAT_14ab760a0 + 0x440) + 0x940) + 0xf0) + 0xce);
  uVar16 = 1L << ((ulonglong)(byte)~(byte)sVar4 & 0x3f);
  uVar17 = (ulonglong)(((uint)(int)sVar4 >> 6) << 3);
  puVar1 = (ulonglong *)(uVar17 + (ulonglong)(uint)(int)sVar3 * 0x220 + lVar8);
  *puVar1 = *puVar1 | uVar16;
  lVar20 = (ulonglong)(uint)(int)sVar4 * 0x220 + lVar8;
  puVar1 = (ulonglong *)(lVar20 + (ulonglong)((uint)(int)sVar3 >> 6) * 8);
  *puVar1 = *puVar1 | 1L << ((ulonglong)(byte)~(byte)sVar3 & 0x3f);
  sVar3 = *(short *)(lVar23 + 0xce);
  puVar1 = (ulonglong *)(uVar17 + (ulonglong)(uint)(int)sVar3 * 0x220 + lVar8);
  *puVar1 = *puVar1 | uVar16;
  puVar1 = (ulonglong *)(lVar20 + (ulonglong)((uint)(int)sVar3 >> 6) * 8);
  *puVar1 = *puVar1 | 1L << ((ulonglong)(byte)~(byte)sVar3 & 0x3f);
  sVar3 = *(short *)(*(longlong *)(lVar7 + (ulonglong)*(uint *)(param_1 + 0x5e8) * 8) + 0xce);
  sVar4 = *(short *)(*(longlong *)(lVar7 + (ulonglong)*(uint *)(param_1 + 0x5f4) * 8) + 0xce);
  bVar14 = ~(byte)sVar4 & 0x3f;
  uVar17 = -2L << bVar14 | 0xfffffffffffffffeU >> 0x40 - bVar14;
  uVar16 = (ulonglong)(((uint)(int)sVar4 >> 6) << 3);
  lVar23 = (ulonglong)(uint)(int)sVar4 * 0x220 + lVar8;
  puVar1 = (ulonglong *)(uVar16 + (ulonglong)(uint)(int)sVar3 * 0x220 + lVar8);
  *puVar1 = *puVar1 & uVar17;
  bVar14 = ~(byte)sVar3 & 0x3f;
  puVar1 = (ulonglong *)(lVar23 + (ulonglong)((uint)(int)sVar3 >> 6) * 8);
  *puVar1 = *puVar1 & (-2L << bVar14 | 0xfffffffffffffffeU >> 0x40 - bVar14);
  sVar3 = *(short *)(*(longlong *)(lVar7 + (ulonglong)*(uint *)(param_1 + 0x5fc) * 8) + 0xce);
  puVar1 = (ulonglong *)(uVar16 + (ulonglong)(uint)(int)sVar3 * 0x220 + lVar8);
  *puVar1 = *puVar1 & uVar17;
  bVar14 = ~(byte)sVar3 & 0x3f;
  puVar1 = (ulonglong *)(lVar23 + (ulonglong)((uint)(int)sVar3 >> 6) * 8);
  *puVar1 = *puVar1 & (-2L << bVar14 | 0xfffffffffffffffeU >> 0x40 - bVar14);
  sVar3 = *(short *)(*(longlong *)(lVar7 + (ulonglong)*(uint *)(param_1 + 0x5f0) * 8) + 0xce);
  puVar1 = (ulonglong *)(uVar16 + (ulonglong)(uint)(int)sVar3 * 0x220 + lVar8);
  *puVar1 = *puVar1 & uVar17;
  bVar14 = ~(byte)sVar3 & 0x3f;
  puVar1 = (ulonglong *)(lVar23 + (ulonglong)((uint)(int)sVar3 >> 6) * 8);
  *puVar1 = *puVar1 & (-2L << bVar14 | 0xfffffffffffffffeU >> 0x40 - bVar14);
  sVar3 = *(short *)(*(longlong *)(lVar7 + (ulonglong)*(uint *)(param_1 + 0x608) * 8) + 0xce);
  puVar1 = (ulonglong *)(uVar16 + (ulonglong)(uint)(int)sVar3 * 0x220 + lVar8);
  *puVar1 = *puVar1 & uVar17;
  bVar14 = ~(byte)sVar3 & 0x3f;
  puVar1 = (ulonglong *)(lVar23 + (ulonglong)((uint)(int)sVar3 >> 6) * 8);
  *puVar1 = *puVar1 & (-2L << bVar14 | 0xfffffffffffffffeU >> 0x40 - bVar14);
  sVar3 = *(short *)(*(longlong *)(lVar7 + (ulonglong)*(uint *)(param_1 + 0x698) * 8) + 0xce);
  sVar4 = *(short *)(*(longlong *)(_DAT_1493f3648 + 0x4a8) + 0xce);
  puVar1 = (ulonglong *)
           ((ulonglong)(uint)(int)sVar3 * 0x220 + lVar8 + (ulonglong)((uint)(int)sVar4 >> 6) * 8);
  *puVar1 = *puVar1 | 1L << ((ulonglong)(byte)~(byte)sVar4 & 0x3f);
  puVar1 = (ulonglong *)
           ((ulonglong)(uint)(int)sVar4 * 0x220 + lVar8 + (ulonglong)((uint)(int)sVar3 >> 6) * 8);
  *puVar1 = *puVar1 | 1L << ((ulonglong)(byte)~(byte)sVar3 & 0x3f);
  return;
}

