// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 141d87ef0  size: 2188 bytes
// Name:    CTimeCycle::LoadVisualSettings
// Subsystem: core
// Class:   CTimeCycle
//
// Evidence:
//   GTAVSRC: CTimeCycle::LoadVisualSettings  (game/timecycle/TimeCycle.cpp)
//   literal: raincollision
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145766970, FUN_141aa4450, FUN_14200ed00, FUN_145c11140, FUN_145d44d60, FUN_145c6ce20, FUN_145d44840, FUN_141eb7960, FUN_145d450c0, FUN_145b02ea0, FUN_145c560e0, FUN_145d44ed0, FUN_145c0c5f0, FUN_145d436c0, FUN_145d450f0, FUN_145d44c70, FUN_145d448f0, FUN_145d43ef0, FUN_145d44230, FUN_142607b90, FUN_141d18500, FUN_145d44880, FUN_1432b5c40, FUN_145d44cc0, FUN_145b66570, FUN_141dffee0, FUN_145d44e90, FUN_145d45130, FUN_145d44c30, FUN_140938790, FUN_14329ae80, FUN_145d45090, FUN_143298670
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"
#include "gta6decomp/CTimeCycle.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CTimeCycle__LoadVisualSettings(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined7 uVar8;
  longlong lVar7;
  undefined1 auStack_40 [8];
  undefined *puStack_38;
  undefined4 uStack_30;
  
  uVar1 = _DAT_14a94d9f8;
  uVar6 = _DAT_14a94d9f0;
  uVar3 = _DAT_14983c0e0;
  if (_DAT_14a02cf00 == 0) {
    uVar2 = func_0x000144f97130(0x1220);
    FUN_14329ae80(uVar2,uVar6);
    FUN_141dffee0(uVar3,uVar2);
    uVar3 = func_0x000144f97130(0xeb0);
    FUN_145d44cc0(uVar3);
    FUN_141dffee0(_DAT_14983c0e0,uVar3);
    uVar2 = func_0x000144f97130(0x790);
    FUN_145d450c0(uVar2,uVar6);
    FUN_141dffee0(_DAT_14983c0e0,uVar2);
    uVar3 = func_0x000144f97130(0x8fd0);
    FUN_141eb7960(uVar3,uVar6);
    _DAT_14856f160 = uVar3;
    FUN_141dffee0(_DAT_14983c0e0,uVar3);
    uVar3 = func_0x000144f97130(0x1d50);
    FUN_145d44ed0(uVar3,uVar6);
    _DAT_1487a01a0 = uVar3;
    FUN_141dffee0(_DAT_14983c0e0,uVar3);
    uVar3 = _DAT_14983c0e0;
    uVar4 = func_0x000144f97130(0x780);
    FUN_145d44c30(uVar4,uVar6,0);
    FUN_141dffee0(uVar3,uVar4);
    uVar3 = 0xec0;
    lVar5 = func_0x000144f97130(0xec0);
    if (lVar5 == 0) {
      uVar8 = (undefined7)((ulonglong)uVar3 >> 8);
      lVar7 = 0;
    }
    else {
      lVar7 = lVar5;
      FUN_145b02ea0(lVar5);
      uVar8 = (undefined7)((ulonglong)lVar7 >> 8);
      lVar7 = lVar5;
    }
    func_0x000145eb75d0(CONCAT71(uVar8,1),lVar7);
    FUN_141dffee0(_DAT_14983c0e0,lVar5);
    uVar3 = 0xec0;
    lVar5 = func_0x000144f97130(0xec0);
    if (lVar5 == 0) {
      uVar8 = (undefined7)((ulonglong)uVar3 >> 8);
      lVar7 = 0;
    }
    else {
      lVar7 = lVar5;
      FUN_145b02ea0(lVar5);
      uVar8 = (undefined7)((ulonglong)lVar7 >> 8);
      lVar7 = lVar5;
    }
    func_0x000145eb75d0(CONCAT71(uVar8,2),lVar7);
    FUN_141dffee0(_DAT_14983c0e0,lVar5);
    uVar3 = func_0x000144f97130(0x780);
    FUN_145d44d60(uVar3);
    FUN_141dffee0(_DAT_14983c0e0,uVar3);
    uVar3 = func_0x000144f97130(0xeb0);
    FUN_145d44840(uVar3,uVar6);
    _DAT_14855f4f0 = uVar3;
    FUN_141dffee0(_DAT_14983c0e0,uVar3);
    uVar3 = func_0x000144f97130(0xeb0);
    FUN_145d43ef0(uVar3,uVar6);
    _DAT_1485644b0 = uVar3;
    FUN_141dffee0(_DAT_14983c0e0,uVar3);
    uVar3 = _DAT_14983c0e0;
    uVar4 = func_0x000144f97130(0x780);
    FUN_145d45090(uVar4,uVar6);
    FUN_141dffee0(uVar3,uVar4);
    auStack_40[0] = 0;
    puStack_38 = &UNK_14677f489;
    uStack_30 = 0x29;
    uVar3 = func_0x000144f97130(0xf60);
    FUN_145d44230(uVar3,uVar6,auStack_40);
    _DAT_148012a50 = uVar3;
    FUN_141dffee0(_DAT_14983c0e0,uVar3);
    uVar3 = _DAT_148012a50;
    func_0x000145ed8030(_DAT_148012a50);
    FUN_145c6ce20(uVar3);
    FUN_145c11140(uVar6);
    lVar5 = func_0x000144f97130(0x73c0);
    FUN_145c0c5f0(lVar5,uVar6);
    _DAT_14a02cf00 = lVar5;
    FUN_141dffee0(_DAT_14983c0e0,lVar5);
    uVar3 = _DAT_14983c0e0;
    uVar4 = func_0x000144f97130(0xeb0);
    FUN_143298670(uVar4,uVar6);
    FUN_141dffee0(uVar3,uVar4);
    uVar3 = func_0x000144f97130(0xeb0);
    FUN_145d45130(uVar3,uVar6);
    _DAT_14855f4f8 = uVar3;
    FUN_141dffee0(_DAT_14983c0e0,uVar3);
    uVar3 = func_0x000144f97130(0x17c0);
    FUN_141aa4450(uVar3,uVar6,0);
    FUN_141dffee0(_DAT_14983c0e0,uVar3);
    uVar3 = func_0x000144f97130(0x17c0);
    FUN_141aa4450(uVar3,uVar6,1);
    FUN_141dffee0(_DAT_14983c0e0,uVar3);
    uVar3 = func_0x000144f97130(0x17c0);
    FUN_141aa4450(uVar3,uVar6,2);
    FUN_141dffee0(_DAT_14983c0e0,uVar3);
    uVar3 = func_0x000144f97130(0x17c0);
    FUN_141aa4450(uVar3,uVar6,3);
    FUN_141dffee0(_DAT_14983c0e0,uVar3);
    uVar3 = func_0x000144f97130(0x17c0);
    FUN_141aa4450(uVar3,uVar6,4);
    FUN_141dffee0(_DAT_14983c0e0,uVar3);
    uVar3 = func_0x000144f97130(0x17c0);
    FUN_141aa4450(uVar3,uVar6,5);
    FUN_141dffee0(_DAT_14983c0e0,uVar3);
    uVar3 = func_0x000144f97130(0x17c0);
    FUN_141aa4450(uVar3,uVar6,6);
    FUN_141dffee0(_DAT_14983c0e0,uVar3);
    uVar3 = func_0x000144f97130(0x17c0);
    FUN_141aa4450(uVar3,uVar6,7);
    FUN_141dffee0(_DAT_14983c0e0,uVar3);
    uVar3 = func_0x000144f97130(0x17c0);
    FUN_141aa4450(uVar3,uVar6,8);
    FUN_141dffee0(_DAT_14983c0e0,uVar3);
    uVar3 = func_0x000144f97130(0x17c0);
    FUN_141aa4450(uVar3,uVar6,9);
    FUN_141dffee0(_DAT_14983c0e0,uVar3);
    uVar3 = func_0x000144f97130(0x17c0);
    FUN_141aa4450(uVar3,uVar6,10);
    FUN_141dffee0(_DAT_14983c0e0,uVar3);
    uVar3 = func_0x000144f97130(0x17c0);
    FUN_141aa4450(uVar3,uVar6,0xb);
    FUN_141dffee0(_DAT_14983c0e0,uVar3);
    uVar3 = func_0x000144f97130(0x17c0);
    FUN_141aa4450(uVar3,uVar6,0xc);
    FUN_141dffee0(_DAT_14983c0e0,uVar3);
    uVar3 = func_0x000144f97130(0x17c0);
    FUN_141aa4450(uVar3,uVar6,0xd);
    FUN_141dffee0(_DAT_14983c0e0,uVar3);
    uVar3 = func_0x000144f97130(0x17c0);
    FUN_141aa4450(uVar3,uVar6,0xe);
    FUN_141dffee0(_DAT_14983c0e0,uVar3);
    uVar3 = func_0x000144f97130(0x17c0);
    FUN_141aa4450(uVar3,uVar6,0xf);
    FUN_141dffee0(_DAT_14983c0e0,uVar3);
    uVar3 = func_0x000144f97130(0x4a20);
    FUN_145766970(uVar3,uVar6);
    _DAT_148012a48 = uVar3;
    FUN_141dffee0(_DAT_14983c0e0,uVar3);
    uVar3 = func_0x000144f97130(0xee0);
    FUN_145d436c0(uVar3,uVar6);
    FUN_141dffee0(_DAT_14983c0e0,uVar3);
    uVar3 = func_0x000144f97130(0xec0);
    FUN_145d450f0(uVar3,uVar6);
    _DAT_148012a68 = uVar3;
    FUN_141dffee0(_DAT_14983c0e0,uVar3);
    uVar3 = _DAT_14983c0e0;
    uVar4 = func_0x000144f97130(0x780);
    FUN_145d44c30(uVar4,uVar6,1);
    FUN_141dffee0(uVar3,uVar4);
    uVar3 = _DAT_14983c0e0;
    uVar4 = func_0x000144f97130(0x37b0);
    FUN_14200ed00(uVar4,uVar6);
    FUN_141dffee0(uVar3,uVar4);
    uVar3 = _DAT_14983c0e0;
    uVar4 = func_0x000144f97130(0x7b0);
    FUN_145d448f0(uVar4,uVar6);
    FUN_141dffee0(uVar3,uVar4);
    uVar3 = func_0x000144f97130(0x9960);
    FUN_141d18500(uVar3,uVar6);
    _DAT_148012a58 = uVar3;
    FUN_141dffee0(_DAT_14983c0e0,uVar3);
    lVar5 = func_0x000144f97130(0xed0);
    FUN_145b66570(lVar5,uVar6);
    _DAT_14876a0d0 = lVar5;
    FUN_141dffee0(_DAT_14983c0e0,lVar5);
    lVar5 = _DAT_14a02cf00;
    *(longlong *)(_DAT_14876a0d0 + 0xec0) = _DAT_14a02cf00;
    uVar3 = func_0x000144f97130(0x2be0);
    FUN_1432b5c40(uVar3,uVar6,lVar5);
    FUN_141dffee0(_DAT_14983c0e0,uVar3);
    func_0x000145eb79d0(uVar2);
    func_0x000145eb79c0(uVar3);
    func_0x000145ed7ff0(uVar3,_DAT_14a02cf00);
    uVar3 = func_0x000144f97130(0xee0);
    FUN_145c560e0(uVar3,uVar6);
    _DAT_1485f9be8 = uVar3;
    FUN_141dffee0(_DAT_14983c0e0,uVar3);
    uVar3 = func_0x000144f97130(0x2b90);
    FUN_145d44880(uVar3,uVar6);
    FUN_141dffee0(_DAT_14983c0e0,uVar3);
    uVar3 = func_0x000144f97130(0x15f0);
    FUN_145d44c70(uVar3,uVar1);
    _DAT_148012a60 = uVar3;
    FUN_141dffee0(_DAT_14983c0e0,uVar3);
    uVar3 = _DAT_14983c0e0;
    uVar6 = func_0x000144f97130(0xeb0);
    FUN_145d44e90(uVar6,uVar1);
    FUN_141dffee0(uVar3,uVar6);
    FUN_142607b90();
    FUN_140938790(3,0);
  }
  return;
}

