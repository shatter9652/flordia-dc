// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14014fb20  size: 72 bytes
// Name:    FUN_14014fb20
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140150620, FUN_1408e97e0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14014fb20(longlong param_1,ushort param_2)

{
  longlong lVar1;
  
  if (param_2 == 0) {
    param_2 = FUN_1408e97e0(*(undefined8 *)(param_1 + 0x20),param_1);
  }
  else if (param_2 == 10) {
    if (*(short *)(param_1 + 0xc0) != 0) {
      FUN_140150620(param_1);
    }
    param_2 = 10;
  }
  lVar1 = lRam000000014a9b1210;
  if ((((*(ushort *)(param_1 + 0xc0) != param_2) || (*(ushort *)(param_1 + 0xc2) != param_2)) &&
      (param_2 < uRam000000014a9b1208)) &&
     (*(longlong *)(lRam000000014a9b1210 + (ulonglong)param_2 * 8) != 0)) {
    *(ushort *)(param_1 + 0xc2) = param_2;
    (**(code **)(lVar1 + (ulonglong)param_2 * 8))(param_1);
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

