// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140192fc0  size: 73 bytes
// Name:    FUN_140192fc0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1404a72c0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140192fc0(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  longlong lVar1;
  
  lVar1 = func_0x000144da31b0(param_4);
  if (lVar1 == 0) {
    *(undefined4 *)(param_5 + 0x300) = param_2;
    FUN_1404a72c0(param_1,param_3,param_4,param_5,1);
  }
  return;
}

