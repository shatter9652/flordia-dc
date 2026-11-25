// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400f6ee0  size: 114 bytes
// Name:    FUN_1400f6ee0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1409ea8b0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_1400f6ee0(longlong param_1)

{
  uint uVar1;
  int *piVar2;
  ulonglong uVar3;
  
  if (((*(byte *)(param_1 + 0x13) & 4) == 0) &&
     (uVar1 = *(uint *)(param_1 + 0x6f0), (ulonglong)uVar1 != 0)) {
    uVar3 = 0;
    do {
      piVar2 = (int *)func_0x0001400f6fe0(*(undefined4 *)(param_1 + 0x6f4 + uVar3 * 4));
      if ((piVar2 != (int *)0x0) && (*piVar2 != 0x1ffff)) {
        FUN_1409ea8b0(param_1,0x9c4,0x96,1);
        return 1;
      }
      uVar3 = uVar3 + 1;
    } while (uVar1 != uVar3);
  }
  return 0;
}

