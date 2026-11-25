// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400c2400  size: 2573 bytes
// Name:    FUN_1400c2400
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144da6330, FUN_145034810, FUN_14052c5a0, FUN_1402a9b90, FUN_142116fc0, FUN_14017d740, FUN_14517f870, FUN_1453c6260, FUN_1401054b0, FUN_145034ac0, FUN_1450349c0, FUN_14017dc60
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1400c2400(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  ushort uVar8;
  undefined8 *puVar9;
  undefined1 auVar10 [16];
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  uint uVar19;
  longlong lVar20;
  longlong *plVar21;
  undefined8 uVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar37;
  undefined1 auVar35 [16];
  float fVar38;
  undefined1 auVar36 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  float fVar43;
  float fVar46;
  float fVar47;
  float fVar48;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  float fVar49;
  float fVar52;
  float fVar53;
  float fVar54;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  float fVar58;
  undefined1 auVar57 [64];
  undefined1 auVar59 [16];
  undefined1 auVar60 [64];
  undefined1 auVar61 [64];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  ulonglong in_stack_fffffffffffffe68;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined1 auStack_138 [16];
  undefined1 auStack_128 [16];
  undefined1 auStack_118 [16];
  undefined1 auStack_108 [16];
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 auStack_e8 [16];
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  
  bVar3 = *(byte *)((longlong)param_1 + 0x12);
  bVar4 = *(byte *)((longlong)param_1 + 0x13);
  bVar5 = *(byte *)((longlong)param_1 + 0xfd);
  bVar6 = *(byte *)((longlong)param_1 + 0xfe);
  bVar7 = *(byte *)((longlong)param_1 + 0x14);
  lVar20 = func_0x000144f97130(0xb0);
  FUN_14017d740(lVar20);
  FUN_145034ac0(lVar20,bVar7 + 2 + (uint)bVar6 + (uint)bVar5 + (uint)bVar4 + (uint)bVar3,0,0);
  FUN_1453c6260(lVar20,0xffffffffffffffff,0xffffffffffffffff,0);
  (**(code **)(*param_1 + 0x10))(param_1,&uStack_188);
  plVar21 = (longlong *)func_0x000144f97130(0x70);
  auStack_e8._4_4_ = _DAT_145fc6ed8;
  auStack_e8._0_4_ = _DAT_145fc6ed8;
  auStack_e8._8_4_ = _DAT_145fc6ed8;
  auStack_e8._12_4_ = _DAT_145fc6ed8;
  auVar60 = ZEXT1664(auStack_e8);
  FUN_1402a9b90(plVar21);
  *(undefined4 *)(plVar21 + 3) = 0xc21c1aec;
  (**(code **)(*param_1 + 0x80))(param_1,&uStack_f8);
  uStack_148 = uStack_f8;
  uStack_140 = uStack_f0;
  func_0x000144fda6a0(plVar21);
  auVar29._0_12_ = ZEXT812(0);
  auVar29._12_4_ = 0;
  fVar43 = _DAT_1492de9d8 * *(float *)(param_1 + 0xe);
  auVar26._4_4_ = fVar43;
  auVar26._0_4_ = fVar43;
  auVar26._8_4_ = fVar43;
  auVar26._12_4_ = fVar43;
  auVar29 = vcmpps_avx(auVar29,auVar26,2);
  if (auVar29 == (undefined1  [16])0x0) {
    *(undefined4 *)((longlong)plVar21 + 0x2c) = 0x3d23d70a;
  }
  else {
    auVar29 = vblendps_avx(auVar26,*(undefined1 (*) [16])(plVar21 + 4),7);
    *(undefined1 (*) [16])(plVar21 + 4) = auVar29;
  }
  lVar24 = _DAT_14a9b33c0;
  *(byte *)((longlong)plVar21 + 0x11) = *(byte *)((longlong)plVar21 + 0x11) | 0x80;
  (**(code **)(*plVar21 + 0x60))(plVar21,*(undefined8 *)(lVar24 + 0x330),0xffffffff);
  in_stack_fffffffffffffe68 = in_stack_fffffffffffffe68 & 0xffffffffffffff00;
  FUN_1450349c0(lVar20,0,plVar21,1,in_stack_fffffffffffffe68);
  FUN_14017dc60(plVar21,1);
  puVar9 = *(undefined8 **)(lVar20 + 0x78);
  *puVar9 = uStack_188;
  puVar9[1] = uStack_180;
  puVar9[2] = uStack_178;
  puVar9[3] = uStack_170;
  puVar9[4] = uStack_168;
  puVar9[5] = uStack_160;
  puVar9[6] = uStack_158;
  puVar9[7] = uStack_150;
  *(byte *)(lVar20 + 0x9c) = *(byte *)(lVar20 + 0x9c) | 4;
  auVar61 = ZEXT1664(auVar60._0_16_);
  uVar22 = func_0x000141407de0(param_1);
  **(undefined8 **)(lVar20 + 0x88) = uVar22;
  plVar21 = (longlong *)func_0x000144f97130(0x80);
  FUN_14052c5a0(plVar21);
  uVar2 = _DAT_146159ef4;
  auVar60 = ZEXT464(_DAT_146159c24);
  *(undefined4 *)(plVar21 + 3) = 0xc8715735;
  FUN_14517f870(plVar21,uVar2);
  (**(code **)(*plVar21 + 0x60))(plVar21,*(undefined8 *)(_DAT_14a9b33c0 + 0x330),0xffffffff);
  in_stack_fffffffffffffe68 = in_stack_fffffffffffffe68 & 0xffffffffffffff00;
  FUN_1450349c0(lVar20,1,plVar21,1,in_stack_fffffffffffffe68);
  FUN_14017dc60(plVar21,1);
  lVar24 = *(longlong *)(lVar20 + 0x78);
  *(undefined8 *)(lVar24 + 0x40) = uStack_188;
  *(undefined8 *)(lVar24 + 0x48) = uStack_180;
  *(undefined8 *)(lVar24 + 0x50) = uStack_178;
  *(undefined8 *)(lVar24 + 0x58) = uStack_170;
  *(undefined8 *)(lVar24 + 0x60) = uStack_168;
  *(undefined8 *)(lVar24 + 0x68) = uStack_160;
  *(undefined8 *)(lVar24 + 0x70) = uStack_158;
  *(undefined8 *)(lVar24 + 0x78) = uStack_150;
  *(byte *)(lVar20 + 0x9c) = *(byte *)(lVar20 + 0x9c) | 4;
  auVar60 = ZEXT1664(auVar60._0_16_);
  auVar61 = ZEXT1664(auVar61._0_16_);
  uVar22 = func_0x000141407de0(param_1);
  lVar24 = *(longlong *)(lVar20 + 0x88);
  *(undefined8 *)(lVar24 + 0x10) = uVar22;
  *(undefined8 *)(lVar24 + 0x18) = 0;
  if (*(char *)((longlong)param_1 + 0xfd) == '\x01') {
    plVar21 = (longlong *)func_0x000144f97130(0x70);
    FUN_1401054b0(plVar21,_DAT_145fc6ed8);
    *(undefined4 *)(plVar21 + 3) = 0xe25da508;
    func_0x000144fad540(plVar21,*(float *)(param_1 + 0xe) * _DAT_146159ca4);
    (**(code **)(*plVar21 + 0x60))(plVar21,*(undefined8 *)(_DAT_14a9b33c0 + 0x330),0xffffffff);
    in_stack_fffffffffffffe68 = in_stack_fffffffffffffe68 & 0xffffffffffffff00;
    FUN_1450349c0(lVar20,(short)param_1[0x20],plVar21,1,in_stack_fffffffffffffe68);
    FUN_14017dc60(plVar21,1);
    uVar8 = *(ushort *)(param_1 + 0x20);
    lVar24 = *(longlong *)(lVar20 + 0x78);
    puVar9 = (undefined8 *)(lVar24 + (ulonglong)uVar8 * 0x40);
    *puVar9 = uStack_188;
    puVar9[1] = uStack_180;
    puVar9[2] = uStack_178;
    puVar9[3] = uStack_170;
    puVar9 = (undefined8 *)(lVar24 + 0x20 + (ulonglong)uVar8 * 0x40);
    *puVar9 = uStack_168;
    puVar9[1] = uStack_160;
    puVar9[2] = uStack_158;
    puVar9[3] = uStack_150;
    *(byte *)(lVar20 + 0x9c) = *(byte *)(lVar20 + 0x9c) | 4;
    auVar60 = ZEXT1664(auVar60._0_16_);
    auVar61 = ZEXT1664(auVar61._0_16_);
    uVar22 = func_0x000141407de0(param_1);
    *(undefined8 *)(*(longlong *)(lVar20 + 0x88) + (ulonglong)*(ushort *)(param_1 + 0x20) * 0x10) =
         uVar22;
  }
  if (*(char *)((longlong)param_1 + 0x12) == '\x01') {
    plVar21 = (longlong *)func_0x000144f97130(0x80);
    FUN_144da6330(plVar21);
    fVar43 = _DAT_146159ca4;
    auVar30._4_4_ = _DAT_146159c24;
    auVar30._0_4_ = _DAT_146159c24;
    auVar30._8_4_ = _DAT_146159c24;
    auVar30._12_4_ = _DAT_146159c24;
    *plVar21 = (longlong)&UNK_14667af70;
    *(undefined4 *)(plVar21 + 2) = 0x1ff;
    *(undefined8 *)((longlong)plVar21 + 0x14) = 0;
    *(undefined1 (*) [32])(plVar21 + 6) = ZEXT1232(ZEXT812(0));
    *(undefined1 (*) [32])(plVar21 + 8) = ZEXT1232(ZEXT812(0));
    lVar25 = _UNK_14615b278;
    lVar24 = _DAT_14615b270;
    auVar35 = auVar61._0_16_;
    *(undefined1 (*) [16])(plVar21 + 0xc) = auVar35;
    plVar21[4] = lVar24;
    plVar21[5] = lVar25;
    auVar29 = vminps_avx(auVar35,auVar35);
    *(undefined4 *)((longlong)plVar21 + 0x3c) = 1;
    *plVar21 = (longlong)&UNK_14667c1b0;
    *(undefined1 *)(plVar21 + 2) = 9;
    auVar27._0_4_ = auVar29._0_4_ * fVar43;
    auVar27._4_4_ = auVar29._4_4_ * fVar43;
    auVar27._8_4_ = auVar29._8_4_ * fVar43;
    auVar27._12_4_ = auVar29._12_4_ * fVar43;
    auVar26 = vminps_avx(auVar30,auVar27);
    auVar29 = vcmpps_avx(ZEXT416(0) << 0x20,auVar26,2);
    if (auVar29 == (undefined1  [16])0x0) {
      *(undefined4 *)((longlong)plVar21 + 0x2c) = 0x3d23d70a;
      auVar29 = *(undefined1 (*) [16])(plVar21 + 4);
    }
    else {
      auVar29 = vblendps_avx(ZEXT416(0) << 0x20,auVar26,8);
    }
    auVar31._4_4_ = _DAT_145fc6f48;
    auVar31._0_4_ = _DAT_145fc6f48;
    auVar31._8_4_ = _DAT_145fc6f48;
    auVar31._12_4_ = _DAT_145fc6f48;
    auVar29 = vblendps_avx(auVar35,auVar29,8);
    lVar24 = vmovlps_avx(auVar31);
    plVar21[6] = lVar24;
    uVar19 = _DAT_146159bd4;
    *(undefined4 *)(plVar21 + 7) = 0xbf800000;
    *(undefined1 (*) [16])(plVar21 + 4) = auVar29;
    auVar29 = vrsqrtss_avx(ZEXT416(uVar19),ZEXT416(uVar19));
    auVar29 = vrcpss_avx(auVar29,auVar29);
    *(int *)((longlong)plVar21 + 0x14) = auVar29._0_4_;
    auVar61 = ZEXT1664(auVar35);
    fVar46 = fVar43;
    fVar28 = fVar43;
    fVar58 = fVar43;
    func_0x0001450e6ed0();
    *(undefined4 *)((longlong)plVar21 + 0x6c) = 0x40c90fdb;
    (**(code **)(*plVar21 + 0x60))(plVar21,0,0xffffffff);
    auVar62._0_12_ = ZEXT812(0);
    auVar62._12_4_ = 0;
    auVar60 = ZEXT1664(auVar62);
    auVar29 = vblendps_avx(auVar62,*(undefined1 (*) [16])(plVar21 + 8),8);
    *(undefined1 (*) [16])(plVar21 + 8) = auVar29;
    *(undefined1 (*) [16])(plVar21 + 0xe) = auVar62;
    *(undefined4 *)(plVar21 + 3) = 0xa64c19b7;
    (**(code **)(*param_1 + 0x18))(param_1,&uStack_d8,auStack_108,auStack_118);
    uVar2 = *(undefined4 *)((longlong)plVar21 + 0x2c);
    auVar39._4_4_ = uVar2;
    auVar39._0_4_ = uVar2;
    auVar39._8_4_ = uVar2;
    auVar39._12_4_ = uVar2;
    auVar29 = vminps_avx(auStack_108,auStack_118);
    auVar35._0_4_ = auVar29._0_4_ * fVar43;
    auVar35._4_4_ = auVar29._4_4_ * fVar46;
    auVar35._8_4_ = auVar29._8_4_ * fVar28;
    auVar35._12_4_ = auVar29._12_4_ * fVar58;
    auVar26 = vminps_avx(auVar39,auVar35);
    auVar29 = vcmpps_avx(auVar60._0_16_,auVar26,2);
    if (auVar29 == (undefined1  [16])0x0) {
      *(undefined4 *)((longlong)plVar21 + 0x2c) = 0x3d23d70a;
      auVar29 = *(undefined1 (*) [16])(plVar21 + 4);
    }
    else {
      auVar29 = vblendps_avx(auVar26,*(undefined1 (*) [16])(plVar21 + 4),7);
    }
    fVar43 = auStack_108._0_4_;
    fVar46 = fVar43 * fVar43;
    auVar40._4_4_ = fVar43;
    auVar40._0_4_ = fVar43;
    auVar40._8_4_ = fVar43;
    auVar40._12_4_ = fVar43;
    fVar28 = auStack_118._0_4_;
    fVar43 = fVar28 + fVar28;
    auVar26 = *(undefined1 (*) [16])(plVar21 + 8);
    auVar35 = vunpcklps_avx(auVar40,auStack_118);
    auVar10._4_12_ = auStack_118._4_12_;
    auVar10._0_4_ = fVar28 * fVar28 + fVar46;
    auVar27 = vrsqrtss_avx(auVar10,auVar10);
    auVar30 = vsubps_avx(auVar26,auVar35);
    auVar41._0_4_ = auVar26._0_4_ + auVar35._0_4_;
    auVar41._4_4_ = auVar26._4_4_ + auVar35._4_4_;
    auVar41._8_4_ = auVar26._8_4_ + auVar35._8_4_;
    auVar41._12_4_ = auVar26._12_4_ + auVar35._12_4_;
    auVar29 = vblendps_avx(auVar41,auVar29,8);
    auVar60 = ZEXT1664(auVar29);
    lVar24 = vmovlps_avx(auVar30);
    plVar21[6] = lVar24;
    uVar2 = vextractps_avx(auVar30,2);
    *(undefined4 *)(plVar21 + 7) = uVar2;
    *(undefined1 (*) [16])(plVar21 + 4) = auVar29;
    auVar29 = vrcpss_avx(auVar27,auVar27);
    *(int *)((longlong)plVar21 + 0x14) = auVar29._0_4_;
    func_0x0001450e6ed0(auStack_108._0_8_,fVar43,plVar21 + 0xc);
    lVar24 = _DAT_14a9b33c0;
    *(float *)((longlong)plVar21 + 0x6c) = fVar46 * _DAT_145fc6f80 * fVar43;
    (**(code **)(*plVar21 + 0x60))(plVar21,*(undefined8 *)(lVar24 + 0x330),0xffffffff);
    in_stack_fffffffffffffe68 = in_stack_fffffffffffffe68 & 0xffffffffffffff00;
    FUN_1450349c0(lVar20,(short)param_1[3],plVar21,1,in_stack_fffffffffffffe68);
    FUN_14017dc60(plVar21,1);
    uVar8 = *(ushort *)(param_1 + 3);
    lVar24 = *(longlong *)(lVar20 + 0x78);
    puVar9 = (undefined8 *)(lVar24 + 0x20 + (ulonglong)uVar8 * 0x40);
    *puVar9 = uStack_b8;
    puVar9[1] = uStack_b0;
    puVar9[2] = uStack_a8;
    puVar9[3] = uStack_a0;
    puVar9 = (undefined8 *)(lVar24 + (ulonglong)uVar8 * 0x40);
    *puVar9 = uStack_d8;
    puVar9[1] = uStack_d0;
    puVar9[2] = uStack_c8;
    puVar9[3] = uStack_c0;
    *(byte *)(lVar20 + 0x9c) = *(byte *)(lVar20 + 0x9c) | 4;
    auVar60 = ZEXT1664(auVar60._0_16_);
    auVar61 = ZEXT1664(auVar61._0_16_);
    uVar22 = func_0x000141407de0(param_1);
    *(undefined8 *)(*(longlong *)(lVar20 + 0x88) + (ulonglong)*(ushort *)(param_1 + 3) * 0x10) =
         uVar22;
  }
  if (*(char *)((longlong)param_1 + 0xfe) == '\x01') {
    plVar21 = (longlong *)func_0x000144f97130(0x70);
    auVar57 = ZEXT464((uint)_DAT_145fc6ed8);
    FUN_1401054b0(plVar21,_DAT_145fc6ed8);
    *(undefined4 *)(plVar21 + 3) = 0xf86ffdee;
    func_0x000144fad540(plVar21,*(undefined4 *)((longlong)param_1 + 0x94));
    (**(code **)(*plVar21 + 0x60))(plVar21,*(undefined8 *)(_DAT_14a9b33c0 + 0x330),0xffffffff);
    in_stack_fffffffffffffe68 = in_stack_fffffffffffffe68 & 0xffffffffffffff00;
    FUN_1450349c0(lVar20,*(undefined2 *)((longlong)param_1 + 0x102),plVar21,1,
                  in_stack_fffffffffffffe68);
    FUN_14017dc60(plVar21,1);
    uVar22 = _DAT_146159bc0;
    fVar18 = _UNK_14614f7fc;
    fVar17 = _UNK_14614f7f8;
    fVar58 = _UNK_14614f7f4;
    fVar28 = _DAT_14614f7f0;
    auVar42._4_4_ = _DAT_145f43778;
    auVar42._0_4_ = _DAT_145f43778;
    auVar42._8_4_ = _DAT_145f43778;
    auVar42._12_4_ = _DAT_145f43778;
    auVar26 = vpcmpeqd_avx(auVar60._0_16_,auVar60._0_16_);
    lVar25 = param_1[0x16];
    lVar24 = *(longlong *)(lVar20 + 0x78);
    lVar23 = (ulonglong)*(ushort *)((longlong)param_1 + 0x102) * 0x40;
    auVar32._0_4_ = (int)_DAT_146159cc0;
    auVar32._4_4_ = (int)_DAT_146159cc0;
    auVar32._8_4_ = (int)_DAT_146159cc0;
    auVar32._12_4_ = (int)_DAT_146159cc0;
    auVar29 = vcvtdq2ps_avx(auVar32);
    auVar27 = vpsubd_avx(auVar32,auVar26);
    fVar49 = auVar29._0_4_ * _DAT_146159b50 + auVar29._0_4_ * _DAT_146159b4c + _DAT_146159bdc;
    fVar52 = auVar29._4_4_ * _DAT_146159b50 + auVar29._4_4_ * _DAT_146159b4c + _DAT_146159bdc;
    fVar53 = auVar29._8_4_ * _DAT_146159b50 + auVar29._8_4_ * _DAT_146159b4c + _DAT_146159bdc;
    fVar54 = auVar29._12_4_ * _DAT_146159b50 + auVar29._12_4_ * _DAT_146159b4c + _DAT_146159bdc;
    fVar43 = fVar49 * fVar49;
    fVar46 = fVar52 * fVar52;
    fVar47 = fVar53 * fVar53;
    fVar48 = fVar54 * fVar54;
    auVar65._0_4_ =
         fVar43 * (fVar43 * (fVar43 * _DAT_146159b58 + _DAT_146159b54) + _DAT_146159b64) +
         auVar61._0_4_;
    auVar65._4_4_ =
         fVar46 * (fVar46 * (fVar46 * _DAT_146159b58 + _DAT_146159b54) + _DAT_146159b64) +
         auVar61._4_4_;
    auVar65._8_4_ =
         fVar47 * (fVar47 * (fVar47 * _DAT_146159b58 + _DAT_146159b54) + _DAT_146159b64) +
         auVar61._8_4_;
    auVar65._12_4_ =
         fVar48 * (fVar48 * (fVar48 * _DAT_146159b58 + _DAT_146159b54) + _DAT_146159b64) +
         auVar61._12_4_;
    auVar59._4_4_ = _DAT_145f43774;
    auVar59._0_4_ = _DAT_145f43774;
    auVar59._8_4_ = _DAT_145f43774;
    auVar59._12_4_ = _DAT_145f43774;
    auVar29 = vpand_avx(auVar32,auVar42);
    auVar26 = vpand_avx(auVar32,auVar59);
    auVar27 = vpand_avx(auVar27,auVar59);
    auVar66._0_4_ =
         fVar43 * fVar49 * (fVar43 * (fVar43 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68) +
         fVar49;
    auVar66._4_4_ =
         fVar46 * fVar52 * (fVar46 * (fVar46 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68) +
         fVar52;
    auVar66._8_4_ =
         fVar47 * fVar53 * (fVar47 * (fVar47 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68) +
         fVar53;
    auVar66._12_4_ =
         fVar48 * fVar54 * (fVar48 * (fVar48 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68) +
         fVar54;
    auVar30 = vpcmpeqd_avx(auVar29,(undefined1  [16])0x0);
    auVar31 = vpsubd_avx((undefined1  [16])0x0,auVar29);
    auVar35 = vpcmpeqd_avx(auVar26,(undefined1  [16])0x0);
    auVar27 = vpcmpeqd_avx(auVar27,(undefined1  [16])0x0);
    auVar29 = vblendvps_avx(auVar65,auVar66,auVar30);
    auVar26 = vblendvps_avx(auVar65,auVar66,auVar31);
    auVar63._0_4_ = auVar29._0_4_ ^ _DAT_145fc6f10;
    auVar63._4_4_ = auVar29._4_4_ ^ _DAT_145fc6f10;
    auVar63._8_4_ = auVar29._8_4_ ^ _DAT_145fc6f10;
    auVar63._12_4_ = auVar29._12_4_ ^ _DAT_145fc6f10;
    auVar29 = vblendvps_avx(auVar63,auVar29,auVar35);
    auVar50._0_4_ = auVar26._0_4_ ^ _DAT_145fc6f10;
    auVar50._4_4_ = auVar26._4_4_ ^ _DAT_145fc6f10;
    auVar50._8_4_ = auVar26._8_4_ ^ _DAT_145fc6f10;
    auVar50._12_4_ = auVar26._12_4_ ^ _DAT_145fc6f10;
    auVar26 = vblendvps_avx(auVar50,auVar26,auVar27);
    auVar26 = vshufps_avx(auVar26,auVar26,0xdb);
    fVar53 = auVar26._0_4_;
    auVar51._0_4_ = fVar53 * 0.0;
    fVar54 = auVar26._4_4_;
    auVar51._4_4_ = fVar54 * 0.0;
    fVar37 = auVar26._8_4_;
    auVar51._8_4_ = fVar37 * 0.0;
    fVar38 = auVar26._12_4_;
    auVar51._12_4_ = fVar38 * 0.0;
    auVar64._0_4_ = _DAT_14614f7f0 * fVar53;
    auVar64._4_4_ = _UNK_14614f7f4 * fVar54;
    auVar64._8_4_ = _UNK_14614f7f8 * fVar37;
    auVar64._12_4_ = _UNK_14614f7fc * fVar38;
    fVar47 = auVar29._0_4_;
    auVar44._0_4_ = fVar47 * _DAT_145fc6ed8;
    fVar48 = auVar29._4_4_;
    auVar44._4_4_ = fVar48 * 0.0;
    fVar49 = auVar29._8_4_;
    auVar44._8_4_ = fVar49 * 0.0;
    fVar52 = auVar29._12_4_;
    auVar44._12_4_ = fVar52 * 0.0;
    auVar26 = vsubps_avx(auVar51,auVar44);
    auVar45._0_4_ = auVar44._0_4_ + auVar51._0_4_;
    auVar45._4_4_ = auVar44._4_4_ + auVar51._4_4_;
    auVar45._8_4_ = auVar44._8_4_ + auVar51._8_4_;
    auVar45._12_4_ = auVar44._12_4_ + auVar51._12_4_;
    auVar29 = vmovlhps_avx(auVar57._0_16_,auVar45);
    auVar29 = vblendps_avx(auVar29,auVar26,4);
    auVar29 = vshufps_avx(auVar29,auVar29,0xf8);
    *(undefined1 (*) [16])(lVar24 + lVar23) = auVar29;
    fVar43 = (float)uVar22;
    auVar55._0_4_ = fVar47 * fVar43;
    fVar46 = (float)((ulonglong)uVar22 >> 0x20);
    auVar55._4_4_ = fVar48 * fVar46;
    auVar55._8_4_ = fVar49 * 0.0;
    auVar55._12_4_ = fVar52 * 0.0;
    auVar33._0_4_ = fVar28 * fVar47;
    auVar33._4_4_ = fVar58 * fVar48;
    auVar33._8_4_ = fVar17 * fVar49;
    auVar33._12_4_ = fVar18 * fVar52;
    auVar36._0_4_ = fVar53 * fVar43;
    auVar36._4_4_ = fVar54 * fVar46;
    auVar36._8_4_ = fVar37 * 0.0;
    auVar36._12_4_ = fVar38 * 0.0;
    auVar27 = vsubps_avx(auVar64,auVar55);
    auVar56._0_4_ = auVar64._0_4_ + auVar55._0_4_;
    auVar56._4_4_ = auVar64._4_4_ + auVar55._4_4_;
    auVar56._8_4_ = auVar64._8_4_ + auVar55._8_4_;
    auVar56._12_4_ = auVar64._12_4_ + auVar55._12_4_;
    auVar30 = vsubps_avx(auVar36,auVar33);
    auVar34._0_4_ = auVar33._0_4_ + auVar36._0_4_;
    auVar34._4_4_ = auVar33._4_4_ + auVar36._4_4_;
    auVar34._8_4_ = auVar33._8_4_ + auVar36._8_4_;
    auVar34._12_4_ = auVar33._12_4_ + auVar36._12_4_;
    auVar29 = vmovlhps_avx((undefined1  [16])0x0,auVar56);
    auVar26 = vmovlhps_avx((undefined1  [16])0x0,auVar34);
    auVar29 = vblendps_avx(auVar29,auVar27,4);
    auVar26 = vblendps_avx(auVar26,auVar30,4);
    auVar29 = vshufps_avx(auVar29,auVar29,0xf8);
    auVar26 = vshufps_avx(auVar26,auVar26,0xf8);
    *(undefined1 (*) [16])(lVar24 + 0x10 + lVar23) = auVar29;
    *(undefined1 (*) [16])(lVar24 + 0x20 + lVar23) = auVar26;
    *(undefined8 *)(lVar24 + 0x30 + lVar23) = 0;
    *(int *)(lVar24 + 0x38 + lVar23) = (int)lVar25;
    *(undefined4 *)(lVar24 + 0x3c + lVar23) = 0;
    *(byte *)(lVar20 + 0x9c) = *(byte *)(lVar20 + 0x9c) | 4;
    uVar22 = func_0x000141407de0(param_1);
    lVar24 = *(longlong *)(lVar20 + 0x88);
    lVar25 = (ulonglong)*(ushort *)((longlong)param_1 + 0x102) * 0x10;
    *(undefined8 *)(lVar24 + lVar25) = uVar22;
    *(undefined8 *)(lVar24 + 8 + lVar25) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x13) == '\x01') {
    lVar24 = func_0x000144f97130(0x70);
    auStack_128._4_4_ = _DAT_146159ef4;
    auStack_128._0_4_ = _DAT_146159ef4;
    auStack_128._8_4_ = _DAT_146159ef4;
    auStack_128._12_4_ = _DAT_146159ef4;
    FUN_1402a9b90(lVar24);
    *(byte *)(lVar24 + 0x11) = *(byte *)(lVar24 + 0x11) | 0x80;
    *(undefined4 *)(lVar24 + 0x18) = 0x329617b0;
    in_stack_fffffffffffffe68 = in_stack_fffffffffffffe68 & 0xffffffffffffff00;
    FUN_1450349c0(lVar20,*(undefined2 *)((longlong)param_1 + 0x1a),lVar24,1,
                  in_stack_fffffffffffffe68);
    FUN_14017dc60(lVar24,1);
    lVar24 = *(longlong *)(lVar20 + 0x78);
    lVar25 = (ulonglong)*(ushort *)((longlong)param_1 + 0x1a) * 0x40;
    *(undefined1 (*) [16])(lVar24 + lVar25) = ZEXT416((uint)_DAT_145fc6ed8);
    puVar9 = (undefined8 *)(lVar24 + 0x10 + lVar25);
    *puVar9 = _DAT_146159bc0;
    puVar9[1] = 0;
    uVar22 = CONCAT44(_UNK_14614f7fc,_UNK_14614f7f8);
    puVar9 = (undefined8 *)(lVar24 + 0x20 + lVar25);
    *puVar9 = CONCAT44(_UNK_14614f7f4,_DAT_14614f7f0);
    puVar9[1] = uVar22;
    *(undefined1 (*) [16])(lVar24 + 0x30 + lVar25) = ZEXT816(0) << 0x20;
    *(byte *)(lVar20 + 0x9c) = *(byte *)(lVar20 + 0x9c) | 4;
    uVar22 = func_0x000141407de0(param_1);
    lVar24 = *(longlong *)(lVar20 + 0x88);
    lVar25 = (ulonglong)*(ushort *)((longlong)param_1 + 0x1a) * 0x10;
    *(undefined8 *)(lVar24 + lVar25) = uVar22;
    *(undefined8 *)(lVar24 + 8 + lVar25) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x14) == '\x01') {
    lVar24 = FUN_145034810(**(undefined8 **)(lVar20 + 0x70));
    *(undefined4 *)(lVar24 + 0x18) = 0x85437605;
    FUN_1450349c0(lVar20,*(undefined2 *)((longlong)param_1 + 0x1c),lVar24,1,
                  in_stack_fffffffffffffe68 & 0xffffffffffffff00);
    FUN_14017dc60(lVar24,1);
    auStack_138._0_12_ = ZEXT812(0);
    auStack_138._12_4_ = 0;
    (**(code **)(*param_1 + 0x88))(param_1,lVar20,1,_DAT_145fc6ed8,auStack_138);
    puVar9 = *(undefined8 **)(lVar20 + 0x78);
    uVar8 = *(ushort *)((longlong)param_1 + 0x1c);
    uVar22 = *puVar9;
    uVar11 = puVar9[1];
    uVar12 = puVar9[2];
    uVar13 = puVar9[3];
    uVar14 = puVar9[5];
    uVar15 = puVar9[6];
    uVar16 = puVar9[7];
    puVar1 = puVar9 + (ulonglong)uVar8 * 8 + 4;
    *puVar1 = puVar9[4];
    puVar1[1] = uVar14;
    puVar1[2] = uVar15;
    puVar1[3] = uVar16;
    puVar9 = puVar9 + (ulonglong)uVar8 * 8;
    *puVar9 = uVar22;
    puVar9[1] = uVar11;
    puVar9[2] = uVar12;
    puVar9[3] = uVar13;
    *(byte *)(lVar20 + 0x9c) = *(byte *)(lVar20 + 0x9c) | 4;
    puVar9 = *(undefined8 **)(lVar20 + 0x88);
    uVar8 = *(ushort *)((longlong)param_1 + 0x1c);
    uVar22 = puVar9[1];
    puVar9[(ulonglong)uVar8 * 2] = *puVar9;
    (puVar9 + (ulonglong)uVar8 * 2)[1] = uVar22;
  }
  FUN_142116fc0(lVar20);
  return lVar20;
}

