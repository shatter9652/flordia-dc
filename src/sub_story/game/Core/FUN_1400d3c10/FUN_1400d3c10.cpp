// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400d3c10  size: 1381 bytes
// Name:    FUN_1400d3c10
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400d4180
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400d3c10(longlong param_1,longlong param_2,longlong param_3,undefined1 (*param_4) [16],
                  undefined1 (*param_5) [16],float *param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  int iVar6;
  longlong *plVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined8 uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 uVar16;
  int iVar17;
  undefined4 uVar18;
  ulonglong uVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  short sVar24;
  short sVar29;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar42;
  float fVar43;
  float fVar44;
  undefined1 auVar41 [64];
  float fVar45;
  float fVar47;
  float fVar48;
  float fVar49;
  undefined1 auVar46 [64];
  float fVar51;
  float fVar52;
  float fVar53;
  undefined1 auVar50 [64];
  undefined1 auVar54 [16];
  undefined1 auStack_108 [16];
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  undefined1 auStack_e8 [16];
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
  undefined1 auStack_98 [16];
  
  fVar21 = _DAT_145fc6ed8;
  fVar20 = *(float *)(param_1 + 0x36c);
  if ((fVar20 != 0.0) || (NAN(fVar20))) {
    if ((fVar20 != _DAT_145fc6ed8) || (NAN(fVar20) || NAN(_DAT_145fc6ed8))) {
      auVar8 = *(undefined1 (*) [16])(param_3 + 0xf0);
      auVar33 = vsubps_avx(*(undefined1 (*) [16])(param_3 + 0x210),auVar8);
      auVar35 = vpsubw_avx(*(undefined1 (*) [16])(param_3 + 0x210),auVar8);
      auVar35 = vblendps_avx(auVar33,auVar35,8);
      auVar33 = vpunpckhwd_avx(auVar35,auVar35);
      auVar33 = vpsrad_avx(auVar33,0x10);
      auVar33 = vcvtdq2ps_avx(auVar33);
      auVar33 = vshufpd_avx(auVar33,auVar33,3);
      auVar34._0_4_ = fVar20 * (auVar33._0_4_ * _DAT_146159c90 + auVar35._0_4_) + auVar8._0_4_;
      auVar34._4_4_ = fVar20 * (auVar33._4_4_ * _UNK_146159c94 + auVar35._4_4_) + auVar8._4_4_;
      auVar34._8_4_ = fVar20 * (auVar33._8_4_ * _UNK_146159c98 + auVar35._8_4_) + auVar8._8_4_;
      auVar34._12_4_ = fVar20 * (auVar33._12_4_ * _UNK_146159c9c + auVar35._12_4_) + auVar8._12_4_;
      auVar35._4_4_ = _DAT_14615a290;
      auVar35._0_4_ = _DAT_14615a290;
      auVar35._8_4_ = _DAT_14615a290;
      auVar35._12_4_ = _DAT_14615a290;
      auVar8 = vblendps_avx(auVar34,auVar8,8);
      auVar35 = vrcpps_avx(auVar35);
      fVar37 = auVar35._0_4_;
      fVar38 = auVar35._4_4_;
      fVar39 = auVar35._8_4_;
      fVar40 = auVar35._12_4_;
      fVar37 = (-(fVar37 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar37 + fVar37;
      fVar38 = (-(fVar38 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar38 + fVar38;
      fVar39 = (-(fVar39 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar39 + fVar39;
      fVar40 = (-(fVar40 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar40 + fVar40;
      auVar33._0_4_ = fVar37 * auVar8._0_4_;
      auVar33._4_4_ = fVar38 * auVar8._4_4_;
      auVar33._8_4_ = fVar39 * auVar8._8_4_;
      auVar33._12_4_ = fVar40 * auVar8._12_4_;
      auVar35 = vroundps_avx(auVar33,3);
      auVar25._0_4_ = -(auVar35._0_4_ * _DAT_14615a290) + auVar8._0_4_;
      auVar25._4_4_ = -(auVar35._4_4_ * _DAT_14615a290) + auVar8._4_4_;
      auVar25._8_4_ = -(auVar35._8_4_ * _DAT_14615a290) + auVar8._8_4_;
      auVar25._12_4_ = -(auVar35._12_4_ * _DAT_14615a290) + auVar8._12_4_;
      auVar30._0_4_ = (int)auVar35._0_4_;
      auVar30._4_4_ = (int)auVar35._4_4_;
      auVar30._8_4_ = (int)auVar35._8_4_;
      auVar30._12_4_ = (int)auVar35._12_4_;
      auVar33 = vpackssdw_avx(auVar30,auVar30);
      auVar35 = vblendps_avx(auVar8,auVar25,3);
      sVar24 = auVar33._0_2_;
      auVar9._0_2_ = sVar24 + auVar8._0_2_;
      sVar29 = auVar33._2_2_;
      auVar9._2_2_ = sVar29 + auVar8._2_2_;
      auVar9._4_2_ = sVar24 + auVar8._4_2_;
      auVar9._6_2_ = sVar29 + auVar8._6_2_;
      auVar9._8_2_ = sVar24 + auVar8._8_2_;
      auVar9._10_2_ = sVar29 + auVar8._10_2_;
      auVar9._12_2_ = sVar24 + auVar8._12_2_;
      auVar9._14_2_ = sVar29 + auVar8._14_2_;
      auVar8 = vblendps_avx(auVar35,auVar9,8);
      *param_4 = auVar8;
      plVar7 = *(longlong **)(param_3 + 0x128);
      iVar6 = *(int *)(param_3 + 0x130);
      fVar42 = fVar21;
      fVar43 = fVar21;
      fVar44 = fVar21;
      iVar17 = func_0x000144e05fa0(plVar7[1]);
      fVar45 = 0.0;
      fVar47 = 0.0;
      fVar48 = 0.0;
      fVar49 = 0.0;
      fVar20 = 0.0;
      fVar51 = 0.0;
      fVar52 = 0.0;
      fVar53 = 0.0;
      if (iVar6 != iVar17) {
        uVar18 = (**(code **)(*plVar7 + 0xf0))(plVar7,iVar6);
        (**(code **)(*plVar7 + 0x108))(plVar7,uVar18,auStack_108);
        fVar20 = fStack_f8;
        fVar51 = fStack_f4;
        fVar52 = fStack_f0;
        fVar53 = fStack_ec;
      }
      (**(code **)(*plVar7 + 0x88))(plVar7,auStack_108);
      auVar14._4_4_ = fStack_f4;
      auVar14._0_4_ = fStack_f8;
      auVar14._8_4_ = fStack_f0;
      auVar14._12_4_ = fStack_ec;
      auVar8 = vshufps_avx(auVar14,auStack_e8,0x33);
      auVar8 = vshufps_avx(auVar14,auVar8,0x2f);
      auVar50 = ZEXT1664(CONCAT412(fVar53 * (auVar8._12_4_ + fVar44),
                                   CONCAT48(fVar52 * (auVar8._8_4_ + fVar43),
                                            CONCAT44(fVar51 * (auVar8._4_4_ + fVar42),
                                                     fVar20 * (auVar8._0_4_ + fVar21)))));
      (**(code **)(*plVar7 + 0x88))(plVar7,&fStack_c8);
      fVar20 = auVar50._0_4_;
      auVar35 = auVar50._0_16_;
      auVar8 = vshufps_avx(auVar35,auVar35,0x55);
      auVar35 = vshufps_avx(auVar35,auVar35,0xaa);
      plVar7 = *(longlong **)(param_3 + 8);
      auVar22._0_4_ =
           auVar35._0_4_ * fStack_a8 +
           auVar8._0_4_ * fStack_b8 + fVar20 * fStack_c8 + auStack_98._0_4_;
      auVar22._4_4_ =
           auVar35._4_4_ * fStack_a4 +
           auVar8._4_4_ * fStack_b4 + fVar20 * fStack_c4 + auStack_98._4_4_;
      auVar22._8_4_ =
           auVar35._8_4_ * fStack_a0 +
           auVar8._8_4_ * fStack_b0 + fVar20 * fStack_c0 + auStack_98._8_4_;
      auVar22._12_4_ =
           auVar35._12_4_ * fStack_9c +
           auVar8._12_4_ * fStack_ac + fVar20 * fStack_bc + auStack_98._12_4_;
      iVar6 = *(int *)(param_3 + 0x10);
      auVar8 = vblendps_avx(auVar22,auStack_98,8);
      auVar31._0_4_ = auVar8._0_4_ * fVar37;
      auVar31._4_4_ = auVar8._4_4_ * fVar38;
      auVar31._8_4_ = auVar8._8_4_ * fVar39;
      auVar31._12_4_ = auVar8._12_4_ * fVar40;
      auVar35 = vroundps_avx(auVar31,3);
      auVar26._0_4_ = auVar35._0_4_ * _DAT_14615ad78 + auVar8._0_4_;
      auVar26._4_4_ = auVar35._4_4_ * _DAT_14615ad78 + auVar8._4_4_;
      auVar26._8_4_ = auVar35._8_4_ * _DAT_14615ad78 + auVar8._8_4_;
      auVar26._12_4_ = auVar35._12_4_ * _DAT_14615ad78 + auVar8._12_4_;
      auVar8 = vblendps_avx(auVar22,auVar26,3);
      auVar27._0_4_ = (int)auVar35._0_4_;
      auVar27._4_4_ = (int)auVar35._4_4_;
      auVar27._8_4_ = (int)auVar35._8_4_;
      auVar27._12_4_ = (int)auVar35._12_4_;
      auVar35 = vpackssdw_avx(auVar27,auVar27);
      sVar24 = auVar35._0_2_;
      auVar10._0_2_ = sVar24 + auStack_98._0_2_;
      sVar29 = auVar35._2_2_;
      auVar10._2_2_ = sVar29 + auStack_98._2_2_;
      auVar10._4_2_ = sVar24 + auStack_98._4_2_;
      auVar10._6_2_ = sVar29 + auStack_98._6_2_;
      auVar10._8_2_ = sVar24 + auStack_98._8_2_;
      auVar10._10_2_ = sVar29 + auStack_98._10_2_;
      auVar10._12_2_ = sVar24 + auStack_98._12_2_;
      auVar10._14_2_ = sVar29 + auStack_98._14_2_;
      auVar8 = vpblendd_avx2(auVar8,auVar10,8);
      auVar50 = ZEXT1664(auVar8);
      fVar20 = _DAT_14615ad78;
      fVar51 = _DAT_14615ad78;
      fVar52 = _DAT_14615ad78;
      fVar53 = _DAT_14615ad78;
      iVar17 = func_0x000144e05fa0(plVar7[1]);
      if (iVar6 != iVar17) {
        uVar18 = (**(code **)(*plVar7 + 0xf0))(plVar7,iVar6);
        (**(code **)(*plVar7 + 0x108))(plVar7,uVar18,auStack_108);
        fVar45 = fStack_f8;
        fVar47 = fStack_f4;
        fVar48 = fStack_f0;
        fVar49 = fStack_ec;
      }
      (**(code **)(*plVar7 + 0x88))(plVar7,auStack_108);
      auVar15._4_4_ = fStack_f4;
      auVar15._0_4_ = fStack_f8;
      auVar15._8_4_ = fStack_f0;
      auVar15._12_4_ = fStack_ec;
      auVar8 = vshufps_avx(auVar15,auStack_e8,0x33);
      auVar8 = vshufps_avx(auVar15,auVar8,0x2f);
      auVar41 = ZEXT1664(CONCAT412(fVar49 * (auVar8._12_4_ + fVar44),
                                   CONCAT48(fVar48 * (auVar8._8_4_ + fVar43),
                                            CONCAT44(fVar47 * (auVar8._4_4_ + fVar42),
                                                     fVar45 * (auVar8._0_4_ + fVar21)))));
      (**(code **)(*plVar7 + 0x88))(plVar7,&fStack_c8);
      fVar21 = auVar41._0_4_;
      auVar35 = auVar41._0_16_;
      auVar8 = vshufps_avx(auVar35,auVar35,0x55);
      auVar35 = vshufps_avx(auVar35,auVar35,0xaa);
      auVar23._0_4_ =
           auVar35._0_4_ * fStack_a8 +
           auVar8._0_4_ * fStack_b8 + fVar21 * fStack_c8 + auStack_98._0_4_;
      auVar23._4_4_ =
           auVar35._4_4_ * fStack_a4 +
           auVar8._4_4_ * fStack_b4 + fVar21 * fStack_c4 + auStack_98._4_4_;
      auVar23._8_4_ =
           auVar35._8_4_ * fStack_a0 +
           auVar8._8_4_ * fStack_b0 + fVar21 * fStack_c0 + auStack_98._8_4_;
      auVar23._12_4_ =
           auVar35._12_4_ * fStack_9c +
           auVar8._12_4_ * fStack_ac + fVar21 * fStack_bc + auStack_98._12_4_;
      auVar8 = vblendps_avx(auVar23,auStack_98,8);
      auVar32._0_4_ = auVar8._0_4_ * fVar37;
      auVar32._4_4_ = auVar8._4_4_ * fVar38;
      auVar32._8_4_ = auVar8._8_4_ * fVar39;
      auVar32._12_4_ = auVar8._12_4_ * fVar40;
      auVar35 = vroundps_avx(auVar32,3);
      auVar54._0_4_ = auVar35._0_4_ * fVar20 + auVar8._0_4_;
      auVar54._4_4_ = auVar35._4_4_ * fVar51 + auVar8._4_4_;
      auVar54._8_4_ = auVar35._8_4_ * fVar52 + auVar8._8_4_;
      auVar54._12_4_ = auVar35._12_4_ * fVar53 + auVar8._12_4_;
      auVar28._0_4_ = (int)auVar35._0_4_;
      auVar28._4_4_ = (int)auVar35._4_4_;
      auVar28._8_4_ = (int)auVar35._8_4_;
      auVar28._12_4_ = (int)auVar35._12_4_;
      auVar8 = vblendps_avx(auVar23,auVar54,3);
      auVar35 = vpackssdw_avx(auVar28,auVar28);
      sVar24 = auVar35._0_2_;
      auVar11._0_2_ = sVar24 + auStack_98._0_2_;
      sVar29 = auVar35._2_2_;
      auVar11._2_2_ = sVar29 + auStack_98._2_2_;
      auVar11._4_2_ = sVar24 + auStack_98._4_2_;
      auVar11._6_2_ = sVar29 + auStack_98._6_2_;
      auVar11._8_2_ = sVar24 + auStack_98._8_2_;
      auVar11._10_2_ = sVar29 + auStack_98._10_2_;
      auVar11._12_2_ = sVar24 + auStack_98._12_2_;
      auVar11._14_2_ = sVar29 + auStack_98._14_2_;
      auVar33 = vpblendd_avx2(auVar8,auVar11,8);
      fVar20 = *(float *)(param_1 + 0x36c);
      auVar8 = vpsubw_avx(auVar50._0_16_,auVar33);
      auVar35 = vsubps_avx(auVar50._0_16_,auVar33);
      auVar8 = vblendps_avx(auVar35,auVar8,8);
      auVar35 = vpunpckhwd_avx(auVar8,auVar8);
      auVar35 = vpsrad_avx(auVar35,0x10);
      auVar35 = vcvtdq2ps_avx(auVar35);
      auVar35 = vshufpd_avx(auVar35,auVar35,3);
      auVar36._0_4_ = fVar20 * (auVar35._0_4_ * _DAT_146159c90 + auVar8._0_4_) + auVar33._0_4_;
      auVar36._4_4_ = fVar20 * (auVar35._4_4_ * _UNK_146159c94 + auVar8._4_4_) + auVar33._4_4_;
      auVar36._8_4_ = fVar20 * (auVar35._8_4_ * _UNK_146159c98 + auVar8._8_4_) + auVar33._8_4_;
      auVar36._12_4_ = fVar20 * (auVar35._12_4_ * _UNK_146159c9c + auVar8._12_4_) + auVar33._12_4_;
      auVar8 = vblendps_avx(auVar36,auVar33,8);
      auVar8 = vshufps_avx(auVar8,auVar8,0xaa);
      auVar8 = vblendps_avx(*param_5,auVar8,4);
      *param_5 = auVar8;
      auVar46 = ZEXT464(*(uint *)(param_2 + 0xd0));
      auVar50 = ZEXT464(*(uint *)(param_1 + 0x350));
      auVar41 = ZEXT464(*(uint *)(param_1 + 0x354));
      uVar19 = CONCAT71((int7)((ulonglong)&fStack_c8 >> 8),*(undefined1 *)(param_2 + 0x120));
      fVar20 = (float)FUN_1400d4180(*(uint *)(param_1 + 0x350),*(uint *)(param_1 + 0x354),
                                    *(uint *)(param_2 + 0xd0),uVar19 & 0xffffffff,
                                    *(undefined4 *)(param_3 + 0x40),*(undefined4 *)(param_3 + 0x44),
                                    *(undefined1 *)(param_1 + 0xb0));
      fVar21 = (float)FUN_1400d4180(auVar50._0_8_,auVar41._0_8_,auVar46._0_8_,uVar19 & 0xffffffff,
                                    *(undefined4 *)(param_3 + 0x160),
                                    *(undefined4 *)(param_3 + 0x164),*(undefined1 *)(param_1 + 0xb8)
                                   );
      fVar20 = (fVar21 - fVar20) * *(float *)(param_1 + 0x36c) + fVar20;
      goto LAB_1400d3d12;
    }
    uVar12 = *(undefined8 *)(param_3 + 0x218);
    *(undefined8 *)*param_4 = *(undefined8 *)(param_3 + 0x210);
    *(undefined8 *)(*param_4 + 8) = uVar12;
    uVar12 = *(undefined8 *)(param_3 + 0x218);
    *(undefined8 *)*param_5 = *(undefined8 *)(param_3 + 0x210);
    *(undefined8 *)(*param_5 + 8) = uVar12;
    uVar18 = *(undefined4 *)(param_3 + 0x198);
    auVar13._4_4_ = uVar18;
    auVar13._0_4_ = uVar18;
    auVar13._8_4_ = uVar18;
    auVar13._12_4_ = uVar18;
    auVar8 = vblendps_avx(*param_5,auVar13,4);
    *param_5 = auVar8;
    uVar1 = *(undefined4 *)(param_1 + 0x350);
    uVar2 = *(undefined4 *)(param_1 + 0x354);
    uVar3 = *(undefined4 *)(param_2 + 0xd0);
    uVar4 = *(undefined4 *)(param_3 + 0x160);
    uVar18 = *(undefined4 *)(param_3 + 0x164);
    uVar5 = *(undefined1 *)(param_2 + 0x120);
    uVar16 = *(undefined1 *)(param_1 + 0xb8);
  }
  else {
    uVar12 = *(undefined8 *)(param_3 + 0xf8);
    *(undefined8 *)*param_4 = *(undefined8 *)(param_3 + 0xf0);
    *(undefined8 *)(*param_4 + 8) = uVar12;
    uVar12 = *(undefined8 *)(param_3 + 0xf8);
    *(undefined8 *)*param_5 = *(undefined8 *)(param_3 + 0xf0);
    *(undefined8 *)(*param_5 + 8) = uVar12;
    uVar18 = *(undefined4 *)(param_3 + 0x78);
    auVar8._4_4_ = uVar18;
    auVar8._0_4_ = uVar18;
    auVar8._8_4_ = uVar18;
    auVar8._12_4_ = uVar18;
    auVar8 = vblendps_avx(*param_5,auVar8,4);
    *param_5 = auVar8;
    uVar1 = *(undefined4 *)(param_1 + 0x350);
    uVar2 = *(undefined4 *)(param_1 + 0x354);
    uVar3 = *(undefined4 *)(param_2 + 0xd0);
    uVar4 = *(undefined4 *)(param_3 + 0x40);
    uVar18 = *(undefined4 *)(param_3 + 0x44);
    uVar5 = *(undefined1 *)(param_2 + 0x120);
    uVar16 = *(undefined1 *)(param_1 + 0xb0);
  }
  fVar20 = (float)FUN_1400d4180(uVar1,uVar2,uVar3,uVar5,uVar4,uVar18,uVar16);
LAB_1400d3d12:
  *param_6 = fVar20;
  return;
}

