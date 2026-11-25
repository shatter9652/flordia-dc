// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140114120  size: 147 bytes
// Name:    FUN_140114120
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140113d60, FUN_140447980
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


byte FUN_140114120(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auVar7 [64];
  ulonglong in_stack_ffffffffffffff78;
  undefined4 uStack_6c;
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  undefined8 uStack_40;
  
  uStack_40 = 0x140114140;
  lVar4 = func_0x0001450af530(*(undefined8 *)(param_1 + 0x6920),*(undefined8 *)(param_1 + 0x6930));
  if (lVar4 == 0) {
    return 0;
  }
  uStack_40 = 0x14011415e;
  cVar1 = FUN_140113d60(lVar4,*(ulonglong *)(param_1 + 8) & 0xfffffffffffffff0,param_2,0x162);
  if (cVar1 == '\0') {
    return 0;
  }
  uVar2 = *(undefined4 *)((*(ulonglong *)(param_1 + 8) & 0xfffffffffffffff0) + 0x9c);
  uStack_40 = 0x140114177;
  lVar4 = func_0x000144ef6110(uVar2);
  if (lVar4 == 0) {
    return 0;
  }
  uStack_40 = 0x140114186;
  lVar5 = func_0x000144fe0500(uVar2);
  if (lVar5 != 0) {
    uStack_40 = 0x140114193;
    cVar1 = FUN_140447980(lVar5);
    if (cVar1 != '\0') {
      return 0;
    }
  }
  lVar5 = FUN_144f81f90(*(undefined4 *)(lVar4 + 0x128));
  if ((lVar5 != 0) && (lVar6 = func_0x000144fc0590(*(undefined4 *)(param_2 + 0x9c)), lVar6 != 0)) {
    FUN_1400f1800(*(undefined4 *)(lVar4 + 0x128),&uStack_6c);
    auStack_58._0_12_ = ZEXT812(0);
    auStack_58._12_4_ = 0;
    auVar7 = ZEXT1664(auStack_58);
    cVar1 = FUN_140bf3f80(lVar6,uStack_6c,0x14a9d6070,0x14a9d6070,
                          in_stack_ffffffffffffff78 & 0xffffffffffffff00,auStack_58);
    if (cVar1 != '\0') {
      auStack_68 = auVar7._0_16_;
      uVar2 = FUN_140113ea0(lVar4);
      iVar3 = FUN_1401141c0(lVar6,uStack_6c,uVar2,0,auStack_68);
      if (iVar3 != 2) {
        return 1;
      }
      lVar4 = FUN_1416f6a70(lVar5,param_2);
      if (lVar4 != 0) {
        return (*(byte *)(lVar4 + 0x3e) & 4) >> 2;
      }
    }
  }
  return 0;
}

