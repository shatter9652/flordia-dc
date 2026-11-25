// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400eb2d0  size: 62 bytes
// Name:    FUN_1400eb2d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


byte FUN_1400eb2d0(undefined8 param_1,int param_2,uint param_3,byte param_4)

{
  byte bVar1;
  uint uVar2;
  
  if ((param_4 & 2) == 0) {
    uVar2 = param_3 >> 0x1b & 7;
    bVar1 = func_0x000144f6a910();
    bVar1 = param_2 == 0 & bVar1 & (uVar2 == 5 || uVar2 == 0);
  }
  else {
    bVar1 = 0;
  }
  return bVar1;
}

