// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14006d100  size: 97 bytes
// Name:    FUN_14006d100
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144dc1e60, FUN_145270d90
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_14006d100(undefined4 param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  
  lVar4 = func_0x000144dc1e80();
  if (lVar4 == 0) {
    lVar4 = FUN_144dc1e60(param_1);
    cVar1 = func_0x00014006d170(*(undefined4 *)(lVar4 + 4));
    if (cVar1 != '\0') {
      return 1;
    }
  }
  else {
    uVar2 = func_0x00014006d180(*(undefined4 *)(lVar4 + 0xc4),*(undefined8 *)(lVar4 + 200));
    if (1 < uVar2) {
      return 1;
    }
  }
  lVar4 = func_0x000144eb3780(param_1);
  if ((lVar4 != 0) && (iVar3 = FUN_145270d90(lVar4,0), 0 < iVar3)) {
    return 1;
  }
  return 0;
}

