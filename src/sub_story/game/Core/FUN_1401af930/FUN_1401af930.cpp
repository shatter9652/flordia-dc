// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401af930  size: 156 bytes
// Name:    FUN_1401af930
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144fa4cb0, FUN_1451d0bc0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401af930(longlong param_1,byte *param_2,int *param_3,longlong param_4)

{
  byte bVar1;
  longlong lVar2;
  bool bVar3;
  
  if ((param_1 != 0) && ((param_2 != (byte *)0x0 || param_3 != (int *)0x0) || param_4 != 0)) {
    bVar1 = FUN_1451d0bc0();
    bVar3 = bVar1 == 3 || bVar1 == 0;
    lVar2 = FUN_144fa4cb0(_DAT_14ab7f650,param_1,0);
    if (lVar2 != 0) {
      bVar3 = bVar3 && (*(byte *)(lVar2 + 0xa5) & 0x80) == 0;
    }
    if (param_2 != (byte *)0x0) {
      *param_2 = bVar1;
    }
    if (param_4 != 0) {
      *(bool *)param_4 = bVar3;
    }
    if (param_3 != (int *)0x0) {
      *param_3 = (uint)((bVar1 & 0xfe) == 4) * 3;
    }
  }
  return;
}

