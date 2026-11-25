// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14002b6f0  size: 54 bytes
// Name:    FUN_14002b6f0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14002b6f0(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  byte bVar2;
  
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0xb0))();
  *(undefined1 *)(param_1 + 0x38) = uVar1;
  bVar2 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0xb0))
                    (*(longlong **)(param_1 + 0x20),param_2);
  *(byte *)(param_1 + 0x38) = *(byte *)(param_1 + 0x38) | bVar2;
  return;
}

