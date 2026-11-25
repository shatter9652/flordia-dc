// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400f6360  size: 76 bytes
// Name:    FUN_1400f6360
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined4 FUN_1400f6360(longlong param_1,uint param_2)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  
  cVar1 = func_0x0001400f63b0();
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar3 = (*(uint *)(*(longlong *)(param_1 + 0x25a8 + (ulonglong)(param_2 >> 10 & 0x3f) * 8) + 4 +
                      (ulonglong)((param_2 & 0x3ff) * 0x30)) >> 8) + 1;
    uVar2 = CONCAT31((int3)(uVar3 >> 8),(uVar3 & 0x1f) != 0);
  }
  return uVar2;
}

