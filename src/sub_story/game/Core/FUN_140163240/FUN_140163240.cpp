// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140163240  size: 90 bytes
// Name:    FUN_140163240
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140163360, FUN_140004b40
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140163240(longlong param_1)

{
  ulonglong *puVar1;
  int *piVar2;
  char cVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auVar9 [16];
  longlong lStack_20;
  
  puVar1 = (ulonglong *)(param_1 + 0x20);
  FUN_140004b40(puVar1);
  lVar4 = *(longlong *)(param_1 + 0x70);
  if (lVar4 != 0) {
    FUN_140163360(lVar4);
    func_0x000144d9c130(lVar4,0x238);
  }
  auVar9._0_12_ = ZEXT812(0);
  auVar9._12_4_ = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined1 (*) [16])(param_1 + 0x68) = auVar9;
  piVar2 = (int *)(param_1 + 0x30);
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
      plVar7 = (longlong *)(param_1 + 0x28);
      lStack_20 = *(longlong *)(param_1 + 0x28);
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

