// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401273a0  size: 548 bytes
// Name:    FUN_1401273a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140127870, FUN_141bdf310, FUN_145b65b60, FUN_1401275f0, FUN_141149d60, FUN_140128430
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1401273a0(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
  
  iVar4 = *(int *)(param_1 + 0x94);
  if (iVar4 == 0) {
    lVar6 = **(longlong **)(param_1 + 0x78);
    if (*(char *)(lVar6 + 0x650) == '\0') {
      dVar7 = (double)FUN_1401275f0(param_1);
      dVar8 = (double)func_0x0001401275d0(param_1);
      if (dVar7 < dVar8) {
        lVar6 = **(longlong **)(param_1 + 0x78);
        goto LAB_1401273ef;
      }
      uVar5 = 1;
LAB_140127402:
      iVar4 = *(int *)(param_1 + 0x94);
      goto LAB_140127408;
    }
LAB_1401273ef:
    cVar3 = func_0x000144da2930(*(undefined4 *)(lVar6 + 0x61c));
    uVar5 = 0;
    if (cVar3 == '\0') goto LAB_140127402;
    uVar5 = 0;
    *(undefined4 *)(param_1 + 0x94) = 1;
LAB_14012743f:
    uVar1 = *(uint *)(param_1 + 0xd8);
    if ((((uVar1 == 0x1ffff) ||
         (uVar2 = *(uint *)(_DAT_149eddc80[5] + (ulonglong)(uVar1 & 0x1ffff) * 4),
         0x1ffff < (uVar1 ^ uVar2))) ||
        ((uVar2 & *(uint *)(_DAT_149eddc80 + 6)) != *(uint *)(_DAT_149eddc80 + 6))) ||
       (*_DAT_149eddc80 == 0)) {
      FUN_145b65b60(param_1 + 0xd0);
    }
    cVar3 = FUN_140127870(*(undefined4 *)(**(longlong **)(param_1 + 0x78) + 0x61c),
                          *(undefined8 *)(param_1 + 0xa8));
    if (((cVar3 == '\0') || (uVar1 = *(uint *)(param_1 + 0xd8), uVar1 == 0x1ffff)) ||
       ((uVar2 = *(uint *)(_DAT_149eddc80[5] + (ulonglong)(uVar1 & 0x1ffff) * 4),
        0x1ffff < (uVar1 ^ uVar2) ||
        (((uVar2 & *(uint *)(_DAT_149eddc80 + 6)) != *(uint *)(_DAT_149eddc80 + 6) ||
         (*_DAT_149eddc80 == 0)))))) {
LAB_1401275a6:
      FUN_140128430(param_1 + -0x10);
    }
    else {
      iVar4 = FUN_141149d60(param_1);
      if (iVar4 != 0) {
        if (iVar4 != 1) goto LAB_1401275a6;
        if ((*(char *)(**(longlong **)(param_1 + 0x78) + 0x650) == '\0') &&
           (lVar6 = func_0x0001451dc190(*(undefined8 *)(param_1 + 0xa8)), lVar6 != 0)) {
          FUN_141bdf310(lVar6);
          *(undefined4 *)(param_1 + 0x94) = 2;
          goto LAB_140127551;
        }
      }
    }
  }
  else {
    uVar5 = 0;
LAB_140127408:
    if (iVar4 == 1) goto LAB_14012743f;
  }
  if (*(int *)(param_1 + 0x94) != 2) {
    return uVar5;
  }
LAB_140127551:
  if ((*(char *)(**(longlong **)(param_1 + 0x78) + 0x650) == '\0') &&
     (cVar3 = FUN_140127870(*(undefined4 *)(**(longlong **)(param_1 + 0x78) + 0x61c),
                            *(undefined8 *)(param_1 + 0xa8)), cVar3 != '\0')) {
    lVar6 = func_0x0001451dc190(*(undefined8 *)(param_1 + 0xa8));
    if (lVar6 == 0) {
      uVar5 = 1;
    }
  }
  else {
    FUN_140128430(param_1 + -0x10);
  }
  return uVar5;
}

