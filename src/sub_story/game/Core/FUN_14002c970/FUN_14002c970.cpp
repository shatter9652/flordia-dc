// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14002c970  size: 88 bytes
// Name:    FUN_14002c970
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14002c970(void)

{
  longlong *plVar1;
  byte bVar2;
  ushort uVar3;
  longlong lVar4;
  byte bVar5;
  undefined8 unaff_RBX;
  ulonglong uVar6;
  
  bVar5 = 1;
  if (_DAT_1491ac9f0 != 0) {
    uVar6 = 0;
    lVar4 = _DAT_1491ac9e8;
    uVar3 = _DAT_1491ac9f0;
    do {
      plVar1 = *(longlong **)(lVar4 + uVar6 * 8);
      if (plVar1 != (longlong *)0x0) {
        bVar2 = (**(code **)(*plVar1 + 0x80))(plVar1,0);
        bVar5 = bVar5 & bVar2;
        lVar4 = _DAT_1491ac9e8;
        uVar3 = _DAT_1491ac9f0;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar3);
  }
  return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),bVar5) & 0xffffffff;
}

