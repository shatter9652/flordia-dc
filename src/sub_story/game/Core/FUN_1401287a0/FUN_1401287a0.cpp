// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401287a0  size: 72 bytes
// Name:    FUN_1401287a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401d8570, FUN_140128810
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1401287a0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = FUN_140128810();
  iVar2 = func_0x0001401287f0();
  iVar3 = func_0x000140128800();
  uVar4 = FUN_1401d8570();
  return (float)uVar4 * _DAT_1461778b0 < (float)(uint)(iVar2 + iVar1 + iVar3);
}

