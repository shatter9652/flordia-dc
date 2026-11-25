// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401cc010  size: 80 bytes
// Name:    FUN_1401cc010
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145086440
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1401cc010(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined1 auStack_14 [4];
  
  lVar1 = FUN_145086440(*(undefined4 *)(param_2 + 8),auStack_14,0x1c);
  uVar2 = _DAT_145fc6f48;
  if ((lVar1 != 0) && (*(longlong *)(param_1 + 0x370) != 0)) {
    if (lVar1 == *(longlong *)(param_1 + 0x370)) {
      uVar2 = *(undefined4 *)(param_2 + 0xc);
    }
    else {
      uVar2 = *(undefined4 *)(param_2 + 0x10);
    }
  }
  return uVar2;
}

