// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14006bd00  size: 43 bytes
// Name:    FUN_14006bd00
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14006bee0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_14006bd00(longlong param_1,undefined4 param_2)

{
  ulonglong uVar1;
  uint uVar2;
  
  uVar2 = FUN_14006bee0(param_2);
  if (0x3f < uVar2) {
    return 0;
  }
  uVar1 = *(ulonglong *)(param_1 + 0x20 + (ulonglong)(uVar2 >> 6) * 8);
  return CONCAT71((int7)(uVar1 >> 8),(uVar1 >> ((ulonglong)uVar2 & 0x3f) & 1) != 0);
}

