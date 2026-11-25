// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14013d820  size: 105 bytes
// Name:    FUN_14013d820
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145224aa0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 (*) [16] FUN_14013d820(undefined1 (*param_1) [16],undefined8 param_2,longlong param_3)

{
  uint uVar1;
  undefined1 auVar2 [16];
  
  auVar2._0_12_ = ZEXT812(0);
  auVar2._12_4_ = 0;
  *param_1 = auVar2;
  *(undefined8 *)param_1[1] = 0x1ffff;
  if (param_3 != 0) {
    uVar1 = (uint)((ulonglong)(param_3 - *_DAT_14abb6918) / (ulonglong)*(uint *)(_DAT_14abb6918 + 1)
                  ) & 0x1ffff;
    *(uint *)param_1[1] = *(uint *)(_DAT_14abb6918[5] + (ulonglong)uVar1 * 4) & 0xfffe0000 | uVar1;
  }
  FUN_145224aa0(param_1 + 2,param_2);
  param_1[6][0] = 0;
  return param_1;
}

