// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14002b410  size: 136 bytes
// Name:    FUN_14002b410
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e10340, FUN_144e10840
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14002b410(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                  undefined1 param_5)

{
  ulonglong uVar1;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uStack_28 = *param_3;
  uStack_20 = param_3[1];
  uStack_38 = *param_2;
  uStack_30 = param_2[1];
  uVar1 = (ulonglong)CONCAT14(param_5,*(undefined4 *)(*(longlong *)(param_1 + 0x88) + 0x19c)) |
          0x200000000;
  FUN_144e10840(param_1,param_4,&uStack_38,&uStack_28,uVar1);
  uStack_48 = *param_2;
  uStack_40 = param_2[1];
  FUN_144e10340(param_1,param_4,1,&uStack_48,uVar1 & 0xffffffffffffff00);
  return;
}

