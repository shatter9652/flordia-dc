// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14001f430  size: 68 bytes
// Name:    FUN_14001f430
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


longlong * FUN_14001f430(longlong *param_1,int param_2,ulonglong param_3)

{
  uint uVar1;
  
  param_3 = param_3 & 0xffffffff;
  uVar1 = (**(code **)(*param_1 + 0x18))();
  if ((2 < uVar1) && (uVar1 == 3)) {
    *(undefined1 *)((longlong)(param_1 + (longlong)param_2 * 0x5a + 0xc76) + 0x2c2) =
         *(undefined1 *)((longlong)param_1 + param_3 + 0xca20 + (longlong)param_2 * 6);
    return param_1 + (longlong)param_2 * 0x5a + 0xc76;
  }
  if (param_2 == 1) {
    *(undefined1 *)((longlong)param_1 + 0x3e32) =
         *(undefined1 *)((longlong)param_1 + param_3 + 0x6368);
    return param_1 + 0x76e;
  }
  if (param_2 == 0) {
    *(undefined1 *)((longlong)param_1 + 0x4782) =
         *(undefined1 *)((longlong)param_1 + param_3 + 0x636e);
    return param_1 + 0x898;
  }
  if (param_2 == 7) {
    *(undefined1 *)((longlong)param_1 + 0x50d2) =
         *(undefined1 *)((longlong)param_1 + param_3 + 0x6374);
    return param_1 + 0x9c2;
  }
  return param_1 + 0xaf2;
}

