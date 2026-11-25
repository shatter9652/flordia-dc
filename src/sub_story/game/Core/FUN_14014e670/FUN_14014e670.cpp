// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14014e670  size: 112 bytes
// Name:    FUN_14014e670
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401b0c50, FUN_140082c90, FUN_144f013e0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14014e670(longlong *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  
  if (((*(byte *)((longlong)param_1 + 0x71) & 1) == 0) &&
     (*(byte *)((longlong)param_1 + 0x71) = *(byte *)((longlong)param_1 + 0x71) | 1, param_1[7] != 0
     )) {
    lVar4 = FUN_144f013e0(*(undefined4 *)(*param_1 + 0x9c));
    if (lVar4 != 0) {
      cVar1 = FUN_1401b0c50(lVar4);
      if (cVar1 != '\0') {
        *(byte *)((longlong)param_1 + 0x71) = *(byte *)((longlong)param_1 + 0x71) & 0xfd;
      }
    }
    iVar2 = FUN_140082c90(param_1[7],0x18,*param_1);
    if (iVar2 != 0) {
      uVar3 = func_0x000144dc06c0(iVar2);
      if (uVar3 <= _DAT_14a9ae108) {
        *(byte *)((longlong)param_1 + 0x71) = *(byte *)((longlong)param_1 + 0x71) & 0xfd;
      }
    }
  }
  return;
}

