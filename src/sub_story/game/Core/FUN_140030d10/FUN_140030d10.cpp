// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140030d10  size: 72 bytes
// Name:    FUN_140030d10
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1404b8950
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140030d10(longlong param_1,int param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  int iStack_c;
  
  if (param_2 != -0x7bae06b1) {
    lVar1 = func_0x000144e6ea40(*(undefined4 *)(param_1 + 0x9c));
    if (lVar1 != 0) {
      uVar2 = func_0x000144e6e9f0(lVar1);
      iStack_c = param_2;
      FUN_1404b8950(uVar2,0x6d7d619c,&iStack_c,0xf);
    }
  }
  return;
}

