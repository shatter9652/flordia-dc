// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401af300  size: 135 bytes
// Name:    FUN_1401af300
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f013e0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1401af300(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  lVar4 = FUN_144f013e0();
  uVar5 = 1;
  if (((lVar4 != 0) && (lVar4 = func_0x000144f01450(lVar4), lVar4 != 0)) &&
     (cVar1 = func_0x000144f3ad40(lVar4), cVar1 != '\0')) {
    lVar4 = func_0x000144f3aef0(param_1);
    if (((lVar4 != 0) && (iVar2 = func_0x00014068e100(lVar4 + 0x4d0,0x6f), iVar2 != 0)) &&
       (uVar3 = func_0x000144dc06c0(iVar2), (float)uVar3 * _DAT_146159ec4 < _DAT_146159ae0)) {
      return 1;
    }
    uVar5 = 0x177;
  }
  return uVar5;
}

