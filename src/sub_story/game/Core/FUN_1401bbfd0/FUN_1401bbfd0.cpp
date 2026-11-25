// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401bbfd0  size: 82 bytes
// Name:    FUN_1401bbfd0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145079e00, FUN_144e65220, FUN_144da62a0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


longlong FUN_1401bbfd0(longlong param_1,undefined8 *param_2)

{
  FUN_144e65220();
  FUN_144e65220(param_1 + 8);
  FUN_145079e00(param_1 + 0x10,param_2);
  FUN_145079e00(param_1 + 0x70,param_2);
  FUN_144da62a0(*param_2,param_1 + 0xd0);
  *(undefined1 *)(param_1 + 0xe5) = 0;
  return param_1;
}

