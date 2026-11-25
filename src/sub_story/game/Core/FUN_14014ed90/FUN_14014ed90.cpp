// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14014ed90  size: 74 bytes
// Name:    FUN_14014ed90
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14014ed90(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  *(undefined4 *)(param_1 + 0x2a) = 3;
  if ((ulonglong)*(uint *)((longlong)param_1 + 0x4c) != 0) {
    lVar1 = (ulonglong)*(uint *)((longlong)param_1 + 0x4c) << 4;
    puVar2 = param_1 + 10;
    do {
      func_0x000144d9c180(puVar2);
      puVar2 = puVar2 + 2;
      lVar1 = lVar1 + -0x10;
    } while (lVar1 != 0);
  }
  param_1[9] = 0x10;
  *param_1 = 0x10;
  return;
}

