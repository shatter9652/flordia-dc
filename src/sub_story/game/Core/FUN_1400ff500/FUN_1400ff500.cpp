// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400ff500  size: 38 bytes
// Name:    FUN_1400ff500
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400ff7a0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined4 FUN_1400ff500(longlong param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  
  cVar1 = FUN_1400ff7a0();
  if (cVar1 == '\0') {
    if (((*(byte *)(param_1 + 0x981) & 2) == 0) &&
       ((*(longlong *)(param_1 + 0xa28) == 0 ||
        ((*(byte *)(*(longlong *)(param_1 + 0xa28) + 0x94) & 1) == 0)))) {
      uVar2 = *(uint *)(param_1 + 0x8c) & 0x800;
      uVar3 = CONCAT31((int3)(uVar2 >> 8),uVar2 != 0 || (*(uint *)(param_1 + 0xdc) & 0x20) != 0);
    }
    else {
      uVar3 = 0;
    }
    return uVar3;
  }
  return 0;
}

