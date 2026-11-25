// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14018ad80  size: 34 bytes
// Name:    FUN_14018ad80
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14018d460, FUN_1404a69d0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14018ad80(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 extraout_XMM0_Qb;
  undefined8 unaff_XMM6_Qa;
  undefined8 unaff_XMM6_Qb;
  undefined1 auVar5 [64];
  
  FUN_14018d460();
  FUN_1404a69d0(param_1);
  uVar1 = func_0x000140007d70(*(undefined8 *)(param_1 + 0x40));
  lVar2 = FUN_140897e40(uVar1);
  auVar5 = ZEXT1264(ZEXT812(0));
  if (lVar2 != 0) {
    lVar2 = func_0x00014506c3d0(*(undefined4 *)(lVar2 + 0x9c));
    if (lVar2 != 0) {
      uVar1 = FUN_14506cc20(*(undefined2 *)(lVar2 + 0xa2),0x3fe9c085,0,param_4,unaff_XMM6_Qa,
                            unaff_XMM6_Qb);
      auVar5 = ZEXT1664(CONCAT88(extraout_XMM0_Qb,uVar1));
    }
  }
  if ((ulonglong)*(uint *)(param_1 + 0x74) != 0) {
    lVar4 = param_1 + 0xd8;
    lVar2 = (ulonglong)*(uint *)(param_1 + 0x74) * 0x90;
    do {
      plVar3 = (longlong *)func_0x000144da31b0(lVar4 + -8);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x18))(plVar3,0x3fe9c085,auVar5._0_8_);
      }
      plVar3 = (longlong *)func_0x000144da31b0(lVar4 + -0x10);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x18))(plVar3,0x3fe9c085,auVar5._0_8_);
      }
      plVar3 = (longlong *)func_0x000144da31b0(lVar4);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x18))(plVar3,0x3fe9c085,auVar5._0_8_);
      }
      lVar4 = lVar4 + 0x90;
      lVar2 = lVar2 + -0x90;
    } while (lVar2 != 0);
  }
  return;
}

