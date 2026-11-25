// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400eb890  size: 37 bytes
// Name:    FUN_1400eb890
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400eb890(longlong param_1)

{
  undefined1 auVar1 [16];
  
  func_0x000144f6f710();
  auVar1 = vpermilps_avx(*(undefined1 (*) [16])(param_1 + 0x118),0x4e);
  *(undefined1 (*) [16])(param_1 + 0x118) = auVar1;
  return;
}

