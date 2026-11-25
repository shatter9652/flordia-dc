// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 141dff060  size: 659 bytes
// Name:    strStreamingEngine::GetLoader
// Subsystem: streaming
// Class:   strStreamingEngine
//
// Evidence:
//   GTAVSRC: strStreamingEngine::GetLoader  (game/audio/radiostation.cpp)
//   literal: RADIO_STATIONS_%02u
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_141984310, FUN_1401bd1f0, FUN_145534890, FUN_14242ecb0, FUN_144e7e0f0, FUN_1403c9020, FUN_14242ea80, FUN_144fc21d0, FUN_14133a950, FUN_145b23f90
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"
#include "gta6decomp/strStreamingEngine.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void strStreamingEngine__GetLoader(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auVar12 [16];
  undefined1 auStack_e8 [32];
  undefined1 auStack_c8 [32];
  undefined1 auStack_a8 [32];
  undefined1 auStack_88 [32];
  undefined1 auStack_68 [16];
  undefined8 uStack_58;
  undefined5 uStack_50;
  undefined3 uStack_4b;
  undefined5 uStack_48;
  undefined4 uStack_43;
  undefined1 uStack_3f;
  undefined8 uStack_3c;
  undefined8 uStack_30;
  
  lVar9 = _DAT_14abcd238;
  FUN_1401bd1f0(auStack_68,0,0);
  auVar12._0_12_ = ZEXT812(0);
  auVar12._12_4_ = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_4b = 0;
  uStack_43 = 1;
  uStack_3f = 1;
  uStack_3c = 0;
  uStack_30 = 0;
  auStack_e8 = ZEXT1632(auVar12);
  auStack_a8 = ZEXT1632(auVar12);
  uStack_58 = 0xffffffff00000284;
  iVar6 = *(int *)(lVar9 + 4) + 1;
  lVar10 = -0xc0;
  do {
    iVar6 = iVar6 + -1;
    if (iVar6 == 0) {
      lVar11 = lVar9 + 0x60;
      goto LAB_141dff109;
    }
    lVar11 = lVar10 + 0xc0;
    piVar1 = (int *)(*(longlong *)(lVar9 + 8) + 0x150 + lVar10);
    lVar10 = lVar11;
  } while (*piVar1 != 0x284);
  lVar11 = *(longlong *)(lVar9 + 8) + lVar11;
LAB_141dff109:
  auStack_c8 = auStack_e8;
  auStack_88 = auStack_a8;
  FUN_1403c9020(auStack_68);
  if (*(int *)(lVar11 + 0x94) != -1) {
    FUN_145b23f90(lVar11,param_1 + 8);
  }
  uVar5 = _UNK_14615bbd8;
  uVar4 = _UNK_14615bbd0;
  uVar8 = _UNK_14615bbc8;
  *(undefined8 *)(param_1 + 0x8dc) = _DAT_14615bbc0;
  *(undefined8 *)(param_1 + 0x8e4) = uVar8;
  *(undefined8 *)(param_1 + 0x8ec) = uVar4;
  *(undefined8 *)(param_1 + 0x8f4) = uVar5;
  *(undefined8 *)(param_1 + 0x960) = 0;
  FUN_145534890(auStack_e8,&UNK_14677972c,1);
  func_0x0001410d6400();
  iVar6 = 2;
  uVar8 = func_0x000144ddb100(2);
  uVar7 = FUN_144fc21d0(auStack_e8,0);
  lVar9 = FUN_144e7e0f0(uVar8,uVar7,0xe);
  if (lVar9 != 0) {
    FUN_141984310(param_1,lVar9);
  }
  while( true ) {
    FUN_145534890(auStack_e8,&UNK_14677972c,iVar6);
    func_0x0001410d6400();
    uVar8 = func_0x000144ddb100(2);
    uVar7 = FUN_144fc21d0(auStack_e8,0);
    lVar9 = FUN_144e7e0f0(uVar8,uVar7,0xe);
    if (lVar9 != 0) {
      FUN_14242ea80(param_1,lVar9);
    }
    if (iVar6 == 0x10) break;
    iVar6 = iVar6 + 1;
  }
  uVar8 = func_0x000144ddb100(2);
  uVar8 = FUN_144e7e0f0(uVar8,0xe782a79e,0x16);
  *(undefined8 *)(param_1 + 0x950) = uVar8;
  _DAT_14ab7ef38 = (_DAT_14ab7ef38 & 0xffffffff) * 0x5cdcfaa7 + (_DAT_14ab7ef38 >> 0x20);
  uVar3 = _DAT_14ab7ef38 >> 0x10;
  *(short *)(param_1 + 0x8d8) = (short)_DAT_14ab7ef38;
  *(ushort *)(param_1 + 0x8da) = (ushort)uVar3 & 0x7fff;
  qsort(param_1 + 0x40,(longlong)*(int *)(param_1 + 0x840),8,FUN_1410460c0);
  FUN_14133a950(param_1);
  iVar6 = *(int *)(param_1 + 0x840);
  if ((longlong)iVar6 != 0) {
    lVar9 = 0;
    do {
      lVar10 = *(longlong *)(param_1 + 0x40 + lVar9);
      FUN_14242ecb0(lVar10);
      uVar2 = *(uint *)(*(longlong *)(lVar10 + 0x360) + 1);
      if ((uVar2 & 0x30) != 0x10 && (uVar2 & 0xc) != 4) {
        *(int *)(param_1 + 0x964) = *(int *)(param_1 + 0x964) + 1;
      }
      lVar9 = lVar9 + 8;
    } while ((longlong)iVar6 * 8 != lVar9);
  }
  *(undefined1 *)(param_1 + 0x979) = 0;
  return;
}

