// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140100720  size: 79 bytes
// Name:    FUN_140100720
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144fa4cb0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140100720(int *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = func_0x000144fa4e80(*(undefined4 *)(param_2 + 0x9c));
  if ((lVar2 == 0) || (iVar1 = *(int *)(lVar2 + 0x300), iVar1 == 0)) {
    lVar2 = FUN_144fa4cb0(_DAT_14ab7f650,param_2,0);
    if ((lVar2 == 0) || (iVar1 = *(int *)(lVar2 + 0x3c), iVar1 == 0)) {
      iVar1 = 0;
    }
  }
  *param_1 = iVar1;
  return;
}

