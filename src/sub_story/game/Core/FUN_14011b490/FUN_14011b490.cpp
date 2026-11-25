// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14011b490  size: 238 bytes
// Name:    FUN_14011b490
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e2ac90
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14011b490(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,uint param_6,undefined8 param_7,undefined4 param_8)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_44;
  undefined4 uStack_3c;
  
  lVar1 = func_0x000144e7d6c0(param_7,param_8);
  uVar3 = (lVar1 + 0x651e95c4d06fbfb1U ^ (ulonglong)param_6) * -0x622015f714c7d297;
  uVar3 = (uVar3 >> 0x2f ^ param_6 ^ uVar3) * -0x622015f714c7d297;
  lVar1 = (uVar3 >> 0x2f ^ uVar3) * -0x622015f714c7d297;
  if ((longlong *)*param_2 == (longlong *)0x0) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(longlong *)*param_2;
  }
  if (lVar1 - lVar2 != 0) {
    uStack_60 = param_7;
    uStack_48 = param_8;
    uStack_44 = 0x800000004;
    uStack_3c = param_5;
    uStack_58 = param_3;
    uStack_50 = param_4;
    FUN_144e2ac90(param_1,lVar1,0x80000000d,&UNK_1455cfd20,FUN_14532b140,&uStack_60,param_2);
  }
  return;
}

