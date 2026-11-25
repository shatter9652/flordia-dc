// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400095a0  size: 58 bytes
// Name:    FUN_1400095a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1453f67c0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_1400095a0(undefined4 param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)FUN_1453f67c0();
  lVar2 = (**(code **)(*plVar1 + 0xa8))(plVar1,param_1);
  plVar1 = (longlong *)&DAT_14a958670;
  if (lVar2 != 0) {
    plVar1 = (longlong *)(lVar2 + 8);
  }
  return *(undefined8 *)(*plVar1 + 0x28);
}

