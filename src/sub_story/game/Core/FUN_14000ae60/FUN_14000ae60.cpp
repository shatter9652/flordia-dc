// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14000ae60  size: 102 bytes
// Name:    FUN_14000ae60
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144dc4f10
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14000ae60(longlong param_1,longlong param_2,undefined8 param_3)

{
  byte bVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)func_0x00014000bd90();
  *puVar2 = *(undefined4 *)(param_2 + 0x9c);
  *(undefined1 *)((longlong)puVar2 + 0x82) = 1;
  bVar1 = FUN_144dc4f10(param_1,param_3,puVar2,0);
  *(uint *)(param_1 + 0x74) =
       (uint)((float)puVar2[0x19] < 0.0 & bVar1) << 5 | *(uint *)(param_1 + 0x74) & 0xffffffdf;
  return;
}

