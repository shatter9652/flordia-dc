// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14003ef10  size: 50 bytes
// Name:    FUN_14003ef10
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_14003ef10(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  func_0x000144e528b0();
  lVar1 = *(longlong *)((*(ulonglong *)(param_1 + 8) & 0xfffffffffffffff0) + 0x38);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),*(char *)(lVar1 + 0x156) == '\x01');
  }
  return uVar2;
}

