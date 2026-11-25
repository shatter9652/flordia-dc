// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140026e50  size: 44 bytes
// Name:    FUN_140026e50
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140026760
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140026e50(longlong param_1,undefined8 param_2)

{
  byte bVar1;
  
  FUN_140026760();
  bVar1 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x30))
                    (*(longlong **)(param_1 + 0x28),param_2,param_1 + 0x30);
  *(byte *)(param_1 + 0x20) = *(byte *)(param_1 + 0x20) | bVar1;
  return;
}

