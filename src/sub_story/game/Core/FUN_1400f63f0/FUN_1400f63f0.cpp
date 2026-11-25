// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400f63f0  size: 48 bytes
// Name:    FUN_1400f63f0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined4 FUN_1400f63f0(void)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = func_0x00014501d0a0();
  if (lVar2 != 0) {
    if (*(char *)(lVar2 + 0x6e0) == '\x0e') {
      return 2;
    }
    cVar1 = func_0x00014094dff0();
    if (cVar1 != '\0') {
      return 3;
    }
  }
  return 1;
}

