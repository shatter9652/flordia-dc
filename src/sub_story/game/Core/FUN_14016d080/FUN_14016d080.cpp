// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14016d080  size: 53 bytes
// Name:    FUN_14016d080
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


uint FUN_14016d080(longlong param_1,byte param_2)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  
  if ((param_2 & 2) == 0) {
    uVar3 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x154);
    cVar2 = func_0x000144da4370(uVar1);
    uVar3 = 1;
    if (cVar2 == '\0') {
      return (uVar1 & 2) >> 1;
    }
  }
  return uVar3;
}

