// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140107e00  size: 72 bytes
// Name:    FUN_140107e00
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140107e00(undefined8 *param_1)

{
  *param_1 = &UNK_1461ce470;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  if (param_1[0x12] != 0) {
    func_0x000144d9c130();
  }
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0x12] = 0;
  return;
}

