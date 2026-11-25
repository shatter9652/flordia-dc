// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140173330  size: 39 bytes
// Name:    FUN_140173330
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140173330(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = func_0x0001401735a0(param_2,param_3);
  func_0x000140173500(param_1,0);
  func_0x000140173510(param_1,0);
  FUN_140173520(param_1,4);
  FUN_140173570(param_1,0);
  func_0x000140d5ce30(param_1,0x5bdfa752);
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  return;
}

