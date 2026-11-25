// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401640e0  size: 104 bytes
// Name:    FUN_1401640e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1401640e0(undefined8 *param_1)

{
  undefined8 *puVar1;
  ushort uVar2;
  ulonglong uVar3;
  
  *param_1 = &UNK_1465fcb70;
  uVar2 = *(ushort *)(param_1 + 3);
  if (uVar2 != 0) {
    uVar3 = 0;
    do {
      puVar1 = *(undefined8 **)(param_1[2] + uVar3 * 8);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
        uVar2 = *(ushort *)(param_1 + 3);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  if (param_1[2] != 0) {
    func_0x000144d9c130();
  }
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  return;
}

