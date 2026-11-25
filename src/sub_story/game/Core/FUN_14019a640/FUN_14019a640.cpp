// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14019a640  size: 86 bytes
// Name:    FUN_14019a640
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144eca860, FUN_1450548d0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_14019a640(undefined8 param_1,int param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  FUN_1450548d0();
  if (param_2 != 0) {
    cVar1 = func_0x000144eca830(0x1498fa810,param_1);
    if (cVar1 == '\0') {
      uVar2 = func_0x000144fc99c0(0,0);
      func_0x000140093420(uVar2,param_1);
    }
    else {
      FUN_144eca860(0x1498fa810,param_1);
    }
  }
  return param_1;
}

