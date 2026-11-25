// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400d5340  size: 2195 bytes
// Name:    FUN_1400d5340
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145146ef0, FUN_144f62f00, FUN_1431a7c10, FUN_144dd11b0, FUN_1431a7e00, FUN_1431a7be0, FUN_1431a7f00, FUN_1431a7c80, FUN_145464d60, FUN_1431a7bb0, FUN_1431a7d90, FUN_1431a7ce0, FUN_1431a7b50, FUN_1431a7e80, FUN_1431a7dd0, FUN_144de6230, FUN_1431a7d20, FUN_1431a7fc0, FUN_1431a7e40, FUN_1431a73b0, FUN_1431a7f80, FUN_1431a7cb0, FUN_1431a7ec0, FUN_1431a7d60, FUN_1431a7c50, FUN_1431a77a0, FUN_1431a7b80, FUN_1431a7f40
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400d5340(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  undefined8 uVar6;
  byte bVar7;
  char cVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  byte bVar14;
  ulonglong uVar15;
  longlong lVar16;
  undefined4 *puVar17;
  byte bVar18;
  bool bVar19;
  uint uVar20;
  undefined4 uVar21;
  float fVar22;
  undefined1 auVar23 [64];
  undefined1 auVar24 [64];
  undefined1 auVar25 [64];
  undefined4 auStack_8c [19];
  
  lVar9 = FUN_144f62f00(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x38) + 0x98))
  ;
  if (lVar9 == 0) {
    return;
  }
  lVar2 = *(longlong *)(param_2 + 0x10);
  lVar16 = *(longlong *)(param_2 + 0x30);
  lVar13 = *(longlong *)(param_2 + 0x28);
  lVar3 = *(longlong *)(param_2 + 0x18);
  lVar10 = func_0x000144f12500(*(undefined4 *)(*(longlong *)(param_1 + 0x2f8) + 0x9c));
  lVar11 = FUN_145146ef0(lVar9,0x66492d96,0,1);
  lVar12 = FUN_145146ef0(lVar9,0xeebc9b6e,0,1);
  lVar9 = FUN_145146ef0(lVar9,0x7f4d1753,0,1);
  cVar1 = *(char *)(param_1 + 0x60);
  if (lVar11 == 0) {
    if ((lVar13 == 0) ||
       ((bVar7 = 1, (*(byte *)(lVar13 + 0x1c) & 0x10) == 0 &&
        ((*(byte *)(lVar13 + 0xa8) & 0x10) == 0)))) {
      if (lVar16 == 0) {
        bVar7 = 0;
      }
      else {
        bVar7 = (*(byte *)(lVar16 + 0x5a9) & 0x10) >> 4;
      }
    }
    bVar14 = *(byte *)(param_1 + 0x90);
    *(byte *)(param_1 + 0x90) = bVar14 & 0xfe | bVar7;
    bVar7 = bVar14 & 0xfc | bVar7 |
            ((*(uint *)(lVar16 + 0x5a8) >> 0xd & 1) == 0 &&
            ((*(byte *)(param_2 + 0x120) & 0x20) == 0 || -1 < *(char *)(param_2 + 0x14c))) * '\x02';
    *(byte *)(param_1 + 0x90) = bVar7;
    cVar8 = (*(byte *)(lVar16 + 0x5a9) & 0x40) == 0;
  }
  else {
    bVar7 = FUN_1431a7b80(lVar11);
    *(byte *)(param_1 + 0x90) = *(byte *)(param_1 + 0x90) & 0xfe | bVar7;
    cVar8 = FUN_1431a7bb0(lVar11);
    *(byte *)(param_1 + 0x90) = *(byte *)(param_1 + 0x90) & 0xfd | cVar8 * '\x02';
    cVar8 = FUN_1431a7be0(lVar11);
    bVar7 = *(byte *)(param_1 + 0x90);
  }
  *(byte *)(param_1 + 0x90) = cVar8 << 2 | bVar7 & 3 | 0x58;
  bVar7 = *(byte *)(param_1 + 0x91) & 0xfc | 2;
  *(byte *)(param_1 + 0x91) = bVar7;
  if (lVar11 == 0) {
    auStack_8c[0] = 0;
  }
  else {
    FUN_1431a7c10(lVar11,auStack_8c);
    bVar7 = *(byte *)(param_1 + 0x91);
  }
  *(undefined4 *)(param_1 + 0x88) = auStack_8c[0];
  if (((bVar7 & 4) != 0) &&
     (lVar13 = FUN_144f62f00(*(undefined8 *)
                              (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x38) + 0x98)),
     lVar13 != 0)) {
    lVar4 = (ulonglong)((uint)DAT_14ab83b10 * 2) * 3;
    bVar14 = *(byte *)(lVar13 + 0x18 + lVar4);
    uVar15 = (ulonglong)bVar14;
    if ((((bVar14 != 0x1e) ||
         ((((bVar14 = *(byte *)(lVar13 + 0x19 + lVar4), uVar15 = (ulonglong)bVar14, bVar14 != 0x1e
            || (bVar14 = *(byte *)(lVar13 + 0x1a + lVar4), uVar15 = (ulonglong)bVar14,
               bVar14 != 0x1e)) ||
           (bVar14 = *(byte *)(lVar13 + 0x1b + lVar4), uVar15 = (ulonglong)bVar14, bVar14 != 0x1e))
          || ((bVar14 = *(byte *)(lVar13 + 0x1c + lVar4), uVar15 = (ulonglong)bVar14, bVar14 != 0x1e
              || (bVar14 = *(byte *)(lVar13 + 0x1d + lVar4), uVar15 = (ulonglong)bVar14,
                 bVar14 != 0x1e)))))) &&
        (lVar4 = *(longlong *)(lVar13 + 0xa0 + uVar15 * 8), lVar4 != 0)) &&
       (cVar8 = func_0x000144f80ef0(*(undefined4 *)(lVar4 + 0x28)), cVar8 != '\0')) {
      lVar13 = func_0x000144db7870(lVar13);
      uVar15 = (ulonglong)*(byte *)(lVar13 + 0xc0 + (ulonglong)DAT_14abc3b50);
      if ((uVar15 == 0xff) || (lVar13 = *(longlong *)(lVar13 + 0x10 + uVar15 * 8), lVar13 == 0)) {
        lVar13 = 0;
      }
      else {
        lVar13 = *(longlong *)(lVar13 + 0x80);
      }
      bVar14 = 4;
      if (*(char *)(param_1 + 0x392) == '\0') {
        if (lVar13 == 0) {
          bVar14 = 0;
        }
        else {
          bVar14 = (*(byte *)(lVar13 + 0x572) & 1) << 2;
        }
      }
      bVar7 = bVar7 & 0xfb | bVar14;
    }
  }
  *(byte *)(param_1 + 0x91) = *(char *)(param_1 + 0x38a) << 2 | bVar7;
  if ((lVar11 == 0) ||
     (cVar8 = FUN_145464d60(*(undefined4 *)(*(longlong *)(param_1 + 0x2f8) + 0x9c)), cVar8 != '\0'))
  {
    if (lVar3 == 0) {
      if ((*(byte *)(lVar16 + 0x5a8) & 0x80) != 0) goto LAB_1400d5747;
      uVar21 = *(undefined4 *)(*(longlong *)(param_1 + 0x2f8) + 0x9c);
      cVar8 = FUN_144dd11b0(uVar21);
      if (cVar8 != '\0') {
LAB_1400d570f:
        lVar13 = FUN_144de6230(uVar21);
        if (((lVar13 != 0) &&
            (((lVar3 != 0 && (0xfc < (byte)(*(char *)(lVar13 + 0x30) - 5U))) &&
             ((*(byte *)(lVar3 + 0xe5b) & 8) != 0)))) && ((*(byte *)(lVar3 + 0xe67) & 0x20) == 0))
        goto LAB_1400d5747;
      }
LAB_1400d573d:
      bVar7 = 1;
    }
    else {
      if (((*(byte *)(lVar3 + 0xe63) & 1) == 0) && ((*(byte *)(lVar16 + 0x5a8) & 0x80) == 0)) {
        uVar20 = (uint)*(undefined8 *)(lVar3 + 0xe58);
        if ((uVar20 >> 8 & 1) == 0) {
          uVar21 = *(undefined4 *)(*(longlong *)(param_1 + 0x2f8) + 0x9c);
          cVar8 = FUN_144dd11b0(uVar21);
          if ((cVar8 != '\0') && ((*(byte *)(lVar3 + 0xe40) & 0x20) == 0)) goto LAB_1400d570f;
        }
        else if ((uVar20 >> 0x1b & 1) != 0) goto LAB_1400d5747;
        goto LAB_1400d573d;
      }
LAB_1400d5747:
      bVar7 = 0;
    }
    bVar14 = *(byte *)(param_1 + 0xa8);
    *(byte *)(param_1 + 0xa8) = bVar14 & 0xfe | bVar7;
    uVar6 = _DAT_14615a780;
    if (lVar11 == 0) {
      *(byte *)(param_1 + 0xa8) =
           (bVar14 & 0xfc | bVar7 | (byte)(*(uint *)(lVar16 + 0x5a8) >> 10) & 2) ^ 2;
      *(undefined8 *)(param_1 + 0x94) = uVar6;
      uVar21 = *(undefined4 *)(param_1 + 0xa4);
      goto LAB_1400d5831;
    }
  }
  else {
    bVar7 = FUN_1431a7c50(lVar11);
    *(byte *)(param_1 + 0xa8) = *(byte *)(param_1 + 0xa8) & 0xfe | bVar7;
  }
  cVar8 = FUN_1431a7c80(lVar11);
  *(byte *)(param_1 + 0xa8) = *(byte *)(param_1 + 0xa8) & 0xfd | cVar8 * '\x02';
  cVar8 = FUN_1431a7d60(lVar11);
  uVar20 = _DAT_145fc6f54;
  if (cVar8 != '\0') {
    uVar20 = FUN_1431a7d90(lVar11);
  }
  *(uint *)(param_1 + 0x94) = uVar20;
  cVar8 = FUN_1431a7dd0(lVar11);
  uVar21 = _DAT_145fc6f50;
  if (cVar8 != '\0') {
    uVar21 = FUN_1431a7e00(lVar11);
  }
  *(undefined4 *)(param_1 + 0x98) = uVar21;
  cVar8 = FUN_1431a7cb0(lVar11);
  if (cVar8 != '\0') {
    uVar21 = FUN_1431a7ce0(lVar11);
    *(undefined4 *)(param_1 + 0x9c) = uVar21;
  }
  uVar21 = FUN_1431a7d20(lVar11);
