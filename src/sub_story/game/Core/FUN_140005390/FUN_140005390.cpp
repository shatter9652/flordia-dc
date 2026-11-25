// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140005390  size: 54 bytes
// Name:    FUN_140005390
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14084abf0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140005390(longlong param_1,undefined8 param_2)

{
  FUN_14084abf0(param_1 + 0x50);
  if (*(char *)(param_1 + 0x1c0) == '\x01') {
    func_0x000143133c70(param_2,param_1);
  }
  *(undefined1 *)(param_1 + 0x34) = 0;
  return;
}

