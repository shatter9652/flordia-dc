// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140135d20  size: 185 bytes
// Name:    FUN_140135d20
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140452ce0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140135d20(undefined1 (*param_1) [16],undefined8 *param_2,undefined8 *param_3,
                  undefined1 (*param_4) [16],float *param_5,float *param_6,float *param_7,
                  undefined8 param_8)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  undefined1 auStack_38 [16];
  
  fStack_48 = *(float *)*param_4 + *param_5;
  fStack_44 = *(float *)(*param_4 + 4) + param_5[1];
  fStack_40 = *(float *)(*param_4 + 8) + param_5[2];
  fStack_3c = *(float *)(*param_4 + 0xc) + param_5[3];
  uStack_58 = *param_3;
  uStack_50 = param_3[1];
  uStack_68 = *param_2;
  uStack_60 = param_2[1];
  FUN_140452ce0(auStack_38,&uStack_68,&uStack_58,&fStack_48,param_6,param_7,param_8);
  auVar5 = (undefined1  [16])0x0;
  if (auStack_38 != (undefined1  [16])0x0) {
    auVar1 = *param_4;
    fVar2 = param_7[1];
    fVar3 = param_7[2];
    fVar4 = param_7[3];
    auVar5 = vpcmpeqd_avx(auVar1,auVar1);
    *param_6 = -(auVar1._0_4_ * *param_7) + *param_6;
    param_6[1] = -(auVar1._4_4_ * fVar2) + param_6[1];
    param_6[2] = -(auVar1._8_4_ * fVar3) + param_6[2];
    param_6[3] = -(auVar1._12_4_ * fVar4) + param_6[3];
  }
  *param_1 = auVar5;
  return;
}

