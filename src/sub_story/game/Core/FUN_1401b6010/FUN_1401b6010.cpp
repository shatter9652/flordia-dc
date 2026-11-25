// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401b6010  size: 80 bytes
// Name:    FUN_1401b6010
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140092760, FUN_140092790
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined4 * FUN_1401b6010(undefined8 param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uStack_20;
  
  uVar1 = FUN_140092790(param_1,0x17dd5733,0x53a83bf);
  func_0x000140092750(&uStack_20,uVar1);
  FUN_140092760(uStack_20);
  *param_2 = 0;
  return param_2;
}

