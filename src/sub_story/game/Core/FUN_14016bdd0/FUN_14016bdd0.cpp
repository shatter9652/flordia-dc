// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14016bdd0  size: 36 bytes
// Name:    FUN_14016bdd0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14016be00
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14016bdd0(undefined8 *param_1)

{
  *param_1 = &UNK_1465f49e0;
  FUN_14016be00();
  *param_1 = &UNK_1465f4c40;
  func_0x0001450268f0((longlong)param_1 + 0x34);
  func_0x000144ddb0c0(*(undefined2 *)((longlong)param_1 + 0x32));
  FUN_145026b00((longlong)param_1 + 0x2e);
  FUN_145026b00((longlong)param_1 + 0x2a);
  param_1[2] = 2;
  return;
}

