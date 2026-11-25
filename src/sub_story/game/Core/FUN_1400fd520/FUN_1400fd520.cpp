// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400fd520  size: 111 bytes
// Name:    FUN_1400fd520
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_142c1e480
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


uint * FUN_1400fd520(undefined8 param_1,uint param_2)

{
  longlong lVar1;
  uint *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  lVar1 = FUN_142c1e480();
  if ((lVar1 != 0) && (uVar3 = (ulonglong)*(ushort *)(lVar1 + 0x48), uVar3 != 0)) {
    puVar2 = *(uint **)(lVar1 + 0x40);
    uVar4 = uVar3;
    do {
      uVar5 = uVar4 >> 1;
      uVar6 = ~uVar5 + uVar4;
      uVar4 = uVar5;
      if ((puVar2 + uVar5 * 0x12 + 0x12)[-0x12] < param_2) {
        puVar2 = puVar2 + uVar5 * 0x12 + 0x12;
        uVar4 = uVar6;
      }
    } while (0 < (longlong)uVar4);
    if ((puVar2 != *(uint **)(lVar1 + 0x40) + uVar3 * 0x12) && (*puVar2 == param_2)) {
      return puVar2 + 2;
    }
  }
  return (uint *)0x0;
}

