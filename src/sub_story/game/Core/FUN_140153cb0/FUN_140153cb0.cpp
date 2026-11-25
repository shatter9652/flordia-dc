// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140153cb0  size: 58 bytes
// Name:    FUN_140153cb0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140153cb0(longlong *param_1)

{
  undefined8 *puVar1;
  
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    (**(code **)(*param_1 + 0x20))(param_1);
  }
  puVar1 = (undefined8 *)param_1[3];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    param_1[3] = 0;
  }
  return;
}

