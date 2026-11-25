// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 143dd9720  size: 539 bytes
// Name:    CInteriorProxy::GetPool
// Subsystem: core
// Class:   CInteriorProxy
//
// Evidence:
//   GTAVSRC: CInteriorProxy::GetPool  (game/audio/environment/occlusion/occlusionmanager.cpp)
//   literal: InteriorName
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1404e33d0, FUN_1404e3460, FUN_1404e3510
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"
#include "gta6decomp/CInteriorProxy.h"


ulonglong CInteriorProxy__GetPool(longlong param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 unaff_RSI;
  ulonglong uVar6;
  undefined1 auStack_98 [32];
  undefined4 uStack_78;
  undefined1 auStack_70 [12];
  undefined4 uStack_64;
  undefined1 auStack_60 [12];
  undefined1 auStack_50 [16];
  undefined4 uStack_40;
  uint uStack_38;
  
  uVar6 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (*(int *)(param_1 + 0x70) == 0) goto LAB_143dd9928;
  if (*(int *)(param_1 + 0x4c) == 0) {
LAB_143dd9798:
    if (*(int *)(param_1 + 0x50) != 0) {
      if (*(int *)(param_3 + 0x18) != 0) {
        iVar2 = func_0x000144fc2180(0);
        if ((longlong)*(int *)(param_3 + 0x18) != 0) {
          lVar5 = 0;
          do {
            if (*(int *)(param_3 + lVar5) == iVar2) goto LAB_143dd97eb;
            lVar5 = lVar5 + 4;
          } while ((longlong)*(int *)(param_3 + 0x18) * 4 != lVar5);
        }
      }
      cVar1 = func_0x0001404e39d0(param_2,&UNK_146782ac7,*(undefined4 *)(param_1 + 0x50));
      if (cVar1 == '\0') goto LAB_143dd9926;
    }
LAB_143dd97eb:
    if (*(int *)(param_3 + 0x18) != 0) {
      iVar2 = func_0x000144fc2180(0);
      if ((longlong)*(int *)(param_3 + 0x18) != 0) {
        lVar5 = 0;
        do {
          if (*(int *)(param_3 + lVar5) == iVar2) goto LAB_143dd98a1;
          lVar5 = lVar5 + 4;
        } while ((longlong)*(int *)(param_3 + 0x18) * 4 != lVar5);
      }
    }
    cVar1 = FUN_1404e33d0(param_2,&UNK_14677b9c8,0);
    if (cVar1 != '\0') {
      cVar1 = FUN_1404e3510(param_2,&UNK_146778eee,*(undefined4 *)(param_1 + 0x60));
      if (cVar1 != '\0') {
        cVar1 = FUN_1404e3510(param_2,&UNK_1467789e4,*(undefined4 *)(param_1 + 100));
        if (cVar1 != '\0') {
          cVar1 = FUN_1404e3510(param_2,&UNK_1467783f3,*(undefined4 *)(param_1 + 0x68));
          if (cVar1 != '\0') {
            cVar1 = FUN_1404e3460(param_2);
            if (cVar1 != '\0') {
LAB_143dd98a1:
              uStack_38 = 0;
              auStack_98 = ZEXT1232(ZEXT812(0));
              auStack_50 = ZEXT416(0) << 0x20;
              auStack_70 = auStack_50._0_12_;
              uStack_64 = 0;
              auStack_60 = ZEXT412(0);
              uStack_40 = 0;
              func_0x000141c12e50(auStack_98,param_1 + 0x20,0x20);
              uStack_78 = *(undefined4 *)(param_1 + 0x40);
              uVar4 = (ulonglong)uStack_38;
              *(longlong *)(auStack_60 + uVar4 * 0x18) = param_1 + 0x74;
              *(undefined4 *)(auStack_60 + uVar4 * 0x18 + 8) = *(undefined4 *)(param_1 + 0x70);
              uVar3 = func_0x000141d774b0(*(undefined4 *)(param_1 + 0x44));
              *(undefined8 *)(auStack_70 + uVar4 * 0x18 + 8) = uVar3;
              cVar1 = func_0x000143dd8fe0(auStack_98,param_2,param_3);
              if (cVar1 != '\0') goto LAB_143dd9928;
            }
          }
        }
      }
    }
  }
  else {
    if (*(int *)(param_3 + 0x18) != 0) {
      iVar2 = func_0x000144fc2180(0);
      if ((longlong)*(int *)(param_3 + 0x18) != 0) {
        lVar5 = 0;
        do {
          if (*(int *)(param_3 + lVar5) == iVar2) goto LAB_143dd9798;
          lVar5 = lVar5 + 4;
        } while ((longlong)*(int *)(param_3 + 0x18) * 4 != lVar5);
      }
    }
    cVar1 = func_0x0001404e39d0(param_2,&UNK_14677a6bf,*(undefined4 *)(param_1 + 0x4c));
    if (cVar1 != '\0') goto LAB_143dd9798;
  }
LAB_143dd9926:
  uVar6 = 0;
LAB_143dd9928:
  return uVar6 & 0xffffffff;
}

