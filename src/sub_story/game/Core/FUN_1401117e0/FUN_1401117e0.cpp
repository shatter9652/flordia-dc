// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401117e0  size: 32 bytes
// Name:    FUN_1401117e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_1401117e0(char param_1,undefined4 param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  
  if (param_1 == '\x16') {
    uVar2 = 0;
  }
  else {
    uVar1 = func_0x0001450879e0(param_2);
    uVar2 = CONCAT71((int7)((uVar1 & 0xfffffffffffffffe) >> 8),
                     (char)(uVar1 & 0xfffffffffffffffe) == '\x04');
  }
  return uVar2;
}

