// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401a7af0  size: 90 bytes
// Name:    FUN_1401a7af0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401a7c70, FUN_1401a7b50
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401a7af0(longlong param_1)

{
  int iVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  
  cVar2 = FUN_1401a7b50();
  *(byte *)(param_1 + 0x91) = *(byte *)(param_1 + 0x91) & 0xef | cVar2 << 4;
  iVar1 = _DAT_14abbef40;
  cVar3 = FUN_1401a7c70(param_1);
  iVar5 = 0x1ea;
  if (cVar2 != '\0') {
    iVar5 = 0x46;
  }
  iVar4 = 1;
  if (cVar3 != '\0') {
    iVar4 = iVar5;
  }
  *(int *)(param_1 + 0x28) = iVar4 + iVar1;
  return;
}

