// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400cd9b0  size: 228 bytes
// Name:    FUN_1400cd9b0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400e2e90, FUN_1456a5640, FUN_1400e6e50
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400cd9b0(longlong param_1,undefined8 param_2,longlong param_3,int param_4,char param_5)

{
  undefined8 uVar1;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  if (*(char *)(param_1 + 0x60) != '\x02') {
    return;
  }
  if (((*(byte *)(param_1 + 0xa8) & 1) == 0) && (*(float *)(param_1 + 0x278) <= 0.0)) {
    return;
  }
  uStack_18 = 0;
  uStack_20 = param_2;
  if (param_4 == 1) {
    FUN_1400e2e90(param_1,param_3);
    uVar1 = 0;
  }
  else {
    if (param_4 != 2) {
      return;
    }
    if (param_5 == '\0') {
      FUN_1400e6e50(param_1,param_3,&uStack_20,1,0);
      FUN_1400e2e90(param_1,param_3);
      return;
    }
    if (0.0 < *(float *)(param_3 + 0xec)) {
      FUN_1456a5640(param_1);
    }
    FUN_1400e2e90(param_1);
    uVar1 = 1;
  }
  FUN_1400e6e50(param_1,param_3,&uStack_20,uVar1,1);
  return;
}

