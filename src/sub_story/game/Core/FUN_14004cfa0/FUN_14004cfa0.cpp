// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14004cfa0  size: 116 bytes
// Name:    FUN_14004cfa0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145436af0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14004cfa0(ulonglong *param_1,undefined4 param_2,longlong param_3)

{
  FUN_145436af0();
  if (param_3 == 0) {
    *param_1 = 0;
    *(undefined4 *)(param_1 + 2) = param_2;
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    *param_1 = *(ulonglong *)(param_3 + 8) & 0xfffffffffffffff0;
    *(undefined4 *)(param_1 + 2) = param_2;
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
    func_0x00014004d020(param_3 + 0x67b0,param_2,param_1);
    if ((param_1[1] != 0) && (*(short *)(param_1[1] + 0x18) != 0)) {
      *(undefined4 *)((longlong)param_1 + 0x14) = 1;
    }
  }
  return;
}

