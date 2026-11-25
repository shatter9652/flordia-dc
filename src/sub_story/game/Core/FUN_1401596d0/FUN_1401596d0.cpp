// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401596d0  size: 108 bytes
// Name:    FUN_1401596d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1401596d0(undefined8 *param_1)

{
  *param_1 = &UNK_14650f590;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  if (param_1[0x12] != 0) {
    func_0x000144d9c130();
  }
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  if (param_1[0x10] != 0) {
    func_0x000144d9c130();
  }
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  return;
}

