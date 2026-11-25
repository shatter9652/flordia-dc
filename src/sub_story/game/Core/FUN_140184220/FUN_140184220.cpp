// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140184220  size: 47 bytes
// Name:    FUN_140184220
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140184220(longlong param_1)

{
  int *piVar1;
  char cVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  ulonglong *puVar7;
  bool bVar8;
  longlong lStack_20;
  
  lVar3 = *(longlong *)(param_1 + 0x28);
  puVar7 = (ulonglong *)(lVar3 + 0x18);
  func_0x00014515adb0(puVar7);
  *(undefined8 *)(param_1 + 0x30) = 0;
  piVar1 = (int *)(lVar3 + 0x28);
  *piVar1 = *piVar1 + -1;
  uVar5 = *puVar7;
  if (*piVar1 == 0) {
    do {
      uVar4 = uVar5;
      LOCK();
      uVar5 = *puVar7;
      if (uVar4 == uVar5) {
        *puVar7 = (ulonglong)((int)uVar4 - 1) | 0xffffffff00000000;
        uVar5 = uVar4;
      }
      UNLOCK();
    } while (uVar4 != uVar5);
    if ((uVar4 & 0xfffffffe) != 0) {
      plVar6 = (longlong *)(lVar3 + 0x20);
      lStack_20 = *(longlong *)(lVar3 + 0x20);
      do {
        while (lStack_20 < 0) {
          cVar2 = FUN_1400062d0(plVar6,1,&lStack_20);
          if (cVar2 != '\0') {
            return;
          }
        }
        LOCK();
        lVar3 = *plVar6;
        if (lStack_20 == lVar3) {
          *plVar6 = lStack_20 + 0x100000000;
          lVar3 = lStack_20;
        }
        UNLOCK();
        bVar8 = lStack_20 != lVar3;
        lStack_20 = lVar3;
      } while (bVar8);
      return;
    }
  }
  return;
}

