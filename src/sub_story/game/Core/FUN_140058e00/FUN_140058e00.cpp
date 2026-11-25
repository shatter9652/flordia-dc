// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140058e00  size: 55 bytes
// Name:    FUN_140058e00
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1435df9c0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140058e00(longlong param_1,undefined8 param_2,undefined4 param_3,ulonglong param_4,
                  undefined4 param_5)

{
  if ((int)param_4 == 0) {
    param_4 = (ulonglong)*(uint *)(param_1 + 4);
  }
  FUN_1435df9c0(param_2,*(undefined4 *)(param_1 + 0x3c),*(undefined8 *)(param_1 + 0x40),param_4,
                param_3,param_5);
  return;
}

