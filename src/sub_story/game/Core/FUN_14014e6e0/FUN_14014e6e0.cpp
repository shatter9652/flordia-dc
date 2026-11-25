// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14014e6e0  size: 149 bytes
// Name:    FUN_14014e6e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14286ca60
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_14014e6e0(uint *param_1,char param_2)

{
  uint uVar1;
  uint uVar2;
  longlong *plVar3;
  int iVar4;
  
  uVar1 = *param_1;
  if ((((ulonglong)uVar1 & 0x1ffff) != 0x1ffff) &&
     (plVar3 = *(longlong **)((ulonglong)(uVar1 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0),
     plVar3 != (longlong *)0x0)) {
    uVar2 = *(uint *)(plVar3[5] + ((ulonglong)uVar1 & 0x1ffff) * 4);
    if ((uVar2 >> 0x11 & 0x3ff) != uVar1 >> 0x16) {
      return 0;
    }
    if ((uVar2 & *(uint *)(plVar3 + 6)) != *(uint *)(plVar3 + 6)) {
      return 0;
    }
    if (*plVar3 == 0) {
      return 0;
    }
    if (((char)param_1[3] != '\0') || (*(char *)((longlong)param_1 + 0xd) == '\x01')) {
      if ((param_2 != '\0' || param_1[1] == 0) ||
         (iVar4 = FUN_14286ca60(param_1[1],param_1[2]), iVar4 != 0)) {
        return 1;
      }
    }
  }
  return 0;
}

