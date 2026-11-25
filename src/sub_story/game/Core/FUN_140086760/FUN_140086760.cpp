// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140086760  size: 62 bytes
// Name:    FUN_140086760
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140004b40
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140086760(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  char cVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  bool bVar7;
  longlong lVar8;
  
  puVar1 = (ulonglong *)(param_1 + 2);
  FUN_140004b40(puVar1);
  (**(code **)(*param_1 + 0x48))(param_1,param_2,param_3);
  plVar6 = param_1 + 4;
  *(int *)plVar6 = (int)*plVar6 + -1;
  uVar5 = *puVar1;
  if ((int)*plVar6 == 0) {
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
      plVar6 = param_1 + 3;
      lVar8 = param_1[3];
      do {
        while (lVar8 < 0) {
          cVar2 = FUN_1400062d0(plVar6,1,&stack0xffffffffffffffe0);
          if (cVar2 != '\0') {
            return;
          }
        }
        LOCK();
        lVar3 = *plVar6;
        if (lVar8 == lVar3) {
          *plVar6 = lVar8 + 0x100000000;
          lVar3 = lVar8;
        }
        UNLOCK();
        bVar7 = lVar8 != lVar3;
        lVar8 = lVar3;
      } while (bVar7);
      return;
    }
  }
  return;
}

