// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14013d760  size: 48 bytes
// Name:    FUN_14013d760
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14013d790
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_14013d760(longlong param_1)

{
  if ((*(longlong *)(param_1 + 0x18) == 0) && (*(char *)(param_1 + 0xae) == '\0')) {
    FUN_14013d790();
    if (*(char *)(param_1 + 0xa9) != '\x01') {
      return 1;
    }
  }
  return 0;
}

