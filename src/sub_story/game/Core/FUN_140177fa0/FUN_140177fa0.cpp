// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140177fa0  size: 146 bytes
// Name:    FUN_140177fa0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1451ae730
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


longlong FUN_140177fa0(uint param_1)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  bool bVar6;
  
  uVar4 = param_1 & 0x1ffff;
  if ((uVar4 == 0x1ffff) ||
     (plVar2 = *(longlong **)((ulonglong)(param_1 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0),
     plVar2 == (longlong *)0x0)) {
    lVar3 = 0;
  }
  else {
    uVar1 = *(uint *)(plVar2[5] + (ulonglong)uVar4 * 4);
    lVar3 = 0;
    if ((((uVar1 >> 0x11 & 0x3ff) == param_1 >> 0x16) &&
        ((uVar1 & *(uint *)(plVar2 + 6)) == *(uint *)(plVar2 + 6))) && (*plVar2 != 0)) {
      lVar5 = *plVar2 + (ulonglong)(uVar4 * (int)plVar2[1]);
      if (*(char *)(lVar5 + 0x30) == '\x03') {
        lVar3 = FUN_1451ae730(lVar5);
        bVar6 = lVar3 == 0;
      }
      else {
        lVar3 = 0;
        bVar6 = *(char *)(lVar5 + 0x30) == '\x02';
      }
      if (bVar6) {
        lVar3 = lVar5;
      }
    }
  }
  return lVar3;
}

