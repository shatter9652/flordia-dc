// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400f9dc0  size: 32 bytes
// Name:    FUN_1400f9dc0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


bool FUN_1400f9dc0(int param_1,uint param_2)

{
  uint uVar1;
  bool bVar2;
  
  if (param_1 == 0) {
    bVar2 = false;
  }
  else {
    uVar1 = func_0x000140003300();
    bVar2 = (param_2 >> (uVar1 & 0x1f) & 1) != 0;
  }
  return bVar2;
}

