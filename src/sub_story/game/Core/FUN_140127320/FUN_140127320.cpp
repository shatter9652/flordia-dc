// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140127320  size: 121 bytes
// Name:    FUN_140127320
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140127320(longlong *param_1,undefined4 param_2)

{
  if ((int)param_1[0xb] == 0) {
    func_0x0001411b0bc0(param_1,6);
    *(undefined4 *)(param_1 + 0xb) = param_2;
    *(int *)((longlong)param_1 + 0x1c) =
         (int)(longlong)((float)*(uint *)(_DAT_14a924088 + 0x1548) * _DAT_14615ee98);
    *(undefined4 *)((longlong)param_1 + 0x34) =
         *(undefined4 *)(&DAT_14aa31a7c + (ulonglong)*(uint *)((longlong)param_1 + 0x5c) * 0x20);
    *(undefined4 *)((longlong)param_1 + 0x4c) = _DAT_14abbef40;
                    /* WARNING: Could not recover jumptable at 0x00014012738d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x30))(param_1);
    return;
  }
  return;
}

