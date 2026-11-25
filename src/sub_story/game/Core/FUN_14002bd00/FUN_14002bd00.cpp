// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14002bd00  size: 410 bytes
// Name:    FUN_14002bd00
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f64ac0, FUN_144f64580
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14002bd00(longlong param_1,float *param_2,float *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float fVar5;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar11;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar12 [16];
  undefined1 auVar16 [64];
  undefined1 auVar17 [16];
  undefined1 auVar18 [64];
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  undefined1 auStack_98 [16];
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  undefined1 auStack_78 [16];
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  
  FUN_144f64ac0(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x50),auStack_78);
  auVar1 = *(undefined1 (*) [16])(param_1 + 0x60);
  auVar16 = ZEXT1664(CONCAT412(auVar1._12_4_ + fStack_5c,
                               CONCAT48(auVar1._8_4_ + fStack_60,
                                        CONCAT44(auVar1._4_4_ + fStack_64,auVar1._0_4_ + fStack_68))
                              ));
  FUN_144f64ac0(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x4c),auStack_98);
  auVar1 = *(undefined1 (*) [16])(param_1 + 0x60);
  auVar18 = ZEXT1664(CONCAT412(auVar1._12_4_ + fStack_7c,
                               CONCAT48(auVar1._8_4_ + fStack_80,
                                        CONCAT44(auVar1._4_4_ + fStack_84,auVar1._0_4_ + fStack_88))
                              ));
  FUN_144f64580(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x48),&fStack_b8);
  auVar3._4_4_ = fStack_b4;
  auVar3._0_4_ = fStack_b8;
  auVar3._8_4_ = fStack_b0;
  auVar3._12_4_ = fStack_ac;
  auVar17 = auVar18._0_16_;
  auVar1 = vshufps_avx(auVar17,auVar17,0xd2);
  auVar17 = vshufps_avx(auVar17,auVar17,0xc9);
  auVar2 = vshufps_avx(auVar3,auVar3,0xc9);
  auVar3 = vshufps_avx(auVar3,auVar3,0xd2);
  fVar5 = -(auVar3._0_4_ * auVar17._0_4_) + auVar2._0_4_ * auVar1._0_4_;
  fVar8 = -(auVar3._4_4_ * auVar17._4_4_) + auVar2._4_4_ * auVar1._4_4_;
  fVar9 = -(auVar3._8_4_ * auVar17._8_4_) + auVar2._8_4_ * auVar1._8_4_;
  fVar10 = -(auVar3._12_4_ * auVar17._12_4_) + auVar2._12_4_ * auVar1._12_4_;
  auVar6._0_4_ = fVar5 + fVar5;
  auVar6._4_4_ = fVar8 + fVar8;
  auVar6._8_4_ = fVar9 + fVar9;
  auVar6._12_4_ = fVar10 + fVar10;
  auVar1 = vshufps_avx(auVar6,auVar6,0xd2);
  auVar17 = vshufps_avx(auVar6,auVar6,0xc9);
  fVar5 = fStack_ac * auVar6._0_4_ + auVar18._0_4_ + fStack_a8 +
          -(auVar3._0_4_ * auVar17._0_4_) + auVar1._0_4_ * auVar2._0_4_;
  fVar8 = fStack_ac * auVar6._4_4_ + auVar18._4_4_ + fStack_a4 +
          -(auVar3._4_4_ * auVar17._4_4_) + auVar1._4_4_ * auVar2._4_4_;
  fVar9 = fStack_ac * auVar6._8_4_ + auVar18._8_4_ + fStack_a0 +
          -(auVar3._8_4_ * auVar17._8_4_) + auVar1._8_4_ * auVar2._8_4_;
  fVar10 = fStack_ac * auVar6._12_4_ + auVar18._12_4_ + fStack_9c +
           -(auVar3._12_4_ * auVar17._12_4_) + auVar1._12_4_ * auVar2._12_4_;
  auVar7._0_4_ = (uint)auStack_98._0_4_ ^ _DAT_145fc6f10;
  auVar7._4_4_ = (uint)auStack_98._4_4_ ^ _DAT_145fc6f10;
  auVar7._8_4_ = (uint)auStack_98._8_4_ ^ _DAT_145fc6f10;
  auVar7._12_4_ = (uint)auStack_98._12_4_ ^ _DAT_145fc6f10;
  auVar1 = vblendps_avx(auVar7,auStack_98,10);
  auVar2 = vshufps_avx(auVar1,auVar1,0x1b);
  auVar17 = vshufpd_avx(auStack_98,auVar7,1);
  auVar1 = vblendps_avx(auVar7,auStack_98,9);
  auVar6 = auVar16._0_16_;
  auVar3 = vshufps_avx(auVar6,auVar6,0xd2);
  auVar1 = vshufps_avx(auVar1,auVar1,0xb1);
  auVar6 = vshufps_avx(auVar6,auVar6,0xc9);
  auVar4._0_4_ = fStack_b0 * auVar1._0_4_ +
                 fStack_b4 * auVar17._0_4_ + fStack_b8 * auVar2._0_4_ + auStack_98._0_4_ * fStack_ac
  ;
  auVar4._4_4_ = fStack_b0 * auVar1._4_4_ +
                 fStack_b4 * auVar17._4_4_ + fStack_b8 * auVar2._4_4_ + auStack_98._4_4_ * fStack_ac
  ;
  auVar4._8_4_ = fStack_b0 * auVar1._8_4_ +
                 fStack_b4 * auVar17._8_4_ + fStack_b8 * auVar2._8_4_ + auStack_98._8_4_ * fStack_ac
  ;
  auVar4._12_4_ =
       fStack_b0 * auVar1._12_4_ +
       fStack_b4 * auVar17._12_4_ + fStack_b8 * auVar2._12_4_ + auStack_98._12_4_ * fStack_ac;
  auVar1 = vshufps_avx(auVar4,auVar4,0xc9);
  auVar17 = vshufps_avx(auVar4,auVar4,0xd2);
  auVar2 = vshufps_avx(auVar4,auVar4,0xff);
  fVar11 = -(auVar17._0_4_ * auVar6._0_4_) + auVar1._0_4_ * auVar3._0_4_;
  fVar13 = -(auVar17._4_4_ * auVar6._4_4_) + auVar1._4_4_ * auVar3._4_4_;
  fVar14 = -(auVar17._8_4_ * auVar6._8_4_) + auVar1._8_4_ * auVar3._8_4_;
  fVar15 = -(auVar17._12_4_ * auVar6._12_4_) + auVar1._12_4_ * auVar3._12_4_;
  auVar12._0_4_ = fVar11 + fVar11;
  auVar12._4_4_ = fVar13 + fVar13;
  auVar12._8_4_ = fVar14 + fVar14;
  auVar12._12_4_ = fVar15 + fVar15;
  auVar3 = vshufps_avx(auVar12,auVar12,0xd2);
  auVar6 = vshufps_avx(auVar12,auVar12,0xc9);
  *param_3 = auVar12._0_4_ * auVar2._0_4_ + fVar5 + auVar16._0_4_ +
             -(auVar17._0_4_ * auVar6._0_4_) + auVar3._0_4_ * auVar1._0_4_;
  param_3[1] = auVar12._4_4_ * auVar2._4_4_ + fVar8 + auVar16._4_4_ +
               -(auVar17._4_4_ * auVar6._4_4_) + auVar3._4_4_ * auVar1._4_4_;
  param_3[2] = auVar12._8_4_ * auVar2._8_4_ + fVar9 + auVar16._8_4_ +
               -(auVar17._8_4_ * auVar6._8_4_) + auVar3._8_4_ * auVar1._8_4_;
  param_3[3] = auVar12._12_4_ * auVar2._12_4_ + fVar10 + auVar16._12_4_ +
               -(auVar17._12_4_ * auVar6._12_4_) + auVar3._12_4_ * auVar1._12_4_;
  *param_2 = fVar5;
  param_2[1] = fVar8;
  param_2[2] = fVar9;
  param_2[3] = fVar10;
  return;
}

