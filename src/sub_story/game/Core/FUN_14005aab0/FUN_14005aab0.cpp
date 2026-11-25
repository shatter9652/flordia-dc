// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14005aab0  size: 110 bytes
// Name:    FUN_14005aab0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144dbce00
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14005aab0(longlong param_1,longlong param_2,ushort param_3)

{
  longlong lVar1;
  longlong lVar2;
  ushort uVar3;
  undefined4 uStack_8;
  undefined2 uStack_4;
  
  if ((param_2 != 0) &&
     (lVar1 = *(longlong *)(param_2 + 8), (ushort)(*(short *)(lVar1 + 0x12) - 1U) < _DAT_14a943ab8))
  {
    uStack_4 = *(undefined2 *)(param_2 + 0x1c);
    lVar2 = *(longlong *)(param_1 + 8);
    uStack_8 = *(undefined4 *)(param_2 + 0x18);
    *(undefined1 *)(lVar2 + 0x121a4) = 1;
    uVar3 = 0x100;
    if (*(char *)(lVar2 + 0x12295) == '\0') {
      uVar3 = 0x40;
    }
    FUN_144dbce00(lVar2,1,lVar1,&uStack_8,param_3 | uVar3);
  }
  return;
}

