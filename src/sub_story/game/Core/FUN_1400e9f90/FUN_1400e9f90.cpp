// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400e9f90  size: 60 bytes
// Name:    FUN_1400e9f90
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400e9f90(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  
  cVar3 = func_0x000144f67cd0();
  if (cVar3 != '\0') {
    lVar2 = *(longlong *)(param_1 + 0xe8);
    iVar1 = *(int *)(lVar2 + 0x818);
    if ((longlong)iVar1 != 0x100) {
      *(int *)(lVar2 + 0x818) = iVar1 + 1;
      *(longlong *)(lVar2 + 0x18 + (longlong)iVar1 * 8) = param_1;
    }
  }
  return;
}

