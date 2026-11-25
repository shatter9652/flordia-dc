// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401bc030  size: 62 bytes
// Name:    FUN_1401bc030
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1401bc030(undefined8 param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  longlong lVar1;
  char cVar2;
  undefined4 uStack_c;
  
  lVar1 = *(longlong *)(param_2 + 0x40);
  if (lVar1 != 0) {
    cVar2 = func_0x000144da6210(param_1,param_3,param_5,&uStack_c);
    if (cVar2 != '\0') {
      cVar2 = func_0x00014507a120(uStack_c);
      *(char *)(lVar1 + 0xbc) = cVar2 + (cVar2 == '\0');
      return;
    }
  }
  return;
}

