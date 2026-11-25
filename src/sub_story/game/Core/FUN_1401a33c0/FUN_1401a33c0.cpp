// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401a33c0  size: 102 bytes
// Name:    FUN_1401a33c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14506cdc0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1401a33c0(uint param_1,undefined8 param_2,uint param_3)

{
  char cVar1;
  undefined8 *puStack_10;
  
  if ((-1 < (int)(param_3 | param_1)) &&
     ((int)param_1 < (int)(uint)*(ushort *)(_DAT_14a9ec8e0 + 0x98))) {
    puStack_10 = (undefined8 *)0x0;
    FUN_14506cdc0(*(undefined8 *)(*(longlong *)(_DAT_14a9ec8e0 + 0x90) + (ulonglong)param_1 * 8),
                  param_2,param_3,&puStack_10);
    if ((puStack_10 != (undefined8 *)0x0) &&
       (cVar1 = (**(code **)*puStack_10)(puStack_10,0xf6787c97), cVar1 != '\0')) {
      return puStack_10;
    }
  }
  return (undefined8 *)0x0;
}

