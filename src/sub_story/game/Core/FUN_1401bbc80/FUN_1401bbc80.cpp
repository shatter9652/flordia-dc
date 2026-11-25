// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401bbc80  size: 71 bytes
// Name:    FUN_1401bbc80
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1403d5b30, FUN_140004b40
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1401bbc80(longlong param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  int *piVar2;
  char cVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  bool bVar8;
  longlong lStack_20;
  
  puVar1 = (ulonglong *)(param_1 + 0x30);
  FUN_140004b40(puVar1);
  if (*(int *)(param_1 + 0x28) != 0) {
    *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
    FUN_1403d5b30(param_2,*(int *)(param_1 + 0x28),param_1 + 0x2c);
  }
  piVar2 = (int *)(param_1 + 0x40);
  *piVar2 = *piVar2 + -1;
  uVar6 = *puVar1;
  if (*piVar2 == 0) {
    do {
      uVar5 = uVar6;
      LOCK();
      uVar6 = *puVar1;
      if (uVar5 == uVar6) {
        *puVar1 = (ulonglong)((int)uVar5 - 1) | 0xffffffff00000000;
        uVar6 = uVar5;
      }
      UNLOCK();
    } while (uVar5 != uVar6);
    if ((uVar5 & 0xfffffffe) != 0) {
      plVar7 = (longlong *)(param_1 + 0x38);
      lStack_20 = *(longlong *)(param_1 + 0x38);
      do {
        while (lStack_20 < 0) {
          cVar3 = FUN_1400062d0(plVar7,1,&lStack_20);
          if (cVar3 != '\0') {
            return;
          }
        }
        LOCK();
        lVar4 = *plVar7;
        if (lStack_20 == lVar4) {
          *plVar7 = lStack_20 + 0x100000000;
          lVar4 = lStack_20;
        }
        UNLOCK();
        bVar8 = lStack_20 != lVar4;
        lStack_20 = lVar4;
      } while (bVar8);
      return;
    }
  }
  return;
}

