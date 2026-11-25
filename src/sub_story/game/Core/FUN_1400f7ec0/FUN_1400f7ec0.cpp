// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400f7ec0  size: 833 bytes
// Name:    FUN_1400f7ec0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_141b25a60, FUN_145098030, FUN_1433e33f0, FUN_144f917a0, FUN_14054ec00
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1400f7ec0(longlong param_1,char param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong *plVar3;
  byte bVar4;
  char cVar5;
  undefined4 uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  undefined8 auStack_68 [2];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  if ((param_2 == '\0') &&
     (cVar5 = func_0x000144decb80(*(undefined2 *)(param_1 + 2)), cVar5 == '\0')) {
    uVar10 = 0x80;
    goto LAB_1400f81ba;
  }
  uVar7 = *(uint *)(param_1 + 0xc);
  uVar12 = (ulonglong)uVar7;
  if (uVar12 != 0x1ffff) {
    if ((uVar12 & 0x1ffff) == 0x1ffff) {
      return 0;
    }
    plVar3 = *(longlong **)((ulonglong)(uVar7 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0);
    if (plVar3 == (longlong *)0x0) {
      return 0;
    }
    uVar2 = *(uint *)(plVar3[5] + (uVar12 & 0x1ffff) * 4);
    if ((uVar2 >> 0x11 & 0x3ff) != uVar7 >> 0x16) {
      return 0;
    }
    if ((uVar2 & *(uint *)(plVar3 + 6)) != *(uint *)(plVar3 + 6)) {
      return 0;
    }
    if (*plVar3 == 0) {
      return 0;
    }
  }
  if (param_2 == '\0') {
    uVar12 = (ulonglong)(uVar7 & 0x1ffff);
LAB_1400f804f:
    bVar4 = DAT_1498e6ba0;
    DAT_1498e6ba0 = 1;
    _DAT_1498d79f0 = param_1;
    DAT_1498e6ba1 = param_2;
    if ((((int)uVar12 == 0x1ffff) ||
        (plVar3 = *(longlong **)((ulonglong)(uVar7 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0),
        plVar3 == (longlong *)0x0)) ||
       ((uVar2 = *(uint *)(plVar3[5] + uVar12 * 4), (uVar2 >> 0x11 & 0x3ff) != uVar7 >> 0x16 ||
        (((uVar2 & *(uint *)(plVar3 + 6)) != *(uint *)(plVar3 + 6) || (*plVar3 == 0)))))) {
      lVar8 = FUN_1433e33f0(_DAT_14ab5d000,*(undefined8 *)(param_1 + 0x40),param_1,5,1,auStack_68);
    }
    else {
      lVar8 = FUN_141b25a60(_DAT_14ab5d000,*(undefined8 *)(param_1 + 0x40),
                            *plVar3 + (ulonglong)(uint)((int)uVar12 * (int)plVar3[1]),0x11,
                            auStack_68);
    }
    DAT_1498e6ba0 = bVar4 & 1;
    _DAT_1498d79f0 = 0;
    DAT_1498e6ba1 = 0;
    if (lVar8 != 0) {
      lVar9 = FUN_145098030(lVar8);
      if (lVar9 == 0) {
        FUN_14054ec00(param_1,0x20);
        FUN_144f917a0(_DAT_14ab5d000,lVar8,1,1);
        return 0;
      }
      if (param_2 == '\0') {
        *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(lVar9 + 0x5b8);
        return lVar9;
      }
      uVar7 = (uint)((ulonglong)(lVar9 - *_DAT_1498f1478) / (ulonglong)*(uint *)(_DAT_1498f1478 + 1)
                    ) & 0x1ffff;
      *(uint *)(param_1 + 8) =
           *(uint *)(_DAT_1498f1478[5] + (ulonglong)uVar7 * 4) & 0xfffe0000 | uVar7;
      uVar7 = (uint)((ulonglong)(lVar8 - *_DAT_14ab7f648) / (ulonglong)*(uint *)(_DAT_14ab7f648 + 1)
                    ) & 0x1ffff;
      *(uint *)(param_1 + 4) =
           *(uint *)(_DAT_14ab7f648[5] + (ulonglong)uVar7 * 4) & 0xfffe0000 | uVar7;
      return lVar9;
    }
  }
  else {
    uVar12 = uVar12 & 0x1ffff;
    if ((((uVar12 == 0x1ffff) ||
         (plVar3 = *(longlong **)((ulonglong)(uVar7 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0),
         plVar3 == (longlong *)0x0)) ||
        (uVar2 = *(uint *)(plVar3[5] + uVar12 * 4), (uVar2 >> 0x11 & 0x3ff) != uVar7 >> 0x16)) ||
       (((uVar2 & *(uint *)(plVar3 + 6)) != *(uint *)(plVar3 + 6) || (*plVar3 == 0)))) {
      puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x30);
    }
    else {
      puVar11 = auStack_68;
      puVar1 = (undefined8 *)(*plVar3 + 0x70 + (ulonglong)(uint)((int)plVar3[1] * (int)uVar12));
      uStack_48 = *puVar1;
      uStack_40 = puVar1[1];
      func_0x000144dc3790(&uStack_48,puVar11);
    }
    uStack_58 = *puVar11;
    uStack_50 = puVar11[1];
    uVar6 = func_0x0001455b9660();
    lVar8 = func_0x0001400f6fe0(uVar6);
    if (lVar8 == 0) goto LAB_1400f804f;
  }
  uVar10 = 0x20;
LAB_1400f81ba:
  FUN_14054ec00(param_1,uVar10);
  return 0;
}

