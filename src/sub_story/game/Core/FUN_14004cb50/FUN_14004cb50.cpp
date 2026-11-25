// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14004cb50  size: 70 bytes
// Name:    FUN_14004cb50
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14004cbf0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14004cb50(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  *(undefined8 *)(param_3 + 8) = param_2;
  FUN_14004cbf0(param_3);
  if ((ulonglong)*(uint *)(param_1 + 0xc) != 0) {
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    puVar1 = puVar2 + (ulonglong)*(uint *)(param_1 + 0xc) * 2;
    do {
      (*(code *)puVar2[1])(*puVar2,param_3);
      puVar2 = puVar2 + 2;
    } while (puVar2 != puVar1);
  }
  return;
}

