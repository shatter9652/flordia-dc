// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14012ffe0  size: 160 bytes
// Name:    FUN_14012ffe0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1416a2c40, FUN_1419b0ac0, FUN_1419b0da0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14012ffe0(longlong param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  undefined1 auVar6 [16];
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  byte bVar10;
  ulonglong uVar11;
  undefined1 auVar12 [16];
  float fVar13;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar14 [16];
  undefined1 auVar18 [16];
  undefined8 uVar19;
  undefined8 uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined8 auStack_c8 [2];
  undefined8 auStack_b8 [2];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 auStack_58 [5];
  
  uVar3 = *(uint *)(param_1 + 0x4c);
  if ((int)uVar3 < 1) {
    return (undefined8 *)0x0;
  }
  if (uVar3 != 1) {
    if (*(char *)(param_1 + 0x38) != '\0') {
      return (undefined8 *)0x0;
    }
    bVar10 = 1;
    uVar11 = 0;
    uStack_60 = 0x140130027;
    puVar8 = (undefined8 *)FUN_1419b0da0();
    do {
      uStack_60 = 0x140130037;
      lVar7 = FUN_1416a2c40(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + uVar11 * 8));
      if (lVar7 == 0) {
        if (puVar8 == (undefined8 *)0x0) {
          return (undefined8 *)0x0;
        }
        uStack_60 = 0x14013006e;
        (**(code **)*puVar8)(puVar8,1);
        return (undefined8 *)0x0;
      }
      uStack_60 = 0x14013004a;
      FUN_1419b0ac0(puVar8,lVar7);
      bVar10 = bVar10 & *(byte *)(lVar7 + 0x23);
      uVar11 = uVar11 + 1;
    } while (uVar3 != uVar11);
    *(byte *)((longlong)puVar8 + 0x23) = bVar10;
    return puVar8;
  }
  piVar5 = (int *)**(undefined8 **)(param_1 + 0x50);
  auVar21._4_4_ = _DAT_145fc6edc;
  auVar21._0_4_ = _DAT_145fc6edc;
  auVar21._8_4_ = _DAT_145fc6edc;
  auVar21._12_4_ = _DAT_145fc6edc;
  iVar4 = *piVar5;
  piVar1 = piVar5 + 0xc;
  piVar2 = piVar5 + 4;
  fVar13 = (float)piVar5[8] * _DAT_14615a294;
  fVar15 = (float)piVar5[9] * _DAT_14615a294;
  fVar16 = (float)piVar5[10] * _DAT_14615a294;
  fVar17 = (float)piVar5[0xb] * _DAT_14615a294;
  auVar18._0_4_ = (uint)fVar13 & _DAT_145fc6f10;
  auVar18._4_4_ = (uint)fVar15 & _DAT_145fc6f10;
  auVar18._8_4_ = (uint)fVar16 & _DAT_145fc6f10;
  auVar18._12_4_ = (uint)fVar17 & _DAT_145fc6f10;
  auVar18 = auVar18 | auVar21;
  auVar22._4_4_ = _DAT_145f43778;
  auVar22._0_4_ = _DAT_145f43778;
  auVar22._8_4_ = _DAT_145f43778;
  auVar22._12_4_ = _DAT_145f43778;
  auVar21 = vpcmpeqd_avx(auVar18,auVar18);
  auVar14._0_4_ = (int)(fVar13 + auVar18._0_4_);
  auVar14._4_4_ = (int)(fVar15 + auVar18._4_4_);
  auVar14._8_4_ = (int)(fVar16 + auVar18._8_4_);
  auVar14._12_4_ = (int)(fVar17 + auVar18._12_4_);
  auVar18 = vcvtdq2ps_avx(auVar14);
  auVar6 = vpsubd_avx(auVar14,auVar21);
  fVar13 = auVar18._0_4_ * _DAT_146159b50 +
           auVar18._0_4_ * _DAT_146159b4c + (float)piVar5[8] * _DAT_146159b38;
  fVar15 = auVar18._4_4_ * _DAT_146159b50 +
           auVar18._4_4_ * _DAT_146159b4c + (float)piVar5[9] * _DAT_146159b38;
  fVar16 = auVar18._8_4_ * _DAT_146159b50 +
           auVar18._8_4_ * _DAT_146159b4c + (float)piVar5[10] * _DAT_146159b38;
  fVar17 = auVar18._12_4_ * _DAT_146159b50 +
           auVar18._12_4_ * _DAT_146159b4c + (float)piVar5[0xb] * _DAT_146159b38;
  fVar24 = fVar13 * fVar13;
  fVar25 = fVar15 * fVar15;
  fVar26 = fVar16 * fVar16;
  fVar27 = fVar17 * fVar17;
  auVar29._0_4_ =
       fVar24 * fVar13 * (fVar24 * (fVar24 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68) +
       fVar13;
  auVar29._4_4_ =
       fVar25 * fVar15 * (fVar25 * (fVar25 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68) +
       fVar15;
  auVar29._8_4_ =
       fVar26 * fVar16 * (fVar26 * (fVar26 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68) +
       fVar16;
  auVar29._12_4_ =
       fVar27 * fVar17 * (fVar27 * (fVar27 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68) +
       fVar17;
  auVar28._4_4_ = _DAT_145f43774;
  auVar28._0_4_ = _DAT_145f43774;
  auVar28._8_4_ = _DAT_145f43774;
  auVar28._12_4_ = _DAT_145f43774;
  auVar18 = vpand_avx(auVar14,auVar22);
  auVar30._0_4_ =
       fVar24 * (fVar24 * (fVar24 * _DAT_146159b58 + _DAT_146159b54) + _DAT_146159b64) +
       _DAT_145fc6ed8;
  auVar30._4_4_ =
       fVar25 * (fVar25 * (fVar25 * _DAT_146159b58 + _DAT_146159b54) + _DAT_146159b64) +
       _DAT_145fc6ed8;
  auVar30._8_4_ =
       fVar26 * (fVar26 * (fVar26 * _DAT_146159b58 + _DAT_146159b54) + _DAT_146159b64) +
       _DAT_145fc6ed8;
  auVar30._12_4_ =
       fVar27 * (fVar27 * (fVar27 * _DAT_146159b58 + _DAT_146159b54) + _DAT_146159b64) +
       _DAT_145fc6ed8;
  auVar21 = vpcmpeqd_avx(auVar18,(undefined1  [16])0x0);
  auVar12 = vpsubd_avx((undefined1  [16])0x0,auVar18);
  auVar14 = vpand_avx(auVar14,auVar28);
  auVar6 = vpand_avx(auVar6,auVar28);
  auVar18 = vblendvps_avx(auVar30,auVar29,auVar21);
  auVar21 = vblendvps_avx(auVar30,auVar29,auVar12);
  auVar14 = vpcmpeqd_avx(auVar14,(undefined1  [16])0x0);
  auVar6 = vpcmpeqd_avx(auVar6,(undefined1  [16])0x0);
  auVar23._0_4_ = auVar18._0_4_ ^ _DAT_145fc6f10;
  auVar23._4_4_ = auVar18._4_4_ ^ _DAT_145fc6f10;
  auVar23._8_4_ = auVar18._8_4_ ^ _DAT_145fc6f10;
  auVar23._12_4_ = auVar18._12_4_ ^ _DAT_145fc6f10;
  auVar12._0_4_ = auVar21._0_4_ ^ _DAT_145fc6f10;
  auVar12._4_4_ = auVar21._4_4_ ^ _DAT_145fc6f10;
  auVar12._8_4_ = auVar21._8_4_ ^ _DAT_145fc6f10;
  auVar12._12_4_ = auVar21._12_4_ ^ _DAT_145fc6f10;
  auVar18 = vblendvps_avx(auVar23,auVar18,auVar14);
  auVar21 = vblendvps_avx(auVar12,auVar21,auVar6);
  vshufps_avx(auVar18,auVar18,0x55);
  vshufps_avx(auVar21,auVar21,0x55);
  vshufps_avx(auVar18,auVar21,0);
  vshufps_avx(auVar21,auVar18,0);
  auVar18 = vunpckhps_avx(auVar21,auVar18);
  vshufps_avx(auVar18,ZEXT416((uint)_DAT_145fc6ed8),1);
  if (iVar4 == 0) {
    uVar19 = *(undefined8 *)piVar1;
    uVar20 = *(undefined8 *)(piVar5 + 0xe);
    puVar8 = auStack_58;
    puVar9 = &uStack_68;
  }
  else {
    if (iVar4 == 1) {
      uStack_98 = *(undefined8 *)piVar1;
      uStack_90 = *(undefined8 *)(piVar5 + 0xe);
      uStack_a8 = *(undefined8 *)piVar2;
      uStack_a0 = *(undefined8 *)(piVar5 + 6);
      puVar8 = (undefined8 *)FUN_1410432e0();
      goto code_r0x0001416a2e35;
    }
    if (iVar4 == 2) {
      uStack_78 = *(undefined8 *)piVar1;
      uStack_70 = *(undefined8 *)(piVar5 + 0xe);
      uStack_88 = *(undefined8 *)piVar2;
      uStack_80 = *(undefined8 *)(piVar5 + 6);
      puVar8 = (undefined8 *)FUN_1419b0e80();
      goto code_r0x0001416a2e35;
    }
    uVar19 = *(undefined8 *)piVar1;
    uVar20 = *(undefined8 *)(piVar5 + 0xe);
    puVar8 = auStack_b8;
    puVar9 = auStack_c8;
  }
  *puVar8 = uVar19;
  puVar8[1] = uVar20;
  uVar19 = *(undefined8 *)(piVar5 + 6);
  *puVar9 = *(undefined8 *)piVar2;
  puVar9[1] = uVar19;
  puVar8 = (undefined8 *)FUN_1416a2f10();
code_r0x0001416a2e35:
  if (puVar8 != (undefined8 *)0x0) {
    *(char *)((longlong)puVar8 + 0x23) = (char)piVar5[0x10];
  }
  return puVar8;
}

