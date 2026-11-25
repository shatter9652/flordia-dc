// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140142e90  size: 81 bytes
// Name:    FUN_140142e90
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401432d0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140142e90(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  func_0x000140142ef0();
  if ((*(char *)(param_1 + 0xd5) == '\x01') && (0 < *(int *)(param_1 + 0x44c))) {
    lVar2 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x450) + lVar2 * 8);
      FUN_1401432d0(*(undefined4 *)(lVar1 + 0x24),*(undefined8 *)(lVar1 + 0x28));
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(param_1 + 0x44c));
  }
  return;
}

