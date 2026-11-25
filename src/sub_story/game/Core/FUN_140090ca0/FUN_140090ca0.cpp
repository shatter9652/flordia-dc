// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140090ca0  size: 127 bytes
// Name:    FUN_140090ca0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144eaa070, FUN_140090ca0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140090ca0(longlong param_1,undefined4 param_2,char param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = func_0x000144efd450(*(undefined4 *)(param_1 + 0x9c));
  if (lVar3 != 0) {
    lVar1 = *(longlong *)(lVar3 + 0x18);
    lVar2 = *(longlong *)(lVar3 + 0x20);
    if (*(char *)(lVar3 + 0x14c) != '\0') {
      FUN_144eaa070(lVar3,param_2);
    }
    if (lVar1 != 0) {
      FUN_140090ca0(lVar1,param_2,1);
    }
    if (param_3 == '\x01' && lVar2 != 0) {
      FUN_140090ca0(lVar2,param_2,1);
    }
    *(byte *)(param_1 + 0xee) = *(byte *)(param_1 + 0xee) & 0xfb;
  }
  return;
}

