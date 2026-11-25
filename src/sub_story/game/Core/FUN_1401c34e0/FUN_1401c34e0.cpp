// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401c34e0  size: 630 bytes
// Name:    FUN_1401c34e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14551d360
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


longlong *
FUN_1401c34e0(longlong param_1,longlong param_2,longlong param_3,ulonglong param_4,longlong param_5,
             char param_6)

{
  ulonglong uVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 unaff_RBP;
  longlong lVar9;
  longlong *plVar10;
  
  lVar9 = 0;
  if (7 < param_4) {
    lVar9 = param_4 - 8;
  }
  uVar1 = lVar9 + param_3;
  uVar8 = lVar9 + 7 + param_3;
  if (uVar8 < 0x100) {
    uVar8 = *(ulonglong *)(param_1 + 0x7c0 + (uVar8 & 0xfffffffffffffff8));
  }
  else {
    uVar8 = 0xd;
    if ((((((0x100 < uVar1) && (uVar8 = 0xe, 0x140 < uVar1)) && (uVar8 = 0xf, 400 < uVar1)) &&
         ((uVar8 = 0x10, 0x200 < uVar1 && (uVar8 = 0x11, 0x290 < uVar1)))) &&
        ((uVar8 = 0x12, 0x340 < uVar1 &&
         ((uVar8 = 0x13, 0x430 < uVar1 && (uVar8 = 0x14, 0x530 < uVar1)))))) &&
       ((uVar8 = 0x15, 0x6f0 < uVar1 &&
        (((uVar8 = 0x16, 0x8f0 < uVar1 && (uVar8 = 0x17, 0xfb0 < uVar1)) &&
         (uVar8 = 0x18, 0x14f0 < uVar1)))))) {
      uVar8 = (ulonglong)(uVar1 < 0x2001) - 1 | 0x19;
    }
  }
  lVar9 = param_1 + 0x1a0;
  if (param_6 == '\0') {
    lVar9 = param_1;
  }
  lVar9 = lVar9 + 0x110;
LAB_1401c3625:
  if ((*(longlong *)(lVar9 + uVar8 * 8) == 0) &&
     (cVar2 = FUN_14551d360(param_1,uVar8,
                            CONCAT71((int7)((ulonglong)unaff_RBP >> 8),param_6) & 0xffffffff),
     cVar2 == '\0')) {
    if ((*(char *)(param_1 + 0xf90) == '\0') || (*(undefined1 *)(param_1 + 0xf91) = 1, 0x19 < uVar8)
       ) {
      return (longlong *)0x0;
    }
    while (*(longlong *)(lVar9 + uVar8 * 8) == 0) {
      uVar8 = uVar8 + 1;
      if (uVar8 == 0x1a) {
        return (longlong *)0x0;
      }
    }
    lVar5 = *(longlong *)(lVar9 + uVar8 * 8);
    if (lVar5 == 0) {
      return (longlong *)0x0;
    }
  }
  else {
    lVar5 = *(longlong *)(lVar9 + uVar8 * 8);
    if (lVar5 == 0) goto LAB_1401c3625;
  }
  plVar10 = *(longlong **)(lVar5 + 0x10);
  if (plVar10 != (longlong *)0x0) {
    lVar6 = *plVar10;
    if (lVar6 == 0) {
      lVar6 = *(longlong *)(lVar5 + 0x28);
      plVar3 = (longlong *)(lVar9 + uVar8 * 8);
      LOCK();
      lVar4 = *plVar3;
      if (lVar5 == lVar4) {
        *plVar3 = lVar6;
        lVar4 = lVar5;
      }
      UNLOCK();
      if (lVar5 == lVar4) {
        *(undefined8 *)(lVar5 + 0x10) = 0;
        *(undefined8 *)(lVar5 + 0x28) = 0;
        goto LAB_1401c36c9;
      }
    }
    else {
      LOCK();
      plVar3 = *(longlong **)(lVar5 + 0x10);
      if (plVar10 == plVar3) {
        *(longlong *)(lVar5 + 0x10) = lVar6;
        plVar3 = plVar10;
      }
      UNLOCK();
      if (plVar10 == plVar3) {
LAB_1401c36c9:
        LOCK();
        *(short *)(lVar5 + 8) = *(short *)(lVar5 + 8) + 1;
        UNLOCK();
        uVar8 = (longlong)plVar10 + param_5;
        if (((uVar8 & param_4 - 1) != 0) &&
           (uVar7 = -param_4 & (param_4 - 1) + uVar8, plVar10 != (longlong *)(uVar7 - param_5))) {
          uVar8 = (uVar7 - uVar8) - 8 & 0xfffffffffffffff8;
          func_0x000145f40580(plVar10,CONCAT71((int7)((ulonglong)lVar6 >> 8),0xcc),uVar8 + 8);
          plVar10 = (longlong *)((longlong)plVar10 + uVar8 + 8);
        }
        LOCK();
        *(longlong *)(param_1 + 0x8f0) = *(longlong *)(param_1 + 0x8f0) + uVar1;
        UNLOCK();
        if (*(int *)(*(longlong *)(param_1 + 0xf98) + 0x3a1c) == 0) {
          LOCK();
          *(longlong *)(param_1 + 0x8f8) = *(longlong *)(param_1 + 0x8f8) + uVar1;
          UNLOCK();
        }
        *plVar10 = param_2;
        return plVar10;
      }
    }
  }
  goto LAB_1401c3625;
}

