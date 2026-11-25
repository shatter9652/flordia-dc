// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140007210  size: 88 bytes
// Name:    FUN_140007210
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140007210(longlong param_1,char param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  *(undefined1 *)(param_1 + 0xc) = 0;
  lVar1 = *(longlong *)(param_1 + 0x121f0);
  uVar2 = func_0x0001455ac2f0(param_1 + 0x121b0);
  *(undefined8 *)(lVar1 + 8) = uVar2;
  *(undefined8 *)(param_1 + 0x121f0) = 0;
  *(undefined8 *)(param_1 + 0x12200) = 0;
  *(undefined4 *)(param_1 + 0x12208) = 0;
  if (param_2 == '\0') {
    *(undefined8 *)(param_1 + 0x121f8) = 0;
  }
  return;
}

