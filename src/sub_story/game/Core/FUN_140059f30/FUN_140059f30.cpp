// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140059f30  size: 160 bytes
// Name:    FUN_140059f30
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1421be5e0, FUN_140ad0ad0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140059f30(undefined8 *param_1,undefined8 param_2,int param_3,int param_4,undefined8 param_5
                  )

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  ulonglong uStack_30;
  undefined4 uStack_28;
  undefined1 uStack_24;
  
  auStack_48._0_12_ = ZEXT812(0);
  auStack_48._12_4_ = 0;
  uVar2 = 0;
  uStack_30 = (ulonglong)(uint)(param_4 * param_3);
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_38 = param_2;
  uVar1 = FUN_140ad0ad0(param_3,param_4,1,auStack_48,8,0,0x2d,0,*param_1);
  *param_1 = uVar1;
  param_1[1] = 0;
  FUN_1421be5e0(param_5,param_1 + 1);
  if (param_1[1] != 0) {
    uVar2 = *(undefined8 *)(param_1[1] + 0x28);
  }
  param_1[2] = uVar2;
  return;
}

