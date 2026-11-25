// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140055420  size: 50 bytes
// Name:    FUN_140055420
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140055420(longlong param_1)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0x3d7) == '\x01') {
    cVar1 = func_0x000144e7d710();
    if (cVar1 != '\0') {
      *(undefined4 *)(param_1 + 0x38c) = 1;
      return;
    }
  }
  return;
}

