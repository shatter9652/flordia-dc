// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400fe7d0  size: 486 bytes
// Name:    FUN_1400fe7d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145150210, FUN_1453f3c50, FUN_14514f010, FUN_14514f1e0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400fe7d0(float *param_1,undefined8 *param_2,float *param_3,float *param_4)

{
  undefined4 uVar1;
  undefined8 unaff_RBP;
  byte bVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [64];
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auStack_f8 [16];
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auVar11 [64];
  
  *param_3 = 0.0;
  bVar2 = *(byte *)((longlong)param_4 + 9);
  if (*(char *)(param_4 + 2) == '\x01') {
    auVar9._0_12_ = ZEXT812(0);
    auVar11 = ZEXT1264(auVar9._0_12_);
    auVar9._12_4_ = 0;
    auVar4 = ZEXT864(0);
    fVar5 = 0.0;
    if ((bVar2 & 1) == 0) {
      auStack_f8._0_12_ = ZEXT812(0);
      auStack_f8._12_4_ = 0;
      uStack_78 = *param_2;
      uStack_70 = param_2[1];
      uVar1 = FUN_1453f3c50(0x149ff00f0,&uStack_78,auStack_f8);
      auVar9 = auVar11._0_16_;
      auVar4 = ZEXT1664(auStack_f8);
      *param_3 = (float)auStack_f8._12_4_;
      fVar5 = (float)auStack_f8._12_4_;
      if ((float)auStack_f8._12_4_ <= 0.0) {
        bVar2 = 0;
        goto LAB_1400fe8e1;
      }
    }
    auVar3 = auVar4._0_16_;
    auStack_f8 = auVar9;
    if ((_DAT_149ff82c0 != 0) && (*(char *)(_DAT_149ff82c0 + 0x8198) == '\x01')) {
      uStack_88 = *param_2;
      uStack_80 = param_2[1];
      FUN_1453f3c50(_DAT_149ff82c0,&uStack_88,auStack_f8);
      auVar3 = auVar4._0_16_;
    }
    auVar10 = auStack_f8;
    if ((bVar2 & 1) == 0) {
      auVar9 = vsubps_avx(auStack_f8,auVar3);
      auVar10._0_4_ = auVar9._0_4_ * fVar5 + auVar3._0_4_;
      auVar10._4_4_ = auVar9._4_4_ * fVar5 + auVar3._4_4_;
      auVar10._8_4_ = auVar9._8_4_ * fVar5 + auVar3._8_4_;
      auVar10._12_4_ = auVar9._12_4_ * fVar5 + auVar3._12_4_;
    }
    uVar1 = (undefined4)CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
    auVar4 = ZEXT1664(auVar10);
  }
  else {
    fVar5 = 0.0;
    auVar4 = ZEXT864(0);
    uVar1 = 0;
  }
LAB_1400fe8e1:
  if (fVar5 < _DAT_146159ec4 && (bVar2 & 1) == 0) {
    uStack_a8 = *param_2;
    uStack_a0 = param_2[1];
    FUN_14514f1e0(&fStack_98);
    auVar4 = ZEXT1664(CONCAT412(auVar4._12_4_ + fStack_8c,
                                CONCAT48(auVar4._8_4_ + fStack_90,
                                         CONCAT44(auVar4._4_4_ + fStack_94,auVar4._0_4_ + fStack_98)
                                        )));
    if ((char)uVar1 == '\0') {
      uStack_c8 = *param_2;
      uStack_c0 = param_2[1];
      FUN_145150210(&fStack_b8);
      auVar4 = ZEXT1664(CONCAT412(auVar4._12_4_ + fStack_ac,
                                  CONCAT48(auVar4._8_4_ + fStack_b0,
                                           CONCAT44(auVar4._4_4_ + fStack_b4,
                                                    auVar4._0_4_ + fStack_b8))));
    }
  }
  uStack_e8 = *param_2;
  uStack_e0 = param_2[1];
  fVar5 = _DAT_149feffd0 * *param_4;
  fVar6 = fVar5;
  fVar7 = fVar5;
  fVar8 = fVar5;
  FUN_14514f010(&fStack_d8,&uStack_e8,0,uVar1,param_4);
  *param_1 = auVar4._0_4_ * fVar5 + fStack_d8;
  param_1[1] = auVar4._4_4_ * fVar6 + fStack_d4;
  param_1[2] = auVar4._8_4_ * fVar7 + fStack_d0;
  param_1[3] = auVar4._12_4_ * fVar8 + fStack_cc;
  return;
}

