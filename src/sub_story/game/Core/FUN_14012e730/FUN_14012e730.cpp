// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14012e730  size: 51 bytes
// Name:    FUN_14012e730
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1451e71e0, FUN_14012e7f0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Removing unreachable block (ram,0x00014012e79c) */
/* WARNING: Removing unreachable block (ram,0x00014012e7d3) */
/* WARNING: Removing unreachable block (ram,0x00014012e7dd) */
/* WARNING: Removing unreachable block (ram,0x00014012e7e8) */

void FUN_14012e730(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1451e71e0();
  if (iVar1 == -1) {
    func_0x00014032a4b0(param_1);
  }
  FUN_14012e7f0(param_1);
  *(undefined8 *)(param_1 + 0x14) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  *(undefined1 *)(param_1 + 0x40) = 0;
  return;
}

