// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14006a970  size: 69 bytes
// Name:    FUN_14006a970
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14006a970(longlong param_1,byte param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 4);
  if (((byte)(uVar1 >> 0xb) & 1) != param_2) {
    if (param_2 == 0) {
      func_0x0001456a3970();
      uVar1 = *(uint *)(param_1 + 4);
      uVar2 = 0;
    }
    else {
      uVar2 = 0x800;
    }
    *(uint *)(param_1 + 4) = uVar1 & 0xfffff7ff | uVar2;
  }
  return;
}

