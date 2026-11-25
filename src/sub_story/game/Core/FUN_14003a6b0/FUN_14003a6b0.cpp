// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14003a6b0  size: 58 bytes
// Name:    FUN_14003a6b0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14003a6b0(undefined8 param_1,longlong param_2,uint param_3)

{
  ulonglong uVar1;
  undefined4 uVar2;
  
  if (param_3 != 0) {
    uVar1 = 0;
    do {
      uVar2 = func_0x00014003a6f0(param_1,uVar1 & 0xffffffff);
      *(undefined4 *)(param_2 + uVar1 * 4) = uVar2;
      uVar1 = uVar1 + 1;
    } while (param_3 != uVar1);
  }
  return;
}

