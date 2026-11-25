// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140188200  size: 34 bytes
// Name:    FUN_140188200
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


byte FUN_140188200(longlong param_1)

{
  byte bVar1;
  
  bVar1 = func_0x000144d9db40(*(undefined8 *)(param_1 + 0x38));
  return bVar1 | (*(uint *)(param_1 + 0x48) & 5) != 0;
}

