// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14003d320  size: 45 bytes
// Name:    FUN_14003d320
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14003e200
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_14003d320(ulonglong param_1,undefined8 param_2)

{
  char cVar1;
  
  param_1 = param_1 & 0xfffffffffffffff0;
  if (((param_1 != 0) && (*(char *)(param_1 + 0x30) == '\x04')) &&
     (cVar1 = FUN_14003e200(param_2,param_1), cVar1 != '\0')) {
    return 1;
  }
  return 0;
}

