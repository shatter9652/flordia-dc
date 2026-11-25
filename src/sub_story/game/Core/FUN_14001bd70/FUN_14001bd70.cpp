// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14001bd70  size: 65 bytes
// Name:    FUN_14001bd70
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


bool FUN_14001bd70(longlong param_1)

{
  bool bVar1;
  int iVar2;
  ulonglong uVar3;
  longlong *plVar4;
  
  if (*(int *)(param_1 + 4) == 0) {
    bVar1 = false;
  }
  else {
    plVar4 = (longlong *)(param_1 + 8);
    uVar3 = 0;
    do {
      iVar2 = (**(code **)(*plVar4 + 0x10))(plVar4);
      bVar1 = 0 < iVar2;
      if (0 < iVar2) {
        return bVar1;
      }
      uVar3 = uVar3 + 1;
      plVar4 = plVar4 + 4;
    } while (uVar3 < *(uint *)(param_1 + 4));
  }
  return bVar1;
}

