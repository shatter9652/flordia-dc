// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401af2c0  size: 49 bytes
// Name:    FUN_1401af2c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401af300
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_1401af2c0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if ((param_1 != 0) &&
     (((param_2 == 0 || ((*(byte *)(param_2 + 0xab) & 2) == 0)) &&
      (uVar1 = FUN_1401af300(*(undefined4 *)(param_1 + 0x9c)), (int)uVar1 != 1)))) {
    return uVar1;
  }
  return 1;
}

