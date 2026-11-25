// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14000be10  size: 45 bytes
// Name:    FUN_14000be10
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14000b520
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


longlong FUN_14000be10(longlong param_1)

{
  *(longlong *)(param_1 + 0x10) = param_1 + 0x18;
  *(undefined8 *)(param_1 + 8) = 10;
  *(undefined1 *)(param_1 + 0xd3) = 0;
  FUN_14000b520();
  return param_1;
}

