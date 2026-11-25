// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140162730  size: 81 bytes
// Name:    FUN_140162730
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145a8a9a0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140162730(longlong param_1)

{
  undefined8 *puVar1;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_145a8a9a0(*(longlong *)(param_1 + 0x10),*(ulonglong *)(param_1 + 8) & 0xfffffffffffffff0);
    func_0x000145a77ad0((undefined8 *)(param_1 + 0x10));
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return;
}

