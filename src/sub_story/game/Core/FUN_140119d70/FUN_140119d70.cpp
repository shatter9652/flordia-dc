// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140119d70  size: 126 bytes
// Name:    FUN_140119d70
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144fc6950, FUN_144fc69b0, FUN_144fc6a50
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140119d70(longlong param_1,int param_2,longlong *param_3,undefined4 param_4)

{
  if ((param_2 == 0) || (*param_3 == 0)) {
    FUN_144fc6950(param_1,param_3,0,0);
  }
  else {
    FUN_144fc6a50(param_1,1,param_3,1);
    FUN_144fc69b0(param_1,0,1,0);
  }
  *(undefined1 *)(param_1 + 0x1237c) = 1;
  *(byte *)(param_1 + 0x12522) = *(byte *)(param_1 + 0x12522) | 0x40;
  *(undefined1 *)(param_1 + 0x121a4) = 1;
  func_0x0001450a5e80(param_1,param_4,0,0,0xff);
  return;
}

