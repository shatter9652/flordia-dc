// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14014c5c0  size: 121 bytes
// Name:    FUN_14014c5c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1407fe1f0, FUN_140bd14b0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_14014c5c0(longlong param_1,longlong param_2,longlong param_3,undefined4 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = *(longlong *)(param_2 + 0x10);
    if (lVar2 == 0) {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x10);
    }
    if (lVar2 == 0) {
      lVar2 = *(longlong *)(param_1 + 0x60);
    }
    if (lVar2 != 0) {
      uVar1 = FUN_1407fe1f0(param_1);
      *(undefined4 *)(param_3 + 8) = *(undefined4 *)(param_2 + 8);
      FUN_140bd14b0(*(undefined4 *)(*(longlong *)(param_1 + 0x58) + 0x1dc),
                    *(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x1e0),param_4,param_3,uVar1);
      return 1;
    }
  }
  return 0;
}

