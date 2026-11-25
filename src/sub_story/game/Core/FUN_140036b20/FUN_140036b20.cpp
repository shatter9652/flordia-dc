// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140036b20  size: 160 bytes
// Name:    FUN_140036b20
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140961b10, FUN_145cd64b0, FUN_1450df420
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


longlong FUN_140036b20(longlong param_1)

{
  func_0x0001402e3e10();
  FUN_140961b10(param_1 + 0xac0);
  FUN_140961b10(param_1 + 0x1360);
  FUN_140961b10(param_1 + 0x1c00);
  *(undefined4 *)(param_1 + 0x24e4) = 0xffffffff;
  func_0x000145079db0(param_1 + 0x24b0);
  FUN_1450df420(param_1 + 0x24f0);
  FUN_1450df420(param_1 + 0x2c00);
  FUN_1450df420(param_1 + 0x3310);
  FUN_1450df420(param_1 + 0x3a20);
  FUN_1450df420(param_1 + 0x4130);
  func_0x000140253ff0(param_1 + 0x4840);
  FUN_145cd64b0(param_1);
  return param_1;
}

