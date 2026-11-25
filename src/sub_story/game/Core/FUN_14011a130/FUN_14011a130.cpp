// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14011a130  size: 55 bytes
// Name:    FUN_14011a130
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined4 FUN_14011a130(uint *param_1)

{
  undefined4 uVar1;
  uint uStack_c;
  
  if ((~*param_1 & 0x3fffff) == 0) {
    uVar1 = 0;
  }
  else {
    func_0x000144f16940(param_1 + 1,&uStack_c);
    uVar1 = CONCAT31((int3)(~uStack_c >> 8),(~uStack_c & 0xfffffff) != 0);
  }
  return uVar1;
}

