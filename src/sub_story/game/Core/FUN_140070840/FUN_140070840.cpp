// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140070840  size: 133 bytes
// Name:    FUN_140070840
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140004b40, FUN_145761eb0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140070840(longlong param_1,longlong param_2)

{
  uint uVar1;
  ulonglong uVar2;
  char cVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar8;
  bool bVar9;
  longlong lStack_20;
  
  FUN_140004b40(0x148efa230);
  lVar4 = *(longlong *)(param_1 + 0x20);
  uVar1 = *(uint *)(param_1 + 0x1c);
  uVar5 = (ulonglong)uVar1;
  if (uVar5 != 0) {
    lVar8 = 0;
    do {
      if (*(longlong *)(lVar4 + lVar8) == param_2) goto LAB_140070891;
      lVar8 = lVar8 + 8;
    } while (uVar5 * 8 - lVar8 != 0);
  }
  if (uVar1 == *(uint *)(param_1 + 0x18)) {
    uVar7 = 1;
    if (1 < uVar1) {
      uVar7 = uVar1 >> 1;
    }
    FUN_145761eb0((uint *)(param_1 + 0x18),uVar7 + uVar1);
    lVar4 = *(longlong *)(param_1 + 0x20);
    uVar5 = (ulonglong)*(uint *)(param_1 + 0x1c);
  }
  *(int *)(param_1 + 0x1c) = (int)uVar5 + 1;
  *(longlong *)(lVar4 + uVar5 * 8) = param_2;
LAB_140070891:
  iRam0000000148efa240 = iRam0000000148efa240 + -1;
  uVar5 = uRam0000000148efa230;
  if (iRam0000000148efa240 == 0) {
    do {
      uVar6 = uVar5;
      LOCK();
      uVar5 = uVar6;
      uVar2 = (ulonglong)((int)uVar6 - 1) | 0xffffffff00000000;
      if (uVar6 != uRam0000000148efa230) {
        uVar5 = uRam0000000148efa230;
        uVar2 = uRam0000000148efa230;
      }
      uRam0000000148efa230 = uVar2;
      UNLOCK();
    } while (uVar6 != uVar5);
    if ((uVar6 & 0xfffffffe) != 0) {
      lStack_20 = lRam0000000148efa238;
      iRam0000000148efa240 = 0;
      do {
        while (lStack_20 < 0) {
          cVar3 = FUN_1400062d0(0x148efa238,1,&lStack_20);
          if (cVar3 != '\0') {
            return;
          }
        }
        LOCK();
        lVar4 = lStack_20;
        lVar8 = lStack_20 + 0x100000000;
        if (lStack_20 != lRam0000000148efa238) {
          lVar4 = lRam0000000148efa238;
          lVar8 = lRam0000000148efa238;
        }
        lRam0000000148efa238 = lVar8;
        UNLOCK();
        bVar9 = lStack_20 != lVar4;
        lStack_20 = lVar4;
      } while (bVar9);
      return;
    }
  }
  return;
}

