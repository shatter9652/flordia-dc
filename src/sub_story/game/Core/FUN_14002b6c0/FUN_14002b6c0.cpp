// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14002b6c0  size: 44 bytes
// Name:    FUN_14002b6c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14002b6f0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14002b6c0(longlong param_1,undefined8 param_2)

{
  byte bVar1;
  
  FUN_14002b6f0();
  bVar1 = (**(code **)(**(longlong **)(param_1 + 0x40) + 0x30))
                    (*(longlong **)(param_1 + 0x40),param_2,param_1 + 0x48);
  *(byte *)(param_1 + 0x38) = *(byte *)(param_1 + 0x38) | bVar1;
  return;
}

