// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140057250  size: 170 bytes
// Name:    FUN_140057250
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140057250(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  lVar6 = 0;
  do {
    lVar3 = *(longlong *)(lVar6 * 8 + 0x1475e7c60);
    if ((lVar3 != 0) && (uVar5 = *(uint *)(param_1 + lVar6 * 4), uVar5 != 0xffffffff)) {
      lVar4 = *(longlong *)(lVar6 * 8 + 0x1475e7d60);
      do {
        uVar7 = (ulonglong)uVar5;
        uVar2 = *(undefined4 *)(*(longlong *)(lVar4 + 8) + uVar7 * 4);
        LOCK();
        puVar1 = (uint *)(lVar4 + 0x30);
        uVar5 = *puVar1;
        *puVar1 = *puVar1 + 1;
        UNLOCK();
        *(uint *)(*(longlong *)(lVar4 + 8) + uVar7 * 4) = uVar5;
        *(undefined4 *)(*(longlong *)(lVar4 + 0x18) + (ulonglong)uVar5 * 4) = uVar2;
        if (*param_2 == 0) {
          (*(code *)param_2[1])(lVar3,uVar5);
        }
        else {
          (*(code *)param_2[1])(*param_2,lVar3);
        }
        uVar5 = *(uint *)(*(longlong *)(lVar4 + 0x10) + uVar7 * 4);
      } while (uVar5 != 0xffffffff);
    }
    lVar6 = lVar6 + 1;
  } while (lVar6 != 0x20);
  return;
}

