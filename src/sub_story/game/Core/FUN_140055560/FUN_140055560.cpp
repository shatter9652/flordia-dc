// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140055560  size: 101 bytes
// Name:    FUN_140055560
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1451235f0, FUN_145020cc0, FUN_145123680
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_140055560(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  float fVar3;
  
  lVar2 = *(longlong *)(param_1 + 1000);
  if ((((lVar2 != 0) && (cVar1 = FUN_145123680(lVar2), cVar1 != '\0')) &&
      (cVar1 = FUN_1451235f0(lVar2), cVar1 != '\0')) &&
     (lVar2 = func_0x00014506c3d0(*(undefined4 *)(lVar2 + 0x9c)), lVar2 != 0)) {
    fVar3 = (float)FUN_145020cc0(lVar2);
    return CONCAT71(0x149e2f1,fVar3 <= *(float *)((ulonglong)DAT_149e2f1b4 * 4 + 0x149e2f1a8));
  }
  return 0;
}

