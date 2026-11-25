// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14001bfc0  size: 1382 bytes
// Name:    FUN_14001bfc0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14001bfc0(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  float fVar9;
  int iVar10;
  undefined4 uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar15;
  float fVar18;
  float fVar19;
  undefined1 auVar16 [16];
  float fVar20;
  undefined1 auVar17 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  short sVar25;
  float fVar26;
  short sVar31;
  float fVar32;
  float fVar33;
  undefined1 auVar27 [16];
  float fVar34;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar35;
  float fVar36;
  float fVar39;
  float fVar41;
  undefined1 auVar37 [16];
  float fVar40;
  float fVar42;
  float fVar43;
  float fVar44;
  undefined1 auVar38 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  float fVar49;
  float fVar54;
  float fVar55;
  float fVar56;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  float fVar64;
  float fVar66;
  float fVar67;
  undefined1 auVar65 [16];
  float fVar68;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  
  uStack_d8 = *(undefined8 *)*(undefined1 (*) [16])(param_1 + 0xa0);
  uStack_d0 = *(undefined8 *)(param_1 + 0xa8);
  auVar13 = *(undefined1 (*) [16])(param_1 + 0xa0);
  uStack_c8 = *(undefined8 *)(param_1 + 0xb0);
  uStack_c0 = *(undefined8 *)(param_1 + 0xb8);
  iVar1 = *(int *)(param_1 + 0xc0);
  param_2 = (longlong *)*param_2;
  if (param_2 == (longlong *)0x0 || iVar1 == -1) {
    uStack_c8._4_4_ = (float)((ulonglong)uStack_c8 >> 0x20);
    uStack_c0._4_4_ = (float)((ulonglong)uStack_c0 >> 0x20);
  }
  else {
    iVar10 = func_0x000144e05fa0(param_2[1]);
    if (iVar1 == iVar10) {
      uStack_c8._0_4_ = 0.0;
      uStack_c8._4_4_ = 0.0;
      uStack_c0._0_4_ = 0.0;
      uStack_c0._4_4_ = 0.0;
      auVar12 = _DAT_145fc6ee0;
    }
    else {
      uVar11 = (**(code **)(*param_2 + 0xf0))(param_2,iVar1);
      (**(code **)(*param_2 + 0x108))(param_2,uVar11,&uStack_d8);
      auVar12._8_8_ = uStack_d0;
      auVar12._0_8_ = uStack_d8;
    }
    auVar13 = *(undefined1 (*) [16])(param_1 + 0xb0);
    auVar17 = vshufps_avx(auVar12,auVar12,0xc9);
    auVar3 = vshufps_avx(auVar12,auVar12,0xd2);
    auVar2 = *(undefined1 (*) [16])(param_1 + 0xa0);
    auVar16 = vshufps_avx(auVar13,auVar13,0xd2);
    auVar14 = vshufps_avx(auVar13,auVar13,0xc9);
    fVar49 = -(auVar3._0_4_ * auVar14._0_4_) + auVar17._0_4_ * auVar16._0_4_;
    fVar54 = -(auVar3._4_4_ * auVar14._4_4_) + auVar17._4_4_ * auVar16._4_4_;
    fVar55 = -(auVar3._8_4_ * auVar14._8_4_) + auVar17._8_4_ * auVar16._8_4_;
    fVar56 = -(auVar3._12_4_ * auVar14._12_4_) + auVar17._12_4_ * auVar16._12_4_;
    auVar27._0_4_ = (uint)auVar2._0_4_ ^ _DAT_145fc6f10;
    auVar27._4_4_ = (uint)auVar2._4_4_ ^ _DAT_145fc6f10;
    auVar27._8_4_ = (uint)auVar2._8_4_ ^ _DAT_145fc6f10;
    auVar27._12_4_ = (uint)auVar2._12_4_ ^ _DAT_145fc6f10;
    auVar50._0_4_ = fVar49 + fVar49;
    auVar50._4_4_ = fVar54 + fVar54;
    auVar50._8_4_ = fVar55 + fVar55;
    auVar50._12_4_ = fVar56 + fVar56;
    auVar16 = vshufps_avx(auVar50,auVar50,0xd2);
    auVar14 = vshufps_avx(auVar50,auVar50,0xc9);
    auVar21 = vshufps_avx(auVar12,auVar12,0xaa);
    auVar22 = vshufps_avx(auVar12,auVar12,0xff);
    auVar24 = vshufps_avx(auVar12,auVar12,0x55);
    uStack_c8._0_4_ =
         auVar22._0_4_ * auVar50._0_4_ + (float)uStack_c8 + auVar13._0_4_ +
         -(auVar3._0_4_ * auVar14._0_4_) + auVar16._0_4_ * auVar17._0_4_;
    uStack_c8._4_4_ =
         auVar22._4_4_ * auVar50._4_4_ + uStack_c8._4_4_ + auVar13._4_4_ +
         -(auVar3._4_4_ * auVar14._4_4_) + auVar16._4_4_ * auVar17._4_4_;
    uStack_c0._0_4_ =
         auVar22._8_4_ * auVar50._8_4_ + (float)uStack_c0 + auVar13._8_4_ +
         -(auVar3._8_4_ * auVar14._8_4_) + auVar16._8_4_ * auVar17._8_4_;
    uStack_c0._4_4_ =
         auVar22._12_4_ * auVar50._12_4_ + uStack_c0._4_4_ + auVar13._12_4_ +
         -(auVar3._12_4_ * auVar14._12_4_) + auVar16._12_4_ * auVar17._12_4_;
    fVar49 = auVar12._0_4_;
    auVar13 = vblendps_avx(auVar27,auVar2,10);
    auVar17 = vshufps_avx(auVar13,auVar13,0x1b);
    auVar12 = vshufpd_avx(auVar2,auVar27,1);
    auVar13 = vblendps_avx(auVar27,auVar2,9);
    auVar3 = vshufps_avx(auVar13,auVar13,0xb1);
    auVar13._0_4_ =
         auVar21._0_4_ * auVar3._0_4_ +
         auVar24._0_4_ * auVar12._0_4_ + fVar49 * auVar17._0_4_ + auVar2._0_4_ * auVar22._0_4_;
    auVar13._4_4_ =
         auVar21._4_4_ * auVar3._4_4_ +
         auVar24._4_4_ * auVar12._4_4_ + fVar49 * auVar17._4_4_ + auVar2._4_4_ * auVar22._4_4_;
    auVar13._8_4_ =
         auVar21._8_4_ * auVar3._8_4_ +
         auVar24._8_4_ * auVar12._8_4_ + fVar49 * auVar17._8_4_ + auVar2._8_4_ * auVar22._8_4_;
    auVar13._12_4_ =
         auVar21._12_4_ * auVar3._12_4_ +
         auVar24._12_4_ * auVar12._12_4_ + fVar49 * auVar17._12_4_ + auVar2._12_4_ * auVar22._12_4_;
  }
  fVar9 = _DAT_14615a290;
  auVar21._0_4_ = auVar13._0_4_ + auVar13._0_4_;
  auVar21._4_4_ = auVar13._4_4_ + auVar13._4_4_;
  auVar21._8_4_ = auVar13._8_4_ + auVar13._8_4_;
  auVar21._12_4_ = auVar13._12_4_ + auVar13._12_4_;
  auVar12 = vshufps_avx(auVar13,auVar13,0xff);
  auVar2 = vshufps_avx(auVar13,auVar13,0xc9);
  auVar13 = vshufps_avx(auVar13,auVar13,0xd2);
  auVar17 = vshufps_avx(auVar21,auVar21,0xc9);
  auVar3 = vshufps_avx(auVar21,auVar21,0xd2);
  auVar58._0_4_ = auVar13._0_4_ * auVar21._0_4_ + auVar17._0_4_ * auVar12._0_4_;
  auVar58._4_4_ = auVar13._4_4_ * auVar21._4_4_ + auVar17._4_4_ * auVar12._4_4_;
  auVar58._8_4_ = auVar13._8_4_ * auVar21._8_4_ + auVar17._8_4_ * auVar12._8_4_;
  auVar58._12_4_ = auVar13._12_4_ * auVar21._12_4_ + auVar17._12_4_ * auVar12._12_4_;
  auVar37._0_4_ = -(auVar12._0_4_ * auVar3._0_4_) + auVar2._0_4_ * auVar21._0_4_;
  auVar37._4_4_ = -(auVar12._4_4_ * auVar3._4_4_) + auVar2._4_4_ * auVar21._4_4_;
  auVar37._8_4_ = -(auVar12._8_4_ * auVar3._8_4_) + auVar2._8_4_ * auVar21._8_4_;
  auVar37._12_4_ = -(auVar12._12_4_ * auVar3._12_4_) + auVar2._12_4_ * auVar21._12_4_;
  auVar51._0_4_ = -(auVar3._0_4_ * auVar13._0_4_) - (auVar2._0_4_ * auVar17._0_4_ - _DAT_145fc6ed8);
  auVar51._4_4_ = -(auVar3._4_4_ * auVar13._4_4_) - (auVar2._4_4_ * auVar17._4_4_ - _DAT_145fc6ed8);
  auVar51._8_4_ = -(auVar3._8_4_ * auVar13._8_4_) - (auVar2._8_4_ * auVar17._8_4_ - _DAT_145fc6ed8);
  auVar51._12_4_ =
       -(auVar3._12_4_ * auVar13._12_4_) - (auVar2._12_4_ * auVar17._12_4_ - _DAT_145fc6ed8);
  auVar13 = vblendps_avx(auVar58,auVar37,2);
  auVar12 = vblendps_avx(auVar51,auVar58,2);
  auVar2 = vblendps_avx(auVar37,auVar51,2);
  auVar17 = vblendps_avx(auVar51,auVar13,3);
  fVar4 = *(float *)(param_1 + 0x60);
  fVar5 = *(float *)(param_1 + 100);
  fVar6 = *(float *)(param_1 + 0x68);
  fVar7 = *(float *)(param_1 + 0x6c);
  auVar3 = vblendps_avx(auVar37,auVar12,3);
  auVar2 = vblendps_avx(auVar58,auVar2,3);
  auVar13 = *(undefined1 (*) [16])(param_1 + 0x70);
  auVar12 = *(undefined1 (*) [16])(param_1 + 0x80);
  auVar16 = vshufps_avx(auVar12,auVar13,0x33);
  auVar16 = vshufps_avx(auVar13,auVar16,0x8f);
  auVar69._0_4_ = (_DAT_145fc6ed8 + auVar16._0_4_) * (float)uStack_c8;
  auVar69._4_4_ = (_DAT_145fc6ed8 + auVar16._4_4_) * uStack_c8._4_4_;
  auVar69._8_4_ = (_DAT_145fc6ed8 + auVar16._8_4_) * (float)uStack_c0;
  auVar69._12_4_ = (_DAT_145fc6ed8 + auVar16._12_4_) * uStack_c0._4_4_;
  fVar49 = auVar3._0_4_;
  auVar16._0_4_ = fVar49 * fVar49;
  fVar55 = auVar3._4_4_;
  auVar16._4_4_ = fVar55 * fVar55;
  fVar64 = auVar3._8_4_;
  auVar16._8_4_ = fVar64 * fVar64;
  fVar67 = auVar3._12_4_;
  auVar16._12_4_ = fVar67 * fVar67;
  auVar3 = vblendps_avx(auVar16,ZEXT816(0) << 0x20,8);
  auVar3 = vhaddps_avx(auVar3,auVar3);
  auVar16 = vhaddps_avx(auVar3,auVar3);
  auVar3 = vrsqrtps_avx(auVar16);
  fVar54 = auVar3._0_4_;
  fVar56 = auVar3._4_4_;
  fVar66 = auVar3._8_4_;
  fVar68 = auVar3._12_4_;
  auVar14._4_4_ = _DAT_146159bfc;
  auVar14._0_4_ = _DAT_146159bfc;
  auVar14._8_4_ = _DAT_146159bfc;
  auVar14._12_4_ = _DAT_146159bfc;
  auVar3 = vcmpps_avx(auVar14,auVar16,2);
  auVar65._0_4_ =
       (float)(auVar3._0_4_ &
              (uint)(((_DAT_145fc6f08 * fVar54 * fVar54 * auVar16._0_4_ - _DAT_145fc6f08) * fVar54 +
                     fVar54) * auVar16._0_4_));
  auVar65._4_4_ =
       (float)(auVar3._4_4_ &
              (uint)(((_DAT_145fc6f08 * fVar56 * fVar56 * auVar16._4_4_ - _DAT_145fc6f08) * fVar56 +
                     fVar56) * auVar16._4_4_));
  auVar65._8_4_ =
       (float)(auVar3._8_4_ &
              (uint)(((_DAT_145fc6f08 * fVar66 * fVar66 * auVar16._8_4_ - _DAT_145fc6f08) * fVar66 +
                     fVar66) * auVar16._8_4_));
  auVar65._12_4_ =
       (float)(auVar3._12_4_ &
              (uint)(((_DAT_145fc6f08 * fVar68 * fVar68 * auVar16._12_4_ - _DAT_145fc6f08) * fVar68
                     + fVar68) * auVar16._12_4_));
  auVar3 = vrcpps_avx(auVar65);
  fVar56 = auVar3._0_4_;
  fVar66 = auVar3._4_4_;
  fVar68 = auVar3._8_4_;
  fVar54 = auVar3._12_4_;
  auVar59._0_4_ = (uint)auVar65._0_4_ ^ _DAT_145fc6f10;
  auVar59._4_4_ = (uint)auVar65._4_4_ ^ _DAT_145fc6f10;
  auVar59._8_4_ = (uint)auVar65._8_4_ ^ _DAT_145fc6f10;
  auVar59._12_4_ = (uint)auVar65._12_4_ ^ _DAT_145fc6f10;
  auVar78._0_4_ = -((auVar65._0_4_ * fVar56 - _DAT_145fc6ed8) * fVar56) + fVar56;
  auVar78._4_4_ = -((auVar65._4_4_ * fVar66 - _DAT_145fc6ed8) * fVar66) + fVar66;
  auVar78._8_4_ = -((auVar65._8_4_ * fVar68 - _DAT_145fc6ed8) * fVar68) + fVar68;
  auVar78._12_4_ = -((auVar65._12_4_ * fVar54 - _DAT_145fc6ed8) * fVar54) + fVar54;
  auVar3 = vcmpps_avx(auVar65,auVar59,0);
  auVar60._4_4_ = _DAT_14615b36c;
  auVar60._0_4_ = _DAT_14615b36c;
  auVar60._8_4_ = _DAT_14615b36c;
  auVar60._12_4_ = _DAT_14615b36c;
  auVar3 = vblendvps_avx(auVar78,auVar60,auVar3);
  fVar54 = auVar3._0_4_;
  auVar22._0_4_ = fVar54 * fVar49;
  fVar49 = auVar3._4_4_;
  auVar22._4_4_ = fVar49 * fVar55;
  fVar55 = auVar3._8_4_;
  auVar22._8_4_ = fVar55 * fVar64;
  fVar56 = auVar3._12_4_;
  auVar22._12_4_ = fVar56 * fVar67;
  auVar72._0_4_ = auVar2._0_4_ * fVar54;
  auVar72._4_4_ = auVar2._4_4_ * fVar49;
  auVar72._8_4_ = auVar2._8_4_ * fVar55;
  auVar72._12_4_ = auVar2._12_4_ * fVar56;
  auVar75._0_4_ = auVar17._0_4_ * fVar54;
  auVar75._4_4_ = auVar17._4_4_ * fVar49;
  auVar75._8_4_ = auVar17._8_4_ * fVar55;
  auVar75._12_4_ = auVar17._12_4_ * fVar56;
  auVar2 = vshufps_avx(auVar22,auVar22,0x55);
  auVar17 = vshufps_avx(auVar22,auVar22,0xaa);
  auVar3 = vshufps_avx(auVar72,auVar72,0xaa);
  fVar35 = auVar13._0_4_;
  fVar39 = auVar13._4_4_;
  fVar41 = auVar13._8_4_;
  fVar43 = auVar13._12_4_;
  auVar13 = vshufps_avx(auVar72,auVar72,0x55);
  fVar26 = auVar12._0_4_;
  fVar15 = fVar26 * auVar17._0_4_ + fVar35 * auVar2._0_4_ + auVar22._0_4_ * fVar4;
  fVar32 = auVar12._4_4_;
  fVar18 = fVar32 * auVar17._4_4_ + fVar39 * auVar2._4_4_ + auVar22._0_4_ * fVar5;
  fVar33 = auVar12._8_4_;
  fVar19 = fVar33 * auVar17._8_4_ + fVar41 * auVar2._8_4_ + auVar22._0_4_ * fVar6;
  fVar34 = auVar12._12_4_;
  fVar20 = fVar34 * auVar17._12_4_ + fVar43 * auVar2._12_4_ + auVar22._0_4_ * fVar7;
  auVar16 = vshufps_avx(auVar75,auVar75,0x55);
  auVar73._0_4_ = fVar26 * auVar3._0_4_ + fVar35 * auVar13._0_4_ + auVar72._0_4_ * fVar4;
  auVar73._4_4_ = fVar32 * auVar3._4_4_ + fVar39 * auVar13._4_4_ + auVar72._0_4_ * fVar5;
  auVar73._8_4_ = fVar33 * auVar3._8_4_ + fVar41 * auVar13._8_4_ + auVar72._0_4_ * fVar6;
  auVar73._12_4_ = fVar34 * auVar3._12_4_ + fVar43 * auVar13._12_4_ + auVar72._0_4_ * fVar7;
  auVar14 = vshufps_avx(auVar75,auVar75,0xaa);
  auVar13 = *(undefined1 (*) [16])(param_1 + 0x90);
  auVar12 = vshufps_avx(auVar69,auVar69,0x55);
  auVar2 = vshufps_avx(auVar69,auVar69,0xaa);
  auVar76._0_4_ =
       fVar26 * auVar2._0_4_ + fVar35 * auVar12._0_4_ + fVar4 * auVar69._0_4_ + auVar13._0_4_;
  auVar76._4_4_ =
       fVar32 * auVar2._4_4_ + fVar39 * auVar12._4_4_ + fVar5 * auVar69._0_4_ + auVar13._4_4_;
  auVar76._8_4_ =
       fVar33 * auVar2._8_4_ + fVar41 * auVar12._8_4_ + fVar6 * auVar69._0_4_ + auVar13._8_4_;
  auVar76._12_4_ =
       fVar34 * auVar2._12_4_ + fVar43 * auVar12._12_4_ + fVar7 * auVar69._0_4_ + auVar13._12_4_;
  auVar28._4_4_ = _DAT_14615a290;
  auVar28._0_4_ = _DAT_14615a290;
  auVar28._8_4_ = _DAT_14615a290;
  auVar28._12_4_ = _DAT_14615a290;
  auVar13 = vblendps_avx(auVar76,auVar13,8);
  auVar12 = vrcpps_avx(auVar28);
  fVar36 = auVar12._0_4_;
  fVar40 = auVar12._4_4_;
  fVar42 = auVar12._8_4_;
  fVar44 = auVar12._12_4_;
  fVar36 = (-(fVar36 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar36 + fVar36;
  fVar40 = (-(fVar40 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar40 + fVar40;
  fVar42 = (-(fVar42 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar42 + fVar42;
  fVar44 = (-(fVar44 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar44 + fVar44;
  auVar45._0_4_ = auVar13._0_4_ * fVar36;
  auVar45._4_4_ = auVar13._4_4_ * fVar40;
  auVar45._8_4_ = auVar13._8_4_ * fVar42;
  auVar45._12_4_ = auVar13._12_4_ * fVar44;
  auVar12 = vroundps_avx(auVar45,3);
  auVar70._0_4_ = -(auVar12._0_4_ * _DAT_14615a290) + auVar13._0_4_;
  auVar70._4_4_ = -(auVar12._4_4_ * _DAT_14615a290) + auVar13._4_4_;
  auVar70._8_4_ = -(auVar12._8_4_ * _DAT_14615a290) + auVar13._8_4_;
  auVar70._12_4_ = -(auVar12._12_4_ * _DAT_14615a290) + auVar13._12_4_;
  auVar46._0_4_ = (int)auVar12._0_4_;
  auVar46._4_4_ = (int)auVar12._4_4_;
  auVar46._8_4_ = (int)auVar12._8_4_;
  auVar46._12_4_ = (int)auVar12._12_4_;
  auVar2 = vpackssdw_avx(auVar46,auVar46);
  auVar12 = vblendps_avx(auVar76,auVar70,3);
  auVar2 = vinsertps_avx(auVar12,auVar2,0x30);
  auVar3._0_2_ = auVar2._0_2_ + auVar13._0_2_;
  auVar3._2_2_ = auVar2._2_2_ + auVar13._2_2_;
  auVar3._4_2_ = auVar2._4_2_ + auVar13._4_2_;
  auVar3._6_2_ = auVar2._6_2_ + auVar13._6_2_;
  auVar3._8_2_ = auVar2._8_2_ + auVar13._8_2_;
  auVar3._10_2_ = auVar2._10_2_ + auVar13._10_2_;
  auVar3._12_2_ = auVar2._12_2_ + auVar13._12_2_;
  auVar3._14_2_ = auVar2._14_2_ + auVar13._14_2_;
  fVar64 = *(float *)(param_1 + 0xd0);
  fVar66 = *(float *)(param_1 + 0xd4);
  fVar67 = *(float *)(param_1 + 0xd8);
  fVar68 = *(float *)(param_1 + 0xdc);
  auVar47._4_4_ = _DAT_146159bfc;
  auVar47._0_4_ = _DAT_146159bfc;
  auVar47._8_4_ = _DAT_146159bfc;
  auVar47._12_4_ = _DAT_146159bfc;
  auVar77._0_4_ = fVar64 * fVar64;
  auVar77._4_4_ = fVar66 * fVar66;
  auVar77._8_4_ = fVar67 * fVar67;
  auVar77._12_4_ = fVar68 * fVar68;
  auVar13 = vblendps_avx(auVar77,_DAT_14614f7c0,8);
  auVar13 = vhaddps_avx(auVar13,auVar13);
  auVar2 = vhaddps_avx(auVar13,auVar13);
  auVar13 = vrsqrtps_avx(auVar2);
  fVar49 = auVar13._0_4_;
  fVar54 = auVar13._4_4_;
  fVar55 = auVar13._8_4_;
  fVar56 = auVar13._12_4_;
  auVar23._0_4_ = auVar65._0_4_ + _DAT_145fc6f48;
  auVar23._4_4_ = auVar65._4_4_ + _DAT_145fc6f48;
  auVar23._8_4_ = auVar65._8_4_ + _DAT_145fc6f48;
  auVar23._12_4_ = auVar65._12_4_ + _DAT_145fc6f48;
  auVar17 = vinsertps_avx(auVar73,auVar23,0x30);
  auVar13 = vcmpps_avx(auVar47,auVar2,2);
  auVar21 = vshufps_avx(auVar23,auVar23,0x20);
  auVar57._0_4_ =
       (float)(auVar13._0_4_ &
              (uint)(auVar2._0_4_ *
                    ((_DAT_145fc6f08 * auVar2._0_4_ * fVar49 * fVar49 - _DAT_145fc6f08) * fVar49 +
                    fVar49)));
  auVar57._4_4_ =
       (float)(auVar13._4_4_ &
              (uint)(auVar2._4_4_ *
                    ((_DAT_145fc6f08 * auVar2._4_4_ * fVar54 * fVar54 - _DAT_145fc6f08) * fVar54 +
                    fVar54)));
  auVar57._8_4_ =
       (float)(auVar13._8_4_ &
              (uint)(auVar2._8_4_ *
                    ((_DAT_145fc6f08 * auVar2._8_4_ * fVar55 * fVar55 - _DAT_145fc6f08) * fVar55 +
                    fVar55)));
  auVar57._12_4_ =
       (float)(auVar13._12_4_ &
              (uint)(auVar2._12_4_ *
                    ((_DAT_145fc6f08 * auVar2._12_4_ * fVar56 * fVar56 - _DAT_145fc6f08) * fVar56 +
                    fVar56)));
  auVar48._0_4_ = (auVar21._0_4_ + _DAT_145fc6ed8) * *(float *)(param_1 + 0x100);
  auVar48._4_4_ = (auVar21._4_4_ + _DAT_145fc6ed8) * *(float *)(param_1 + 0x104);
  auVar48._8_4_ = (auVar21._8_4_ + _DAT_145fc6ed8) * *(float *)(param_1 + 0x108);
  auVar48._12_4_ = (auVar21._12_4_ + _DAT_145fc6ed8) * *(float *)(param_1 + 0x10c);
  auVar2 = vrcpps_avx(auVar57);
  auVar52._0_4_ = (uint)auVar57._0_4_ ^ _DAT_145fc6f10;
  auVar52._4_4_ = (uint)auVar57._4_4_ ^ _DAT_145fc6f10;
  auVar52._8_4_ = (uint)auVar57._8_4_ ^ _DAT_145fc6f10;
  auVar52._12_4_ = (uint)auVar57._12_4_ ^ _DAT_145fc6f10;
  auVar13 = vcmpps_avx(auVar57,auVar52,0);
  fVar49 = auVar2._0_4_;
  fVar54 = auVar2._4_4_;
  fVar55 = auVar2._8_4_;
  fVar56 = auVar2._12_4_;
  auVar62._0_4_ = -((auVar57._0_4_ * fVar49 - _DAT_145fc6ed8) * fVar49) + fVar49;
  auVar62._4_4_ = -((auVar57._4_4_ * fVar54 - _DAT_145fc6ed8) * fVar54) + fVar54;
  auVar62._8_4_ = -((auVar57._8_4_ * fVar55 - _DAT_145fc6ed8) * fVar55) + fVar55;
  auVar62._12_4_ = -((auVar57._12_4_ * fVar56 - _DAT_145fc6ed8) * fVar56) + fVar56;
  auVar13 = vblendvps_avx(auVar62,auVar60,auVar13);
  fVar49 = auVar13._0_4_;
  auVar53._0_4_ = fVar49 * *(float *)(param_1 + 0xe0);
  fVar54 = auVar13._4_4_;
  auVar53._4_4_ = fVar54 * *(float *)(param_1 + 0xe4);
  fVar55 = auVar13._8_4_;
  auVar53._8_4_ = fVar55 * *(float *)(param_1 + 0xe8);
  fVar56 = auVar13._12_4_;
  auVar53._12_4_ = fVar56 * *(float *)(param_1 + 0xec);
  auVar61._0_4_ = fVar49 * fVar64;
  auVar61._4_4_ = fVar54 * fVar66;
  auVar61._8_4_ = fVar55 * fVar67;
  auVar61._12_4_ = fVar56 * fVar68;
  auVar2 = vshufps_avx(auVar61,auVar61,0x55);
  auVar21 = vshufps_avx(auVar61,auVar61,0xaa);
  fVar64 = auVar17._0_4_;
  fVar66 = auVar17._4_4_;
  fVar67 = auVar17._8_4_;
  fVar68 = auVar17._12_4_;
  auVar17 = vshufps_avx(auVar53,auVar53,0x55);
  auVar22 = vshufps_avx(auVar53,auVar53,0xaa);
  auVar13 = vblendps_avx(auVar12,auVar3,8);
  auVar63._0_4_ = fVar49 * *(float *)(param_1 + 0xf0);
  auVar63._4_4_ = fVar54 * *(float *)(param_1 + 0xf4);
  auVar63._8_4_ = fVar55 * *(float *)(param_1 + 0xf8);
  auVar63._12_4_ = fVar56 * *(float *)(param_1 + 0xfc);
  auVar24 = vshufps_avx(auVar63,auVar63,0x55);
  auVar27 = vshufps_avx(auVar48,auVar48,0x55);
  auVar50 = vshufps_avx(auVar48,auVar48,0xaa);
  auVar8._4_4_ = fVar32 * auVar14._4_4_ + fVar39 * auVar16._4_4_ + auVar75._0_4_ * fVar5;
  auVar8._0_4_ = fVar26 * auVar14._0_4_ + fVar35 * auVar16._0_4_ + auVar75._0_4_ * fVar4;
  auVar8._8_4_ = fVar33 * auVar14._8_4_ + fVar41 * auVar16._8_4_ + auVar75._0_4_ * fVar6;
  auVar8._12_4_ = fVar34 * auVar14._12_4_ + fVar43 * auVar16._12_4_ + auVar75._0_4_ * fVar7;
  auVar12 = vinsertps_avx(auVar8,auVar23,0xb0);
  fVar49 = auVar12._0_4_;
  auVar74._0_4_ = fVar49 * auVar22._0_4_ + fVar64 * auVar17._0_4_ + auVar53._0_4_ * fVar15;
  fVar54 = auVar12._4_4_;
  auVar74._4_4_ = fVar54 * auVar22._4_4_ + fVar66 * auVar17._4_4_ + auVar53._0_4_ * fVar18;
  fVar55 = auVar12._8_4_;
  auVar74._8_4_ = fVar55 * auVar22._8_4_ + fVar67 * auVar17._8_4_ + auVar53._0_4_ * fVar19;
  fVar56 = auVar12._12_4_;
  auVar74._12_4_ = fVar56 * auVar22._12_4_ + fVar68 * auVar17._12_4_ + auVar53._0_4_ * fVar20;
  auVar12 = vshufps_avx(auVar63,auVar63,0xaa);
  auVar71._0_4_ =
       fVar49 * auVar50._0_4_ + fVar64 * auVar27._0_4_ + fVar15 * auVar48._0_4_ + auVar13._0_4_;
  auVar71._4_4_ =
       fVar54 * auVar50._4_4_ + fVar66 * auVar27._4_4_ + fVar18 * auVar48._0_4_ + auVar13._4_4_;
  auVar71._8_4_ =
       fVar55 * auVar50._8_4_ + fVar67 * auVar27._8_4_ + fVar19 * auVar48._0_4_ + auVar13._8_4_;
  auVar71._12_4_ =
       fVar56 * auVar50._12_4_ + fVar68 * auVar27._12_4_ + fVar20 * auVar48._0_4_ + auVar13._12_4_;
  auVar17._0_4_ = fVar49 * auVar12._0_4_ + fVar64 * auVar24._0_4_ + auVar63._0_4_ * fVar15;
  auVar17._4_4_ = fVar54 * auVar12._4_4_ + fVar66 * auVar24._4_4_ + auVar63._0_4_ * fVar18;
  auVar17._8_4_ = fVar55 * auVar12._8_4_ + fVar67 * auVar24._8_4_ + auVar63._0_4_ * fVar19;
  auVar17._12_4_ = fVar56 * auVar12._12_4_ + fVar68 * auVar24._12_4_ + auVar63._0_4_ * fVar20;
  auVar24._0_4_ = _DAT_145fc6f48 + auVar57._0_4_;
  auVar24._4_4_ = _DAT_145fc6f48 + auVar57._4_4_;
  auVar24._8_4_ = _DAT_145fc6f48 + auVar57._8_4_;
  auVar24._12_4_ = _DAT_145fc6f48 + auVar57._12_4_;
  auVar12 = vinsertps_avx(auVar74,auVar24,0x30);
  *(float *)(param_1 + 0x10) =
       fVar49 * auVar21._0_4_ + fVar64 * auVar2._0_4_ + auVar61._0_4_ * fVar15;
  *(float *)(param_1 + 0x14) =
       fVar54 * auVar21._4_4_ + fVar66 * auVar2._4_4_ + auVar61._0_4_ * fVar18;
  *(float *)(param_1 + 0x18) =
       fVar55 * auVar21._8_4_ + fVar67 * auVar2._8_4_ + auVar61._0_4_ * fVar19;
  *(float *)(param_1 + 0x1c) =
       fVar56 * auVar21._12_4_ + fVar68 * auVar2._12_4_ + auVar61._0_4_ * fVar20;
  auVar2 = vinsertps_avx(auVar17,auVar24,0xb0);
  auVar13 = vblendps_avx(auVar71,auVar3,8);
  *(undefined1 (*) [16])(param_1 + 0x20) = auVar12;
  auVar38._0_4_ = auVar13._0_4_ * fVar36;
  auVar38._4_4_ = auVar13._4_4_ * fVar40;
  auVar38._8_4_ = auVar13._8_4_ * fVar42;
  auVar38._12_4_ = auVar13._12_4_ * fVar44;
  *(undefined1 (*) [16])(param_1 + 0x30) = auVar2;
  auVar12 = vroundps_avx(auVar38,3);
  auVar29._0_4_ = -(auVar12._0_4_ * fVar9) + auVar13._0_4_;
  auVar29._4_4_ = -(auVar12._4_4_ * fVar9) + auVar13._4_4_;
  auVar29._8_4_ = -(auVar12._8_4_ * fVar9) + auVar13._8_4_;
  auVar29._12_4_ = -(auVar12._12_4_ * fVar9) + auVar13._12_4_;
  auVar13 = vblendps_avx(auVar71,auVar29,3);
  auVar30._0_4_ = (int)auVar12._0_4_;
  auVar30._4_4_ = (int)auVar12._4_4_;
  auVar30._8_4_ = (int)auVar12._8_4_;
  auVar30._12_4_ = (int)auVar12._12_4_;
  auVar12 = vpackssdw_avx(auVar30,auVar30);
  sVar25 = auVar12._0_2_;
  auVar2._0_2_ = auVar3._0_2_ + sVar25;
  sVar31 = auVar12._2_2_;
  auVar2._2_2_ = auVar3._2_2_ + sVar31;
  auVar2._4_2_ = auVar3._4_2_ + sVar25;
  auVar2._6_2_ = auVar3._6_2_ + sVar31;
  auVar2._8_2_ = auVar3._8_2_ + sVar25;
  auVar2._10_2_ = auVar3._10_2_ + sVar31;
  auVar2._12_2_ = auVar3._12_2_ + sVar25;
  auVar2._14_2_ = auVar3._14_2_ + sVar31;
  auVar13 = vblendps_avx(auVar13,auVar2,8);
  *(undefined1 (*) [16])(param_1 + 0x40) = auVar13;
  return;
}

