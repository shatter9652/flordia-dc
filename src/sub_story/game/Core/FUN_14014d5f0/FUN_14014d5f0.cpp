// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14014d5f0  size: 574 bytes
// Name:    FUN_14014d5f0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14501bb00, FUN_14014da20, FUN_14014d9d0, FUN_14014d950, FUN_1450bc1b0, FUN_14014d990, FUN_14014d830, FUN_14014d8e0, FUN_14014e480, FUN_14014e670, FUN_14014d8a0, FUN_14014e8f0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14014d5f0(longlong *param_1)

{
  uint uVar1;
  uint uVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  byte bVar8;
  
  if (param_1[2] != 0) {
    uVar5 = FUN_14014da20(param_1[2],0,0,0);
    FUN_1450bc1b0(param_1 + 8,uVar5);
    uVar5 = FUN_14501bb00(param_1[2],0,0);
    FUN_1450bc1b0(param_1 + 10,uVar5);
    uVar1 = *(uint *)(param_1[2] + 0x10);
    uVar7 = (ulonglong)uVar1 & 0x1ffff;
    lVar6 = 0;
    if (uVar7 != 0x1ffff) {
      plVar3 = *(longlong **)((ulonglong)(uVar1 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0);
      if (plVar3 == (longlong *)0x0) {
        lVar6 = 0;
      }
      else {
        uVar2 = *(uint *)(plVar3[5] + uVar7 * 4);
        lVar6 = 0;
        if (uVar1 >> 0x16 == (uVar2 >> 0x11 & 0x3ff) &&
            (uVar2 & *(uint *)(plVar3 + 6)) == *(uint *)(plVar3 + 6)) {
          lVar6 = (ulonglong)(uint)((int)plVar3[1] * (int)uVar7) + *plVar3;
        }
      }
    }
    FUN_1450bc1b0(param_1 + 4,lVar6);
    uVar5 = func_0x0001405e46f0(*(undefined4 *)(param_1[2] + 0x10));
    FUN_1450bc1b0(param_1 + 6,uVar5);
  }
  lVar6 = func_0x000145226dc0(*(undefined4 *)(*param_1 + 0x9c));
  if ((lVar6 != 0) && (uVar1 = *(uint *)(lVar6 + 0x660), uVar1 != 0x1ffff)) {
    uVar2 = *(uint *)(_DAT_14abb6918[5] + (ulonglong)(uVar1 & 0x1ffff) * 4);
    if (((~uVar2 & *(uint *)(_DAT_14abb6918 + 6)) == 0) &&
       ((uVar2 & 0x7fe0000) == (uVar1 & 0xfffe0000))) {
      lVar6 = (ulonglong)((uVar1 & 0x1ffff) * (int)_DAT_14abb6918[1]) + *_DAT_14abb6918;
      goto LAB_14014d692;
    }
  }
  lVar6 = 0;
LAB_14014d692:
  FUN_1450bc1b0(param_1 + 0xc,lVar6);
  cVar4 = FUN_14014d830(param_1);
  if (((cVar4 != '\0') && (param_1[2] != 0)) &&
     (lVar6 = func_0x00014041e240(*(undefined4 *)(param_1[2] + 100)), lVar6 != 0)) {
    FUN_1450bc1b0(param_1 + 6,lVar6);
  }
  cVar4 = FUN_14014d8e0(param_1);
  if (((cVar4 != '\0') &&
      (lVar6 = func_0x000144da6540(*(undefined4 *)(*param_1 + 0x9c)), lVar6 != 0)) &&
     ((*(longlong *)(lVar6 + 0x10c0) != 0 &&
      (*(longlong *)(*(longlong *)(lVar6 + 0x10c0) + 0x1290) != 0)))) {
    FUN_1450bc1b0(param_1 + 6);
  }
  FUN_14014e8f0(param_1);
  FUN_14014d9d0(param_1);
  FUN_14014e480(param_1);
  FUN_14014d950(param_1);
  FUN_14014e670(param_1);
  FUN_14014d990(param_1);
  FUN_14014d8e0(param_1);
  FUN_14014d830(param_1);
  FUN_14014d8a0(param_1);
  bVar8 = *(byte *)((longlong)param_1 + 0x72);
  if ((bVar8 & 4) == 0) {
    *(byte *)((longlong)param_1 + 0x72) = bVar8 | 4;
    if (param_1[7] != 0) {
      if (*param_1 == param_1[7]) {
        bVar8 = bVar8 | 0xc;
      }
      else {
        cVar4 = FUN_14014ea20();
        bVar8 = *(byte *)((longlong)param_1 + 0x72) & 0xf7 | cVar4 << 3;
      }
      *(byte *)((longlong)param_1 + 0x72) = bVar8;
    }
  }
  return;
}

