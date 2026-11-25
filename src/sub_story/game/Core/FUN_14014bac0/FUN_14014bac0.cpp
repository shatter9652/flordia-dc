// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14014bac0  size: 252 bytes
// Name:    FUN_14014bac0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1407fbdd0, FUN_1450a0ab0, FUN_14014bbe0, FUN_14014c2b0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14014bac0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  byte bVar5;
  undefined8 uVar6;
  
  lVar2 = param_1[6];
  if ((int)lVar2 == 2) {
    return;
  }
  lVar1 = param_1[9];
  cVar4 = func_0x00014014bbc0(lVar1);
  if (cVar4 != '\0') {
    lVar3 = param_1[0x22];
    cVar4 = FUN_1407fbdd0((int)param_1[4],param_1[5],
                          *(undefined4 *)(*(longlong *)(lVar1 + 0x38) + 8));
    *(char *)(param_1 + 0x22) = cVar4;
    bVar5 = 1;
    if ((((*(char *)((longlong)param_1 + 0x111) != '\0') || (cVar4 != '\0')) ||
        ((char)lVar3 == '\0')) && (cVar4 = func_0x0001442376d0(param_1 + 0x15), cVar4 != '\0')) {
      bVar5 = func_0x0001442376d0(param_1 + 0x19);
      bVar5 = bVar5 ^ 1;
    }
    *(byte *)((longlong)param_1 + 0x111) = bVar5;
  }
  if ((int)lVar2 == 0) {
    uVar6 = func_0x0001450a0aa0();
    cVar4 = FUN_1450a0ab0(uVar6,*(undefined4 *)(lVar1 + 0x28),param_1 + 0x1e,param_1 + 0x20);
    if (cVar4 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x00014014bbb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x48))(param_1);
      return;
    }
  }
  else if (*(char *)(lVar1 + 0x30) != '\x01') {
    cVar4 = FUN_14014c2b0(param_1);
    goto LAB_14014bb19;
  }
  cVar4 = FUN_14014bbe0(param_1,0);
LAB_14014bb19:
  if ((cVar4 == '\0') && ((int)param_1[6] == 1)) {
    *(undefined4 *)(param_1 + 6) = 2;
  }
  return;
}

