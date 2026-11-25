// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400268e0  size: 83 bytes
// Name:    FUN_1400268e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


byte FUN_1400268e0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  
  bVar1 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0xb0))();
  bVar2 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x78))
                    (*(longlong **)(param_1 + 0x38),param_2);
  bVar3 = (**(code **)(**(longlong **)(param_1 + 0x40) + 0x30))
                    (*(longlong **)(param_1 + 0x40),param_2,param_3);
  return bVar3 | bVar2 | bVar1;
}

