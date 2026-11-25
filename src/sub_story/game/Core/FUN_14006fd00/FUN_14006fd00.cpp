// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14006fd00  size: 112 bytes
// Name:    FUN_14006fd00
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140522430, FUN_1400fd6e0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_14006fd00(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  FUN_1400fd6e0(param_1 + 0x50);
  if ((ulonglong)*(uint *)(param_1 + 0x44) == 0) {
    uVar2 = 0;
  }
  else {
    lVar1 = 0;
    uVar2 = 0;
    do {
      if ((*(longlong *)(*(longlong *)(param_1 + 0x48) + 0x230 + lVar1) == 0) &&
         ((*(byte *)(*(longlong *)(param_1 + 0x48) + 0x238 + lVar1) & ~*(byte *)(param_1 + 0x39)) ==
          0)) {
        uVar2 = 1;
        break;
      }
      lVar1 = lVar1 + 0x240;
    } while ((ulonglong)*(uint *)(param_1 + 0x44) * 0x240 != lVar1);
  }
  FUN_140522430(param_1 + 0x50);
  return uVar2;
}

