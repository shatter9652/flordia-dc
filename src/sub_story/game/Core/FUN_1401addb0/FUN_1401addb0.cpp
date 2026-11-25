// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401addb0  size: 59 bytes
// Name:    FUN_1401addb0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401aea50
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_1401addb0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_1 + 0xaa) & 4) != 0) {
    if (param_2 == 0) {
      return 0x1ba;
    }
    uVar1 = FUN_1401aea50(*(undefined4 *)(param_2 + 0x10),param_1 + 0x20);
    if ((int)uVar1 != 1) {
      return uVar1;
    }
  }
  return 1;
}

