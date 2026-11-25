// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400e2180  size: 68 bytes
// Name:    FUN_1400e2180
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400e21d0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400e2180(ulonglong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uStack_28 = *param_3;
  uStack_20 = param_3[1];
  func_0x000144e43940(&uStack_30,*(undefined8 *)((param_1 & 0xfffffffffffffff0) + 0x38));
  FUN_1400e21d0(param_2,uStack_30,&uStack_28);
  return;
}

