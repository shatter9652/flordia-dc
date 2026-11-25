// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140128710  size: 71 bytes
// Name:    FUN_140128710
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


uint FUN_140128710(undefined8 param_1,char param_2)

{
  longlong lVar1;
  
  lVar1 = func_0x0001451ad2b0();
  if (((lVar1 != 0) && (lVar1 = func_0x000144f68b80(*(undefined4 *)(lVar1 + 0x9c)), lVar1 != 0)) &&
     ((*(uint *)(lVar1 + 0x5f20) & 8) == 0)) {
    if (param_2 == '\x01') {
      return 1;
    }
    return (*(uint *)(lVar1 + 0x5f20) & 0x10) >> 4;
  }
  return 0;
}

