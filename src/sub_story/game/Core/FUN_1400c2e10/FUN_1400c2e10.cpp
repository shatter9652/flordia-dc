// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400c2e10  size: 2497 bytes
// Name:    FUN_1400c2e10
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144da6330, FUN_145034810, FUN_14052c5a0, FUN_1402a9b90, FUN_142116fc0, FUN_14017d740, FUN_14517f870, FUN_1453c6260, FUN_143ba2650, FUN_145034ac0, FUN_1450349c0, FUN_14017dc60
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1400c2e10(longlong *param_1)

{
  undefined8 *puVar1;
  ulonglong *puVar2;
  undefined4 uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  ushort uVar7;
  undefined8 *puVar8;
  undefined1 auVar9 [16];
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  uint uVar17;
  byte bVar18;
  longlong lVar19;
  longlong *plVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  uint uVar24;
  float fVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [64];
  float fVar44;
  float fVar45;
  ulonglong in_stack_fffffffffffffe68;
  undefined1 *puVar46;
  undefined1 auStack_188 [16];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [16];
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 auStack_148 [16];
  undefined1 auStack_138 [16];
  undefined1 auStack_128 [16];
  undefined1 auStack_118 [16];
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [16];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  bVar18 = *(byte *)((longlong)param_1 + 0x12);
  bVar4 = *(byte *)((longlong)param_1 + 0x13);
  bVar5 = *(byte *)((longlong)param_1 + 0x14);
  bVar6 = *(byte *)(param_1 + 0x25);
  uVar17 = (uint)bVar5;
  uVar24 = (uint)*(byte *)((longlong)param_1 + 0x129);
  if (bVar6 == 0) {
    uVar17 = (uint)bVar6;
    uVar24 = (uint)bVar6;
  }
  lVar19 = func_0x000144f97130(0xb0);
  FUN_14017d740(lVar19);
  FUN_145034ac0(lVar19,uVar24 + 1 + uVar17 + (uint)bVar4 + (uint)bVar18 + (uint)bVar6 + (uint)bVar5,
                0,0);
  FUN_1453c6260(lVar19,0xffffffffffffffff,0xffffffffffffffff,0);
  (**(code **)(*param_1 + 0x10))(param_1,&uStack_88);
  plVar20 = (longlong *)func_0x000144f97130(0x70);
  auStack_98._4_4_ = _DAT_145fc6ed8;
  auStack_98._0_4_ = _DAT_145fc6ed8;
  auStack_98._8_4_ = _DAT_145fc6ed8;
  auStack_98._12_4_ = _DAT_145fc6ed8;
  auVar43 = ZEXT1664(auStack_98);
  FUN_1402a9b90(plVar20);
  *(undefined4 *)(plVar20 + 3) = 0xc21c1aec;
  (**(code **)(*param_1 + 0x80))(param_1,&uStack_a8);
  uStack_158 = uStack_a8;
  uStack_150 = uStack_a0;
  func_0x000144fda6a0(plVar20);
  auVar32._0_12_ = ZEXT812(0);
  auVar32._12_4_ = 0;
  fVar25 = _DAT_1492de9d8 * *(float *)((longlong)param_1 + 0x94);
  auVar26._4_4_ = fVar25;
  auVar26._0_4_ = fVar25;
  auVar26._8_4_ = fVar25;
  auVar26._12_4_ = fVar25;
  auVar32 = vcmpps_avx(auVar32,auVar26,2);
  if (auVar32 == (undefined1  [16])0x0) {
    *(undefined4 *)((longlong)plVar20 + 0x2c) = 0x3d23d70a;
  }
  else {
    auVar32 = vblendps_avx(auVar26,*(undefined1 (*) [16])(plVar20 + 4),7);
    *(undefined1 (*) [16])(plVar20 + 4) = auVar32;
  }
  lVar22 = _DAT_14a9b33c0;
  *(byte *)((longlong)plVar20 + 0x11) = *(byte *)((longlong)plVar20 + 0x11) | 0x80;
  (**(code **)(*plVar20 + 0x60))(plVar20,*(undefined8 *)(lVar22 + 0x330),0xffffffff);
  puVar46 = (undefined1 *)(in_stack_fffffffffffffe68 & 0xffffffffffffff00);
  FUN_1450349c0(lVar19,0,plVar20,1,puVar46);
  FUN_14017dc60(plVar20,1);
  puVar8 = *(undefined8 **)(lVar19 + 0x78);
  *puVar8 = uStack_88;
  puVar8[1] = uStack_80;
  puVar8[2] = uStack_78;
  puVar8[3] = uStack_70;
  puVar8[4] = uStack_68;
  puVar8[5] = uStack_60;
  puVar8[6] = uStack_58;
  puVar8[7] = uStack_50;
  *(byte *)(lVar19 + 0x9c) = *(byte *)(lVar19 + 0x9c) | 4;
  if (*(char *)((longlong)param_1 + 0x12) == '\x01') {
    auVar43 = ZEXT1664(auVar43._0_16_);
    (**(code **)(*param_1 + 0x18))(param_1,&uStack_e8,auStack_178,auStack_188);
    plVar20 = (longlong *)func_0x000144f97130(0x80);
    FUN_144da6330(plVar20);
    fVar25 = _DAT_146159ca4;
    auVar33._4_4_ = _DAT_146159c24;
    auVar33._0_4_ = _DAT_146159c24;
    auVar33._8_4_ = _DAT_146159c24;
    auVar33._12_4_ = _DAT_146159c24;
    *plVar20 = (longlong)&UNK_14667af70;
    *(undefined4 *)(plVar20 + 2) = 0x1ff;
    *(undefined8 *)((longlong)plVar20 + 0x14) = 0;
    *(undefined1 (*) [32])(plVar20 + 6) = ZEXT1232(ZEXT812(0));
    *(undefined1 (*) [32])(plVar20 + 8) = ZEXT1232(ZEXT812(0));
    lVar21 = _UNK_14615b278;
    lVar22 = _DAT_14615b270;
    auVar38 = auVar43._0_16_;
    *(undefined1 (*) [16])(plVar20 + 0xc) = auVar38;
    plVar20[4] = lVar22;
    plVar20[5] = lVar21;
    auVar32 = vminps_avx(auVar38,auVar38);
    *(undefined4 *)((longlong)plVar20 + 0x3c) = 1;
    *plVar20 = (longlong)&UNK_14667c1b0;
    *(undefined1 *)(plVar20 + 2) = 9;
    auVar27._0_4_ = auVar32._0_4_ * fVar25;
    auVar27._4_4_ = auVar32._4_4_ * fVar25;
    auVar27._8_4_ = auVar32._8_4_ * fVar25;
    auVar27._12_4_ = auVar32._12_4_ * fVar25;
    auVar26 = vminps_avx(auVar33,auVar27);
    auVar32 = vcmpps_avx(ZEXT416(0) << 0x20,auVar26,2);
    if (auVar32 == (undefined1  [16])0x0) {
      *(undefined4 *)((longlong)plVar20 + 0x2c) = 0x3d23d70a;
      auVar32 = *(undefined1 (*) [16])(plVar20 + 4);
    }
    else {
      auVar32 = vblendps_avx(ZEXT416(0) << 0x20,auVar26,8);
    }
    auVar34._4_4_ = _DAT_145fc6f48;
    auVar34._0_4_ = _DAT_145fc6f48;
    auVar34._8_4_ = _DAT_145fc6f48;
    auVar34._12_4_ = _DAT_145fc6f48;
    auVar32 = vblendps_avx(auVar38,auVar32,8);
    lVar22 = vmovlps_avx(auVar34);
    plVar20[6] = lVar22;
    uVar17 = _DAT_146159bd4;
    *(undefined4 *)(plVar20 + 7) = 0xbf800000;
    *(undefined1 (*) [16])(plVar20 + 4) = auVar32;
    auVar32 = vrsqrtss_avx(ZEXT416(uVar17),ZEXT416(uVar17));
    auVar32 = vrcpss_avx(auVar32,auVar32);
    *(int *)((longlong)plVar20 + 0x14) = auVar32._0_4_;
    fVar44 = fVar25;
    fVar31 = fVar25;
    fVar45 = fVar25;
    func_0x0001450e6ed0();
    *(undefined4 *)((longlong)plVar20 + 0x6c) = 0x40c90fdb;
    (**(code **)(*plVar20 + 0x60))(plVar20,0,0xffffffff);
    auVar39._0_12_ = ZEXT812(0);
    auVar39._12_4_ = 0;
    auVar32 = vblendps_avx(auVar39,*(undefined1 (*) [16])(plVar20 + 8),8);
    *(undefined1 (*) [16])(plVar20 + 8) = auVar32;
    *(undefined1 (*) [16])(plVar20 + 0xe) = auVar39;
    *(undefined4 *)(plVar20 + 3) = 0xa64c19b7;
    auVar26 = vminps_avx(auStack_178,auStack_188);
    uVar3 = *(undefined4 *)((longlong)plVar20 + 0x2c);
    auVar41._4_4_ = uVar3;
    auVar41._0_4_ = uVar3;
    auVar41._8_4_ = uVar3;
    auVar41._12_4_ = uVar3;
    auVar38._0_4_ = auVar26._0_4_ * fVar25;
    auVar38._4_4_ = auVar26._4_4_ * fVar44;
    auVar38._8_4_ = auVar26._8_4_ * fVar31;
    auVar38._12_4_ = auVar26._12_4_ * fVar45;
    auVar27 = vminps_avx(auVar41,auVar38);
    auVar26 = vcmpps_avx(auVar39,auVar27,2);
    if (auVar26 == (undefined1  [16])0x0) {
      *(undefined4 *)((longlong)plVar20 + 0x2c) = 0x3d23d70a;
      auVar26 = *(undefined1 (*) [16])(plVar20 + 4);
    }
    else {
      auVar26 = vblendps_avx(auVar27,*(undefined1 (*) [16])(plVar20 + 4),7);
    }
    fVar25 = auStack_178._0_4_;
    fVar44 = fVar25 * fVar25;
    auVar40._4_4_ = fVar25;
    auVar40._0_4_ = fVar25;
    auVar40._8_4_ = fVar25;
    auVar40._12_4_ = fVar25;
    fVar31 = auStack_188._0_4_;
    fVar25 = fVar31 + fVar31;
    auVar33 = vunpcklps_avx(auVar40,auStack_188);
    auVar27 = vsubps_avx(auVar32,auVar33);
    auVar36._0_4_ = auVar32._0_4_ + auVar33._0_4_;
    auVar36._4_4_ = auVar32._4_4_ + auVar33._4_4_;
    auVar36._8_4_ = auVar32._8_4_ + auVar33._8_4_;
    auVar36._12_4_ = auVar32._12_4_ + auVar33._12_4_;
    auVar9._4_12_ = auStack_188._4_12_;
    auVar9._0_4_ = fVar31 * fVar31 + fVar44;
    auVar32 = vblendps_avx(auVar36,auVar26,8);
    lVar22 = vmovlps_avx(auVar27);
    plVar20[6] = lVar22;
    uVar3 = vextractps_avx(auVar27,2);
    *(undefined4 *)(plVar20 + 7) = uVar3;
    *(undefined1 (*) [16])(plVar20 + 4) = auVar32;
    auVar32 = vrsqrtss_avx(auVar9,auVar9);
    auVar32 = vrcpss_avx(auVar32,auVar32);
    *(int *)((longlong)plVar20 + 0x14) = auVar32._0_4_;
    func_0x0001450e6ed0(auStack_178._0_8_,fVar25,plVar20 + 0xc);
    lVar22 = _DAT_14a9b33c0;
    *(float *)((longlong)plVar20 + 0x6c) = fVar44 * _DAT_145fc6f80 * fVar25;
    (**(code **)(*plVar20 + 0x60))(plVar20,*(undefined8 *)(lVar22 + 0x330),0xffffffff);
    uVar7 = *(ushort *)(param_1 + 3);
    *(undefined8 *)(*(longlong *)(lVar19 + 0x88) + 8 + (ulonglong)uVar7 * 0x10) = 0x2000083e40;
    puVar46 = (undefined1 *)((ulonglong)puVar46 & 0xffffffffffffff00);
    FUN_1450349c0(lVar19,uVar7,plVar20,1,puVar46);
    uVar7 = *(ushort *)(param_1 + 3);
    lVar22 = *(longlong *)(lVar19 + 0x78);
    puVar8 = (undefined8 *)(lVar22 + 0x20 + (ulonglong)uVar7 * 0x40);
    *puVar8 = uStack_c8;
    puVar8[1] = uStack_c0;
    puVar8[2] = uStack_b8;
    puVar8[3] = uStack_b0;
    puVar8 = (undefined8 *)(lVar22 + (ulonglong)uVar7 * 0x40);
    *puVar8 = uStack_e8;
    puVar8[1] = uStack_e0;
    puVar8[2] = uStack_d8;
    puVar8[3] = uStack_d0;
    *(byte *)(lVar19 + 0x9c) = *(byte *)(lVar19 + 0x9c) | 4;
    FUN_14017dc60(plVar20,1);
  }
  if ((char)param_1[0x25] == '\x01') {
    auVar32 = vblendps_avx(ZEXT816(0),
                           ZEXT416((uint)(*(float *)(param_1 + 0x13) * _DAT_145fc6edc +
                                         *(float *)((longlong)param_1 + 0xa4))),1);
    auVar32 = vshufps_avx(auVar32,ZEXT416(*(uint *)(param_1 + 0x14)),0x41);
    fStack_f8 = auVar32._0_4_ + *(float *)(param_1 + 0x1e);
    fStack_f4 = auVar32._4_4_ + *(float *)((longlong)param_1 + 0xf4);
    fStack_f0 = auVar32._8_4_ + *(float *)(param_1 + 0x1f);
    fStack_ec = auVar32._12_4_ + *(float *)((longlong)param_1 + 0xfc);
    fStack_108 = auVar32._0_4_ + *(float *)(param_1 + 0x1c);
    fStack_104 = auVar32._4_4_ + *(float *)((longlong)param_1 + 0xe4);
    fStack_100 = auVar32._8_4_ + *(float *)(param_1 + 0x1d);
    fStack_fc = auVar32._12_4_ + *(float *)((longlong)param_1 + 0xec);
    FUN_143ba2650(&fStack_108,&fStack_f8,&uStack_e8,auStack_118);
    plVar20 = (longlong *)func_0x000144f97130(0x80);
    FUN_14052c5a0(plVar20);
    *(undefined4 *)(plVar20 + 3) = 0x966d1185;
    uVar3 = (undefined4)param_1[0x1b];
    auStack_128._4_4_ = uVar3;
    auStack_128._0_4_ = uVar3;
    auStack_128._8_4_ = uVar3;
    auStack_128._12_4_ = uVar3;
    func_0x00014517f8a0(plVar20,auStack_128,auStack_118);
    (**(code **)(*plVar20 + 0x60))(plVar20,*(undefined8 *)(_DAT_14a9b33c0 + 0x330),0xffffffff);
    puVar46 = (undefined1 *)((ulonglong)puVar46 & 0xffffffffffffff00);
    FUN_1450349c0(lVar19,*(undefined2 *)((longlong)param_1 + 300),plVar20,1,puVar46);
    lVar22 = *(longlong *)(lVar19 + 0x78);
    lVar21 = (ulonglong)*(ushort *)((longlong)param_1 + 300) * 0x40;
    puVar8 = (undefined8 *)(lVar22 + 0x20 + lVar21);
    *puVar8 = uStack_c8;
    puVar8[1] = uStack_c0;
    puVar8[2] = uStack_b8;
    puVar8[3] = uStack_b0;
    puVar8 = (undefined8 *)(lVar22 + lVar21);
    *puVar8 = uStack_e8;
    puVar8[1] = uStack_e0;
    puVar8[2] = uStack_d8;
    puVar8[3] = uStack_d0;
    *(byte *)(lVar19 + 0x9c) = *(byte *)(lVar19 + 0x9c) | 4;
    FUN_14017dc60(plVar20,1);
    bVar18 = *(byte *)(param_1 + 0x25);
    if ((bVar18 == 1) && ((*(byte *)((longlong)param_1 + 0x14) & 1) != 0)) {
      plVar20 = (longlong *)func_0x000144f97130(0x80);
      FUN_14052c5a0(plVar20);
      *(undefined4 *)(plVar20 + 3) = 0xf1c165db;
      auVar35._0_12_ = ZEXT812(0);
      auVar35._12_4_ = 0;
      auVar32 = vsubps_avx(*(undefined1 (*) [16])(param_1 + 0x1c),
                           *(undefined1 (*) [16])(param_1 + 0x1e));
      auVar28._0_4_ = auVar32._0_4_ * auVar32._0_4_;
      auVar28._4_4_ = auVar32._4_4_ * auVar32._4_4_;
      auVar28._8_4_ = auVar32._8_4_ * auVar32._8_4_;
      auVar28._12_4_ = auVar32._12_4_ * auVar32._12_4_;
      auVar32 = vblendps_avx(auVar28,auVar35,8);
      auVar32 = vhaddps_avx(auVar32,auVar32);
      auVar32 = vhaddps_avx(auVar32,auVar32);
      vrsqrtss_avx(auVar32,auVar32);
      vcmpss_avx(ZEXT416(_DAT_146159bfc),auVar32,2);
      FUN_14517f870(plVar20,(int)param_1[0x1b]);
      (**(code **)(*plVar20 + 0x60))(plVar20,*(undefined8 *)(_DAT_14a9b33c0 + 0x330),0xffffffff);
      puVar46 = (undefined1 *)((ulonglong)puVar46 & 0xffffffffffffff00);
      FUN_1450349c0(lVar19,*(undefined2 *)((longlong)param_1 + 0x12e),plVar20,1,puVar46);
      lVar22 = *(longlong *)(lVar19 + 0x78);
      lVar21 = (ulonglong)*(ushort *)((longlong)param_1 + 300) * 0x40;
      lVar23 = (ulonglong)*(ushort *)((longlong)param_1 + 0x12e) * 0x40;
      puVar8 = (undefined8 *)(lVar22 + lVar21);
      uVar10 = *puVar8;
      uVar11 = puVar8[1];
      uVar12 = puVar8[2];
      uVar13 = puVar8[3];
      puVar8 = (undefined8 *)(lVar22 + 0x20 + lVar21);
      uVar14 = puVar8[1];
      uVar15 = puVar8[2];
      uVar16 = puVar8[3];
      puVar1 = (undefined8 *)(lVar22 + 0x20 + lVar23);
      *puVar1 = *puVar8;
      puVar1[1] = uVar14;
      puVar1[2] = uVar15;
      puVar1[3] = uVar16;
      puVar8 = (undefined8 *)(lVar22 + lVar23);
      *puVar8 = uVar10;
      puVar8[1] = uVar11;
      puVar8[2] = uVar12;
      puVar8[3] = uVar13;
      *(byte *)(lVar19 + 0x9c) = *(byte *)(lVar19 + 0x9c) | 4;
      FUN_14017dc60(plVar20,CONCAT71((int7)((ulonglong)lVar23 >> 8),1));
      bVar18 = *(byte *)(param_1 + 0x25);
    }
    if (((bVar18 & 1) != 0) && ((*(byte *)((longlong)param_1 + 0x129) & 1) != 0)) {
      plVar20 = (longlong *)func_0x000144f97130(0x80);
      FUN_14052c5a0(plVar20);
      *(undefined4 *)(plVar20 + 3) = 0x9373b76c;
      auVar42._0_12_ = ZEXT812(0);
      auVar42._12_4_ = 0;
      auVar43 = ZEXT1664(auVar42);
      auVar32 = vsubps_avx(*(undefined1 (*) [16])(param_1 + 0x1c),
                           *(undefined1 (*) [16])(param_1 + 0x1e));
      auVar29._0_4_ = auVar32._0_4_ * auVar32._0_4_;
      auVar29._4_4_ = auVar32._4_4_ * auVar32._4_4_;
      auVar29._8_4_ = auVar32._8_4_ * auVar32._8_4_;
      auVar29._12_4_ = auVar32._12_4_ * auVar32._12_4_;
      auVar32 = vblendps_avx(auVar29,auVar42,8);
      auVar32 = vhaddps_avx(auVar32,auVar32);
      auVar26 = vhaddps_avx(auVar32,auVar32);
      auVar32 = vrsqrtss_avx(auVar26,auVar26);
      fVar25 = auVar32._0_4_;
      auVar32 = vcmpss_avx(ZEXT416(_DAT_146159bfc),auVar26,2);
      FUN_14517f870(plVar20,(int)param_1[0x1b],
                    auVar32._0_4_ &
                    (uint)(((fVar25 * fVar25 * auVar26._0_4_ * _DAT_145fc6f08 + _DAT_145fc6edc) *
                            fVar25 + fVar25) * auVar26._0_4_));
      (**(code **)(*plVar20 + 0x60))(plVar20,*(undefined8 *)(_DAT_14a9b33c0 + 0x330),0xffffffff);
      puVar46 = (undefined1 *)((ulonglong)puVar46 & 0xffffffffffffff00);
      FUN_1450349c0(lVar19,(short)param_1[0x26],plVar20,1,puVar46);
      uVar12 = _DAT_146159bc0;
      uVar11 = _UNK_14614f7f8;
      uVar10 = _DAT_14614f7f0;
      lVar22 = *(longlong *)(lVar19 + 0x78);
      lVar21 = (ulonglong)*(ushort *)(param_1 + 0x26) * 0x40;
      *(undefined1 (*) [16])(lVar22 + lVar21) = ZEXT416(_DAT_145fc6ed8);
      puVar8 = (undefined8 *)(lVar22 + 0x10 + lVar21);
      *puVar8 = uVar12;
      puVar8[1] = 0;
      puVar8 = (undefined8 *)(lVar22 + 0x20 + lVar21);
      *puVar8 = uVar10;
      puVar8[1] = uVar11;
      *(undefined1 (*) [16])(lVar22 + 0x30 + lVar21) = auVar43._0_16_;
      *(byte *)(lVar19 + 0x9c) = *(byte *)(lVar19 + 0x9c) | 4;
      *(undefined8 *)
       (*(longlong *)(lVar19 + 0x88) + 8 + (ulonglong)*(ushort *)(param_1 + 0x26) * 0x10) = 0xa00;
      FUN_14017dc60(plVar20,1);
      lVar22 = *(longlong *)(lVar19 + 0x88);
      puVar2 = (ulonglong *)(lVar22 + 8 + (ulonglong)*(ushort *)((longlong)param_1 + 300) * 0x10);
      *puVar2 = *puVar2 & 0xfffffffffffff5ff;
      if (*(char *)((longlong)param_1 + 0x14) == '\x01') {
        puVar2 = (ulonglong *)
                 (lVar22 + 8 + (ulonglong)*(ushort *)((longlong)param_1 + 0x12e) * 0x10);
        *puVar2 = *puVar2 & 0xfffffffffffff5ff;
      }
    }
  }
  if (*(char *)((longlong)param_1 + 0x14) == '\x01') {
    lVar22 = FUN_145034810(**(undefined8 **)(lVar19 + 0x70));
    *(undefined4 *)(lVar22 + 0x18) = 0x85437605;
    FUN_1450349c0(lVar19,*(undefined2 *)((longlong)param_1 + 0x1c),lVar22,1,
                  (ulonglong)puVar46 & 0xffffffffffffff00);
    FUN_14017dc60(lVar22,1);
    auStack_138._0_12_ = ZEXT812(0);
    auStack_138._12_4_ = 0;
    puVar46 = auStack_138;
    (**(code **)(*param_1 + 0x88))(param_1,lVar19,1,_DAT_145fc6ed8,puVar46);
    puVar8 = *(undefined8 **)(lVar19 + 0x78);
    uVar7 = *(ushort *)((longlong)param_1 + 0x1c);
    uVar10 = *puVar8;
    uVar11 = puVar8[1];
    uVar12 = puVar8[2];
    uVar13 = puVar8[3];
    uVar14 = puVar8[5];
    uVar15 = puVar8[6];
    uVar16 = puVar8[7];
    puVar1 = puVar8 + (ulonglong)uVar7 * 8 + 4;
    *puVar1 = puVar8[4];
    puVar1[1] = uVar14;
    puVar1[2] = uVar15;
    puVar1[3] = uVar16;
    puVar8 = puVar8 + (ulonglong)uVar7 * 8;
    *puVar8 = uVar10;
    puVar8[1] = uVar11;
    puVar8[2] = uVar12;
    puVar8[3] = uVar13;
    *(byte *)(lVar19 + 0x9c) = *(byte *)(lVar19 + 0x9c) | 4;
    puVar8 = *(undefined8 **)(lVar19 + 0x88);
    uVar7 = *(ushort *)((longlong)param_1 + 0x1c);
    uVar10 = puVar8[1];
    puVar8[(ulonglong)uVar7 * 2] = *puVar8;
    (puVar8 + (ulonglong)uVar7 * 2)[1] = uVar10;
  }
  if (*(char *)((longlong)param_1 + 0x13) == '\x01') {
    lVar22 = func_0x000144f97130(0x70);
    auStack_148._4_4_ = _DAT_146159ef4;
    auStack_148._0_4_ = _DAT_146159ef4;
    auStack_148._8_4_ = _DAT_146159ef4;
    auStack_148._12_4_ = _DAT_146159ef4;
    FUN_1402a9b90(lVar22);
    *(byte *)(lVar22 + 0x11) = *(byte *)(lVar22 + 0x11) | 0x80;
    *(undefined4 *)(lVar22 + 0x18) = 0x329617b0;
    FUN_1450349c0(lVar19,*(undefined2 *)((longlong)param_1 + 0x1a),lVar22,1,
                  (ulonglong)puVar46 & 0xffffffffffffff00);
    FUN_14017dc60(lVar22,1);
    lVar22 = *(longlong *)(lVar19 + 0x78);
    lVar21 = (ulonglong)*(ushort *)((longlong)param_1 + 0x1a) * 0x40;
    *(undefined1 (*) [16])(lVar22 + lVar21) = ZEXT416(_DAT_145fc6ed8);
    puVar8 = (undefined8 *)(lVar22 + 0x10 + lVar21);
    *puVar8 = _DAT_146159bc0;
    puVar8[1] = 0;
    uVar10 = _UNK_14614f7f8;
    puVar8 = (undefined8 *)(lVar22 + 0x20 + lVar21);
    *puVar8 = _DAT_14614f7f0;
    puVar8[1] = uVar10;
    *(undefined1 (*) [16])(lVar22 + 0x30 + lVar21) = ZEXT816(0) << 0x20;
    *(byte *)(lVar19 + 0x9c) = *(byte *)(lVar19 + 0x9c) | 4;
  }
  FUN_142116fc0(lVar19);
  auVar37._0_12_ = ZEXT812(0);
  auVar37._12_4_ = 0;
  auVar30._0_4_ = *(uint *)(param_1 + 5) ^ _DAT_145fc6f10;
  auVar30._4_4_ = _DAT_145fc6f10;
  auVar30._8_4_ = _DAT_145fc6f10;
  auVar30._12_4_ = _DAT_145fc6f10;
  auVar32 = vblendps_avx(auVar37,auVar30,1);
  auVar26 = vblendps_avx(auVar37,ZEXT416((uint)((*(float *)((longlong)param_1 + 0xb4) +
                                                *(float *)(param_1 + 0x16)) * _DAT_145fc6edc)),1);
  auStack_168 = vshufps_avx(auVar26,auVar32,0x41);
  func_0x000144ee47b0(lVar19);
  return lVar19;
}

