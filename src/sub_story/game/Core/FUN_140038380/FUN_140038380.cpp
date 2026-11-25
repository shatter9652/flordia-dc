// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140038380  size: 174 bytes
// Name:    FUN_140038380
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145095de0, FUN_1444babe0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140038380(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6,longlong param_7)

{
  longlong *plVar1;
  longlong lVar2;
  longlong unaff_GS_OFFSET;
  
  lVar2 = *(longlong *)(param_1 + 0x10);
  plVar1 = (longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x11d8);
  *plVar1 = param_1;
  if (((*(byte *)(param_1 + 0x9e) & 1) != 0) && (_DAT_149e1d9f0 != 0)) {
    FUN_145095de0(param_6);
  }
  if (param_7 != 0) {
    lVar2 = param_7;
  }
  FUN_1444babe0(param_1 + 0x20,lVar2,param_2,param_3,param_4,param_5,param_6);
  *plVar1 = 0;
  return;
}

