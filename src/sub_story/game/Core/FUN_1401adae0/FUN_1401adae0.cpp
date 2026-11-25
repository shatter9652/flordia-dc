// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401adae0  size: 42 bytes
// Name:    FUN_1401adae0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145071380
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


bool FUN_1401adae0(int param_1,ulonglong param_2)

{
  longlong lVar1;
  
  if ((-1 < param_1) && (lVar1 = FUN_145071380(), lVar1 != 0)) {
    return (*(ulonglong *)(lVar1 + 0x80) & param_2) != 0;
  }
  return false;
}

