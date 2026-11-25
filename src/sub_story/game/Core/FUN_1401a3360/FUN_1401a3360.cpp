// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401a3360  size: 54 bytes
// Name:    FUN_1401a3360
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401a33a0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1401a3360(longlong param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  longlong lVar4;
  undefined8 *puStack_10;
  
  lVar4 = FUN_1401a33a0(param_2);
  uVar1 = *(uint *)(lVar4 + 8);
  if ((uVar1 == 0xffffffff) || (uVar2 = *(uint *)(lVar4 + 0xc), uVar2 == 0xffffffff)) {
    return (undefined8 *)0x0;
  }
  if ((-1 < (int)(uVar2 | uVar1)) && ((int)uVar1 < (int)(uint)*(ushort *)(_DAT_14a9ec8e0 + 0x98))) {
    puStack_10 = (undefined8 *)0x0;
    FUN_14506cdc0(*(undefined8 *)(*(longlong *)(_DAT_14a9ec8e0 + 0x90) + (ulonglong)uVar1 * 8),
                  *(undefined4 *)(param_1 + 0x5c),uVar2,&puStack_10);
    if ((puStack_10 != (undefined8 *)0x0) &&
       (cVar3 = (**(code **)*puStack_10)(puStack_10,0xf6787c97), cVar3 != '\0')) {
      return puStack_10;
    }
  }
  return (undefined8 *)0x0;
}

