// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401362f0  size: 883 bytes
// Name:    FUN_1401362f0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140137030, FUN_140136670, FUN_140136e90, FUN_140137240
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1401362f0(ulonglong *param_1,ulonglong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  bool bVar10;
  undefined1 auStack_128 [232];
  
  lVar6 = param_3 - 0xe0;
  lVar3 = (((longlong)(param_3 - param_2) >> 5) * 0x6db6db6db6db6db7 >> 1) * 0xe0;
  uVar5 = param_2 + lVar3;
  uVar4 = param_2;
  if (0x2300 < (longlong)(lVar6 - param_2)) {
    uVar7 = (lVar6 - param_2 >> 5) * 0x6db6db6db6db6db7 + 1 >> 3;
    uVar4 = param_2 + uVar7 * 0xe0;
    FUN_140137240(param_2,uVar4,uVar7 * 0x1c0 + param_2);
    FUN_140137240(uVar5 + uVar7 * -0xe0,uVar5,uVar7 * 0xe0 + uVar5);
    lVar8 = uVar7 * -0xe0 + lVar6;
    FUN_140137240(uVar7 * -0x1c0 + lVar6,lVar8,lVar6);
    lVar6 = lVar8;
  }
  FUN_140137240(uVar4,uVar5,lVar6);
  do {
    uVar4 = uVar5;
    if (uVar4 <= param_2) break;
    uVar5 = uVar4 - 0xe0;
  } while (*(int *)(uVar4 + 4) == *(int *)(uVar4 - 0xdc));
  uVar5 = lVar3 + param_2 + 0xe0;
  do {
    uVar7 = uVar5;
    if (param_3 <= uVar7) break;
    uVar5 = uVar7 + 0xe0;
  } while (*(int *)(uVar4 + 4) == *(int *)(uVar7 + 4));
  uVar5 = uVar4;
  uVar9 = uVar7;
  do {
    while (uVar2 = uVar5, param_3 <= uVar7) {
joined_r0x000140136439:
      while (uVar1 = uVar4, param_2 < uVar1) {
        uVar4 = uVar1 - 0xe0;
        if (*(uint *)(uVar2 + 4) <= *(uint *)(uVar1 - 0xdc)) {
          if (*(uint *)(uVar2 + 4) < *(uint *)(uVar1 - 0xdc)) break;
          uVar5 = uVar2 - 0xe0;
          bVar10 = uVar1 != uVar2;
          uVar2 = uVar5;
          if (bVar10) {
            FUN_140137030(auStack_128,uVar5);
            FUN_140136670(uVar5,uVar4);
            FUN_140136670(uVar4,auStack_128);
            FUN_140136e90(auStack_128);
          }
        }
      }
      if ((uVar7 == param_3) && (uVar1 == param_2)) {
        *param_1 = uVar2;
        param_1[1] = uVar9;
        return;
      }
      if (uVar1 == param_2) {
        if (uVar9 != uVar7) {
          FUN_140137030(auStack_128,uVar2);
          FUN_140136670(uVar2,uVar9);
          FUN_140136670(uVar9,auStack_128);
          FUN_140136e90(auStack_128);
        }
        uVar9 = uVar9 + 0xe0;
        FUN_140137030(auStack_128,uVar2);
        FUN_140136670(uVar2,uVar7);
        FUN_140136670(uVar7,auStack_128);
        FUN_140136e90(auStack_128);
        uVar5 = uVar2 + 0xe0;
        uVar7 = uVar7 + 0xe0;
        uVar4 = param_2;
      }
      else {
        uVar4 = uVar1 - 0xe0;
        if (uVar7 == param_3) {
          uVar5 = uVar2 - 0xe0;
          if (uVar1 != uVar2) {
            FUN_140137030(auStack_128,uVar4);
            FUN_140136670(uVar4,uVar5);
            FUN_140136670(uVar5,auStack_128);
            FUN_140136e90(auStack_128);
          }
          uVar9 = uVar9 - 0xe0;
          FUN_140137030(auStack_128,uVar5);
          FUN_140136670(uVar5,uVar9);
          FUN_140136670(uVar9,auStack_128);
          FUN_140136e90(auStack_128);
        }
        else {
          FUN_140137030(auStack_128,uVar7);
          FUN_140136670(uVar7,uVar4);
          FUN_140136670(uVar4,auStack_128);
          FUN_140136e90(auStack_128);
          uVar7 = uVar7 + 0xe0;
          uVar5 = uVar2;
        }
      }
    }
    if (*(uint *)(uVar7 + 4) <= *(uint *)(uVar5 + 4)) {
      if (*(uint *)(uVar7 + 4) < *(uint *)(uVar5 + 4)) goto joined_r0x000140136439;
      if (uVar7 != uVar9) {
        FUN_140137030(auStack_128,uVar9);
        FUN_140136670(uVar9,uVar7);
        FUN_140136670(uVar7,auStack_128);
        FUN_140136e90(auStack_128);
      }
      uVar9 = uVar9 + 0xe0;
    }
    uVar7 = uVar7 + 0xe0;
  } while( true );
}

