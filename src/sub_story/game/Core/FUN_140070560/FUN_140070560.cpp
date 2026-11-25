// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140070560  size: 127 bytes
// Name:    FUN_140070560
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


longlong FUN_140070560(void)

{
  uint uVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  lVar4 = func_0x000144f01450();
  if (lVar4 != 0) {
    uVar1 = *(uint *)(lVar4 + 0xf18);
    uVar5 = (ulonglong)uVar1 & 0x1ffff;
    if ((uVar5 != 0x1ffff) &&
       (plVar3 = *(longlong **)((ulonglong)(uVar1 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0),
       plVar3 != (longlong *)0x0)) {
      uVar2 = *(uint *)(plVar3[5] + uVar5 * 4);
      if (uVar1 >> 0x16 != (uVar2 >> 0x11 & 0x3ff) ||
          (uVar2 & *(uint *)(plVar3 + 6)) != *(uint *)(plVar3 + 6)) {
        return 0;
      }
      return (ulonglong)(uint)((int)plVar3[1] * (int)uVar5) + *plVar3;
    }
  }
  return 0;
}

