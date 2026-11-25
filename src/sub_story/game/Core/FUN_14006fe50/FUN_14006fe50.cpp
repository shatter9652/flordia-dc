// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14006fe50  size: 83 bytes
// Name:    FUN_14006fe50
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144ecd3f0, FUN_140830a10, FUN_144ece180
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


char FUN_14006fe50(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_140830a10();
  if (lVar1 != 0 && lVar1 != param_1) {
    FUN_144ece180(param_2,*(undefined4 *)(lVar1 + 0x9c));
  }
  FUN_144ecd3f0(param_2);
  return (lVar1 == param_1) + '\x05';
}

