// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140083f50  size: 454 bytes
// Name:    FUN_140083f50
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140084d70, FUN_140084120, FUN_140084520, FUN_140e34630, FUN_14534ea50, FUN_140084170, FUN_140d82250, FUN_144ef3e20, FUN_140084350
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


ulonglong FUN_140083f50(longlong param_1,undefined1 *param_2)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [64];
  undefined4 uStack_114;
  undefined8 uStack_110;
  undefined1 auStack_108 [16];
  undefined1 auStack_f8 [16];
  undefined1 auStack_e8 [16];
  undefined1 auStack_d8 [16];
  undefined1 auStack_c8 [136];
  
  uVar4 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffff0;
  if (uVar4 == 0) {
    uVar4 = 0;
  }
  else {
    lVar3 = FUN_144ef3e20(param_2);
    if (lVar3 == 0) {
      bVar2 = 0;
    }
    else {
      uStack_110 = FUN_140e34630(param_1,lVar3);
      FUN_140084350(uVar4,lVar3,&uStack_110);
      uVar6 = uStack_110;
      auStack_d8._0_12_ = ZEXT812(0);
      auStack_d8._12_4_ = 0;
      auVar8 = ZEXT1664(auStack_d8);
      FUN_140084d70(auStack_d8,uVar4,lVar3,uStack_110,0);
      param_2 = auStack_c8;
      FUN_140084520(uVar4,auStack_d8,uVar6,param_2,lVar3);
      lVar1 = param_1 + 0x18;
      uVar6 = FUN_140084120(lVar1,lVar3);
      uVar7 = FUN_14534ea50(lVar1,lVar3,2);
      uVar5 = func_0x000140d82230(*(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 0x88),
                                  uVar7);
      auStack_108 = auVar8._0_16_;
      auStack_f8 = auStack_108;
      auStack_e8 = auStack_108;
      FUN_140084170(lVar1,lVar3,auStack_e8,auStack_f8,auStack_108,&uStack_114);
      bVar2 = FUN_140d82250(param_2,auStack_d8,uVar6,uVar7,uVar5,auStack_e8,auStack_f8,auStack_108,
                            uStack_114);
      bVar2 = bVar2 ^ 1;
    }
    uVar4 = CONCAT71((int7)((ulonglong)param_2 >> 8),lVar3 != 0 & bVar2);
  }
  return uVar4 & 0xffffffff;
}

