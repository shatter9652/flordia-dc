// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400266e0  size: 48 bytes
// Name:    FUN_1400266e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400266e0(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x78))();
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0xb0))
                    (*(longlong **)(param_1 + 0x18),param_2);
  *(undefined1 *)(param_1 + 0x2c) = uVar1;
  return;
}

