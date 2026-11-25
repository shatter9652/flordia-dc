// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400bd7c0  size: 154 bytes
// Name:    FUN_1400bd7c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400bd870, FUN_14521e460
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined4
FUN_1400bd7c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5)

{
  undefined4 uVar1;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  
  uVar1 = func_0x0001400bd860(param_2);
  if ((char)uVar1 != '\0') {
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_40 = 0xffffffffffffffff;
    uStack_7c = param_5;
    uStack_78 = 1;
    uStack_48 = 0x40000000;
    uStack_70 = 0;
    uStack_88 = param_2;
    uStack_80 = param_4;
    FUN_14521e460(param_1,&uStack_88,param_3);
    FUN_1400bd870(param_1,param_2);
  }
  return uVar1;
}

