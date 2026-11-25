// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400fef20  size: 123 bytes
// Name:    FUN_1400fef20
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e65220, FUN_144da6330
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 * FUN_1400fef20(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_144da6330();
  *param_1 = &UNK_14669ee78;
  FUN_144e65220(param_1 + 2);
  *param_1 = &UNK_1465a3000;
  iVar1 = *(int *)((longlong)param_1 + 0x1c);
  if (-1 < (longlong)iVar1) {
    lVar2 = 0;
    if (param_1[4] != 1) {
      lVar2 = param_1[4] + 0x20 + (longlong)param_1;
    }
    if (iVar1 != 0) {
      lVar3 = (longlong)iVar1 * 0x50;
      do {
        func_0x000144d9fbb0(lVar2,param_2);
        lVar2 = lVar2 + 0x50;
        lVar3 = lVar3 + -0x50;
      } while (lVar3 != 0);
    }
  }
  return param_1;
}

