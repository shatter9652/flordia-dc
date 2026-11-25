// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14017f380  size: 45 bytes
// Name:    FUN_14017f380
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14017f3b0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14017f380(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  
  uVar1 = FUN_14017f3b0(*(undefined1 *)(*(longlong *)(param_1 + 0x90) + 0x413),param_2,
                        *(undefined8 *)(param_1 + 0xa8));
  *(undefined1 *)(param_1 + 900) = uVar1;
  return;
}

