// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140058310  size: 171 bytes
// Name:    FUN_140058310
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1407b9250, FUN_142983f50, FUN_142983d10
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_140058310(undefined8 *param_1,int param_2,undefined8 param_3,undefined4 param_4,
             undefined1 param_5,undefined4 param_6)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  cVar1 = (**(code **)(_DAT_146b16378 + 0x218))(_DAT_14a92da40);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    lVar2 = FUN_1407b9250(0x14a9246f0,param_2);
    if (lVar2 != 0) {
      if (*(int *)(lVar2 + 4) != 0) {
        param_2 = *(int *)(lVar2 + 4);
      }
    }
    FUN_142983d10(&uStack_5c,param_2);
    uStack_58 = *param_1;
    uStack_50 = param_1[1];
    uStack_48 = param_1[2];
    uVar3 = FUN_142983f50(&uStack_58,uStack_5c,param_3,param_4,param_5,param_6);
  }
  return uVar3;
}

