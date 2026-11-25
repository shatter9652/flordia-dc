// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14002c7a0  size: 52 bytes
// Name:    FUN_14002c7a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140028390
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


longlong FUN_14002c7a0(longlong *param_1,longlong param_2,longlong param_3)

{
  *(undefined1 *)(param_2 + 0x10) = 0xff;
  if (param_3 == 0) {
    FUN_140028390(param_2,param_1[6]);
  }
  else {
    (**(code **)(*param_1 + 0xa8))(param_1,param_3);
  }
  return param_2;
}

