// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400fd5e0  size: 112 bytes
// Name:    FUN_1400fd5e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_142c1e480
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


uint * FUN_1400fd5e0(undefined8 param_1,uint param_2)

{
  longlong lVar1;
  uint *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  lVar1 = FUN_142c1e480();
  if (lVar1 != 0) {
    uVar3 = (ulonglong)*(ushort *)(lVar1 + 0x78);
    if (uVar3 != 0) {
      puVar2 = *(uint **)(lVar1 + 0x70);
      do {
        uVar4 = uVar3 >> 1;
        uVar5 = ~uVar4 + uVar3;
        uVar3 = uVar4;
        if ((puVar2 + uVar4 * 0x10 + 0x10)[-0x10] < param_2) {
          puVar2 = puVar2 + uVar4 * 0x10 + 0x10;
          uVar3 = uVar5;
        }
      } while (0 < (longlong)uVar3);
      if ((puVar2 != *(uint **)(lVar1 + 0x70) + (ulonglong)*(ushort *)(lVar1 + 0x78) * 0x10) &&
         (*puVar2 == param_2)) {
        return puVar2 + 2;
      }
    }
  }
  return (uint *)0x0;
}

