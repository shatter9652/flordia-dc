// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400fdd00  size: 81 bytes
// Name:    FUN_1400fdd00
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400fdd00(longlong param_1,int param_2,longlong param_3,int param_4,int param_5,
                  undefined4 param_6)

{
  uint uVar1;
  longlong lVar2;
  
  if (0 < param_5) {
    uVar1 = param_5 + 1;
    lVar2 = 0;
    do {
      func_0x000145f40560(*(undefined8 *)(param_3 + (longlong)param_4 * 8 + lVar2),
                          *(undefined8 *)(param_1 + (longlong)param_2 * 8 + lVar2),param_6);
      uVar1 = uVar1 - 1;
      lVar2 = lVar2 + 8;
    } while (1 < uVar1);
  }
  return;
}

