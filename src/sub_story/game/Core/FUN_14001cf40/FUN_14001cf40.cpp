// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14001cf40  size: 347 bytes
// Name:    FUN_14001cf40
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e08210, FUN_144e07920, FUN_144df2390, FUN_144e065a0, FUN_144e079f0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14001cf40(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                       undefined8 param_5,undefined8 param_6,undefined8 *param_7,longlong param_8,
                       longlong param_9,longlong param_10,undefined1 param_11)

{
  undefined8 unaff_RBP;
  ulonglong uVar1;
  undefined1 auStack_98 [16];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  float afStack_48 [4];
  
  if (((*(longlong *)(param_1 + 0xc0) == 0) && (*(longlong *)(param_1 + 200) == 0)) &&
     (*(longlong *)(param_1 + 0xd0) == 0)) {
    uVar1 = 0;
  }
  else {
    FUN_144e07920(&uStack_88);
    FUN_144e079f0(param_1,param_2,&uStack_88,
                  CONCAT71((int7)((ulonglong)unaff_RBP >> 8),param_11) & 0xffffffff);
    FUN_144e08210(afStack_48,&uStack_88,param_1,0,1);
    uVar1 = CONCAT71((int7)((ulonglong)param_1 >> 8),_DAT_146159ec4 < afStack_48[0]);
    if (_DAT_146159ec4 < afStack_48[0]) {
      uStack_58 = uStack_78;
      uStack_50 = uStack_70;
      func_0x00014001d0a0(param_3,param_4);
      func_0x000144e07990(param_3,param_4);
      uStack_68 = uStack_88;
      uStack_60 = uStack_80;
      FUN_144df2390(*param_7,*(undefined4 *)(param_7 + 1));
      if (param_8 != 0) {
        FUN_144e065a0(auStack_98,param_5,param_8);
      }
      if (param_9 != 0) {
        FUN_144e065a0(auStack_98,param_6,param_9);
      }
      if (param_10 != 0) {
        FUN_144e065a0(auStack_98,param_7,param_10);
      }
    }
  }
  return uVar1 & 0xffffffff;
}

