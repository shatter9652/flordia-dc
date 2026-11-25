// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140081ac0  size: 73 bytes
// Name:    FUN_140081ac0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1406d44d0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


longlong FUN_140081ac0(longlong param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  bool bVar6;
  
  if (param_3 == 0) {
    lVar3 = 0x148fe3e90;
  }
  else {
    lVar3 = FUN_1406d44d0();
    if ((lVar3 == 0) && (lVar3 = 0x148fe3e90, param_1 != 0)) {
      lVar3 = 0x148fe3e90;
      if ((param_3 != 0) && (*(int *)(param_1 + 0x28) != 0)) {
        lVar2 = *(longlong *)(param_1 + 0x30);
        uVar5 = *(int *)(param_1 + 0x28) - 1;
        uVar4 = (ulonglong)(uVar5 & param_3);
        uVar1 = *(uint *)(lVar2 + uVar4 * 8);
        bVar6 = uVar1 != 0;
        if (uVar1 != param_3 && bVar6) {
          do {
            uVar4 = (ulonglong)((uint)(uVar4 * 8 + 8 >> 3) & uVar5);
            uVar1 = *(uint *)(lVar2 + uVar4 * 8);
            bVar6 = uVar1 != 0;
            if (uVar1 == 0) break;
          } while (uVar1 != param_3);
        }
        if (bVar6) {
          lVar3 = (ulonglong)((uint)*(byte *)(lVar2 + 4 + uVar4 * 8) * 0x50) +
                  *(longlong *)(param_1 + 0x20);
        }
      }
      return lVar3;
    }
  }
  return lVar3;
}

