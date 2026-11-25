// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401164a0  size: 88 bytes
// Name:    FUN_1401164a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_1401164a0(longlong *param_1,undefined4 param_2,int param_3)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = (float)func_0x000144eb7ef0();
  fVar2 = fVar2 * *(float *)(param_1 + 5);
  fVar3 = (float)(**(code **)(*param_1 + 0x18))(param_1,param_2);
  lVar1 = 0x24c;
  if (param_3 == 0) {
    lVar1 = 0x20;
  }
  return fVar2 * fVar3 * *(float *)(_DAT_14ab7ef10 + lVar1);
}

