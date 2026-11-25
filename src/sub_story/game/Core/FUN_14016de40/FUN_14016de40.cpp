// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14016de40  size: 63 bytes
// Name:    FUN_14016de40
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145028490, FUN_14016dec0, FUN_14016de80
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_14016de40(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  
  func_0x0001407cc710();
  cVar1 = FUN_145028490(*param_2);
  if (cVar1 != '\0') {
    iVar2 = FUN_14016dec0(param_2);
    if (iVar2 == 1) {
      FUN_14016de80(param_1,param_2);
    }
  }
  return param_1;
}

