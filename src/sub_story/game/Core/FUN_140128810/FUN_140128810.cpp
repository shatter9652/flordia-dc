// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140128810  size: 36 bytes
// Name:    FUN_140128810
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401288a0, FUN_140128870, FUN_140128840
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


int FUN_140128810(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_140128870();
  iVar2 = FUN_140128840();
  iVar3 = FUN_1401288a0();
  return iVar3 + iVar2 + iVar1;
}

