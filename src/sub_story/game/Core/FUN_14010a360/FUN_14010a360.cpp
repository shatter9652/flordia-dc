// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14010a360  size: 38 bytes
// Name:    FUN_14010a360
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14010a390
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


ulonglong FUN_14010a360(char param_1)

{
  ulonglong uVar1;
  
  uVar1 = FUN_14010a390(0xff);
  if (param_1 == '\x01' && (char)uVar1 == '\0') {
    uVar1 = uVar1 & 0xffffffff;
    func_0x000140388490();
  }
  return uVar1;
}

