// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400f9e50  size: 117 bytes
// Name:    FUN_1400f9e50
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140004b40, FUN_1458073f0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400f9e50(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  uint *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  longlong lStack_20;
  
  FUN_140004b40(0x1478a9870);
  puVar7 = (uint *)func_0x0001400f9ed0();
  uVar10 = puVar7[1];
  if (uVar10 == *puVar7) {
    uVar11 = 1;
    if (1 < uVar10) {
      uVar11 = uVar10 >> 1;
    }
    FUN_1458073f0(puVar7,uVar11 + uVar10);
    uVar10 = puVar7[1];
  }
  puVar7[1] = uVar10 + 1;
  uVar2 = param_1[1];
  puVar1 = (undefined8 *)(*(longlong *)(puVar7 + 2) + (ulonglong)uVar10 * 0x10);
  *puVar1 = *param_1;
  puVar1[1] = uVar2;
  iRam00000001478a9880 = iRam00000001478a9880 + -1;
  uVar9 = uRam00000001478a9870;
  if (iRam00000001478a9880 == 0) {
    do {
      uVar8 = uVar9;
      LOCK();
      uVar9 = uVar8;
      uVar3 = (ulonglong)((int)uVar8 - 1) | 0xffffffff00000000;
      if (uVar8 != uRam00000001478a9870) {
        uVar9 = uRam00000001478a9870;
        uVar3 = uRam00000001478a9870;
      }
      uRam00000001478a9870 = uVar3;
      UNLOCK();
    } while (uVar8 != uVar9);
    if ((uVar8 & 0xfffffffe) != 0) {
      lStack_20 = lRam00000001478a9878;
      iRam00000001478a9880 = 0;
      do {
        while (lStack_20 < 0) {
          cVar5 = FUN_1400062d0(0x1478a9878,1,&lStack_20);
          if (cVar5 != '\0') {
            return;
          }
        }
        LOCK();
        lVar6 = lStack_20;
        lVar4 = lStack_20 + 0x100000000;
        if (lStack_20 != lRam00000001478a9878) {
          lVar6 = lRam00000001478a9878;
          lVar4 = lRam00000001478a9878;
        }
        lRam00000001478a9878 = lVar4;
        UNLOCK();
        bVar12 = lStack_20 != lVar6;
        lStack_20 = lVar6;
      } while (bVar12);
      return;
    }
  }
  return;
}

