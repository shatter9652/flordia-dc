// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140127220  size: 208 bytes
// Name:    FUN_140127220
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1451cca70, FUN_140279ff0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140127220(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  
  lVar1 = param_1[10];
  cVar2 = func_0x000144ddb170((short)lVar1);
  if (cVar2 != '\0') {
    cVar2 = FUN_1451cca70((short)lVar1);
    if (cVar2 == '\0') {
      cVar2 = FUN_140279ff0((short)param_1[10]);
      if (cVar2 != '\0') goto LAB_140127250;
    }
    (**(code **)(*param_1 + 0x48))(param_1);
    cVar2 = FUN_1451cca70((short)param_1[10]);
    if ((cVar2 != '\0') && (*(int *)((longlong)param_1 + 0x54) != 6)) {
      (**(code **)(*param_1 + 0x20))(param_1);
      *(int *)((longlong)param_1 + 0x14) =
           (int)(longlong)((float)*(uint *)(_DAT_14a924088 + 0x1548) * _DAT_14615ee98);
      *(undefined4 *)((longlong)param_1 + 0x2c) =
           *(undefined4 *)(&DAT_14aa31a7c + (ulonglong)*(uint *)((longlong)param_1 + 0x5c) * 0x20);
      *(undefined4 *)((longlong)param_1 + 0x44) = _DAT_14abbef40;
      func_0x0001411b0bc0(param_1,5);
                    /* WARNING: Could not recover jumptable at 0x0001401272e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x18))(param_1);
      return;
    }
    return;
  }
LAB_140127250:
  if ((int)param_1[0xb] == 0) {
    func_0x0001411b0bc0(param_1,6);
    *(undefined4 *)(param_1 + 0xb) = 3;
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

