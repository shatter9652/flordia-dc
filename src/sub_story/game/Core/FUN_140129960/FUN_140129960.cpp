// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140129960  size: 85 bytes
// Name:    FUN_140129960
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140129960(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = (ulonglong)*(byte *)(_DAT_14a943ab0 + 1) * 0x1e0;
  uVar1 = 0;
  if ((*(longlong *)(param_2 + 0xce0 + lVar2) != 0) && (*(int *)(param_2 + 0xce8 + lVar2) != 0)) {
    lVar2 = param_2 + 0xce0 + lVar2;
    if (*(int *)(lVar2 + 0xc) == -1) {
      uVar1 = 0;
    }
    else {
      func_0x0001401299c0(*(undefined8 *)(param_1 + 8),lVar2,lVar2);
      uVar1 = 1;
    }
  }
  return uVar1;
}

