// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140008e10  size: 100 bytes
// Name:    FUN_140008e10
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140004b40, FUN_14198c900
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140008e10(longlong param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  int *piVar2;
  char cVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  
  puVar1 = (ulonglong *)(param_1 + 8);
  FUN_140004b40(puVar1);
  if ((ulonglong)*(uint *)(param_1 + 0x44) != 0) {
    lVar7 = *(longlong *)(param_1 + 0x48);
    lVar8 = (ulonglong)*(uint *)(param_1 + 0x44) * 0x160;
    do {
      FUN_14198c900(param_1,lVar7,param_2,0);
      lVar7 = lVar7 + 0x160;
      lVar8 = lVar8 + -0x160;
    } while (lVar8 != 0);
  }
  piVar2 = (int *)(param_1 + 0x18);
  *piVar2 = *piVar2 + -1;
  uVar5 = *puVar1;
  if (*piVar2 == 0) {
    do {
      uVar4 = uVar5;
      LOCK();
      uVar5 = *puVar1;
      if (uVar4 == uVar5) {
        *puVar1 = (ulonglong)((int)uVar4 - 1) | 0xffffffff00000000;
        uVar5 = uVar4;
      }
      UNLOCK();
    } while (uVar4 != uVar5);
    if ((uVar4 & 0xfffffffe) != 0) {
      plVar6 = (longlong *)(param_1 + 0x10);
      lVar7 = *(longlong *)(param_1 + 0x10);
      do {
        while (lVar7 < 0) {
          cVar3 = FUN_1400062d0(plVar6,1,&stack0xffffffffffffffe0);
          if (cVar3 != '\0') {
            return;
          }
        }
        LOCK();
        lVar8 = *plVar6;
        if (lVar7 == lVar8) {
          *plVar6 = lVar7 + 0x100000000;
          lVar8 = lVar7;
        }
        UNLOCK();
        bVar9 = lVar7 != lVar8;
        lVar7 = lVar8;
      } while (bVar9);
      return;
    }
  }
  return;
}

