// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14011a6c0  size: 69 bytes
// Name:    FUN_14011a6c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144fefc40
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14011a6c0(uint *param_1,undefined8 param_2)

{
  undefined4 uStack_14;
  
  if ((~*param_1 & 0x3fffff) == 0) {
    *param_1 = (uint)param_2;
    func_0x0001451d0a60(&uStack_14,param_2,_DAT_14a92e70c);
    FUN_144fefc40(param_1 + 1,uStack_14,0x2c);
  }
  return;
}

