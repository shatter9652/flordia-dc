// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14004c170  size: 1840 bytes
// Name:    FUN_14004c170
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e73e50, FUN_1455a6b30, FUN_145327730, FUN_145037a50, FUN_145327410, FUN_144e73f50, FUN_144de57e0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14004c170(longlong param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  undefined8 uVar1;
  char cVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  longlong lVar12;
  longlong lVar13;
  undefined4 *puVar14;
  longlong lVar15;
  uint uVar16;
  uint uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 auVar35 [16];
  undefined1 auVar37 [64];
  undefined1 auVar38 [64];
  undefined1 auVar39 [16];
  undefined1 auVar40 [64];
  undefined4 uVar41;
  float fVar42;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [16];
  undefined1 auVar36 [64];
  
  bVar11 = *(byte *)(_DAT_14a943ab0 + 1);
  lVar5 = *(longlong *)(param_3 + 0x90);
  *(undefined4 *)(param_1 + 0x10) = 0;
  bVar8 = FUN_1455a6b30(lVar5);
  *(uint *)(param_1 + 0x10) = (uint)bVar8 << 0xe;
  uVar16 = (uint)*(undefined8 *)(lVar5 + 0x180);
  if ((uVar16 >> 0x13 & 1) == 0) {
    auVar18._4_4_ = _DAT_145fc6ed8;
    auVar18._0_4_ = _DAT_145fc6ed8;
    auVar18._8_4_ = _DAT_145fc6ed8;
    auVar18._12_4_ = _DAT_145fc6ed8;
    uVar16 = 0;
    lVar12 = 0x88;
    uVar1 = vmovlps_avx(auVar18);
    *(undefined8 *)(param_1 + 0x80) = uVar1;
    fVar42 = _DAT_145fc6ed8;
LAB_14004c2d0:
    *(float *)(param_1 + lVar12) = fVar42;
  }
  else {
    auVar19._4_4_ = _DAT_145fc6ed8;
    auVar19._0_4_ = _DAT_145fc6ed8;
    auVar19._8_4_ = _DAT_145fc6ed8;
    auVar19._12_4_ = _DAT_145fc6ed8;
    lVar12 = *(longlong *)
              (*(longlong *)(lVar5 + 0x188) + (ulonglong)(uint)POPCOUNT(uVar16 & 0x7ffff) * 8);
    uVar1 = vmovlps_avx(auVar19);
    *(undefined8 *)(param_1 + 0x80) = uVar1;
    *(undefined4 *)(param_1 + 0x88) = 0x3f800000;
    if (lVar12 != 0) {
      uVar41 = *(undefined4 *)(lVar12 + 0x1ac);
      uVar16 = (uint)*(byte *)(lVar12 + 0x1d8) * 0x2000000 + (uint)*(byte *)(lVar12 + 0x1d7) * 2 |
               (*(uint *)(param_3 + 0x74) & 0x80) << 6;
      *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(lVar12 + 0x1a4);
      *(undefined4 *)(param_1 + 0x88) = uVar41;
      *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(lVar12 + 0x1c4);
      *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(lVar12 + 0x1cc);
      fVar42 = *(float *)(lVar12 + 0x1d0);
      lVar12 = 0x9c;
      goto LAB_14004c2d0;
    }
    uVar16 = 0;
  }
  uVar16 = uVar16 | (uint)bVar8 << 0xe;
  uVar17 = 0;
  *(uint *)(param_1 + 0x10) = uVar16;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (*(char *)(lVar5 + 0x411) == '\x02') {
    auVar26._0_12_ = ZEXT812(0);
    auVar26._12_4_ = 0;
    auVar19 = vcmpss_avx(auVar26,ZEXT416((uint)*(float *)(param_4 + 0x84)),1);
    *(uint *)(param_1 + 8) = auVar19._0_4_ & (uint)(_DAT_145fc6ed8 / *(float *)(param_4 + 0x84));
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_4 + 0x7c);
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_4 + 0x54);
    FUN_145327730(param_4,&uStack_d8,param_2,param_3,bVar11);
    auVar39._8_4_ = uStack_d0;
    auVar39._0_8_ = uStack_d8;
    auVar39._12_4_ = uStack_cc;
    lVar15 = 0x74;
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_4 + 0x58);
    lVar12 = 0x78;
    lVar13 = 0x75;
    uVar16 = (uint)*(byte *)(param_4 + 0x72) << 0xb |
             (uint)*(byte *)(param_4 + 0x71) << 10 | (uint)(*(int *)(param_4 + 0x60) == 4) << 9 |
             uVar16 | 0x100000;
    *(uint *)(param_1 + 0x10) = uVar16;
    fVar42 = *(float *)(param_4 + 0x6c);
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_4 + 0x68);
  }
  else {
    if (*(char *)(lVar5 + 0x411) != '\0') {
      auStack_c8._8_8_ = 0;
      auStack_c8._0_8_ = _DAT_146159bc0;
      auVar40 = ZEXT464((uint)_DAT_145fc6ed8);
      fVar42 = 0.0;
      auStack_b8 = _DAT_14614f7f0;
      goto LAB_14004c4e7;
    }
    uVar16 = (uint)*(byte *)(param_4 + 0x47) << 0x1a | uVar16 |
             (uint)*(byte *)(param_4 + 0x3c) << 8 |
             (uint)*(byte *)(param_4 + 0x3b) << 7 |
             (uint)*(byte *)(param_4 + 0x3d) << 6 |
             (uint)*(byte *)(param_4 + 0x41) << 0x1b |
             (uint)*(byte *)(param_4 + 0x40) << 5 | (uint)*(byte *)(param_4 + 0x3f) << 4;
    *(uint *)(param_1 + 0x10) = uVar16;
    *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_4 + 0x20);
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_4 + 0x28);
    FUN_145327410(param_4,&uStack_d8,param_2,param_3,bVar11);
    uVar17 = *(uint *)(param_4 + 0x1c);
    auVar39._8_4_ = uStack_d0;
    auVar39._0_8_ = uStack_d8;
    auVar39._12_4_ = uStack_cc;
    lVar15 = 0x45;
    *(int *)(param_1 + 0x18) = 1 << (uVar17 & 0x1f);
    lVar13 = 0x46;
    lVar12 = 0x48;
    uVar16 = (uint)(uVar17 == 8 || (uVar17 & 0xfffffffc) == 4) << 2 | uVar16;
    *(uint *)(param_1 + 0x10) = uVar16;
    fVar42 = *(float *)(param_4 + 0x2c);
  }
  auVar40 = ZEXT1664(auVar39);
  bVar8 = *(byte *)(param_4 + lVar15);
  *(uint *)(param_1 + 0x2c) = (uint)*(byte *)(param_4 + lVar13);
  uVar17 = (uint)bVar8 << 0x17;
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_4 + lVar12);
LAB_14004c4e7:
  auVar38 = ZEXT1664(auStack_c8);
  auVar37 = ZEXT1664(auStack_b8);
  lVar12 = *(longlong *)(param_3 + 0xa8);
  if (lVar12 == 0) {
    lVar12 = FUN_145037a50();
    auVar35._4_4_ = _DAT_145fc6ed8;
    auVar35._0_4_ = _DAT_145fc6ed8;
    auVar35._8_4_ = _DAT_145fc6ed8;
    auVar35._12_4_ = _DAT_145fc6ed8;
    uVar16 = *(uint *)(param_1 + 0x10);
    puVar14 = (undefined4 *)(lVar12 + 8);
  }
  else {
    auVar35._8_8_ = 0;
    auVar35._0_8_ = *(ulonglong *)(lVar12 + 8);
    puVar14 = (undefined4 *)(lVar12 + 0x10);
  }
  auVar36 = ZEXT1664(auVar35);
  uVar41 = *puVar14;
  uVar3 = *(undefined2 *)(lVar5 + 0x378);
  bVar8 = *(byte *)(lVar12 + 7);
  bVar10 = *(byte *)(lVar12 + 5);
  cVar2 = *(char *)(lVar12 + 6);
  bVar9 = FUN_144de57e0(*(undefined8 *)(lVar5 + 0x370),uVar3,9);
  uVar16 = (uint)((bVar10 ^ 1) & bVar9) << 0x10 | uVar16;
  *(uint *)(param_1 + 0x10) = uVar16;
  bVar10 = FUN_144de57e0(*(undefined8 *)(lVar5 + 0x370),uVar3,6);
  uVar16 = (uint)bVar10 << 0x11 | uVar16;
  *(uint *)(param_1 + 0x10) = uVar16;
  bVar10 = FUN_144de57e0(*(undefined8 *)(lVar5 + 0x370),uVar3,4);
  uVar16 = (uint)bVar10 << 0x12 | uVar16;
  *(uint *)(param_1 + 0x10) = uVar16;
  bVar10 = FUN_144e73f50(*(undefined8 *)(lVar5 + 0x370),uVar3);
  *(uint *)(param_1 + 0x10) = uVar17 | (uint)bVar10 << 0x16 | uVar16;
  uVar1 = vmovlps_avx(auVar40._0_16_);
  *(undefined8 *)(param_1 + 0xc0) = uVar1;
  uVar4 = vextractps_avx(auVar40._0_16_,2);
  *(undefined4 *)(param_1 + 200) = uVar4;
  uVar1 = vmovlps_avx(auVar38._0_16_);
  *(undefined8 *)(param_1 + 0xd0) = uVar1;
  uVar4 = vextractps_avx(auVar38._0_16_,2);
  *(undefined4 *)(param_1 + 0xd8) = uVar4;
  uVar1 = vmovlps_avx(auVar37._0_16_);
  *(undefined8 *)(param_1 + 0xe0) = uVar1;
  uVar4 = vextractps_avx(auVar37._0_16_,2);
  *(undefined4 *)(param_1 + 0xe8) = uVar4;
  lVar12 = _DAT_14a943760;
  FUN_144e73e50(lVar5,param_1 + 0xa4,param_1 + 0xa0);
  auVar19 = auVar36._0_16_;
  *(float *)(param_1 + 0x1c) = fVar42 * *(float *)(lVar12 + 0x2b7a8);
  uVar16 = (uint)(*(int *)(lVar5 + 0x168) == 1) | *(uint *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = uVar16;
  fVar42 = _DAT_145fc6ed8;
  uVar17 = (uint)*(undefined8 *)(lVar5 + 0x180);
  if ((((uVar17 >> 0x12 & 1) == 0) ||
      (lVar13 = *(longlong *)
                 (*(longlong *)(lVar5 + 0x188) + (ulonglong)(uint)POPCOUNT(uVar17 & 0x3ffff) * 8),
      lVar13 == 0)) || (cVar2 != '\0')) {
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(undefined8 *)(param_1 + 0x70) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  else {
    uVar16 = uVar16 | 0x8000;
    *(uint *)(param_1 + 0x10) = uVar16;
    fVar7 = _DAT_146159ef4;
    auVar27._8_8_ = 0;
    auVar27._0_8_ = *(ulonglong *)(lVar13 + 0x98);
    auVar22._8_8_ = 0;
    auVar22._0_8_ = *(ulonglong *)(lVar13 + 0x88);
    auVar39 = vshufps_avx(auVar27,auVar27,4);
    auVar26 = vshufps_avx(auVar22,auVar22,4);
    auVar18 = vrcpps_avx(auVar39);
    fVar6 = (float)(*(uint *)(lVar12 + 0x295d8) % 2000000) * _DAT_146159ec4;
    fVar31 = auVar18._0_4_;
    fVar32 = auVar18._4_4_;
    fVar33 = auVar18._8_4_;
    fVar34 = auVar18._12_4_;
    auVar28._0_4_ = -((fVar31 * auVar39._0_4_ - fVar42) * fVar31) + fVar31;
    auVar28._4_4_ = -((fVar32 * auVar39._4_4_ - fVar42) * fVar32) + fVar32;
    auVar28._8_4_ = -((fVar33 * auVar39._8_4_ - fVar42) * fVar33) + fVar33;
    auVar28._12_4_ = -((fVar34 * auVar39._12_4_ - fVar42) * fVar34) + fVar34;
    auVar23._0_4_ = auVar28._0_4_ * fVar6 * auVar26._0_4_;
    auVar23._4_4_ = auVar28._4_4_ * fVar6 * auVar26._4_4_;
    auVar23._8_4_ = auVar28._8_4_ * fVar6 * auVar26._8_4_;
    auVar23._12_4_ = auVar28._12_4_ * fVar6 * auVar26._12_4_;
    uVar1 = vmovlps_avx(auVar23);
    *(undefined8 *)(param_1 + 0x40) = uVar1;
    fVar31 = fVar7 * *(float *)(lVar13 + 0xb0);
    auVar24._0_4_ = fVar31 * auVar23._0_4_;
    auVar24._4_4_ = fVar31 * auVar23._4_4_;
    auVar24._8_4_ = fVar31 * auVar23._8_4_;
    auVar24._12_4_ = fVar31 * auVar23._12_4_;
    uVar1 = vmovlps_avx(auVar24);
    *(undefined8 *)(param_1 + 0x50) = uVar1;
    uVar1 = vmovlps_avx(auVar28);
    *(undefined8 *)(param_1 + 0x60) = uVar1;
    *(float *)(param_1 + 0x70) = fVar7 * *(float *)(lVar13 + 0xb4);
    auVar29._8_8_ = 0;
    auVar29._0_8_ = *(ulonglong *)(lVar13 + 0xa0);
    auVar25._8_8_ = 0;
    auVar25._0_8_ = *(ulonglong *)(lVar13 + 0x90);
    auVar39 = vshufps_avx(auVar29,auVar29,4);
    auVar26 = vshufps_avx(auVar25,auVar25,4);
    auVar18 = vrcpps_avx(auVar39);
    fVar31 = auVar18._0_4_;
    fVar32 = auVar18._4_4_;
    fVar33 = auVar18._8_4_;
    fVar34 = auVar18._12_4_;
    auVar30._0_4_ = -((fVar31 * auVar39._0_4_ - fVar42) * fVar31) + fVar31;
    auVar30._4_4_ = -((fVar32 * auVar39._4_4_ - fVar42) * fVar32) + fVar32;
    auVar30._8_4_ = -((fVar33 * auVar39._8_4_ - fVar42) * fVar33) + fVar33;
    auVar30._12_4_ = -((fVar34 * auVar39._12_4_ - fVar42) * fVar34) + fVar34;
    auVar20._0_4_ = auVar30._0_4_ * fVar6 * auVar26._0_4_;
    auVar20._4_4_ = auVar30._4_4_ * fVar6 * auVar26._4_4_;
    auVar20._8_4_ = auVar30._8_4_ * fVar6 * auVar26._8_4_;
    auVar20._12_4_ = auVar30._12_4_ * fVar6 * auVar26._12_4_;
    uVar1 = vmovlps_avx(auVar20);
    *(undefined8 *)(param_1 + 0x48) = uVar1;
    fVar42 = fVar7 * *(float *)(lVar13 + 0xb8);
    auVar21._0_4_ = fVar42 * auVar20._0_4_;
    auVar21._4_4_ = fVar42 * auVar20._4_4_;
    auVar21._8_4_ = fVar42 * auVar20._8_4_;
    auVar21._12_4_ = fVar42 * auVar20._12_4_;
    uVar1 = vmovlps_avx(auVar21);
    *(undefined8 *)(param_1 + 0x58) = uVar1;
    uVar1 = vmovlps_avx(auVar30);
    *(undefined8 *)(param_1 + 0x68) = uVar1;
    *(float *)(param_1 + 0x74) = fVar7 * *(float *)(lVar13 + 0xbc);
  }
  if (*(int *)(param_3 + 0x380) == 1) {
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(uint *)(param_1 + 0x10) = uVar16 | 0x80000;
    bVar11 = *(byte *)(_DAT_14a943ab0 + 1);
  }
  else {
    auVar40 = ZEXT1664(auVar19);
    func_0x000144de5390(param_3,&uStack_d8);
    auVar19 = auVar40._0_16_;
    *(undefined4 *)(param_1 + 0x24) = uStack_d0;
  }
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_3 + 0x2ec + (ulonglong)bVar11 * 0x80);
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(lVar5 + 0x1d0);
  *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(lVar5 + 0x40c);
  uVar1 = vmovlps_avx(auVar19);
  *(undefined8 *)(param_1 + 0xb0) = uVar1;
  *(undefined4 *)(param_1 + 0xb8) = uVar41;
  *(uint *)(param_1 + 0xbc) = (uint)bVar8;
  if (((char)*(undefined8 *)(lVar5 + 0x180) < '\0') &&
     (lVar5 = *(longlong *)
               (*(longlong *)(lVar5 + 0x188) +
               (ulonglong)(uint)POPCOUNT((uint)*(undefined8 *)(lVar5 + 0x180) & 0x7f) * 8),
     lVar5 != 0)) {
    func_0x0001455d9a40(lVar5,param_1 + 0xcc,param_1 + 0xdc);
  }
  *(undefined4 *)(param_1 + 0xec) = *(undefined4 *)(*param_2 + 0x224);
  return;
}

