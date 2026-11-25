// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14006ef90  size: 1279 bytes
// Name:    FUN_14006ef90
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14555f540, FUN_1410e64b0, FUN_141700820, FUN_143d3b320
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14006ef90(longlong *param_1,undefined4 param_2,undefined1 (*param_3) [16],
                  undefined1 (*param_4) [16],char param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  char cVar15;
  undefined8 *puVar16;
  undefined4 uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar26;
  float fVar33;
  float fVar34;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar35;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  float fVar51;
  undefined1 auVar52 [16];
  float fVar55;
  undefined1 auVar54 [16];
  undefined1 auVar56 [64];
  undefined1 auVar57 [16];
  undefined1 auVar58 [64];
  undefined1 auVar59 [16];
  undefined1 auVar60 [64];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined4 uStack_15c;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 auStack_148 [16];
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 auStack_128 [16];
  undefined1 auStack_118 [16];
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined1 auStack_f4 [12];
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined1 auVar53 [64];
  
  puVar16 = (undefined8 *)(**(code **)(*param_1 + 0x98))();
  cVar15 = func_0x00014006feb0(*puVar16,param_2,&uStack_15c);
  uVar17 = uStack_15c;
  if (cVar15 != '\0') {
    FUN_141700820(puVar16,&uStack_158,uStack_15c);
    if (param_5 == '\0') {
      auVar12._8_8_ = uStack_150;
      auVar12._0_8_ = uStack_158;
      auVar52._0_12_ = ZEXT812(0);
      auVar52._12_4_ = 0;
      auVar53 = ZEXT1664(auVar52);
      auVar18 = vsubps_avx(*param_3,auVar12);
      fVar51 = auVar18._0_4_;
      auVar27._0_4_ = fVar51 * fVar51;
      fVar33 = auVar18._4_4_;
      auVar27._4_4_ = fVar33 * fVar33;
      fVar4 = auVar18._8_4_;
      auVar27._8_4_ = fVar4 * fVar4;
      fVar8 = auVar18._12_4_;
      auVar27._12_4_ = fVar8 * fVar8;
      auVar18 = vblendps_avx(auVar27,auVar52,8);
      auVar18 = vhaddps_avx(auVar18,auVar18);
      auVar21 = vhaddps_avx(auVar18,auVar18);
      auVar18 = vrsqrtps_avx(auVar21);
      fVar1 = auVar18._0_4_;
      fVar34 = auVar18._4_4_;
      fVar5 = auVar18._8_4_;
      fVar9 = auVar18._12_4_;
      auVar18 = vsubps_avx(*param_4,auVar12);
      fVar2 = auVar18._0_4_;
      auVar28._0_4_ = fVar2 * fVar2;
      fVar35 = auVar18._4_4_;
      auVar28._4_4_ = fVar35 * fVar35;
      fVar6 = auVar18._8_4_;
      auVar28._8_4_ = fVar6 * fVar6;
      fVar10 = auVar18._12_4_;
      auVar28._12_4_ = fVar10 * fVar10;
      auVar18 = vblendps_avx(auVar28,auVar52,8);
      auVar18 = vhaddps_avx(auVar18,auVar18);
      auVar18 = vhaddps_avx(auVar18,auVar18);
      auVar12 = vrsqrtps_avx(auVar18);
      fVar3 = auVar12._0_4_;
      fVar55 = auVar12._4_4_;
      fVar7 = auVar12._8_4_;
      fVar11 = auVar12._12_4_;
      fVar26 = fVar2 * ((-(_DAT_145fc6edc * fVar3 * fVar3 * auVar18._0_4_) + _DAT_145fc6edc) * fVar3
                       + fVar3) +
               ((-(_DAT_145fc6edc * fVar1 * fVar1 * auVar21._0_4_) + _DAT_145fc6edc) * fVar1 + fVar1
               ) * fVar51;
      fVar33 = fVar35 * ((-(_DAT_145fc6edc * fVar55 * fVar55 * auVar18._4_4_) + _DAT_145fc6edc) *
                         fVar55 + fVar55) +
               ((-(_DAT_145fc6edc * fVar34 * fVar34 * auVar21._4_4_) + _DAT_145fc6edc) * fVar34 +
               fVar34) * fVar33;
      fVar34 = fVar6 * ((-(_DAT_145fc6edc * fVar7 * fVar7 * auVar18._8_4_) + _DAT_145fc6edc) * fVar7
                       + fVar7) +
               ((-(_DAT_145fc6edc * fVar5 * fVar5 * auVar21._8_4_) + _DAT_145fc6edc) * fVar5 + fVar5
               ) * fVar4;
      fVar35 = fVar10 * ((-(_DAT_145fc6edc * fVar11 * fVar11 * auVar18._12_4_) + _DAT_145fc6edc) *
                         fVar11 + fVar11) +
               ((-(_DAT_145fc6edc * fVar9 * fVar9 * auVar21._12_4_) + _DAT_145fc6edc) * fVar9 +
               fVar9) * fVar8;
      auVar18._0_4_ = fVar26 * fVar26;
      auVar18._4_4_ = fVar33 * fVar33;
      auVar18._8_4_ = fVar34 * fVar34;
      auVar18._12_4_ = fVar35 * fVar35;
      auVar18 = vblendps_avx(auVar18,auVar52,8);
      auVar18 = vhaddps_avx(auVar18,auVar18);
      auVar18 = vhaddps_avx(auVar18,auVar18);
      auVar21 = vrsqrtps_avx(auVar18);
      fVar51 = auVar21._0_4_;
      fVar1 = auVar21._4_4_;
      fVar2 = auVar21._8_4_;
      fVar3 = auVar21._12_4_;
      uStack_108 = uStack_158;
      uStack_100 = uStack_150;
      auStack_148 = *(undefined1 (*) [16])(param_1 + 0xc);
      auVar58 = ZEXT1664(auStack_148);
      uVar17 = (undefined4)param_1[0xd];
      auVar56 = ZEXT1664(CONCAT412(uVar17,CONCAT48(uVar17,CONCAT44(uVar17,uVar17))));
      auStack_118._0_4_ =
           (-((-(_DAT_145fc6edc * fVar51 * fVar51 * auVar18._0_4_) + _DAT_145fc6edc) * fVar51) -
           fVar51) * fVar26;
      auStack_118._4_4_ =
           (-((-(_DAT_145fc6edc * fVar1 * fVar1 * auVar18._4_4_) + _DAT_145fc6edc) * fVar1) - fVar1)
           * fVar33;
      auStack_118._8_4_ =
           (-((-(_DAT_145fc6edc * fVar2 * fVar2 * auVar18._8_4_) + _DAT_145fc6edc) * fVar2) - fVar2)
           * fVar34;
      auStack_118._12_4_ =
           (-((-(_DAT_145fc6edc * fVar3 * fVar3 * auVar18._12_4_) + _DAT_145fc6edc) * fVar3) - fVar3
           ) * fVar35;
      fVar33 = _DAT_145fc6edc;
      fVar34 = _DAT_145fc6edc;
      fVar35 = _DAT_145fc6edc;
      fVar55 = _DAT_145fc6edc;
      FUN_143d3b320(&uStack_f8);
      auVar13._4_12_ = auStack_f4;
      auVar13._0_4_ = uStack_f8;
      auVar14._4_4_ = uStack_e4;
      auVar14._0_4_ = uStack_e8;
      auVar14._8_8_ = uStack_e0;
      auVar57._8_4_ = uStack_d0;
      auVar57._0_8_ = uStack_d8;
      auVar57._12_4_ = uStack_cc;
      auVar62._4_4_ = uStack_d0;
      auVar62._0_4_ = uStack_d0;
      auVar62._8_4_ = uStack_d0;
      auVar62._12_4_ = uStack_d0;
      auVar18 = vblendps_avx(auVar13,auVar14,2);
      auVar18 = vblendps_avx(auVar57,auVar18,3);
      auVar21 = vshufps_avx(auVar18,auVar18,0x49);
      auVar12 = vshufps_avx(auVar18,auVar18,0x92);
      auVar23 = vshufps_avx(auVar18,auVar18,0x24);
      auVar46._0_4_ = auVar12._0_4_ + auVar21._0_4_;
      auVar46._4_4_ = auVar12._4_4_ + auVar21._4_4_;
      auVar46._8_4_ = auVar12._8_4_ + auVar21._8_4_;
      auVar46._12_4_ = auVar12._12_4_ + auVar21._12_4_;
      auVar21._0_4_ = auVar46._0_4_ + auVar23._0_4_;
      auVar21._4_4_ = auVar46._4_4_ + auVar23._4_4_;
      auVar21._8_4_ = auVar46._8_4_ + auVar23._8_4_;
      auVar21._12_4_ = auVar46._12_4_ + auVar23._12_4_;
      auVar18 = vsubps_avx(auVar18,auVar46);
      auVar18 = vblendps_avx(auVar18,auVar21,8);
      auVar21 = vcmpps_avx(auVar53._0_16_,auVar21,1);
      auVar22._0_4_ = auVar21._0_4_;
      auVar22._4_4_ = auVar22._0_4_;
      auVar22._8_4_ = auVar22._0_4_;
      auVar22._12_4_ = auVar22._0_4_;
      auVar47._0_4_ = auVar18._0_4_ + _DAT_145fc6ed8;
      auVar47._4_4_ = auVar18._4_4_ + _DAT_145fc6ed8;
      auVar47._8_4_ = auVar18._8_4_ + _DAT_145fc6ed8;
      auVar47._12_4_ = auVar18._12_4_ + _DAT_145fc6ed8;
      auVar18 = vrsqrtps_avx(auVar47);
      fVar51 = auVar18._0_4_;
      fVar1 = auVar18._4_4_;
      fVar2 = auVar18._8_4_;
      fVar3 = auVar18._12_4_;
      auVar18 = vblendps_avx(auVar14,auVar57,3);
      auVar21 = vshufps_avx(auVar18,auVar13,0x12);
      auVar18 = vblendps_avx(auVar13,auVar14,3);
      auVar18 = vblendps_avx(auVar18,auVar57,2);
      auVar18 = vshufps_avx(auVar18,auVar18,9);
      auVar36._0_4_ = auVar21._0_4_ + auVar18._0_4_;
      auVar36._4_4_ = auVar21._4_4_ + auVar18._4_4_;
      auVar36._8_4_ = auVar21._8_4_ + auVar18._8_4_;
      auVar36._12_4_ = auVar21._12_4_ + auVar18._12_4_;
      auVar12 = vsubps_avx(auVar21,auVar18);
      auVar40._0_4_ =
           ((-(fVar33 * fVar51 * fVar51 * auVar47._0_4_) + fVar33) * fVar51 + fVar51) * fVar33;
      auVar40._4_4_ =
           ((-(fVar34 * fVar1 * fVar1 * auVar47._4_4_) + fVar34) * fVar1 + fVar1) * fVar34;
      auVar40._8_4_ =
           ((-(fVar35 * fVar2 * fVar2 * auVar47._8_4_) + fVar35) * fVar2 + fVar2) * fVar35;
      auVar40._12_4_ =
           ((-(fVar55 * fVar3 * fVar3 * auVar47._12_4_) + fVar55) * fVar3 + fVar3) * fVar55;
      auVar18 = vblendps_avx(auVar36,auVar12,1);
      auVar21 = vblendps_avx(auVar36,auVar12,2);
      auVar13 = vshufps_avx(auVar36,auVar12,0xa1);
      auVar12 = vblendps_avx(auVar12,auVar47,8);
      auVar14 = vshufps_avx(auVar18,auVar18,0x18);
      auVar23 = vshufpd_avx(auVar21,auVar21,1);
      auVar18 = vblendps_avx(auVar13,auVar47,4);
      auVar21 = vblendps_avx(auVar14,auVar47,1);
      auVar23 = vblendps_avx(auVar23,auVar47,2);
      auVar48._0_4_ = auVar21._0_4_ * auVar40._0_4_;
      auVar48._4_4_ = auVar21._4_4_ * auVar40._0_4_;
      auVar48._8_4_ = auVar21._8_4_ * auVar40._0_4_;
      auVar48._12_4_ = auVar21._12_4_ * auVar40._0_4_;
      auVar21 = vshufps_avx(auVar40,auVar40,0x55);
      auVar59._0_4_ = auVar21._0_4_ * auVar23._0_4_;
      auVar59._4_4_ = auVar21._4_4_ * auVar23._4_4_;
      auVar59._8_4_ = auVar21._8_4_ * auVar23._8_4_;
      auVar59._12_4_ = auVar21._12_4_ * auVar23._12_4_;
      auVar21 = vshufps_avx(auVar40,auVar40,0xaa);
      auVar23 = vshufps_avx(auVar40,auVar40,0xff);
      auVar37._0_4_ = auVar21._0_4_ * auVar18._0_4_;
      auVar37._4_4_ = auVar21._4_4_ * auVar18._4_4_;
      auVar37._8_4_ = auVar21._8_4_ * auVar18._8_4_;
      auVar37._12_4_ = auVar21._12_4_ * auVar18._12_4_;
      auVar29._0_4_ = auVar23._0_4_ * auVar12._0_4_;
      auVar29._4_4_ = auVar23._4_4_ * auVar12._4_4_;
      auVar29._8_4_ = auVar23._8_4_ * auVar12._8_4_;
      auVar29._12_4_ = auVar23._12_4_ * auVar12._12_4_;
      auVar41._4_4_ = uStack_f8;
      auVar41._0_4_ = uStack_f8;
      auVar41._8_4_ = uStack_f8;
      auVar41._12_4_ = uStack_f8;
      auVar61._4_4_ = uStack_e4;
      auVar61._0_4_ = uStack_e4;
      auVar61._8_4_ = uStack_e4;
      auVar61._12_4_ = uStack_e4;
      auVar18 = vcmpps_avx(auVar41,auVar61,1);
      auVar21 = vcmpps_avx(auVar41,auVar62,1);
      auVar18 = vblendvps_avx(auVar48,auVar59,auVar18);
      auVar12 = vcmpps_avx(auVar61,auVar62,1);
      auVar42._0_4_ = auVar12._0_4_ & auVar21._0_4_;
      auVar42._4_4_ = auVar12._4_4_ & auVar21._4_4_;
      auVar42._8_4_ = auVar12._8_4_ & auVar21._8_4_;
      auVar42._12_4_ = auVar12._12_4_ & auVar21._12_4_;
      auVar18 = vblendvps_avx(auVar18,auVar37,auVar42);
      auVar18 = vblendvps_avx(auVar18,auVar29,auVar22);
      auVar60 = ZEXT1664(auVar18);
      auVar18 = *(undefined1 (*) [16])(param_1 + 8);
      auVar21 = *(undefined1 (*) [16])(param_1 + 10);
      auVar12 = vblendps_avx(auVar18,auVar21,2);
      auVar57 = auVar58._0_16_;
      auVar12 = vblendps_avx(auVar57,auVar12,3);
      auVar23 = vshufps_avx(auVar12,auVar12,0x49);
      auVar13 = vshufps_avx(auVar12,auVar12,0x92);
      auVar14 = vshufps_avx(auVar12,auVar12,0x24);
      auVar49._0_4_ = auVar13._0_4_ + auVar23._0_4_;
      auVar49._4_4_ = auVar13._4_4_ + auVar23._4_4_;
      auVar49._8_4_ = auVar13._8_4_ + auVar23._8_4_;
      auVar49._12_4_ = auVar13._12_4_ + auVar23._12_4_;
      auVar23._0_4_ = auVar49._0_4_ + auVar14._0_4_;
      auVar23._4_4_ = auVar49._4_4_ + auVar14._4_4_;
      auVar23._8_4_ = auVar49._8_4_ + auVar14._8_4_;
      auVar23._12_4_ = auVar49._12_4_ + auVar14._12_4_;
      auVar12 = vsubps_avx(auVar12,auVar49);
      auVar12 = vblendps_avx(auVar12,auVar23,8);
      auVar23 = vcmpps_avx(auVar53._0_16_,auVar23,1);
      auVar19._0_4_ = auVar12._0_4_ + _DAT_145fc6ed8;
      auVar19._4_4_ = auVar12._4_4_ + _DAT_145fc6ed8;
      auVar19._8_4_ = auVar12._8_4_ + _DAT_145fc6ed8;
      auVar19._12_4_ = auVar12._12_4_ + _DAT_145fc6ed8;
      auVar24._0_4_ = auVar23._0_4_;
      auVar24._4_4_ = auVar24._0_4_;
      auVar24._8_4_ = auVar24._0_4_;
      auVar24._12_4_ = auVar24._0_4_;
      auVar12 = vrsqrtps_avx(auVar19);
      fVar51 = auVar12._0_4_;
      fVar1 = auVar12._4_4_;
      fVar2 = auVar12._8_4_;
      fVar3 = auVar12._12_4_;
      auVar12 = vblendps_avx(auVar21,auVar57,3);
      auVar12 = vshufps_avx(auVar12,auVar18,0x12);
      auVar18 = vblendps_avx(auVar18,auVar21,3);
      auVar18 = vblendps_avx(auVar18,auVar57,2);
      auVar18 = vshufps_avx(auVar18,auVar18,9);
      auVar38._0_4_ = auVar12._0_4_ + auVar18._0_4_;
      auVar38._4_4_ = auVar12._4_4_ + auVar18._4_4_;
      auVar38._8_4_ = auVar12._8_4_ + auVar18._8_4_;
      auVar38._12_4_ = auVar12._12_4_ + auVar18._12_4_;
      auVar14 = vsubps_avx(auVar12,auVar18);
      auVar43._0_4_ =
           ((-(fVar33 * fVar51 * fVar51 * auVar19._0_4_) + fVar33) * fVar51 + fVar51) * fVar33;
      auVar43._4_4_ =
           ((-(fVar34 * fVar1 * fVar1 * auVar19._4_4_) + fVar34) * fVar1 + fVar1) * fVar34;
      auVar43._8_4_ =
           ((-(fVar35 * fVar2 * fVar2 * auVar19._8_4_) + fVar35) * fVar2 + fVar2) * fVar35;
      auVar43._12_4_ =
           ((-(fVar55 * fVar3 * fVar3 * auVar19._12_4_) + fVar55) * fVar3 + fVar3) * fVar55;
      auVar18 = vblendps_avx(auVar38,auVar14,1);
      auVar21 = vblendps_avx(auVar38,auVar14,2);
      auVar23 = vshufps_avx(auVar38,auVar14,0xa1);
      auVar13 = vshufps_avx(auVar18,auVar18,0x18);
      auVar12 = vshufpd_avx(auVar21,auVar21,1);
      auVar18 = vblendps_avx(auVar23,auVar19,4);
      auVar21 = vblendps_avx(auVar13,auVar19,1);
      auVar12 = vblendps_avx(auVar12,auVar19,2);
      auVar23 = vblendps_avx(auVar14,auVar19,8);
      auVar30._0_4_ = auVar43._0_4_ * auVar21._0_4_;
      auVar30._4_4_ = auVar43._0_4_ * auVar21._4_4_;
      auVar30._8_4_ = auVar43._0_4_ * auVar21._8_4_;
      auVar30._12_4_ = auVar43._0_4_ * auVar21._12_4_;
      auVar21 = vshufps_avx(auVar43,auVar43,0x55);
      auVar50._0_4_ = auVar21._0_4_ * auVar12._0_4_;
      auVar50._4_4_ = auVar21._4_4_ * auVar12._4_4_;
      auVar50._8_4_ = auVar21._8_4_ * auVar12._8_4_;
      auVar50._12_4_ = auVar21._12_4_ * auVar12._12_4_;
      auVar21 = vshufps_avx(auVar43,auVar43,0xaa);
      auVar12 = vshufps_avx(auVar43,auVar43,0xff);
      auVar39._0_4_ = auVar21._0_4_ * auVar18._0_4_;
      auVar39._4_4_ = auVar21._4_4_ * auVar18._4_4_;
      auVar39._8_4_ = auVar21._8_4_ * auVar18._8_4_;
      auVar39._12_4_ = auVar21._12_4_ * auVar18._12_4_;
      auVar20._0_4_ = auVar12._0_4_ * auVar23._0_4_;
      auVar20._4_4_ = auVar12._4_4_ * auVar23._4_4_;
      auVar20._8_4_ = auVar12._8_4_ * auVar23._8_4_;
      auVar20._12_4_ = auVar12._12_4_ * auVar23._12_4_;
      uVar17 = (undefined4)param_1[8];
      auVar44._4_4_ = uVar17;
      auVar44._0_4_ = uVar17;
      auVar44._8_4_ = uVar17;
      auVar44._12_4_ = uVar17;
      uVar17 = *(undefined4 *)((longlong)param_1 + 0x54);
      auVar54._4_4_ = uVar17;
      auVar54._0_4_ = uVar17;
      auVar54._8_4_ = uVar17;
      auVar54._12_4_ = uVar17;
      auVar18 = vcmpps_avx(auVar44,auVar54,1);
      auVar21 = vcmpps_avx(auVar44,auVar56._0_16_,1);
      auVar18 = vblendvps_avx(auVar30,auVar50,auVar18);
      auVar12 = vcmpps_avx(auVar54,auVar56._0_16_,1);
      auVar45._0_4_ = auVar12._0_4_ & auVar21._0_4_;
      auVar45._4_4_ = auVar12._4_4_ & auVar21._4_4_;
      auVar45._8_4_ = auVar12._8_4_ & auVar21._8_4_;
      auVar45._12_4_ = auVar12._12_4_ & auVar21._12_4_;
      auVar18 = vblendvps_avx(auVar18,auVar39,auVar45);
      auVar18 = vblendvps_avx(auVar18,auVar20,auVar24);
      auVar53 = ZEXT1664(auVar18);
      func_0x000145126330(*puVar16,auStack_128,uStack_15c);
      auVar18 = auVar53._0_16_;
      auVar12 = vshufps_avx(auVar18,auVar18,0xff);
      fVar51 = auVar53._0_4_;
      auVar23 = vshufps_avx(auVar18,auVar18,0x55);
      auVar13 = vshufps_avx(auVar18,auVar18,0xaa);
      auVar31._0_4_ = (uint)auVar60._0_4_ ^ _DAT_145fc6f10;
      auVar31._4_4_ = (uint)auVar60._4_4_ ^ _DAT_145fc6f10;
      auVar31._8_4_ = (uint)auVar60._8_4_ ^ _DAT_145fc6f10;
      auVar31._12_4_ = (uint)auVar60._12_4_ ^ _DAT_145fc6f10;
      auVar25._0_4_ = (uint)auStack_128._0_4_ ^ _DAT_145fc6f10;
      auVar25._4_4_ = (uint)auStack_128._4_4_ ^ _DAT_145fc6f10;
      auVar25._8_4_ = (uint)auStack_128._8_4_ ^ _DAT_145fc6f10;
      auVar25._12_4_ = (uint)auStack_128._12_4_ ^ _DAT_145fc6f10;
      auVar57 = auVar60._0_16_;
      auVar18 = vblendps_avx(auVar31,auVar57,10);
      auVar14 = vshufps_avx(auVar18,auVar18,0x1b);
      auVar21 = vshufpd_avx(auVar57,auVar31,1);
      auVar18 = vblendps_avx(auVar31,auVar57,9);
      auVar18 = vshufps_avx(auVar18,auVar18,0xb1);
      auVar32._0_4_ =
           -(auVar13._0_4_ * auVar18._0_4_) -
           (auVar23._0_4_ * auVar21._0_4_ + (fVar51 * auVar14._0_4_ - auVar60._0_4_ * auVar12._0_4_)
           );
      auVar32._4_4_ =
           -(auVar13._4_4_ * auVar18._4_4_) -
           (auVar23._4_4_ * auVar21._4_4_ + (fVar51 * auVar14._4_4_ - auVar60._4_4_ * auVar12._4_4_)
           );
      auVar32._8_4_ =
           -(auVar13._8_4_ * auVar18._8_4_) -
           (auVar23._8_4_ * auVar21._8_4_ + (fVar51 * auVar14._8_4_ - auVar60._8_4_ * auVar12._8_4_)
           );
      auVar32._12_4_ =
           -(auVar13._12_4_ * auVar18._12_4_) -
           (auVar23._12_4_ * auVar21._12_4_ +
           (fVar51 * auVar14._12_4_ - auVar60._12_4_ * auVar12._12_4_));
      auVar18 = vblendps_avx(auVar25,auStack_128,10);
      auVar12 = vshufps_avx(auVar18,auVar18,0x1b);
      auVar23 = vshufps_avx(auVar32,auVar32,0xff);
      auVar13 = vshufps_avx(auVar32,auVar32,0x55);
      auVar14 = vshufps_avx(auVar32,auVar32,0xaa);
      auVar21 = vshufpd_avx(auStack_128,auVar25,1);
      auVar18 = vblendps_avx(auVar25,auStack_128,9);
      auVar18 = vshufps_avx(auVar18,auVar18,0xb1);
      _DAT_146c30c70 =
           auVar14._0_4_ * auVar18._0_4_ +
           auVar13._0_4_ * auVar21._0_4_ +
           auVar32._0_4_ * auVar12._0_4_ + auVar23._0_4_ * auStack_128._0_4_;
      fRam0000000146c30c74 =
           auVar14._4_4_ * auVar18._4_4_ +
           auVar13._4_4_ * auVar21._4_4_ +
           auVar32._0_4_ * auVar12._4_4_ + auVar23._4_4_ * auStack_128._4_4_;
      fRam0000000146c30c78 =
           auVar14._8_4_ * auVar18._8_4_ +
           auVar13._8_4_ * auVar21._8_4_ +
           auVar32._0_4_ * auVar12._8_4_ + auVar23._8_4_ * auStack_128._8_4_;
      fRam0000000146c30c7c =
           auVar14._12_4_ * auVar18._12_4_ +
           auVar13._12_4_ * auVar21._12_4_ +
           auVar32._0_4_ * auVar12._12_4_ + auVar23._12_4_ * auStack_128._12_4_;
      uVar17 = uStack_15c;
    }
    uStack_138 = CONCAT44(fRam0000000146c30c74,_DAT_146c30c70);
    uStack_130 = CONCAT44(fRam0000000146c30c7c,fRam0000000146c30c78);
    FUN_1410e64b0(puVar16,uVar17);
    FUN_14555f540(*puVar16,uVar17,*puVar16);
  }
  return;
}

