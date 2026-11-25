// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401a7a70  size: 125 bytes
// Name:    FUN_1401a7a70
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401aa7f0, FUN_1401a7af0, FUN_140004b40, FUN_1401a7e00, FUN_1401a8010
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1401a7a70(longlong param_1)

{
  int *piVar1;
  ulonglong *puVar2;
  char cVar3;
  longlong lVar4;
  ulonglong uVar5;
  ushort uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  bool bVar9;
  longlong lVar10;
  
  puVar2 = (ulonglong *)(param_1 + 0x80);
  FUN_140004b40(puVar2);
  FUN_1401a8010(param_1);
  FUN_1401aa7f0(param_1);
  uVar6 = *(ushort *)(param_1 + 0x28);
  if (uVar6 != 0) {
    uVar8 = 0;
    do {
      lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x20) + uVar8 * 8);
      cVar3 = func_0x0001450705b0(*(undefined4 *)(lVar10 + 0x28));
      if (cVar3 != '\0') {
        FUN_1401a7af0(lVar10);
        uVar6 = *(ushort *)(param_1 + 0x28);
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar6);
  }
  FUN_1401a7e00(param_1);
  piVar1 = (int *)(param_1 + 0x90);
  *piVar1 = *piVar1 + -1;
  uVar8 = *puVar2;
  if (*piVar1 == 0) {
    do {
      uVar5 = uVar8;
      LOCK();
      uVar8 = *puVar2;
      if (uVar5 == uVar8) {
        *puVar2 = (ulonglong)((int)uVar5 - 1) | 0xffffffff00000000;
        uVar8 = uVar5;
      }
      UNLOCK();
    } while (uVar5 != uVar8);
    if ((uVar5 & 0xfffffffe) != 0) {
      plVar7 = (longlong *)(param_1 + 0x88);
      lVar10 = *(longlong *)(param_1 + 0x88);
      do {
        while (lVar10 < 0) {
          cVar3 = FUN_1400062d0(plVar7,1,&stack0xffffffffffffffe0);
          if (cVar3 != '\0') {
            return;
          }
        }
        LOCK();
        lVar4 = *plVar7;
        if (lVar10 == lVar4) {
          *plVar7 = lVar10 + 0x100000000;
          lVar4 = lVar10;
        }
        UNLOCK();
        bVar9 = lVar10 != lVar4;
        lVar10 = lVar4;
      } while (bVar9);
      return;
    }
  }
  return;
}

