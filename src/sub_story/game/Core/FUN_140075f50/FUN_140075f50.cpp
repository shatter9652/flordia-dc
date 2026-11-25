// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140075f50  size: 73 bytes
// Name:    FUN_140075f50
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e2ab00, FUN_140075fa0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140075f50(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_40 [40];
  
  FUN_144e2ab00(auStack_40,*(undefined8 *)(*(longlong *)(param_1 + 0x80) + 0x40),param_2);
  FUN_140075fa0(param_1,9,auStack_40,param_2);
  func_0x000144e2aa90(auStack_40);
  return;
}

