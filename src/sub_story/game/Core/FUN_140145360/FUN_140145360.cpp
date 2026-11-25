// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140145360  size: 147 bytes
// Name:    FUN_140145360
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


bool FUN_140145360(longlong param_1,longlong param_2,longlong param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  
  if ((((-1 < *(int *)(param_1 + 0x88)) && (*(longlong *)(param_1 + 0x80) == param_3)) &&
      (param_3 != 0)) &&
     ((lVar4 = *(longlong *)(param_2 + 0x80), lVar4 == param_3 &&
      (iVar3 = *(int *)(param_2 + 0x88), -1 < iVar3)))) {
    iVar2 = func_0x000140145420(param_3,*(longlong *)(param_1 + 0x80));
    iVar3 = func_0x000140145420(param_3,lVar4,iVar3);
    if (iVar3 < iVar2) {
      bVar1 = true;
    }
    else {
      if (iVar3 <= iVar2) goto FUN_140145400;
      bVar1 = false;
    }
    return bVar1;
  }
FUN_140145400:
  lVar4 = FUN_140145460(param_1,param_2);
  return lVar4 != 0;
}

