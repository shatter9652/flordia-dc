// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14019c160  size: 91 bytes
// Name:    FUN_14019c160
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14019e4e0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14019c160(longlong param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  *(undefined4 *)(param_1 + 0xbe0) = param_4;
  *(longlong *)(param_1 + 0xbd8) = param_2;
  *(undefined4 *)(param_1 + 0xbe4) = 0;
  *(undefined4 *)(param_1 + 0xbe7) = 0;
  func_0x00014019c1c0(param_1,param_1);
  FUN_14019e4e0(param_1 + 0x9c0,param_2 + 0x178);
  *(undefined1 (*) [32])(param_1 + 0xbb0) = ZEXT1232(ZEXT812(0));
  return;
}

