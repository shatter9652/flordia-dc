// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400ee6b0  size: 115 bytes
// Name:    FUN_1400ee6b0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400ee730, FUN_1400ee880
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_1400ee6b0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = func_0x000144db7a60(param_1[2]);
  if ((lVar1 != 0) && (lVar2 = func_0x0001450bd950(*(undefined4 *)(lVar1 + 0x9c)), lVar2 != 0)) {
    FUN_1400ee730(param_1,lVar1,lVar2 + 0x730);
    (**(code **)(*param_1 + 0x70))(param_1,lVar1,lVar2 + 0x730);
    *(byte *)(lVar2 + 0x12) = *(byte *)(lVar2 + 0x12) & 0xfd;
    FUN_1400ee880(lVar2);
    return 1;
  }
  return 0;
}

