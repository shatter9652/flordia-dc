// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140108f90  size: 100 bytes
// Name:    FUN_140108f90
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140108f90(undefined8 *param_1)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  
  *param_1 = &UNK_1466d16f8;
  if ((ulonglong)*(ushort *)(param_1 + 2) != 0) {
    uVar2 = (ulonglong)*(ushort *)(param_1 + 2) + 1;
    do {
      puVar1 = *(undefined8 **)(param_1[1] + -0x10 + uVar2 * 8);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      uVar2 = uVar2 - 1;
    } while (1 < uVar2);
  }
  if (param_1[1] != 0) {
    func_0x000144d9c130();
  }
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  return;
}

