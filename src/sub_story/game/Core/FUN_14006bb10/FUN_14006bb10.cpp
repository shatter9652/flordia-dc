// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14006bb10  size: 107 bytes
// Name:    FUN_14006bb10
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144ec05b0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_14006bb10(longlong param_1,uint param_2,undefined8 *param_3)

{
  longlong lVar1;
  int iVar2;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  if ((((param_1 != 0) && (-1 < (int)param_2)) &&
      (iVar2 = (int)*(short *)(**(longlong **)(*(longlong *)(param_1 + 0x20) + 0xf8) +
                              (ulonglong)param_2 * 2), iVar2 != -1)) &&
     (lVar1 = func_0x00014506c3d0(*(undefined4 *)(param_1 + 0x9c)), lVar1 != 0)) {
    FUN_144ec05b0(&uStack_28,*(undefined8 *)(lVar1 + 0xb0),iVar2);
    *param_3 = uStack_28;
    param_3[1] = uStack_20;
    return 1;
  }
  return 0;
}

