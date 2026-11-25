// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140178180  size: 61 bytes
// Name:    FUN_140178180
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14547cd30
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140178180(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = func_0x0001401781c0(*(undefined4 *)(param_1 + 0x248));
  if (cVar1 != '\0') {
    FUN_14547cd30(*(undefined8 *)(param_1 + 0x10));
    *(byte *)(param_1 + 0x248) = *(byte *)(param_1 + 0x248) & 0xfb;
  }
  lVar2 = func_0x000144d9f7c0(*(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x9c));
  if ((lVar2 != 0) && (*(longlong **)(lVar2 + 0x6e70) != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001401781f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(lVar2 + 0x6e70) + 0x20))();
    return;
  }
  return;
}

