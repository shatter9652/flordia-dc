// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400bd870  size: 50 bytes
// Name:    FUN_1400bd870
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400bd870(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  *(undefined8 *)(param_1 + 0x70) = 0;
  lVar1 = func_0x000144ed8740(*(undefined4 *)(param_2 + 0x9c));
  if ((lVar1 != 0) && ((*(byte *)(lVar1 + 0x5c) & 4) != 0)) {
    *(longlong *)(param_1 + 0x70) = lVar1;
  }
  return;
}

