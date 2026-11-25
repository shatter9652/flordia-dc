// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14010a3c0  size: 123 bytes
// Name:    FUN_14010a3c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14010a3c0(longlong param_1,longlong param_2,uint param_3)

{
  uint *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  
  lVar4 = _DAT_148566280;
  if (param_3 != 0) {
    lVar6 = 0;
    lVar2 = *(longlong *)(_DAT_148566280 + 0x10);
    uVar3 = *(undefined8 *)(lVar2 + 0x18);
    do {
      uVar5 = func_0x0001432ebd00(*(undefined4 *)(lVar2 + 0x14),uVar3,*(undefined4 *)(lVar4 + 0x3c),
                                  *(undefined4 *)(param_2 + lVar6));
      if (uVar5 != 0xffffffff) {
        puVar1 = (uint *)(param_1 + (ulonglong)(uVar5 >> 5) * 4);
        *puVar1 = *puVar1 | 1 << (uVar5 & 0x1f);
      }
      lVar6 = lVar6 + 4;
    } while ((ulonglong)param_3 << 2 != lVar6);
  }
  return;
}

