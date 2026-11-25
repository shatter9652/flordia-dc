// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400fcdf0  size: 43 bytes
// Name:    FUN_1400fcdf0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1419ad510
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


bool FUN_1400fcdf0(longlong param_1,undefined4 param_2)

{
  ulonglong uVar1;
  bool bVar2;
  
  uVar1 = FUN_1419ad510(param_2);
  if ((int)(uint)uVar1 < 0) {
    bVar2 = false;
  }
  else {
    bVar2 = (*(uint *)(param_1 + (uVar1 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar1 & 0x1f) & 1) != 0;
  }
  return bVar2;
}

