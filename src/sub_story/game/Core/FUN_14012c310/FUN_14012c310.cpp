// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14012c310  size: 114 bytes
// Name:    FUN_14012c310
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_142c1e480
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


uint * FUN_14012c310(undefined8 param_1,uint param_2)

{
  ushort uVar1;
  longlong lVar2;
  uint *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  lVar2 = FUN_142c1e480();
  if (lVar2 != 0) {
    uVar1 = *(ushort *)(lVar2 + 0xc0);
    if ((ulonglong)uVar1 != 0) {
      puVar3 = *(uint **)(lVar2 + 0xb8);
      uVar5 = (ulonglong)uVar1;
      do {
        uVar4 = uVar5 >> 1;
        if (puVar3[uVar4 * 0xc] < param_2) {
          puVar3 = puVar3 + uVar4 * 0xc + 0xc;
          uVar4 = ~uVar4 + uVar5;
        }
        uVar5 = uVar4;
      } while (0 < (longlong)uVar4);
      if ((puVar3 != (uint *)((longlong)*(uint **)(lVar2 + 0xb8) + (ulonglong)((uint)uVar1 * 0x30)))
         && (*puVar3 == param_2)) {
        return puVar3 + 2;
      }
    }
  }
  return (uint *)0x0;
}

