// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14001e8b0  size: 68 bytes
// Name:    FUN_14001e8b0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


longlong * FUN_14001e8b0(longlong *param_1,int param_2,ulonglong param_3)

{
  uint uVar1;
  
  param_3 = param_3 & 0xffffffff;
  uVar1 = (**(code **)(*param_1 + 0x18))();
  if ((2 < uVar1) && (uVar1 == 3)) {
    *(undefined1 *)((longlong)(param_1 + (longlong)param_2 * 0x68 + 0x1054) + 0x331) =
         *(undefined1 *)((longlong)param_1 + param_3 + 0xca22 + (longlong)param_2 * 6);
    return param_1 + (longlong)param_2 * 0x68 + 0x1054;
  }
  if (param_2 == 0) {
    *(undefined1 *)((longlong)param_1 + 0x4ac1) =
         *(undefined1 *)((longlong)param_1 + param_3 + 0x6370);
    return param_1 + 0x8f2;
  }
  if (param_2 == 1) {
    *(undefined1 *)((longlong)param_1 + 0x4171) =
         *(undefined1 *)((longlong)param_1 + param_3 + 0x636a);
    return param_1 + 0x7c8;
  }
  if (param_2 == 7) {
    *(undefined1 *)((longlong)param_1 + 0x5411) =
         *(undefined1 *)((longlong)param_1 + param_3 + 0x6376);
    return param_1 + 0xa1c;
  }
  return param_1 + 0xb4c;
}

