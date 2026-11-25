// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14578efe0  size: 520 bytes
// Name:    ConfigLightSettings::Set
// Subsystem: core
// Class:   ConfigLightSettings
//
// Evidence:
//   GTAVSRC: ConfigLightSettings::Set  (game/timecycle/TimeCycleConfig.cpp)
//   literal: useDynamicShadows
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1415f0d20, FUN_14501aca0, FUN_1401bd1f0, FUN_141a66930, FUN_145784920, FUN_1403c9020
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"
#include "gta6decomp/ConfigLightSettings.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ConfigLightSettings__Set(undefined4 *param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 ***pppuVar3;
  float fVar4;
  undefined1 auVar5 [64];
  undefined8 **ppuStack_48;
  char cStack_39;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  if (param_2 == 0) {
    FUN_1401bd1f0(&ppuStack_48,0,0);
    lVar2 = 0;
  }
  else {
    uVar1 = func_0x000145f407f0(param_2);
    FUN_1401bd1f0(&ppuStack_48,param_2,uVar1);
    lVar2 = param_2;
  }
  uVar1 = FUN_1415f0d20(lVar2,&UNK_14677850b);
  uVar1 = FUN_14501aca0(uVar1,0);
  *param_1 = uVar1;
  uVar1 = FUN_1415f0d20(param_2,&UNK_14677b0f5);
  uVar1 = FUN_14501aca0(uVar1,0);
  param_1[1] = uVar1;
  uVar1 = FUN_1415f0d20(param_2,&UNK_14677e38f);
  uVar1 = FUN_14501aca0(uVar1,_DAT_14615a6b4);
  param_1[2] = uVar1;
  uVar1 = FUN_1415f0d20(param_2,&UNK_146782e9c);
  uVar1 = FUN_14501aca0(uVar1,0);
  param_1[3] = uVar1;
  uVar1 = FUN_1415f0d20(param_2,&UNK_146782e8d);
  uVar1 = FUN_14501aca0(uVar1,0);
  param_1[4] = uVar1;
  uVar1 = FUN_1415f0d20(param_2,&UNK_146786f73);
  auVar5 = ZEXT464(_DAT_145fc6ed8);
  uVar1 = FUN_14501aca0(uVar1,_DAT_145fc6ed8);
  param_1[5] = uVar1;
  uVar1 = FUN_1415f0d20(param_2,&UNK_146781811);
  uVar1 = FUN_14501aca0(uVar1,auVar5._0_8_);
  param_1[6] = uVar1;
  uVar1 = FUN_1415f0d20(param_2,&UNK_14677d01f);
  uVar1 = FUN_14501aca0(uVar1,0);
  param_1[7] = uVar1;
  uVar1 = FUN_1415f0d20(param_2,&UNK_146780ad5);
  uVar1 = FUN_14501aca0(uVar1,0);
  param_1[8] = uVar1;
  FUN_141a66930(&ppuStack_48,&UNK_14677d43e,6);
  pppuVar3 = (undefined8 ***)&UNK_14678d1bb;
  if ((undefined8 ***)ppuStack_48 != (undefined8 ***)0x0) {
    pppuVar3 = (undefined8 ***)ppuStack_48;
  }
  if (cStack_39 < '\0') {
    pppuVar3 = &ppuStack_48;
  }
  FUN_145784920(&uStack_38,pppuVar3);
  *(undefined8 *)(param_1 + 0xc) = uStack_38;
  *(undefined8 *)(param_1 + 0xe) = uStack_30;
  param_1[0x10] = 0;
  uVar1 = FUN_1415f0d20(param_2,&UNK_14677b090);
  fVar4 = (float)FUN_14501aca0(uVar1,0);
  if (_DAT_145fc6edc < fVar4) {
    param_1[0x10] = param_1[0x10] | 0x140;
  }
  FUN_1403c9020(&ppuStack_48);
  return;
}

