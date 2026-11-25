// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400778c0  size: 94 bytes
// Name:    FUN_1400778c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14075def0, FUN_140519300, FUN_140077720
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined4 FUN_1400778c0(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_140077720();
  if ((char)uVar1 != '\0') {
    if ((param_1[0x13] == 0) || (*(char *)(param_1[0x13] + 0x28) != '\x01')) {
      (**(code **)(*param_1 + 0x98))(param_1,5);
    }
    else {
      FUN_140519300(param_1,0,0);
      FUN_14075def0(param_1,param_3);
    }
  }
  return uVar1;
}

