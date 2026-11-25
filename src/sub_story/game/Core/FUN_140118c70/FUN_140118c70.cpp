// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140118c70  size: 63 bytes
// Name:    FUN_140118c70
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140119bf0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140118c70(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = (**(code **)(*param_1 + 0x38))();
  uStack_28 = *(undefined8 *)((longlong)param_1 + 0x44);
  uStack_20 = *(undefined8 *)((longlong)param_1 + 0x4c);
  FUN_140119bf0(param_2,uVar1,1,*(undefined1 *)((longlong)param_1 + 0x35),&uStack_28);
  return;
}

