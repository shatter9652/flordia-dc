// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401cda20  size: 88 bytes
// Name:    FUN_1401cda20
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e333d0, FUN_145087a20, FUN_1401cda80
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_1401cda20(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_1401cda80();
  *(int *)(param_1 + 0xebc) = iVar1;
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    lVar2 = FUN_144e333d0((longlong)iVar1 * 0x18,0,1,0);
    *(longlong *)(param_1 + 0xeb0) = lVar2;
    if (lVar2 != 0) {
      FUN_145087a20(lVar2);
      uVar3 = 1;
    }
  }
  return uVar3;
}

