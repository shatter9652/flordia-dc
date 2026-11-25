// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14006f490  size: 99 bytes
// Name:    FUN_14006f490
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f65e60
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14006f490(longlong param_1)

{
  ulonglong uVar1;
  
  if ((ulonglong)*(ushort *)(param_1 + 0x30) != 0) {
    uVar1 = (ulonglong)*(ushort *)(param_1 + 0x30) + 1;
    do {
      FUN_144f65e60(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + -0x10 + uVar1 * 8));
      uVar1 = uVar1 - 1;
    } while (1 < uVar1);
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    func_0x000144d9c130(*(longlong *)(param_1 + 0x28));
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  return;
}

