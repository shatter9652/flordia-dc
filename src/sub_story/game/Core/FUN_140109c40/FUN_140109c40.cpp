// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140109c40  size: 129 bytes
// Name:    FUN_140109c40
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144faf870, FUN_1400bc0e0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 * FUN_140109c40(undefined8 *param_1,int param_2)

{
  *param_1 = &UNK_14633cb40;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  if (param_1[5] != 0) {
    func_0x000144d9c130();
  }
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  if (param_1[3] != 0) {
    func_0x000144d9c130();
  }
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  *param_1 = &UNK_146209118;
  FUN_144faf870(param_1);
  if (param_2 != 0) {
    FUN_1400bc0e0(param_1);
  }
  return param_1;
}

