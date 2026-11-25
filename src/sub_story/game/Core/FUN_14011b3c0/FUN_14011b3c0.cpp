// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14011b3c0  size: 207 bytes
// Name:    FUN_14011b3c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e2ac90
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14011b3c0(undefined8 param_1,longlong *param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined2 param_7,uint param_8)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined2 uStack_14;
  
  uVar2 = (*(longlong *)(param_3 + 0x28) + 0x651e95c4d06fbfb1U ^ (ulonglong)param_8) *
          -0x622015f714c7d297;
  uVar2 = (uVar2 >> 0x2f ^ param_8 ^ uVar2) * -0x622015f714c7d297;
  lVar1 = (uVar2 >> 0x2f ^ uVar2) * -0x622015f714c7d297;
  if ((longlong *)*param_2 == (longlong *)0x0) {
    lVar3 = 0;
  }
  else {
    lVar3 = *(longlong *)*param_2;
  }
  if (lVar1 - lVar3 != 0) {
    uStack_28 = param_5;
    uStack_20 = 0x800000004;
    uStack_18 = param_6;
    uStack_14 = param_7;
    lStack_38 = param_3;
    uStack_30 = param_4;
    FUN_144e2ac90(param_1,lVar1,0x80000000c,&UNK_1455cfd10,FUN_14517d560,&lStack_38,param_2);
  }
  return;
}

