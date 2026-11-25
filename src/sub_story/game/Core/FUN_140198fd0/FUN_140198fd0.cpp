// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140198fd0  size: 438 bytes
// Name:    FUN_140198fd0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140199190, FUN_145052960
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140198fd0(longlong param_1,ulonglong *param_2,float param_3,undefined8 param_4,
                  undefined4 param_5)

{
  float fVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  float fVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auStack_578 [256];
  undefined8 uStack_478;
  ulonglong uStack_58;
  ulonglong uStack_50;
  float fStack_48;
  undefined8 uStack_44;
  short sStack_3c;
  short sStack_3a;
  code *pcStack_38;
  code *pcStack_30;
  undefined8 uStack_28;
  undefined4 uStack_20;
  
  uStack_478 = 0x41;
  uStack_58 = *param_2;
  uStack_50 = param_2[1];
  pcStack_38 = FUN_140199c50;
  pcStack_30 = FUN_1401994f0;
  uStack_20 = param_5;
  fVar1 = *(float *)(param_2 + 1) + param_3;
  fVar4 = *(float *)(param_2 + 1) - param_3;
  auVar7._4_4_ = param_3;
  auVar7._0_4_ = param_3;
  auVar7._8_4_ = param_3;
  auVar7._12_4_ = param_3;
  auVar5 = vroundss_avx(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4),10);
  auVar2 = vroundss_avx(ZEXT416((uint)fVar1),ZEXT416((uint)fVar1),10);
  sStack_3c = (short)(int)auVar5._0_4_;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = *param_2;
  auVar5 = vshufps_avx(auVar5,auVar5,0x50);
  auVar3 = vsubps_avx(auVar5,auVar7);
  auVar6._0_4_ = auVar5._0_4_ + param_3;
  auVar6._4_4_ = auVar5._4_4_ + param_3;
  auVar6._8_4_ = auVar5._8_4_ + param_3;
  auVar6._12_4_ = auVar5._12_4_ + param_3;
  auVar5 = vblendps_avx(auVar3,auVar6,10);
  auVar5 = vroundps_avx(auVar5,10);
  auVar8._0_4_ = (int)auVar5._0_4_;
  auVar8._4_4_ = (int)auVar5._4_4_;
  auVar8._8_4_ = (int)auVar5._8_4_;
  auVar8._12_4_ = (int)auVar5._12_4_;
  auVar5 = vcvtdq2ps_avx(auVar8);
  auVar7 = vpackssdw_avx(auVar8,auVar8);
  uStack_44 = auVar7._0_8_;
  sStack_3a = (short)(int)auVar2._0_4_;
  if (auVar3._0_4_ < auVar5._0_4_) {
    uStack_44 = CONCAT62(auVar7._2_6_,(short)auVar8._0_4_ + -1);
  }
  auVar5 = vshufpd_avx(auVar3,auVar3,1);
  if (auVar5._0_4_ < (float)(int)auVar7._4_2_) {
    uStack_44._0_6_ = CONCAT24(auVar7._4_2_ + -1,(undefined4)uStack_44);
  }
  if (fVar4 < (float)(int)sStack_3c) {
    sStack_3c = sStack_3c + -1;
  }
  auVar5 = vmovshdup_avx(auVar6);
  if ((float)(int)auVar7._2_2_ < auVar5._0_4_) {
    uStack_44._0_4_ = CONCAT22(auVar7._2_2_ + 1,(undefined2)uStack_44);
  }
  auVar5 = vshufps_avx(auVar6,auVar6,0xff);
  if ((float)(int)auVar7._6_2_ < auVar5._0_4_) {
    uStack_44 = CONCAT26(auVar7._6_2_ + 1,(undefined6)uStack_44);
  }
  if ((float)(int)sStack_3a < fVar1) {
    sStack_3a = sStack_3a + 1;
  }
  fStack_48 = param_3;
  uStack_28 = param_4;
  if ((*(byte *)(param_1 + 0x10) & 4) == 0) {
    FUN_145052960(fVar1,*(undefined8 *)(param_1 + 0xa0),auStack_578);
  }
  else {
    FUN_140199190(fVar1,auStack_578);
  }
  return;
}

