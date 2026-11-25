// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401277f0  size: 106 bytes
// Name:    FUN_1401277f0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1409519a0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401277f0(longlong *param_1)

{
  longlong lVar1;
  double dVar2;
  
  dVar2 = (double)func_0x0001409d2080(param_1[0x43]);
  if (dVar2 < (double)*(uint *)(param_1 + 0x3f) * _DAT_14615bcc0 + (double)param_1[0x3e]) {
    return;
  }
  lVar1 = func_0x000144da31b0(param_1 + 0x46);
  if (lVar1 != 0) {
    FUN_1409519a0(lVar1,1,0x7585d45d);
  }
  if ((int)param_1[0xb] == 0) {
    func_0x0001411b0bc0(param_1,6);
    *(undefined4 *)(param_1 + 0xb) = 6;
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

