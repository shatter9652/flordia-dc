// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140034d40  size: 102 bytes
// Name:    FUN_140034d40
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145220050, FUN_144e4a420
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140034d40(longlong *param_1,ulonglong param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  
  puVar1 = (undefined4 *)FUN_145220050(param_1,param_2 & 0xffffffff | 0x600000000);
  *puVar1 = param_3;
  uVar2 = *(uint *)((longlong)param_1 + 0x14);
  if (0x3fffffff < uVar2) {
    if ((uVar2 & 0x7ffe) != 0) {
      FUN_144e4a420(*param_1,(ulonglong)((uVar2 & 0x7fff) << 5) + *param_1);
      uVar2 = *(uint *)((longlong)param_1 + 0x14);
    }
    *(uint *)((longlong)param_1 + 0x14) = uVar2 & 0x3fffffff;
  }
  return;
}

