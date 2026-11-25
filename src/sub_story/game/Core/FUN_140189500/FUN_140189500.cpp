// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140189500  size: 117 bytes
// Name:    FUN_140189500
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_141221450
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140189500(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (*(int *)(param_2 + 0xb8) != 2) {
    return 0;
  }
  if (*(int *)(param_1 + 0xa4) == 0) {
    return 0;
  }
  lVar2 = *(longlong *)(param_2 + 0x88);
  if (lVar2 == 0) {
    uVar1 = *(ulonglong *)(param_2 + 8) & 0xfffffffffffffff0;
    if (((uVar1 != 0) && (_DAT_149275080 != 0)) &&
       (*(int *)(_DAT_149275080 + 0xc) != *(int *)(_DAT_149275080 + 0x10))) {
      FUN_141221450(param_1,uVar1);
      lVar2 = *(longlong *)(param_2 + 0x88);
      if (lVar2 != 0) goto LAB_140189563;
    }
    uVar3 = 0;
  }
  else {
LAB_140189563:
    uVar3 = CONCAT71((int7)((ulonglong)lVar2 >> 8),*(longlong *)(lVar2 + 0x60) == param_1);
  }
  return uVar3;
}

