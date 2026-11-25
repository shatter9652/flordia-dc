// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400bde40  size: 65 bytes
// Name:    FUN_1400bde40
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f4e810
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400bde40(longlong param_1)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  if (*(int *)(param_1 + 0x1414) != 0) {
    uVar2 = 0;
    do {
      uVar1 = func_0x000144ef6cc0(*(undefined2 *)(param_1 + 0x1418 + uVar2 * 2));
      FUN_144f4e810(param_1,uVar1);
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 0x1414));
  }
  return;
}

