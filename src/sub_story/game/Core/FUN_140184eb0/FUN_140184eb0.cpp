// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140184eb0  size: 174 bytes
// Name:    FUN_140184eb0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401856d0, FUN_140184f60, FUN_140185570
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_140184eb0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined4 param_5,undefined8 param_6)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_140184f60(param_1,param_2,param_5,param_6);
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    lVar2 = (**(code **)(*_DAT_14abcc310 + 0x70))(_DAT_14abcc310,param_1,0xa0);
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_140185570(lVar2,*(undefined8 *)(param_1 + 0x78),lVar1,param_3,param_4,param_5,param_6);
    }
    uVar3 = FUN_1401856d0(param_1,lVar2,param_5);
  }
  return uVar3;
}

