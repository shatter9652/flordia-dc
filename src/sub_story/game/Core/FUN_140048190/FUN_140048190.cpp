// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140048190  size: 51 bytes
// Name:    FUN_140048190
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_140048190(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0xb0))();
  uVar3 = 0;
  if (*(longlong *)(param_1 + 8) != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
  }
  uVar2 = 0;
  if (cVar1 != '\0') {
    uVar2 = uVar3;
  }
  return uVar2;
}

