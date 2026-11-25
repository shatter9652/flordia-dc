// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400fdd60  size: 94 bytes
// Name:    FUN_1400fdd60
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400fdd60(longlong param_1,uint param_2,uint param_3,int param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if ((0 < (int)(param_4 - param_3)) && (0 < (int)param_2)) {
    uVar2 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + uVar2 * 8);
      func_0x000145f40580(lVar1 + (ulonglong)param_3,
                          *(undefined1 *)(lVar1 + -1 + (ulonglong)param_3),
                          (ulonglong)(~param_3 + param_4) + 1);
      uVar2 = uVar2 + 1;
    } while (param_2 != uVar2);
  }
  return;
}

