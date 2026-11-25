// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14013e7e0  size: 45 bytes
// Name:    FUN_14013e7e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined1 FUN_14013e7e0(void)

{
  undefined8 uVar1;
  undefined1 uVar2;
  longlong lVar3;
  
  uVar1 = func_0x000144ecb080();
  lVar3 = func_0x000144ffe940(uVar1);
  if ((lVar3 == 0) || (uVar2 = 2, (*(byte *)(lVar3 + 0x20ae) & 2) == 0)) {
    uVar2 = 1;
  }
  return uVar2;
}

