// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401929b0  size: 152 bytes
// Name:    FUN_1401929b0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1456db2e0, FUN_140840aa0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


byte FUN_1401929b0(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  bool bVar3;
  
  if (*(longlong *)(param_1 + 400) == 0) {
    lVar2 = FUN_140840aa0(0x14aa36808,0,0);
    *(longlong *)(param_1 + 400) = lVar2;
    if (((lVar2 != 0) && ((*(byte *)(*(longlong *)(param_1 + 0x40) + 0x120) & 1) != 0)) &&
       (*(longlong *)(param_1 + 0x1a0) == 0)) {
      uVar1 = FUN_1456db2e0(lVar2,0);
      *(undefined8 *)(param_1 + 0x1a0) = uVar1;
    }
  }
  if (*(longlong *)(param_1 + 0x198) == 0) {
    lVar2 = FUN_140840aa0(0x14aa36808,0,0);
    bVar3 = lVar2 != 0;
    *(longlong *)(param_1 + 0x198) = lVar2;
  }
  else {
    bVar3 = true;
  }
  return *(longlong *)(param_1 + 400) != 0 & bVar3;
}

