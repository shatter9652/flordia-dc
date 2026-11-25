// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14016bb80  size: 76 bytes
// Name:    FUN_14016bb80
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1450267e0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14016bb80(undefined1 (*param_1) [32])

{
  FUN_1450267e0(param_1[2] + 0x10);
  *(undefined4 *)(param_1[1] + 4) = 0;
  *param_1 = ZEXT1232(ZEXT812(0));
  if (*(longlong *)(param_1[1] + 8) != 0) {
    func_0x000144d9c130();
  }
  *(undefined8 *)(param_1[1] + 8) = 0;
  *(undefined4 *)param_1[1] = 0;
  *(undefined4 *)(param_1[3] + 0xc) = 0;
  return;
}

