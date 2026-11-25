// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401cbfa0  size: 98 bytes
// Name:    FUN_1401cbfa0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14149dcc0, FUN_14149dbd0, FUN_144eddcc0, FUN_145086440
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1401cbfa0(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined1 auStack_1c [4];
  
  lVar2 = FUN_144eddcc0();
  uVar4 = _DAT_145fc6f48;
  if (lVar2 != 0) {
    lVar3 = FUN_145086440(*(undefined4 *)(param_2 + 8),auStack_1c,0x38);
    if (lVar3 == 0) {
      lVar3 = FUN_14149dbd0(param_1);
    }
    bVar1 = FUN_14149dcc0(lVar3,lVar2);
    uVar4 = *(undefined4 *)(param_2 + 0xc + (ulonglong)(bVar1 ^ 1) * 4);
  }
  return uVar4;
}

