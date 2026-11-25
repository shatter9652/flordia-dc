// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400586d0  size: 137 bytes
// Name:    FUN_1400586d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140058930, FUN_140058760
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400586d0(longlong param_1,undefined4 param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined4 auStack_78 [4];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  if (*(char *)(param_1 + 0x42b) == '\x01') {
    lVar1 = *(longlong *)(param_1 + 0xa60);
    if (lVar1 == 0) {
      lVar1 = func_0x000144f97130(0x20);
      func_0x000140058900(lVar1);
      FUN_140058930(lVar1);
      *(longlong *)(param_1 + 0xa60) = lVar1;
    }
    uStack_68 = *param_3;
    uStack_60 = param_3[1];
    uStack_58 = param_3[2];
    uStack_50 = param_3[3];
    uStack_48 = param_3[4];
    uStack_40 = param_3[5];
    uStack_38 = param_3[6];
    uStack_30 = param_3[7];
    auStack_78[0] = param_2;
    FUN_140058760(lVar1,auStack_78);
  }
  return;
}

