// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400bd8b0  size: 70 bytes
// Name:    FUN_1400bd8b0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140092790, FUN_140092760
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400bd8b0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = FUN_140092790(param_1,0x3165b05d,0xff06455f);
  func_0x000140092750(&uStack_18,uVar1);
  func_0x0001413ce1c0(param_2,0);
  FUN_140092760(uStack_18,param_2);
  return;
}

