// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14002b2d0  size: 142 bytes
// Name:    FUN_14002b2d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14002b2d0(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((((*(byte *)(param_1 + 0x54) & 2) == 0) || (*(char *)(_DAT_14ab7ef10 + 0x266) == '\0')) &&
     (uVar1 = *(uint *)(param_1 + 0x24), (ulonglong)uVar1 != 0)) {
    lVar2 = *(longlong *)(param_1 + 0x28);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      (**(code **)(*plVar3 + 0x70))(plVar3,param_2);
      lVar4 = lVar4 + 8;
    } while ((ulonglong)uVar1 << 3 != lVar4);
  }
  uVar1 = *(uint *)(param_1 + 0x3c);
  if ((ulonglong)uVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x40);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      (**(code **)(*plVar3 + 0x70))(plVar3,param_2);
      lVar4 = lVar4 + 8;
    } while ((ulonglong)uVar1 << 3 != lVar4);
  }
  return;
}

