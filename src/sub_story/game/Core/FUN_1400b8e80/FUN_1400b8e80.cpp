// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400b8e80  size: 141 bytes
// Name:    FUN_1400b8e80
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400b7600, FUN_1400b8f10
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1400b8e80(undefined8 *param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  
  FUN_1400b7600(param_1,param_2,param_4,0x17);
  *param_1 = &UNK_14646ecf0;
  param_1[0x2a] = param_3;
  *(undefined1 (*) [32])(param_1 + 0x2b) = ZEXT1232(ZEXT812(0));
  param_1[0x2f] = 0;
  *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) & 0xfe;
  lVar1 = _DAT_1492d7da8;
  param_1[0x2b] = *(undefined8 *)(_DAT_1492d7da8 + 8);
  *(undefined1 *)((longlong)param_1 + 0x121) = *(undefined1 *)(param_2 + 0x90);
  *(byte *)((longlong)param_1 + 0x123) = *(byte *)((longlong)param_1 + 0x123) | 0x40;
  FUN_1400b8f10(*(undefined8 *)(lVar1 + 0x28),*(undefined4 *)(lVar1 + 0x30),
                *(undefined4 *)(param_3 + 8));
  return param_1;
}

