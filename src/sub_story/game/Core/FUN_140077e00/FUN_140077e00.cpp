// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140077e00  size: 62 bytes
// Name:    FUN_140077e00
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14075def0, FUN_140077720
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


ulonglong FUN_140077e00(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  ulonglong uVar1;
  
  uVar1 = FUN_140077720();
  if ((char)uVar1 != '\0') {
    uVar1 = uVar1 & 0xffffffff;
    (**(code **)(*param_1 + 0x98))(param_1,5);
    FUN_14075def0(param_1,param_3);
  }
  return uVar1;
}

