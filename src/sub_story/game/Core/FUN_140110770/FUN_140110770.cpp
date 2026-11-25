// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140110770  size: 28 bytes
// Name:    FUN_140110770
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


uint FUN_140110770(undefined8 param_1,uint param_2)

{
  char cVar1;
  
  cVar1 = func_0x000144ee8680();
  if (cVar1 == '\0') {
    param_2 = param_2 >> 0x18 | (param_2 & 0xff0000) >> 8 | (param_2 & 0xff00) << 8 |
              param_2 << 0x18;
  }
  return param_2;
}

