// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400bc200  size: 34 bytes
// Name:    FUN_1400bc200
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_1400bc200(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = func_0x000143d6d090();
  if (uVar1 == 0xffffffff) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + (ulonglong)uVar1 * 8);
  }
  return uVar2;
}

