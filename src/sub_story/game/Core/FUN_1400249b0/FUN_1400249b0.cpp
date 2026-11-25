// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400249b0  size: 167 bytes
// Name:    FUN_1400249b0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140025f40
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400249b0(float *param_1,undefined8 *param_2,undefined8 param_3,float *param_4,int param_5)

{
  undefined8 uVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  FUN_140025f40(*(undefined8 *)param_4,param_3);
  auVar4._0_12_ = ZEXT812(0);
  auVar4._12_4_ = 0;
  auVar3._0_4_ = *param_4 * *param_4;
  auVar3._4_4_ = param_4[1] * param_4[1];
  auVar3._8_4_ = param_4[2] * param_4[2];
  auVar3._12_4_ = param_4[3] * param_4[3];
  auVar5._0_4_ = *param_1 * *param_1;
  auVar5._4_4_ = param_1[1] * param_1[1];
  auVar5._8_4_ = param_1[2] * param_1[2];
  auVar5._12_4_ = param_1[3] * param_1[3];
  auVar3 = vblendps_avx(auVar3,auVar4,8);
  auVar4 = vblendps_avx(auVar5,auVar4,8);
  auVar3 = vhaddps_avx(auVar3,auVar3);
  auVar4 = vhaddps_avx(auVar4,auVar4);
  auVar3 = vhaddps_avx(auVar3,auVar3);
  auVar4 = vhaddps_avx(auVar4,auVar4);
  uVar1 = *(undefined8 *)(param_1 + 2);
  iVar2 = 0;
  if (_DAT_14617be10 <= (float)((uint)(auVar3._0_4_ - auVar4._0_4_) & _DAT_145fc6f4c)) {
    iVar2 = (auVar4._0_4_ <= auVar3._0_4_) + 1;
  }
  *param_2 = *(undefined8 *)param_1;
  param_2[1] = uVar1;
  if (iVar2 == param_5) {
    uVar1 = *(undefined8 *)(param_4 + 2);
    *(undefined8 *)param_1 = *(undefined8 *)param_4;
    *(undefined8 *)(param_1 + 2) = uVar1;
  }
  return;
}

