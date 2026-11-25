// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401b1330  size: 40 bytes
// Name:    FUN_1401b1330
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140b0a390
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


bool FUN_1401b1330(ulonglong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  bool bVar2;
  
  if (((param_1 & 0x10) == 0) || (param_2 == 0)) {
    bVar2 = false;
  }
  else {
    lVar1 = FUN_140b0a390(param_2,param_3);
    bVar2 = lVar1 != 0;
  }
  return bVar2;
}

