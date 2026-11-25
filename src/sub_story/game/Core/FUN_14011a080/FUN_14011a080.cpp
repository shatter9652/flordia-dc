// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14011a080  size: 102 bytes
// Name:    FUN_14011a080
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144d9ed60
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14011a080(uint *param_1)

{
  uint uStack_1c;
  
  func_0x000144f16940(param_1 + 1,&uStack_1c);
  if ((~uStack_1c & 0xfffffff) != 0) {
    if ((~*param_1 & 0x3fffff) != 0) {
      FUN_144d9ed60(_DAT_14a92e708);
    }
    param_1[2] = 0;
    param_1[3] = 0;
  }
  *param_1 = 0x3fffff;
  func_0x000144fefc30(param_1 + 1);
  param_1[6] = 0;
  return;
}

