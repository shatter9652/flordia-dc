// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401684d0  size: 43 bytes
// Name:    FUN_1401684d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1405e99c0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


int FUN_1401684d0(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = FUN_1405e99c0(param_1 + 0x20);
    iVar2 = iVar2 + (iVar1 * 8 + 0xfU & 0xfffffff0);
  }
  return iVar2;
}

