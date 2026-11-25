// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140151bb0  size: 135 bytes
// Name:    FUN_140151bb0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1451f2e80, FUN_142625d10, FUN_142616990, FUN_1451f3530, FUN_145567f70
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140151bb0(longlong *param_1,ulonglong param_2)

{
  uint *puVar1;
  byte bVar2;
  longlong *plVar3;
  undefined1 auVar4 [16];
  char cVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  
  if (((param_2 & 1) != 0) && (param_1[5] != 0)) {
    FUN_1451f2e80(param_1);
    FUN_145567f70(param_1[5],(char)param_1[6]);
    FUN_142616990(param_1);
    (**(code **)(*(longlong *)param_1[5] + 0x28))((longlong *)param_1[5],param_1);
    param_1[5] = 0;
    if ((*(byte *)((longlong)param_1 + 0x34) & 0x40) != 0) {
      FUN_142625d10(param_1);
    }
    cVar5 = func_0x000144f404e0(param_1);
    if ((cVar5 != '\0') && (param_1[7] != 0)) {
      (**(code **)(*param_1 + 0x2a8))(param_1);
      FUN_1451f3530(param_1);
    }
  }
  bVar2 = *(byte *)(param_1 + 6);
  if ((0x1016U >> (bVar2 & 0x1f) & 1) != 0) {
    bVar6 = bVar2 & 0x1f;
    plVar3 = *(longlong **)((ulonglong)(uint)bVar2 * 8 + 0x14abbe7c0);
    auVar4._8_8_ = 0;
    auVar4._0_8_ = (longlong)param_1 - *plVar3;
    auVar4 = auVar4 / ZEXT416(*(uint *)(plVar3 + 1));
    uVar7 = auVar4._0_4_ & 0x1ffff;
    bVar2 = auVar4[0];
    if (bVar6 < 0xc) {
      if (bVar6 == 4) {
        uVar8 = -2 << (bVar2 & 0x1f) | 0xfffffffeU >> 0x20 - (bVar2 & 0x1f);
        LOCK();
        puVar1 = (uint *)(lRam0000000149f16090 + (ulonglong)(uVar7 >> 5) * 4);
        *puVar1 = *puVar1 & uVar8;
        UNLOCK();
        if (*(char *)(param_1[4] + 0x84) < '\0') {
          LOCK();
          puVar1 = (uint *)(lRam0000000149f160a0 + (ulonglong)(uVar7 >> 5) * 4);
          *puVar1 = *puVar1 & uVar8;
          UNLOCK();
          return;
        }
      }
      else if (bVar6 == 1) {
        uVar8 = -2 << (bVar2 & 0x1f) | 0xfffffffeU >> 0x20 - (bVar2 & 0x1f);
        LOCK();
        puVar1 = (uint *)(lRam0000000149f16050 + (ulonglong)(uVar7 >> 5) * 4);
        *puVar1 = *puVar1 & uVar8;
        UNLOCK();
        if (*(char *)(param_1[4] + 0x84) < '\0') {
          LOCK();
          puVar1 = (uint *)(lRam0000000149f16060 + (ulonglong)(uVar7 >> 5) * 4);
          *puVar1 = *puVar1 & uVar8;
          UNLOCK();
          return;
        }
      }
      else if (bVar6 == 2) {
        uVar8 = -2 << (bVar2 & 0x1f) | 0xfffffffeU >> 0x20 - (bVar2 & 0x1f);
        LOCK();
        puVar1 = (uint *)(lRam0000000149f16070 + (ulonglong)(uVar7 >> 5) * 4);
        *puVar1 = *puVar1 & uVar8;
        UNLOCK();
        if (*(char *)(param_1[4] + 0x84) < '\0') {
          LOCK();
          puVar1 = (uint *)(lRam0000000149f16080 + (ulonglong)(uVar7 >> 5) * 4);
          *puVar1 = *puVar1 & uVar8;
          UNLOCK();
          return;
        }
      }
    }
    else if (bVar6 == 0xc) {
      LOCK();
      puVar1 = (uint *)(lRam0000000149f160b0 + (ulonglong)(uVar7 >> 5) * 4);
      *puVar1 = *puVar1 & (-2 << (bVar2 & 0x1f) | 0xfffffffeU >> 0x20 - (bVar2 & 0x1f));
      UNLOCK();
      return;
    }
  }
  return;
}

