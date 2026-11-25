// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401c2540  size: 762 bytes
// Name:    FUN_1401c2540
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145083020, FUN_1414493b0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Possible PIC construction at 0x0001401c27dd: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001401c27e2) */
/* WARNING: Removing unreachable block (ram,0x0001450810e8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401c2540(undefined1 (*param_1) [16],longlong param_2,longlong param_3,longlong param_4,
                  float *param_5)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  ushort uVar6;
  undefined1 auVar7 [16];
  ushort uVar8;
  undefined4 uVar9;
  longlong *plVar10;
  byte bVar11;
  ulonglong uVar12;
  uint uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar23 [64];
  undefined1 auVar24 [16];
  undefined1 auVar25 [64];
  undefined1 auVar26 [64];
  float fVar27;
  undefined1 auVar28 [16];
  float fVar29;
  undefined1 auVar30 [64];
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  undefined1 auStack_108 [16];
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  undefined1 auStack_d8 [16];
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  
  auVar15 = param_1[1];
  auVar17 = *param_1;
  uVar9 = *(undefined4 *)(*param_1 + 0xc);
  auVar24._4_4_ = uVar9;
  auVar24._0_4_ = uVar9;
  auVar24._8_4_ = uVar9;
  auVar24._12_4_ = uVar9;
  uVar13 = *(uint *)(param_1[1] + 0xc) >> 0x1f;
  lVar2 = *(longlong *)(param_2 + (ulonglong)uVar13 * 8);
  lVar3 = *(longlong *)(param_2 + (ulonglong)(uVar13 ^ 1) * 8);
  uVar6 = auVar15._12_2_;
  plVar10 = *(longlong **)(lVar2 + 0x88);
  uVar4 = *(undefined8 *)(lVar3 + 0x40);
  lVar5 = *(longlong *)(lVar3 + 0x88);
  uStack_158 = *(undefined8 *)(lVar5 + 0x50);
  uStack_150 = *(undefined8 *)(lVar5 + 0x58);
  uStack_148 = *(undefined8 *)(lVar5 + 0x60);
  uStack_140 = *(undefined8 *)(lVar5 + 0x68);
  uStack_138 = *(undefined8 *)(lVar5 + 0x70);
  uStack_130 = *(undefined8 *)(lVar5 + 0x78);
  auVar28 = *(undefined1 (*) [16])(lVar5 + 0x80);
  uVar12 = CONCAT62((int6)((ulonglong)lVar5 >> 0x10),0xfffe);
  auVar16 = vpunpckhwd_avx(auVar28,auVar28);
  auVar16 = vpsrad_avx(auVar16,0x10);
  auVar16 = vcvtdq2ps_avx(auVar16);
  auVar16 = vshufpd_avx(auVar16,auVar16,3);
  fStack_128 = auVar16._0_4_ * _DAT_146159c90 + auVar28._0_4_ + *param_5;
  fStack_124 = auVar16._4_4_ * _UNK_146159c94 + auVar28._4_4_ + param_5[1];
  fStack_120 = auVar16._8_4_ * _UNK_146159c98 + auVar28._8_4_ + param_5[2];
  fStack_11c = auVar16._12_4_ * _UNK_146159c9c + auVar28._12_4_ + param_5[3];
  if (uVar6 != 0xfffe) {
    auVar23 = ZEXT1664(auVar15);
    auVar25 = ZEXT1664(auVar24);
    auVar26 = ZEXT1664(auVar17);
    uVar8 = (**(code **)(*plVar10 + 0x400))(plVar10,uVar12);
    auVar15 = auVar23._0_16_;
    auVar17 = auVar26._0_16_;
    auVar24 = auVar25._0_16_;
    uVar12 = (ulonglong)uVar6;
    if (uVar8 <= uVar6) goto LAB_1401c27c9;
  }
  auVar14._0_4_ = auVar17._0_4_ + auVar17._0_4_;
  auVar14._4_4_ = auVar17._4_4_ + auVar17._4_4_;
  auVar14._8_4_ = auVar17._8_4_ + auVar17._8_4_;
  auVar14._12_4_ = auVar17._12_4_ + auVar17._12_4_;
  auVar28 = vshufps_avx(auVar17,auVar17,0xc9);
  auVar17 = vshufps_avx(auVar17,auVar17,0xd2);
  auVar16 = vshufps_avx(auVar14,auVar14,0xc9);
  auVar7 = vshufps_avx(auVar14,auVar14,0xd2);
  auVar23 = ZEXT1664(auVar15);
  auVar25 = ZEXT1664(CONCAT412(-(auVar7._12_4_ * auVar17._12_4_) -
                               (auVar28._12_4_ * auVar16._12_4_ - _DAT_145fc6ed8),
                               CONCAT48(-(auVar7._8_4_ * auVar17._8_4_) -
                                        (auVar28._8_4_ * auVar16._8_4_ - _DAT_145fc6ed8),
                                        CONCAT44(-(auVar7._4_4_ * auVar17._4_4_) -
                                                 (auVar28._4_4_ * auVar16._4_4_ - _DAT_145fc6ed8),
                                                 -(auVar7._0_4_ * auVar17._0_4_) -
                                                 (auVar28._0_4_ * auVar16._0_4_ - _DAT_145fc6ed8))))
                    );
  auVar26 = ZEXT1664(CONCAT412(auVar17._12_4_ * auVar14._12_4_ + auVar16._12_4_ * auVar24._12_4_,
                               CONCAT48(auVar17._8_4_ * auVar14._8_4_ +
                                        auVar16._8_4_ * auVar24._8_4_,
                                        CONCAT44(auVar17._4_4_ * auVar14._4_4_ +
                                                 auVar16._4_4_ * auVar24._4_4_,
                                                 auVar17._0_4_ * auVar14._0_4_ +
                                                 auVar16._0_4_ * auVar24._0_4_))));
  auVar30 = ZEXT1664(CONCAT412(-(auVar24._12_4_ * auVar7._12_4_) + auVar28._12_4_ * auVar14._12_4_,
                               CONCAT48(-(auVar24._8_4_ * auVar7._8_4_) +
                                        auVar28._8_4_ * auVar14._8_4_,
                                        CONCAT44(-(auVar24._4_4_ * auVar7._4_4_) +
                                                 auVar28._4_4_ * auVar14._4_4_,
                                                 -(auVar24._0_4_ * auVar7._0_4_) +
                                                 auVar28._0_4_ * auVar14._0_4_))));
  uVar9 = func_0x0001401c0010(plVar10,uVar12);
  FUN_1414493b0(uVar9,plVar10,&fStack_118);
  fVar22 = auVar25._0_4_;
  auVar28 = auVar26._0_16_;
  auVar15 = vshufps_avx(auVar28,auVar28,0x55);
  auVar16 = auVar30._0_16_;
  auVar17 = vshufps_avx(auVar16,auVar16,0xaa);
  auVar28 = vshufps_avx(auVar28,auVar28,0xaa);
  fVar18 = auStack_108._0_4_;
  fVar19 = auStack_108._4_4_;
  fVar20 = auStack_108._8_4_;
  fVar21 = auStack_108._12_4_;
  fVar29 = auVar30._0_4_;
  auVar16 = vshufps_avx(auVar16,auVar16,0x55);
  auStack_d8._0_4_ = fStack_f8 * auVar17._0_4_ + fVar18 * auVar15._0_4_ + fStack_118 * fVar22;
  auStack_d8._4_4_ = fStack_f4 * auVar17._4_4_ + fVar19 * auVar15._4_4_ + fStack_114 * fVar22;
  auStack_d8._8_4_ = fStack_f0 * auVar17._8_4_ + fVar20 * auVar15._8_4_ + fStack_110 * fVar22;
  auStack_d8._12_4_ = fStack_ec * auVar17._12_4_ + fVar21 * auVar15._12_4_ + fStack_10c * fVar22;
  auVar17 = auVar25._0_16_;
  auVar15 = vshufps_avx(auVar17,auVar17,0x55);
  auVar17 = vshufps_avx(auVar17,auVar17,0xaa);
  fVar27 = auVar26._0_4_;
  fVar22 = auVar23._0_4_;
  fStack_c8 = fStack_f8 * auVar28._0_4_ + fVar18 * auVar15._0_4_ + fStack_118 * fVar29;
  fStack_c4 = fStack_f4 * auVar28._4_4_ + fVar19 * auVar15._4_4_ + fStack_114 * fVar29;
  fStack_c0 = fStack_f0 * auVar28._8_4_ + fVar20 * auVar15._8_4_ + fStack_110 * fVar29;
  fStack_bc = fStack_ec * auVar28._12_4_ + fVar21 * auVar15._12_4_ + fStack_10c * fVar29;
  fStack_b8 = fStack_f8 * auVar17._0_4_ + fVar18 * auVar16._0_4_ + fStack_118 * fVar27;
  fStack_b4 = fStack_f4 * auVar17._4_4_ + fVar19 * auVar16._4_4_ + fStack_114 * fVar27;
  fStack_b0 = fStack_f0 * auVar17._8_4_ + fVar20 * auVar16._8_4_ + fStack_110 * fVar27;
  fStack_ac = fStack_ec * auVar17._12_4_ + fVar21 * auVar16._12_4_ + fStack_10c * fVar27;
  auVar15 = vpshufd_avx(auVar23._0_16_,0x55);
  auVar17 = vpshufd_avx(auVar23._0_16_,0xaa);
  fStack_a8 = fStack_f8 * auVar17._0_4_ + fVar18 * auVar15._0_4_ + fStack_118 * fVar22 + fStack_e8;
  fStack_a4 = fStack_f4 * auVar17._4_4_ + fVar19 * auVar15._4_4_ + fStack_114 * fVar22 + fStack_e4;
  fStack_a0 = fStack_f0 * auVar17._8_4_ + fVar20 * auVar15._8_4_ + fStack_110 * fVar22 + fStack_e0;
  fStack_9c = fStack_ec * auVar17._12_4_ + fVar21 * auVar15._12_4_ + fStack_10c * fVar22 + fStack_dc
  ;
  auVar23 = ZEXT864(0) << 0x20;
  uStack_168 = *(undefined8 *)(*(longlong *)(lVar3 + 0x60) + 0x70);
  uStack_160 = *(undefined8 *)(*(longlong *)(lVar3 + 0x60) + 0x78);
  FUN_145083020(param_3,uVar4,&uStack_158,auStack_d8,&uStack_168,1,*(undefined4 *)(lVar3 + 0x80),
                *(undefined8 *)(lVar3 + 0x68),*(undefined8 *)(lVar3 + 0x70),ZEXT816(0) << 0x20);
  auVar17._4_4_ = _DAT_146159c60;
  auVar17._0_4_ = _DAT_146159c60;
  auVar17._8_4_ = _DAT_146159c60;
  auVar17._12_4_ = _DAT_146159c60;
  auVar15._0_4_ = *(float *)(param_3 + 0x50) * *(float *)(param_3 + 0x50);
  auVar15._4_4_ = *(float *)(param_3 + 0x54) * *(float *)(param_3 + 0x54);
  auVar15._8_4_ = *(float *)(param_3 + 0x58) * *(float *)(param_3 + 0x58);
  auVar15._12_4_ = *(float *)(param_3 + 0x5c) * *(float *)(param_3 + 0x5c);
  auVar15 = vblendps_avx(auVar15,auVar23._0_16_,8);
  auVar15 = vhaddps_avx(auVar15,auVar15);
  auVar15 = vhaddps_avx(auVar15,auVar15);
  vcmpps_avx(auVar17,auVar15,5);
LAB_1401c27c9:
  lVar3 = *(longlong *)(lVar2 + 0x60);
  plVar10 = (longlong *)((ulonglong)uVar13 * 0xb8 + param_4);
  *plVar10 = lVar2;
  plVar10[1] = lVar2;
  plVar10[2] = lVar3;
  *(undefined4 *)(plVar10 + 0x16) = *(undefined4 *)(lVar2 + 0x90);
  bVar1 = *(byte *)((longlong)plVar10 + 0xb6);
  *(byte *)((longlong)plVar10 + 0xb6) = bVar1 & 0xfe;
  lVar2 = *(longlong *)(lVar2 + 0x40);
  if (*(char *)(lVar2 + 0x10) == '\x06') {
    bVar11 = (*(longlong *)(lVar2 + 0x78) != *(longlong *)(lVar2 + 0x80)) * '\x02';
  }
  else {
    bVar11 = 0;
  }
  *(byte *)((longlong)plVar10 + 0xb6) = bVar1 & 0xf0 | bVar11;
  plVar10[0x15] = (longlong)plVar10;
  return;
}

