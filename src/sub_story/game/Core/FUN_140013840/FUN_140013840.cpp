// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140013840  size: 191 bytes
// Name:    FUN_140013840
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400bc0e0, FUN_1414d36a0, FUN_144faf870
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 * FUN_140013840(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  
  *param_1 = &UNK_14669d5a8;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0;
  if ((undefined8 *)param_1[0x1e] != (undefined8 *)0x0 &&
      param_1 + 0x20 != (undefined8 *)param_1[0x1e]) {
    func_0x000144d9c130();
  }
  *(undefined4 *)(param_1 + 0x1c) = 2;
  param_1[0x1e] = 0;
  param_1[0x10] = 2;
  param_1[0xc] = 2;
  uVar1 = *(uint *)((longlong)param_1 + 0x24);
  if ((ulonglong)uVar1 != 0) {
    lVar2 = 0;
    do {
      FUN_1414d36a0(*(undefined8 *)((longlong)param_1 + lVar2 + 0x28));
      lVar2 = lVar2 + 0x10;
    } while ((ulonglong)uVar1 << 4 != lVar2);
  }
  param_1[4] = 2;
  *param_1 = &UNK_146209118;
  FUN_144faf870(param_1);
  if (param_2 != 0) {
    FUN_1400bc0e0(param_1);
  }
  return param_1;
}

