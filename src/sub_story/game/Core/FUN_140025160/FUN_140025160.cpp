// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140025160  size: 1432 bytes
// Name:    FUN_140025160
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144dfea30, FUN_144df2390, FUN_140025700, FUN_144e065a0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140025160(longlong *param_1,undefined8 param_2,undefined1 (*param_3) [16],longlong param_4)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  undefined1 uVar4;
  int iVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar24;
  float fVar26;
  float fVar27;
  undefined1 auVar25 [16];
  float fVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  float fVar37;
  float fVar38;
  float fVar42;
  float fVar44;
  undefined1 auVar39 [16];
  float fVar46;
  undefined1 auVar40 [16];
  float fVar43;
  float fVar45;
  float fVar47;
  undefined1 auVar41 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined1 auStack_1c8 [16];
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined1 auStack_1a8 [16];
  undefined1 auStack_198 [16];
  undefined1 auStack_188 [16];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [16];
  undefined1 auStack_158 [16];
  undefined1 auStack_148 [16];
  undefined1 auStack_138 [16];
  undefined1 auStack_128 [16];
  undefined1 auStack_118 [16];
  undefined1 auStack_108 [16];
  undefined1 auStack_f8 [16];
  undefined1 aauStack_e8 [10] [16];
  
  plVar1 = (longlong *)*param_1;
  lVar3 = param_1[1];
  iVar5 = func_0x000144e05fa0(plVar1[1]);
  if ((int)lVar3 == iVar5) {
    uStack_1b8 = _DAT_145fc6ee0;
    uStack_1b0 = _UNK_145fc6ee8;
    auStack_1a8 = ZEXT816(0) << 0x20;
  }
  else {
    uVar6 = (**(code **)(*plVar1 + 0xf0))(plVar1,(int)lVar3);
    (**(code **)(*plVar1 + 0x108))(plVar1,uVar6,&uStack_1b8);
  }
  uVar4 = FUN_144dfea30(auStack_198,auStack_f8,auStack_108,auStack_118,auStack_128,auStack_138,
                        auStack_148,auStack_158,&uStack_1b8,param_2);
  plVar1 = (longlong *)*param_1;
  lVar3 = param_1[1];
  iVar5 = func_0x000144e05fa0(plVar1[1]);
  if ((int)lVar3 == iVar5) {
    uStack_1d8 = _DAT_145fc6ee0;
    uStack_1d0 = _UNK_145fc6ee8;
    auStack_1c8 = ZEXT816(0) << 0x20;
  }
  else {
    uVar6 = (**(code **)(*plVar1 + 0xf0))(plVar1,(int)lVar3);
    (**(code **)(*plVar1 + 0x108))(plVar1,uVar6,&uStack_1d8);
  }
  auStack_168 = auStack_1c8;
  FUN_140025700(aauStack_e8,&uStack_1d8,auStack_168,auStack_198,auStack_f8,auStack_108,auStack_118,
                param_2,uVar4);
  auVar2._8_8_ = uStack_1d0;
  auVar2._0_8_ = uStack_1d8;
  auVar22._0_12_ = ZEXT812(0);
  auVar22._12_4_ = 0;
  fVar7 = (float)uStack_1d8;
  auVar16._0_4_ = fVar7 * aauStack_e8[0]._0_4_;
  fVar11 = (float)((ulonglong)uStack_1d8 >> 0x20);
  auVar16._4_4_ = fVar11 * aauStack_e8[0]._4_4_;
  fVar12 = (float)uStack_1d0;
  auVar16._8_4_ = fVar12 * aauStack_e8[0]._8_4_;
  fVar13 = (float)((ulonglong)uStack_1d0 >> 0x20);
  auVar16._12_4_ = fVar13 * aauStack_e8[0]._12_4_;
  auVar17._0_4_ = (uint)aauStack_e8[0]._0_4_ ^ _DAT_145fc6f10;
  auVar17._4_4_ = (uint)aauStack_e8[0]._4_4_ ^ _DAT_145fc6f10;
  auVar17._8_4_ = (uint)aauStack_e8[0]._8_4_ ^ _DAT_145fc6f10;
  auVar17._12_4_ = (uint)aauStack_e8[0]._12_4_ ^ _DAT_145fc6f10;
  auVar15 = vhaddps_avx(auVar16,auVar16);
  auVar15 = vhaddps_avx(auVar15,auVar15);
  auVar15 = vcmpps_avx(auVar15,auVar22,1);
  auVar15 = vblendvps_avx(aauStack_e8[0],auVar17,auVar15);
  auVar18._4_4_ = _DAT_145fc6ed8;
  auVar18._0_4_ = _DAT_145fc6ed8;
  auVar18._8_4_ = _DAT_145fc6ed8;
  auVar18._12_4_ = _DAT_145fc6ed8;
  auVar29._0_4_ = auVar15._0_4_ * fVar7;
  auVar29._4_4_ = auVar15._4_4_ * fVar11;
  auVar29._8_4_ = auVar15._8_4_ * fVar12;
  auVar29._12_4_ = auVar15._12_4_ * fVar13;
  auVar16 = vhaddps_avx(auVar29,auVar29);
  auVar16 = vhaddps_avx(auVar16,auVar16);
  auVar9 = vrcpps_avx(auVar16);
  fVar42 = auVar16._0_4_;
  auVar32._0_4_ = (uint)fVar42 ^ _DAT_145fc6f10;
  fVar44 = auVar16._4_4_;
  auVar32._4_4_ = (uint)fVar44 ^ _DAT_145fc6f10;
  fVar46 = auVar16._8_4_;
  auVar32._8_4_ = (uint)fVar46 ^ _DAT_145fc6f10;
  fVar24 = auVar16._12_4_;
  auVar32._12_4_ = (uint)fVar24 ^ _DAT_145fc6f10;
  auVar10 = vcmpps_avx(auVar16,auVar32,1);
  auVar8 = vcmpps_avx(auVar16,auVar32,0);
  fVar26 = auVar9._0_4_;
  fVar27 = auVar9._4_4_;
  fVar28 = auVar9._8_4_;
  fVar37 = auVar9._12_4_;
  auVar30._0_4_ = -(fVar42 * fVar42) + _DAT_145fc6ed8;
  auVar30._4_4_ = -(fVar44 * fVar44) + _DAT_145fc6ed8;
  auVar30._8_4_ = -(fVar46 * fVar46) + _DAT_145fc6ed8;
  auVar30._12_4_ = -(fVar24 * fVar24) + _DAT_145fc6ed8;
  auVar9 = vmaxps_avx(auVar22,auVar30);
  auVar16 = vrsqrtps_avx(auVar9);
  fVar38 = auVar16._0_4_;
  fVar43 = auVar16._4_4_;
  fVar45 = auVar16._8_4_;
  fVar47 = auVar16._12_4_;
  auVar51._4_4_ = _DAT_146159bfc;
  auVar51._0_4_ = _DAT_146159bfc;
  auVar51._8_4_ = _DAT_146159bfc;
  auVar51._12_4_ = _DAT_146159bfc;
  auVar16 = vcmpps_avx(auVar51,auVar9,2);
  auVar31._0_4_ =
       (float)(auVar16._0_4_ &
              (uint)(((_DAT_145fc6f08 * fVar38 * fVar38 * auVar9._0_4_ - _DAT_145fc6f08) * fVar38 +
                     fVar38) * auVar9._0_4_));
  auVar31._4_4_ =
       (float)(auVar16._4_4_ &
              (uint)(((_DAT_145fc6f08 * fVar43 * fVar43 * auVar9._4_4_ - _DAT_145fc6f08) * fVar43 +
                     fVar43) * auVar9._4_4_));
  auVar31._8_4_ =
       (float)(auVar16._8_4_ &
              (uint)(((_DAT_145fc6f08 * fVar45 * fVar45 * auVar9._8_4_ - _DAT_145fc6f08) * fVar45 +
                     fVar45) * auVar9._8_4_));
  auVar31._12_4_ =
       (float)(auVar16._12_4_ &
              (uint)(((_DAT_145fc6f08 * fVar47 * fVar47 * auVar9._12_4_ - _DAT_145fc6f08) * fVar47 +
                     fVar47) * auVar9._12_4_));
  auVar33._0_4_ = (-((fVar42 * fVar26 - _DAT_145fc6ed8) * fVar26) + fVar26) * auVar31._0_4_;
  auVar33._4_4_ = (-((fVar44 * fVar27 - _DAT_145fc6ed8) * fVar27) + fVar27) * auVar31._4_4_;
  auVar33._8_4_ = (-((fVar46 * fVar28 - _DAT_145fc6ed8) * fVar28) + fVar28) * auVar31._8_4_;
  auVar33._12_4_ = (-((fVar24 * fVar37 - _DAT_145fc6ed8) * fVar37) + fVar37) * auVar31._12_4_;
  auVar16 = vrcpps_avx(auVar33);
  auVar39._0_4_ = _DAT_145fc6f4c & (uint)auVar33._0_4_;
  auVar39._4_4_ = _DAT_145fc6f4c & (uint)auVar33._4_4_;
  auVar39._8_4_ = _DAT_145fc6f4c & (uint)auVar33._8_4_;
  auVar39._12_4_ = _DAT_145fc6f4c & (uint)auVar33._12_4_;
  fVar43 = auVar16._0_4_;
  fVar45 = auVar16._4_4_;
  fVar47 = auVar16._8_4_;
  fVar38 = auVar16._12_4_;
  auVar9 = vcmpps_avx(auVar18,auVar39,1);
  auVar54._0_4_ = (auVar33._0_4_ * fVar43 - _DAT_145fc6ed8) * fVar43 - fVar43;
  auVar54._4_4_ = (auVar33._4_4_ * fVar45 - _DAT_145fc6ed8) * fVar45 - fVar45;
  auVar54._8_4_ = (auVar33._8_4_ * fVar47 - _DAT_145fc6ed8) * fVar47 - fVar47;
  auVar54._12_4_ = (auVar33._12_4_ * fVar38 - _DAT_145fc6ed8) * fVar38 - fVar38;
  auVar16 = vblendvps_avx(auVar33,auVar54,auVar9);
  fVar38 = auVar16._0_4_;
  fVar37 = fVar38 * fVar38;
  fVar43 = auVar16._4_4_;
  fVar42 = fVar43 * fVar43;
  fVar45 = auVar16._8_4_;
  fVar44 = fVar45 * fVar45;
  fVar47 = auVar16._12_4_;
  fVar46 = fVar47 * fVar47;
  auVar40._4_4_ = _DAT_145fc6f80;
  auVar40._0_4_ = _DAT_145fc6f80;
  auVar40._8_4_ = _DAT_145fc6f80;
  auVar40._12_4_ = _DAT_145fc6f80;
  auVar52._0_4_ =
       fVar37 * fVar37 * fVar37 * fVar37 * fVar38 *
       (fVar37 * (fVar37 * (fVar37 * (fVar37 * _DAT_14615a184 + _DAT_14615a180) + _DAT_14615a188) +
                 _DAT_14615a18c) + _DAT_14615a190) +
       fVar37 * fVar38 * (fVar37 * (fVar37 * _DAT_14615a198 + _DAT_14615a194) + _DAT_14615a19c) +
       (float)(auVar9._0_4_ & ((uint)auVar33._0_4_ & _DAT_145fc6f10 | _DAT_146159bdc)) + fVar38;
  auVar52._4_4_ =
       fVar42 * fVar42 * fVar42 * fVar42 * fVar43 *
       (fVar42 * (fVar42 * (fVar42 * (fVar42 * _DAT_14615a184 + _DAT_14615a180) + _DAT_14615a188) +
                 _DAT_14615a18c) + _DAT_14615a190) +
       fVar42 * fVar43 * (fVar42 * (fVar42 * _DAT_14615a198 + _DAT_14615a194) + _DAT_14615a19c) +
       (float)(auVar9._4_4_ & ((uint)auVar33._4_4_ & _DAT_145fc6f10 | _DAT_146159bdc)) + fVar43;
  auVar52._8_4_ =
       fVar44 * fVar44 * fVar44 * fVar44 * fVar45 *
       (fVar44 * (fVar44 * (fVar44 * (fVar44 * _DAT_14615a184 + _DAT_14615a180) + _DAT_14615a188) +
                 _DAT_14615a18c) + _DAT_14615a190) +
       fVar44 * fVar45 * (fVar44 * (fVar44 * _DAT_14615a198 + _DAT_14615a194) + _DAT_14615a19c) +
       (float)(auVar9._8_4_ & ((uint)auVar33._8_4_ & _DAT_145fc6f10 | _DAT_146159bdc)) + fVar45;
  auVar52._12_4_ =
       fVar46 * fVar46 * fVar46 * fVar46 * fVar47 *
       (fVar46 * (fVar46 * (fVar46 * (fVar46 * _DAT_14615a184 + _DAT_14615a180) + _DAT_14615a188) +
                 _DAT_14615a18c) + _DAT_14615a190) +
       fVar46 * fVar47 * (fVar46 * (fVar46 * _DAT_14615a198 + _DAT_14615a194) + _DAT_14615a19c) +
       (float)(auVar9._12_4_ & ((uint)auVar33._12_4_ & _DAT_145fc6f10 | _DAT_146159bdc)) + fVar47;
  auVar35._4_4_ = _DAT_146159be0;
  auVar35._0_4_ = _DAT_146159be0;
  auVar35._8_4_ = _DAT_146159be0;
  auVar35._12_4_ = _DAT_146159be0;
  auVar34._0_4_ = (uint)auVar31._0_4_ ^ _DAT_145fc6f10;
  auVar34._4_4_ = (uint)auVar31._4_4_ ^ _DAT_145fc6f10;
  auVar34._8_4_ = (uint)auVar31._8_4_ ^ _DAT_145fc6f10;
  auVar34._12_4_ = (uint)auVar31._12_4_ ^ _DAT_145fc6f10;
  auVar16 = vcmpps_avx(auVar31,auVar34,1);
  auVar16 = vblendvps_avx(auVar40,auVar35,auVar16);
  auVar25._0_4_ = auVar52._0_4_ + auVar16._0_4_;
  auVar25._4_4_ = auVar52._4_4_ + auVar16._4_4_;
  auVar25._8_4_ = auVar52._8_4_ + auVar16._8_4_;
  auVar25._12_4_ = auVar52._12_4_ + auVar16._12_4_;
  auVar16 = vblendvps_avx(auVar52,auVar25,auVar10);
  auVar49._4_4_ = _DAT_146159bdc;
  auVar49._0_4_ = _DAT_146159bdc;
  auVar49._8_4_ = _DAT_146159bdc;
  auVar49._12_4_ = _DAT_146159bdc;
  auVar53._4_4_ = _DAT_14615a1a0;
  auVar53._0_4_ = _DAT_14615a1a0;
  auVar53._8_4_ = _DAT_14615a1a0;
  auVar53._12_4_ = _DAT_14615a1a0;
  auVar10 = vcmpps_avx(auVar34,auVar31,1);
  auVar10 = vblendvps_avx(auVar53,auVar49,auVar10);
  auVar16 = vblendvps_avx(auVar16,auVar10,auVar8);
  auVar10 = vminps_avx(*param_3,auVar18);
  auVar8 = vsubps_avx(auVar15,auVar2);
  auVar9 = vsubps_avx(auVar18,auVar10);
  fVar24 = auVar10._0_4_ * auVar8._0_4_ + fVar7;
  fVar26 = auVar10._4_4_ * auVar8._4_4_ + fVar11;
  fVar27 = auVar10._8_4_ * auVar8._8_4_ + fVar12;
  fVar28 = auVar10._12_4_ * auVar8._12_4_ + fVar13;
  auVar10 = vunpcklps_avx(auVar9,auVar10);
  fVar38 = auVar16._0_4_ * auVar10._0_4_;
  fVar43 = auVar16._4_4_ * auVar10._4_4_;
  fVar45 = auVar16._8_4_ * auVar10._8_4_;
  fVar47 = auVar16._12_4_ * auVar10._12_4_;
  auVar48._0_4_ = fVar38 * _DAT_146159b48;
  auVar48._4_4_ = fVar43 * _DAT_146159b48;
  auVar48._8_4_ = fVar45 * _DAT_146159b48;
  auVar48._12_4_ = fVar47 * _DAT_146159b48;
  auVar16 = vroundps_avx(auVar48,0);
  fVar38 = auVar16._0_4_ * _DAT_146159be0 + fVar38;
  fVar43 = auVar16._4_4_ * _DAT_146159be0 + fVar43;
  fVar45 = auVar16._8_4_ * _DAT_146159be0 + fVar45;
  fVar47 = auVar16._12_4_ * _DAT_146159be0 + fVar47;
  fVar37 = fVar38 * fVar38;
  fVar42 = fVar43 * fVar43;
  fVar44 = fVar45 * fVar45;
  fVar46 = fVar47 * fVar47;
  auVar50._4_4_ = _DAT_145f43778;
  auVar50._0_4_ = _DAT_145f43778;
  auVar50._8_4_ = _DAT_145f43778;
  auVar50._12_4_ = _DAT_145f43778;
  fVar37 = fVar37 * (fVar37 * (fVar37 * (fVar37 * _DAT_146159be8 + _DAT_146159be4) + _DAT_146159bec)
                    + _DAT_146159bf0) + _DAT_145fc6ed8;
  fVar42 = fVar42 * (fVar42 * (fVar42 * (fVar42 * _DAT_146159be8 + _DAT_146159be4) + _DAT_146159bec)
                    + _DAT_146159bf0) + _DAT_145fc6ed8;
  fVar44 = fVar44 * (fVar44 * (fVar44 * (fVar44 * _DAT_146159be8 + _DAT_146159be4) + _DAT_146159bec)
                    + _DAT_146159bf0) + _DAT_145fc6ed8;
  fVar46 = fVar46 * (fVar46 * (fVar46 * (fVar46 * _DAT_146159be8 + _DAT_146159be4) + _DAT_146159bec)
                    + _DAT_146159bf0) + _DAT_145fc6ed8;
  auVar41._0_4_ = fVar37 * fVar38;
  auVar41._4_4_ = fVar42 * fVar43;
  auVar41._8_4_ = fVar44 * fVar45;
  auVar41._12_4_ = fVar46 * fVar47;
  auVar55._0_4_ = -(fVar38 * fVar37) - 0.0;
  auVar55._4_4_ = -(fVar43 * fVar42) - 0.0;
  auVar55._8_4_ = -(fVar45 * fVar44) - 0.0;
  auVar55._12_4_ = -(fVar47 * fVar46) - 0.0;
  auVar36._0_4_ = (int)auVar16._0_4_;
  auVar36._4_4_ = (int)auVar16._4_4_;
  auVar36._8_4_ = (int)auVar16._8_4_;
  auVar36._12_4_ = (int)auVar16._12_4_;
  auVar16 = vpand_avx(auVar36,auVar50);
  auVar16 = vpcmpeqd_avx(auVar16,auVar22);
  auVar10 = vrcpps_avx(auVar31);
  auVar16 = vblendvps_avx(auVar55,auVar41,auVar16);
  fVar38 = auVar10._0_4_;
  fVar43 = auVar10._4_4_;
  fVar45 = auVar10._8_4_;
  fVar47 = auVar10._12_4_;
  auVar19._0_4_ = auVar16._0_4_ * (-((auVar31._0_4_ * fVar38 - _DAT_145fc6ed8) * fVar38) + fVar38);
  auVar19._4_4_ = auVar16._4_4_ * (-((auVar31._4_4_ * fVar43 - _DAT_145fc6ed8) * fVar43) + fVar43);
  auVar19._8_4_ = auVar16._8_4_ * (-((auVar31._8_4_ * fVar45 - _DAT_145fc6ed8) * fVar45) + fVar45);
  auVar19._12_4_ =
       auVar16._12_4_ * (-((auVar31._12_4_ * fVar47 - _DAT_145fc6ed8) * fVar47) + fVar47);
  auVar16 = vshufps_avx(auVar19,auVar19,0x55);
  fVar37 = auVar15._0_4_ * auVar16._0_4_ + auVar19._0_4_ * fVar7;
  fVar42 = auVar15._4_4_ * auVar16._4_4_ + auVar19._0_4_ * fVar11;
  fVar44 = auVar15._8_4_ * auVar16._8_4_ + auVar19._0_4_ * fVar12;
  fVar46 = auVar15._12_4_ * auVar16._12_4_ + auVar19._0_4_ * fVar13;
  auVar20._0_4_ = fVar37 * fVar37;
  auVar20._4_4_ = fVar42 * fVar42;
  auVar20._8_4_ = fVar44 * fVar44;
  auVar20._12_4_ = fVar46 * fVar46;
  auVar16 = vhaddps_avx(auVar20,auVar20);
  auVar16 = vhaddps_avx(auVar16,auVar16);
  auVar10 = vrsqrtps_avx(auVar16);
  fVar38 = auVar10._0_4_;
  fVar43 = auVar10._4_4_;
  fVar45 = auVar10._8_4_;
  fVar47 = auVar10._12_4_;
  auVar21._0_4_ =
       fVar37 * ((_DAT_145fc6f08 * fVar38 * fVar38 * auVar16._0_4_ - _DAT_145fc6f08) * fVar38 +
                fVar38);
  auVar21._4_4_ =
       fVar42 * ((_DAT_145fc6f08 * fVar43 * fVar43 * auVar16._4_4_ - _DAT_145fc6f08) * fVar43 +
                fVar43);
  auVar21._8_4_ =
       fVar44 * ((_DAT_145fc6f08 * fVar45 * fVar45 * auVar16._8_4_ - _DAT_145fc6f08) * fVar45 +
                fVar45);
  auVar21._12_4_ =
       fVar46 * ((_DAT_145fc6f08 * fVar47 * fVar47 * auVar16._12_4_ - _DAT_145fc6f08) * fVar47 +
                fVar47);
  auVar16 = vcmpps_avx(auVar31,auVar34,0);
  auVar16 = vblendvps_avx(auVar21,auVar2,auVar16);
  auVar23._0_4_ = fVar7 + _DAT_146159ef0;
  auVar23._4_4_ = fVar11 + _DAT_146159ef0;
  auVar23._8_4_ = fVar12 + _DAT_146159ef0;
  auVar23._12_4_ = fVar13 + _DAT_146159ef0;
  auVar8._0_4_ = fVar7 + _DAT_146159ef4;
  auVar8._4_4_ = fVar11 + _DAT_146159ef4;
  auVar8._8_4_ = fVar12 + _DAT_146159ef4;
  auVar8._12_4_ = fVar13 + _DAT_146159ef4;
  auVar10 = vcmpps_avx(auVar23,auVar15,2);
  auVar15 = vcmpps_avx(auVar15,auVar8,2);
  auVar14._0_4_ = fVar24 * fVar24;
  auVar14._4_4_ = fVar26 * fVar26;
  auVar14._8_4_ = fVar27 * fVar27;
  auVar14._12_4_ = fVar28 * fVar28;
  auVar9._0_4_ = auVar10._0_4_ & auVar15._0_4_;
  auVar9._4_4_ = auVar10._4_4_ & auVar15._4_4_;
  auVar9._8_4_ = auVar10._8_4_ & auVar15._8_4_;
  auVar9._12_4_ = auVar10._12_4_ & auVar15._12_4_;
  auVar10 = vpcmpeqd_avx(auVar10,auVar10);
  auVar15 = vhaddps_avx(auVar14,auVar14);
  iVar5 = -(uint)((auVar10 & ~auVar9) == (undefined1  [16])0x0);
  auVar15 = vhaddps_avx(auVar15,auVar15);
  auVar10 = vrsqrtps_avx(auVar15);
  fVar38 = auVar10._0_4_;
  fVar43 = auVar10._4_4_;
  fVar45 = auVar10._8_4_;
  fVar47 = auVar10._12_4_;
  auVar10._0_4_ =
       ((_DAT_145fc6f08 * fVar38 * fVar38 * auVar15._0_4_ - _DAT_145fc6f08) * fVar38 + fVar38) *
       fVar24;
  auVar10._4_4_ =
       ((_DAT_145fc6f08 * fVar43 * fVar43 * auVar15._4_4_ - _DAT_145fc6f08) * fVar43 + fVar43) *
       fVar26;
  auVar10._8_4_ =
       ((_DAT_145fc6f08 * fVar45 * fVar45 * auVar15._8_4_ - _DAT_145fc6f08) * fVar45 + fVar45) *
       fVar27;
  auVar10._12_4_ =
       ((_DAT_145fc6f08 * fVar47 * fVar47 * auVar15._12_4_ - _DAT_145fc6f08) * fVar47 + fVar47) *
       fVar28;
  auVar15._4_4_ = iVar5;
  auVar15._0_4_ = iVar5;
  auVar15._8_4_ = iVar5;
  auVar15._12_4_ = iVar5;
  auStack_178 = vblendvps_avx(auVar16,auVar10,auVar15);
  FUN_144df2390(*param_1,(int)param_1[1]);
  if (param_4 != 0) {
    FUN_144e065a0(auStack_188,param_1);
  }
  return;
}

