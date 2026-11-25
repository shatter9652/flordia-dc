// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14014fb70  size: 171 bytes
// Name:    FUN_14014fb70
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14066f180, FUN_14014fc20
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14014fb70(longlong param_1,ushort param_2)

{
  longlong lVar1;
  uint uVar2;
  
  lVar1 = _DAT_14a9b1210;
  uVar2 = (uint)param_2;
  if ((((*(ushort *)(param_1 + 0xc0) != param_2) || (*(ushort *)(param_1 + 0xc2) != param_2)) &&
      (uVar2 < _DAT_14a9b1208)) && (*(longlong *)(_DAT_14a9b1210 + (ulonglong)uVar2 * 8) != 0)) {
    *(ushort *)(param_1 + 0xc2) = param_2;
    (**(code **)(lVar1 + (ulonglong)uVar2 * 8))(param_1);
    if (*(ushort *)(param_1 + 0xc0) != param_2) {
      FUN_14066f180(param_1);
      FUN_14014fc20(_DAT_14ab56e30,param_1,*(undefined2 *)(param_1 + 0xc2));
      if (*(char *)(param_1 + 0x30) == '\x03') {
        func_0x0001456a9540(*(undefined8 *)(_DAT_14ab56e30 + 0xf90),*(undefined4 *)(param_1 + 0x9c))
        ;
      }
      *(ushort *)(param_1 + 0xc2) = param_2;
      *(ushort *)(param_1 + 0xc0) = param_2;
    }
  }
  return;
}

