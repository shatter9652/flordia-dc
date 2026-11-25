// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140067880  size: 72 bytes
// Name:    FUN_140067880
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144eae320
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


int FUN_140067880(longlong *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = (**(code **)(*param_1 + 0x18))();
  iVar2 = FUN_144eae320(param_1);
  iVar3 = iVar1 - iVar2;
  if (iVar3 == 0 || iVar1 < iVar2) {
    iVar3 = 0;
  }
  return iVar3;
}

