// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14015baa0  size: 134 bytes
// Name:    FUN_14015baa0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14015baa0(longlong param_1)

{
  longlong lVar1;
  
  *(undefined4 *)(param_1 + 0x74) = 0;
  lVar1 = *(longlong *)(param_1 + 0x78);
  if ((param_1 + 0x80 != lVar1) && (lVar1 != 0)) {
    func_0x000144d9c130(lVar1);
  }
  *(undefined4 *)(param_1 + 0x70) = 4;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (lVar1 != 0 && param_1 + 0x20 != lVar1) {
    func_0x000144d9c130(lVar1);
  }
  *(undefined4 *)(param_1 + 0x10) = 10;
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}

