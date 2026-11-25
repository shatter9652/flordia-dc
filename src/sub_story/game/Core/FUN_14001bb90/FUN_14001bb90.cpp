// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14001bb90  size: 49 bytes
// Name:    FUN_14001bb90
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


byte FUN_14001bb90(longlong param_1)

{
  longlong *plVar1;
  byte bVar2;
  byte bVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x38);
  bVar2 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0xb8))(*(longlong **)(param_1 + 0x30));
  bVar3 = (**(code **)(*plVar1 + 0x88))(plVar1);
  return bVar3 | bVar2;
}

