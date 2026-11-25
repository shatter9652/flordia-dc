// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140093560  size: 101 bytes
// Name:    FUN_140093560
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_142433f00
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_140093560(longlong param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 4);
  if (uVar1 != 0) {
    lVar3 = 0;
    uVar4 = 0;
    do {
      if ((*(char *)(param_1 + 0x20) != '\x01') ||
         ((*(uint *)(param_1 + 0x10 + (uVar4 >> 5) * 4) >> ((uint)uVar4 & 0x1f) & 1) == 0)) {
        iVar2 = FUN_142433f00(*(longlong *)(param_1 + 8) + lVar3,*param_2);
        if (iVar2 != 0) {
          return 1;
        }
        uVar1 = *(uint *)(param_1 + 4);
      }
      uVar4 = uVar4 + 1;
      lVar3 = lVar3 + 0x10;
    } while (uVar4 < uVar1);
  }
  return 0;
}

