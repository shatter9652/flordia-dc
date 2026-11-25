// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14019f5c0  size: 61 bytes
// Name:    FUN_14019f5c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140f3c610
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


longlong FUN_14019f5c0(longlong param_1,undefined8 param_2)

{
  if (*(char *)(param_1 + 0x20) == '\0') {
    func_0x00014019f600(param_1);
  }
  else {
    FUN_140f3c610(param_1);
    *(undefined1 *)(param_1 + 0x20) = 0;
    func_0x0001456aaa80(param_1,param_2);
  }
  return param_1;
}

