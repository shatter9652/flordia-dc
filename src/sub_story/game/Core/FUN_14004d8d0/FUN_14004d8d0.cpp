// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14004d8d0  size: 227 bytes
// Name:    FUN_14004d8d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e6ee80
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_14004d8d0(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if ((((((*(longlong *)(param_1 + 8) == 0) ||
         (lVar1 = FUN_144e6ee80(param_2,param_3,*(undefined4 *)(*(longlong *)(param_1 + 8) + 8)),
         lVar1 == 0)) ||
        ((uVar2 = 1, *(short *)(lVar1 + 0x18) == 0 && ((*(byte *)(lVar1 + 0x1a) & 1) == 0)))) &&
       (((*(longlong *)(param_1 + 0x10) == 0 ||
         (lVar1 = FUN_144e6ee80(param_2,param_3,*(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8)),
         lVar1 == 0)) ||
        ((uVar2 = 1, *(short *)(lVar1 + 0x18) == 0 && ((*(byte *)(lVar1 + 0x1a) & 1) == 0)))))) &&
      (((*(longlong *)(param_1 + 0x18) == 0 ||
        (lVar1 = FUN_144e6ee80(param_2,param_3,*(undefined4 *)(*(longlong *)(param_1 + 0x18) + 8)),
        lVar1 == 0)) ||
       ((uVar2 = 1, *(short *)(lVar1 + 0x18) == 0 && ((*(byte *)(lVar1 + 0x1a) & 1) == 0)))))) &&
     (((*(longlong *)(param_1 + 0x20) == 0 ||
       (lVar1 = FUN_144e6ee80(param_2,param_3,*(undefined4 *)(*(longlong *)(param_1 + 0x20) + 8)),
       lVar1 == 0)) ||
      ((uVar2 = 1, *(short *)(lVar1 + 0x18) == 0 && ((*(byte *)(lVar1 + 0x1a) & 1) == 0)))))) {
    uVar2 = 0;
  }
  return uVar2;
}

