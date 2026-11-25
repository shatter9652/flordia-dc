// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14015ba40  size: 77 bytes
// Name:    FUN_14015ba40
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14015ba40(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if ((ulonglong)*(uint *)(param_1 + 0x9c) != 0) {
    puVar1 = *(undefined8 **)(param_1 + 0xa0);
    puVar2 = puVar1 + (ulonglong)*(uint *)(param_1 + 0x9c) * 2;
    do {
      (*(code *)puVar1[1])(*puVar1,param_2);
      puVar1 = puVar1 + 2;
    } while (puVar1 != puVar2);
  }
  func_0x00014015ba90(param_2);
  *(undefined8 *)(param_2 + 8) = 0;
  return;
}

