// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400e2df0  size: 93 bytes
// Name:    FUN_1400e2df0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400e2df0(longlong param_1,longlong param_2,undefined8 *param_3,undefined1 (*param_4) [16],
                  undefined4 *param_5)

{
  float fVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_2 + 0xb8);
  *param_3 = *(undefined8 *)(param_2 + 0xb0);
  param_3[1] = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0xb8);
  *(undefined8 *)*param_4 = *(undefined8 *)(param_2 + 0xb0);
  *(undefined8 *)(*param_4 + 8) = uVar3;
  fVar1 = *(float *)(param_1 + 0x350) + *(float *)(*param_4 + 8);
  auVar2._4_4_ = fVar1;
  auVar2._0_4_ = fVar1;
  auVar2._8_4_ = fVar1;
  auVar2._12_4_ = fVar1;
  auVar2 = vblendps_avx(*param_4,auVar2,4);
  *param_4 = auVar2;
  *param_5 = *(undefined4 *)(param_2 + 0xd0);
  return;
}

