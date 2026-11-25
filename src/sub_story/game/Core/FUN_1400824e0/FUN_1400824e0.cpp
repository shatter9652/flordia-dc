// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400824e0  size: 53 bytes
// Name:    FUN_1400824e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144edb730
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_1400824e0(undefined8 param_1,int param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = func_0x000144fa1860();
  cVar1 = FUN_144edb730(uVar2,0xd);
  uVar2 = 1;
  if ((param_2 != 0x13) && ((param_2 != 10 || (cVar1 == '\0')))) {
    uVar2 = 0;
  }
  return uVar2;
}

