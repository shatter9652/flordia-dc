// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140029610  size: 48 bytes
// Name:    FUN_140029610
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140029610(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x58))();
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0xb0))
                    (*(longlong **)(param_1 + 0x20),param_2);
  *(undefined1 *)(param_1 + 0x28) = uVar1;
  return;
}

