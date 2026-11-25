// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400497c0  size: 43 bytes
// Name:    FUN_1400497c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400497c0(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = func_0x000144e8f430(param_1 + 0x10,_DAT_14999acbc);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(lVar2 + 8);
  }
  *param_2 = uVar1;
  return;
}

