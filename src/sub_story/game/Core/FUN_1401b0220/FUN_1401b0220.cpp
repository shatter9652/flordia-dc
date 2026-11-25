// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401b0220  size: 147 bytes
// Name:    FUN_1401b0220
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_1401b0220(longlong param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  char cVar5;
  
  iVar1 = *(int *)(param_1 + 0x24);
  cVar5 = func_0x0001400ff800(iVar1);
  if (((cVar5 != '\0') || (iVar1 == 0x285dacd9)) || (iVar1 == -0x556bdccf)) {
    uVar2 = *(uint *)(param_1 + 0xa34);
    if (((((ulonglong)uVar2 & 0x1ffff) != 0x1ffff) &&
        (plVar4 = *(longlong **)((ulonglong)(uVar2 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0),
        plVar4 != (longlong *)0x0)) &&
       ((uVar3 = *(uint *)(plVar4[5] + ((ulonglong)uVar2 & 0x1ffff) * 4),
        (uVar3 >> 0x11 & 0x3ff) == uVar2 >> 0x16 &&
        ((uVar2 = *(uint *)(plVar4 + 6), (uVar3 & uVar2) == uVar2 && (*plVar4 != 0)))))) {
      return CONCAT71((uint7)(uint3)(uVar2 >> 8),1);
    }
  }
  return 0;
}

