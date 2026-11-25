// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140006050  size: 74 bytes
// Name:    FUN_140006050
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401cfec0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140006050(undefined8 *param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined8 uVar1;
  char cVar2;
  
  if ((param_2 != (undefined8 *)0x0) &&
     (cVar2 = FUN_1401cfec0(*param_2,*(undefined8 *)param_2[1],
                            *(undefined4 *)((undefined8 *)param_2[1] + 6),0x98e1750c,param_3,param_1
                           ), cVar2 != '\0')) {
    return;
  }
  uVar1 = _UNK_145fc6ee8;
  *param_1 = _DAT_145fc6ee0;
  param_1[1] = uVar1;
  return;
}

