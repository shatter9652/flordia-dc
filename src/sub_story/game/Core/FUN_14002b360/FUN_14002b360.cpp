// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14002b360  size: 166 bytes
// Name:    FUN_14002b360
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_14002b360(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  byte bVar4;
  byte bVar5;
  longlong lVar6;
  
  if (((*(byte *)(param_1 + 0x54) & 2) == 0) || (*(char *)(_DAT_14ab7ef10 + 0x266) == '\0')) {
    uVar1 = *(uint *)(param_1 + 0x24);
    if ((ulonglong)uVar1 == 0) {
      bVar5 = 0;
    }
    else {
      lVar2 = *(longlong *)(param_1 + 0x28);
      lVar6 = 0;
      bVar5 = 0;
      do {
        plVar3 = *(longlong **)(lVar2 + lVar6);
        bVar4 = (**(code **)(*plVar3 + 0x78))(plVar3,param_2);
        bVar5 = bVar5 | bVar4;
        lVar6 = lVar6 + 8;
      } while ((ulonglong)uVar1 << 3 != lVar6);
    }
  }
  else {
    bVar5 = 0;
  }
  uVar1 = *(uint *)(param_1 + 0x3c);
  if ((ulonglong)uVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x40);
    lVar6 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar6);
      bVar4 = (**(code **)(*plVar3 + 0x78))(plVar3,param_2);
      bVar5 = bVar5 | bVar4;
      lVar6 = lVar6 + 8;
    } while ((ulonglong)uVar1 << 3 != lVar6);
  }
  return bVar5 & 1;
}

