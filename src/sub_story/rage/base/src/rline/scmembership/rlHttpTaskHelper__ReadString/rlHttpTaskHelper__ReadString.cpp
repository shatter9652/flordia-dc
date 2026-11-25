// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 143dbc6c0  size: 427 bytes
// Name:    rlHttpTaskHelper::ReadString
// Subsystem: core
// Class:   rlHttpTaskHelper
//
// Evidence:
//   GTAVSRC: rlHttpTaskHelper::ReadString  (rage/base/src/rline/scmembership/rlscmembershiptasks.cpp)
//   literal: SubStartTime
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1457e4b60, FUN_141966cd0, FUN_1402675a0, FUN_145f054a0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"
#include "gta6decomp/rlHttpTaskHelper.h"


undefined8 rlHttpTaskHelper__ReadString(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 unaff_RBX;
  ulonglong uVar6;
  byte bVar7;
  undefined1 auVar8 [16];
  byte bStack_29;
  
  puVar1 = (undefined1 *)param_1[0x4ef];
  auVar8._0_12_ = ZEXT812(0);
  auVar8._12_4_ = 0;
  *puVar1 = 0;
  *(undefined1 (*) [16])(puVar1 + 8) = auVar8;
  bStack_29 = 0;
  cVar2 = FUN_1457e4b60(&bStack_29,param_3,&UNK_1467818ee,0);
  if (cVar2 == '\0') {
    (**(code **)(*param_1 + 0x38))(param_1);
    uVar4 = (**(code **)(*param_1 + 0x40))(param_1);
  }
  else {
    lVar3 = FUN_141966cd0(param_3,&UNK_146782966,0);
    uVar6 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),bStack_29);
    bVar7 = bStack_29 ^ 1;
    if (lVar3 == 0 && bVar7 == 0) {
      (**(code **)(*param_1 + 0x38))(param_1);
      uVar4 = (**(code **)(*param_1 + 0x40))(param_1);
    }
    else {
      if (lVar3 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_145f054a0(lVar3);
      }
      lVar3 = FUN_141966cd0(param_3,&UNK_146782992,0);
      if (lVar3 != 0 || bVar7 != 0) {
        if (lVar3 == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = FUN_145f054a0(lVar3);
        }
        func_0x000143dbc8d0(param_1[0x4ef],uVar6 & 0xffffffff,uVar4,uVar5);
        return 1;
      }
      (**(code **)(*param_1 + 0x38))(param_1);
      uVar4 = (**(code **)(*param_1 + 0x40))(param_1);
    }
  }
  FUN_1402675a0(uVar4,4);
  return 0;
}

