// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140006000  size: 70 bytes
// Name:    FUN_140006000
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401cfec0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140006000(undefined1 (*param_1) [16],undefined8 *param_2,undefined4 param_3)

{
  char cVar1;
  undefined1 auVar2 [16];
  
  if ((param_2 != (undefined8 *)0x0) &&
     (cVar1 = FUN_1401cfec0(*param_2,*(undefined8 *)param_2[1],
                            *(undefined4 *)((undefined8 *)param_2[1] + 6),0xf791a95f,param_3,param_1
                           ), cVar1 != '\0')) {
    return;
  }
  auVar2._0_12_ = ZEXT812(0);
  auVar2._12_4_ = 0;
  *param_1 = auVar2;
  return;
}

