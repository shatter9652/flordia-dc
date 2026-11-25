// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401781d0  size: 43 bytes
// Name:    FUN_1401781d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1401781d0(void)

{
  longlong lVar1;
  
  lVar1 = func_0x000144d9f7c0();
  if ((lVar1 != 0) && (*(longlong **)(lVar1 + 0x6e70) != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001401781f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(lVar1 + 0x6e70) + 0x20))();
    return;
  }
  return;
}