LAB_1400d5831:
  auVar23 = ZEXT464(_DAT_145fc6f54);
  auVar24 = ZEXT464(_DAT_14615a200);
  auVar25 = ZEXT464(_DAT_14615d7e0);
  *(undefined4 *)(param_1 + 0xa4) = uVar21;
  lVar16 = 0;
  fVar22 = 0.0;
  bVar5 = true;
  do {
    if ((lVar11 == 0) || (cVar8 = FUN_1431a7e40(lVar11,lVar16), cVar8 != '\0')) {
      bVar7 = *(byte *)(param_1 + 0xb0 + lVar16 * 8);
      if ((bVar7 & 1) == 0) {
        bVar14 = (*(float *)(*(longlong *)(param_1 + 0x188) + 0x174 + lVar16 * 0x1b0) == fVar22) *
                 '\x02';
      }
      else {
        bVar14 = 0;
      }
      puVar17 = (undefined4 *)(param_1 + 0xac + lVar16 * 8);
      bVar7 = bVar7 & 0xfc | bVar14 | 1;
      *(byte *)(puVar17 + 1) = bVar7;
      if (lVar11 != 0) goto LAB_1400d5914;
      if (lVar12 == 0) {
LAB_1400d59f0:
        bVar7 = bVar7 & 0xfb;
      }
      else {
        cVar8 = FUN_1431a7b50(lVar12);
        if (cVar8 == '\0') {
          bVar7 = *(byte *)(puVar17 + 1);
          goto LAB_1400d59f0;
        }
        if (bVar5) {
          cVar8 = FUN_1431a77a0(lVar12);
        }
        else {
          cVar8 = FUN_1431a73b0(lVar12);
        }
        bVar7 = *(byte *)(puVar17 + 1);
        if (cVar8 == '\0') goto LAB_1400d59f0;
        bVar7 = bVar7 | 4;
      }
      *(byte *)(puVar17 + 1) = bVar7;
      if ((lVar10 == 0) || (bVar14 = 1, (*(byte *)(lVar10 + 0x214) & 2) == 0)) {
        if ((bVar7 & 8) == 0 || lVar2 == 0) {
          bVar14 = (bVar7 & 8) >> 3;
        }
        else {
          bVar14 = func_0x000144eea730(lVar2,1,0);
        }
      }
      bVar19 = false;
      if (lVar9 == 0) {
        bVar7 = 0;
      }
      else if (bVar5) {
        bVar7 = FUN_1431a77a0(lVar9);
      }
      else {
        bVar7 = FUN_1431a73b0(lVar9);
      }
      if (cVar1 == '\x02') {
        bVar19 = (bool)(~*(byte *)(param_2 + 0x120) & 1);
      }
      else if (cVar1 == '\x01') {
        bVar19 = (*(byte *)(*(longlong *)(param_1 + 0x188) + 0x1a4 + lVar16 * 0x1b0) & 0x20) == 0;
      }
      bVar18 = 0;
      cVar8 = '\0';
      *(byte *)(puVar17 + 1) =
           *(byte *)(puVar17 + 1) & 0xf7 |
           (bVar14 | bVar7 |
            (*(byte *)(param_2 + 0x120) & 0x20) == 0 & *(byte *)(param_2 + 0x14c) >> 6 | bVar19) <<
           3;
      bVar7 = 0;
      *puVar17 = 0xff7fffff;
      if (cVar1 == '\x02') {
        bVar14 = *(byte *)(param_2 + 0x120) & 1;
        goto joined_r0x0001400d597f;
      }
    }
    else {
      puVar17 = (undefined4 *)(param_1 + 0xac + lVar16 * 8);
      *(byte *)(puVar17 + 1) = *(byte *)(puVar17 + 1) & 0xfc;
LAB_1400d5914:
      cVar8 = FUN_1431a7f00(lVar11,lVar16);
      *(byte *)(puVar17 + 1) = cVar8 << 2 | *(byte *)(puVar17 + 1) & 0xfb;
      cVar8 = FUN_1431a7f40(lVar11,lVar16);
      *(byte *)(puVar17 + 1) = *(byte *)(puVar17 + 1) & 0xf7 | cVar8 << 3;
      cVar8 = FUN_1431a7f80(lVar11,lVar16);
      uVar21 = auVar23._0_4_;
      if (cVar8 != '\0') {
        uVar21 = FUN_1431a7fc0(lVar11,lVar16);
      }
      *puVar17 = uVar21;
      bVar14 = FUN_1431a7e80(lVar11,lVar16);
joined_r0x0001400d597f:
      cVar8 = '\0';
      bVar7 = 0;
      bVar18 = 0;
      if (bVar14 != 0) {
        if ((*(byte *)(param_1 + 200 + lVar16 * 0x10) & 1) == 0) {
          bVar18 = (*(float *)(*(longlong *)(param_1 + 0x198) + 0x90 + lVar16 * 0xb0) == fVar22) <<
                   2;
        }
        else {
          bVar18 = 0;
        }
        cVar8 = '\x01';
        bVar7 = 1;
      }
    }
    lVar13 = lVar16 * 0x10;
    puVar17 = (undefined4 *)(param_1 + 0xbc + lVar13);
    bVar7 = bVar7 | bVar18 | *(byte *)(param_1 + 200 + lVar13) & 0xfa;
    *(byte *)(param_1 + 200 + lVar13) = bVar7;
    if (cVar8 == '\x01' && lVar11 != 0) {
      cVar8 = FUN_1431a7ec0(lVar11,lVar16);
      bVar7 = *(byte *)(puVar17 + 3);
    }
    *(byte *)(puVar17 + 3) = bVar7 & 0xfd | cVar8 * '\x02';
    uVar21 = auVar24._0_4_;
    if ((*(byte *)(param_2 + 0x120) & 1) == 0) {
      uVar21 = auVar25._0_4_;
    }
    *puVar17 = uVar21;
    uVar21 = auVar24._0_4_;
    if ((*(byte *)(param_2 + 0x120) & 1) == 0) {
      uVar21 = auVar25._0_4_;
    }
    puVar17[1] = uVar21;
    puVar17[2] = 0x3d75c28f;
    lVar16 = 1;
    bVar19 = !bVar5;
    bVar5 = false;
    if (bVar19) {
      return;
    }
  } while( true );
}

