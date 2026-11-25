// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140182360  size: 139 bytes
// Name:    FUN_140182360
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140182360(undefined8 *param_1,longlong param_2)

{
  byte bVar1;
  undefined1 auVar2 [16];
  
  *(undefined4 *)(param_1 + 1) = 1;
  *param_1 = &UNK_146631f30;
  param_1[2] = &UNK_146631f40;
  if (param_2 != 0) {
    func_0x00014503e5b0(param_2);
  }
  param_1[3] = param_2;
  auVar2._0_12_ = ZEXT812(0);
  auVar2._12_4_ = 0;
  param_1[4] = param_1 + 4;
  param_1[5] = param_1 + 4;
  bVar1 = 1;
  if (*(int *)(param_2 + 0x10) - 5U < 6) {
    bVar1 = *(int *)(param_2 + 0x10) - 9U < 2 | 2;
  }
  *(byte *)(param_1 + 6) = bVar1;
  *(undefined1 (*) [16])(param_1 + 7) = auVar2;
  *(undefined1 (*) [16])((longlong)param_1 + 0x44) = auVar2;
  _DAT_149e300f0 = _DAT_149e300f0 + 1;
  _DAT_149e300f4 = _DAT_149e300f4 + 1;
  return param_1;
}

