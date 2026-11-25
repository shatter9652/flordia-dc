// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140161c50  size: 60 bytes
// Name:    FUN_140161c50
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140161c50(undefined8 *param_1)

{
  *param_1 = 0;
  if (param_1[1] != 0) {
    func_0x000144d9c130(param_1[1],0x10);
  }
  param_1[1] = 0;
  *(undefined1 *)((longlong)param_1 + 0x1a) = 1;
  return;
}

