// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140161050  size: 335 bytes
// Name:    FUN_140161050
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1452e2b10
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140161050(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &UNK_1466e2430;
  *(undefined4 *)((longlong)param_1 + 0xcec) = 0;
  if (param_1[0x19e] != 0) {
    func_0x000144d9c130();
  }
  *(undefined4 *)(param_1 + 0x19d) = 0;
  param_1[0x19e] = 0;
  *(undefined4 *)((longlong)param_1 + 0xcdc) = 0;
  if (param_1[0x19c] != 0) {
    func_0x000144d9c130();
  }
  *(undefined4 *)(param_1 + 0x19b) = 0;
  param_1[0x19c] = 0;
  *(undefined4 *)((longlong)param_1 + 0xccc) = 0;
  if (param_1[0x19a] != 0) {
    func_0x000144d9c130();
  }
  *(undefined4 *)(param_1 + 0x199) = 0;
  param_1[0x19a] = 0;
  if (param_1[399] != 0) {
    FUN_1452e2b10(param_1[399],*(undefined2 *)(param_1 + 0x18e));
  }
  param_1[399] = 0;
  if (param_1[0x1b] != 0) {
    FUN_1452e2b10(param_1[0x1b],*(undefined2 *)(param_1 + 0x1a));
  }
  param_1[0x1b] = 0;
  lVar1 = param_1[0xd];
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 4) = 0;
    if (*(longlong *)(lVar1 + 8) != 0) {
      func_0x000144d9c130();
    }
    func_0x000144d9c130(lVar1,0x48);
  }
  if (param_1[6] != 0) {
    FUN_1452e2b10(param_1[6],*(undefined2 *)(param_1 + 5));
  }
  param_1[6] = 0;
  return;
}

