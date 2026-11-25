// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 143dc6270  size: 965 bytes
// Name:    rlHttpTaskHelper::ReadBool
// Subsystem: core
// Class:   rlHttpTaskHelper
//
// Evidence:
//   GTAVSRC: rlHttpTaskHelper::ReadBool  (rage/base/src/rline/ros/rlroscredtasks.cpp)
//   literal: IsSubAccount
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_141966cd0, FUN_1402675a0, FUN_1457d1ec0, FUN_143dc7330, FUN_143dc7610, FUN_1412da520, FUN_141966d80, FUN_1457e4b60, FUN_145c637f0, FUN_145db2440, FUN_143dc7a00, FUN_141966c90, FUN_143dc7750, FUN_145db24e0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"
#include "gta6decomp/rlHttpTaskHelper.h"


ulonglong rlHttpTaskHelper__ReadBool(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lStack_48;
  longlong lStack_40;
  longlong lStack_38;
  longlong lStack_30;
  longlong lStack_28;
  longlong lStack_20;
  
  do {
    lVar3 = param_1;
    param_1 = FUN_141966d80(*(undefined8 *)(lVar3 + 0x48),&UNK_14677a599);
  } while (param_1 != 0);
  FUN_145c637f0(param_2);
  lStack_20 = FUN_141966cd0(lVar3,&UNK_14677aa4a,0);
  if (lStack_20 == 0) {
LAB_143dc6390:
    FUN_1402675a0(0x146c31d10,4);
  }
  else {
    func_0x000144dac8f0(param_2 + 0x4f3d,&lStack_20,0x200);
    cVar1 = FUN_141966c90(param_2 + 0x678,lVar3,&UNK_14677f189,0);
    if (cVar1 == '\0') goto LAB_143dc6390;
    FUN_141966c90(param_2 + 0x4dc,lVar3,&UNK_14677f4d9,0);
    cVar1 = FUN_141966c90(param_2,lVar3,&UNK_146784ca2,0);
    if (cVar1 == '\0') goto LAB_143dc6390;
    lStack_48 = FUN_141966cd0(lVar3,0,&UNK_14677c4f8);
    if ((lStack_48 != 0) || (lStack_48 = FUN_141966cd0(lVar3,&UNK_14677c4f8,0), lStack_48 != 0)) {
      func_0x000144dac8f0(param_2 + 0x1c8,&lStack_48,0x99);
    }
    FUN_143dc7330(lVar3,param_2 + 0x268);
    FUN_143dc7610(lVar3,param_2 + 0x4c8);
    FUN_143dc7750(lVar3,param_2 + 0x680,param_2 + 0x67c);
    FUN_145db2440(lVar3,param_2 + 0x2e84,param_2 + 0x2e80);
    FUN_141966c90(param_2 + 0x1b4,lVar3,&UNK_14677c00a,0);
    cVar1 = FUN_143dc7a00(lVar3,param_2 + 0x4e0);
    if (cVar1 != '\0') {
      FUN_145db24e0(param_2 + 0x4e88,lVar3,&UNK_146784d1b,0);
      lStack_28 = FUN_141966cd0(lVar3,&UNK_146778771,0);
      uVar5 = CONCAT71(0x14677a5,lStack_28 != 0);
      if (lStack_28 == 0) {
        uVar7 = 0;
        uVar6 = 0x797b5e0e;
        FUN_1402675a0(0x146c31d10,4);
        FUN_1457d1ec0(0x146c31d10,1,0x5a,0x4c6d64a1,uVar6,uVar7);
      }
      else {
        func_0x000144dac8f0(param_2 + 0x4e90,&lStack_28,0x2d);
        lStack_30 = FUN_141966cd0(lVar3,&UNK_14677aa38,0);
        if (lStack_30 != 0) {
          func_0x000144dac8f0(param_2 + 0x4ebd,&lStack_30,0x80);
        }
        lStack_38 = FUN_141966cd0(lVar3,&UNK_1467787a0,0);
        if (lStack_38 != 0) {
          func_0x000144dac8f0(param_2 + 4,&lStack_38,0x1ad);
        }
        lStack_40 = FUN_141966cd0(lVar3,&UNK_14677e7b9,0);
        if (lStack_40 != 0) {
          func_0x000144dac8f0(param_2 + 0x4cc,&lStack_40,0x10);
        }
        lVar4 = FUN_141966cd0(lVar3,&UNK_146782956,0);
        if ((lVar4 != 0) &&
           (iVar2 = FUN_1412da520(lVar4,&UNK_146779706,param_2 + 0x1c0), iVar2 != 1)) {
          FUN_1457d1ec0(0x146c31d10,1,0x72,0x95ebfd66);
        }
        FUN_1457e4b60(param_2 + 0x1b8,lVar3,&UNK_146779f46,0);
      }
      goto LAB_143dc6397;
    }
    FUN_1457d1ec0(0x146c31d10,1,0x55,0x92cdd363);
  }
  uVar5 = 0;
LAB_143dc6397:
  return uVar5 & 0xffffffff;
}

