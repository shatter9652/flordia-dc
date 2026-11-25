// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140139730  size: 80 bytes
// Name:    FUN_140139730
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140787a70
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140139730(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x17d) == '\x01') {
    uVar1 = func_0x000140787a40();
    *(undefined1 *)(param_1 + 0x17c) = 0;
    FUN_140787a70(uVar1);
    *(undefined1 *)(param_1 + 0x17d) = 0;
  }
  return;
}

