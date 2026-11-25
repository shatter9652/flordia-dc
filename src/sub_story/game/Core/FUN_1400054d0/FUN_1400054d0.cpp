// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400054d0  size: 151 bytes
// Name:    FUN_1400054d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140005570
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400054d0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &UNK_14671ce10;
  puVar1 = (undefined8 *)param_1[8];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  param_1[0x19] = &UNK_14671d6d0;
  FUN_140005570(param_1 + 0x1a);
  if (param_1[0x1b] != 0) {
    func_0x000144d9c130();
  }
  param_1[0x1b] = 0;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  if (param_1[0x11] != 0) {
    func_0x000144d9c130();
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x11] = 0;
  return;
}

