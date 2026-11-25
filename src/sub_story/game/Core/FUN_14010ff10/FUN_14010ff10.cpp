// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14010ff10  size: 457 bytes
// Name:    FUN_14010ff10
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1443b0af0, FUN_140004b40, FUN_1401107c0, FUN_1443b0ea0, FUN_1443b0660, FUN_145c1a980, FUN_142219590, FUN_140110770, FUN_144f13680, FUN_141e09fb0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14010ff10(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  bool bVar11;
  longlong lVar12;
  
  FUN_140004b40(0x149ab3cf8);
  bVar4 = *(byte *)(param_1 + 0xbc);
  if (((bVar4 & 2) != 0) && (*(char *)(param_1 + 0xa0) == '\0')) {
    func_0x000145f40580(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x10),0,
                        *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x20));
    *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x30) = 0;
    *(undefined4 *)(param_1 + 0xa8) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    FUN_141e09fb0(param_1,0);
    goto LAB_1401100b7;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_1443b0660(param_1);
    goto LAB_1401100b7;
  }
  if (*(char *)(param_1 + 0xa0) == '\x01') {
    cVar3 = FUN_142219590(*(undefined8 *)((longlong)*(char *)(param_1 + 0xb9) * 8 + 0x149ab7de0));
    if (cVar3 == '\0') goto LAB_1401100b7;
    func_0x0001443a62a0(param_1);
    cVar3 = func_0x000144ee8690(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x10));
    if (cVar3 != '\0') {
      bVar4 = *(byte *)(param_1 + 0xbc);
      goto LAB_14010ff9f;
    }
  }
  else {
LAB_14010ff9f:
    lVar12 = *(longlong *)(param_1 + 8);
    lVar6 = *(longlong *)(lVar12 + 0x10);
    if ((-1 < (char)bVar4) && (cVar3 = func_0x000144ee8690(lVar6), cVar3 == '\0')) {
      FUN_1443b0af0(param_1,lVar6,*(undefined4 *)(lVar12 + 0x68));
      goto LAB_1401100b7;
    }
    *(longlong *)(lVar12 + 0x30) = lVar6;
    if (lVar6 != 0) {
      FUN_1401107c0(lVar12 + 0x30);
      lVar12 = *(longlong *)(param_1 + 8);
      puVar10 = *(undefined4 **)(lVar12 + 0x30);
      if (puVar10 != (undefined4 *)0x0) {
        uVar9 = *puVar10;
        cVar3 = func_0x000144ee8680(uVar9);
        if (cVar3 != '\0') {
          bVar4 = *(byte *)(param_1 + 0xbc);
          if ((bVar4 & 8) != 0) {
            cVar3 = FUN_144f13680(uVar9,puVar10[1]);
            if (cVar3 == '\0') {
              *(byte *)(param_1 + 0xbc) = bVar4 & 0xf7;
              puVar10 = *(undefined4 **)(lVar12 + 0x30);
              uVar9 = *puVar10;
            }
            else {
              if (*(uint *)(lVar12 + 0x68) < *(uint *)(lVar12 + 0x50)) goto LAB_1401100cd;
              *(uint *)(lVar12 + 0x68) = *(uint *)(lVar12 + 0x50);
            }
          }
          iVar5 = FUN_140110770(uVar9,puVar10[3]);
          *(int *)(lVar12 + 0x58) = iVar5;
          *(int *)(lVar12 + 0x68) = *(int *)(lVar12 + 0x68) - iVar5;
          FUN_141e09fb0(param_1,0);
          lVar12 = *(longlong *)(param_1 + 8);
          *(undefined4 *)(lVar12 + 0x5c) = *(undefined4 *)(lVar12 + 0x58);
          *(undefined4 *)(lVar12 + 0x28) = 0;
          FUN_1443b0ea0(param_1);
          goto LAB_1401100b7;
        }
      }
    }
  }
LAB_1401100cd:
  FUN_145c1a980(param_1,0);
LAB_1401100b7:
  iRam0000000149ab3d08 = iRam0000000149ab3d08 + -1;
  uVar8 = uRam0000000149ab3cf8;
  if (iRam0000000149ab3d08 == 0) {
    do {
      uVar7 = uVar8;
      LOCK();
      uVar8 = uVar7;
      uVar1 = (ulonglong)((int)uVar7 - 1) | 0xffffffff00000000;
      if (uVar7 != uRam0000000149ab3cf8) {
        uVar8 = uRam0000000149ab3cf8;
        uVar1 = uRam0000000149ab3cf8;
      }
      uRam0000000149ab3cf8 = uVar1;
      UNLOCK();
    } while (uVar7 != uVar8);
    if ((uVar7 & 0xfffffffe) != 0) {
      iRam0000000149ab3d08 = 0;
      lVar12 = lRam0000000149ab3d00;
      do {
        while (lVar12 < 0) {
          cVar3 = FUN_1400062d0(0x149ab3d00,1,&stack0xffffffffffffffe0);
          if (cVar3 != '\0') {
            return;
          }
        }
        LOCK();
        lVar6 = lVar12;
        lVar2 = lVar12 + 0x100000000;
        if (lVar12 != lRam0000000149ab3d00) {
          lVar6 = lRam0000000149ab3d00;
          lVar2 = lRam0000000149ab3d00;
        }
        lRam0000000149ab3d00 = lVar2;
        UNLOCK();
        bVar11 = lVar12 != lVar6;
        lVar12 = lVar6;
      } while (bVar11);
      return;
    }
  }
  return;
}

