// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14012afe0  size: 817 bytes
// Name:    FUN_14012afe0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1404f6220, FUN_1422341a0, FUN_14012b420, FUN_143519f00, FUN_14012b320, FUN_144fdb460, FUN_141b3dfc0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14012afe0(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  char cVar5;
  byte bVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined1 auStack_34 [4];
  
  lVar10 = *(longlong *)(param_1 + 8);
  uVar11 = *(undefined4 *)(lVar10 + 0x9c);
  lVar7 = func_0x000144da6540(uVar11);
  if (lVar7 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = *(longlong *)(lVar7 + 0x10c0);
  }
  lVar8 = FUN_14012b420(lVar7,auStack_34);
  if (lVar8 != 0) {
    cVar5 = func_0x00014501bbd0(*(undefined4 *)(lVar8 + 0x60),*(undefined1 *)(lVar8 + 0xb0));
    if (cVar5 != '\0') {
      bVar6 = (*(byte *)(lVar8 + 0x10c) & 8) >> 3;
      goto LAB_14012b02b;
    }
  }
  bVar6 = 0;
LAB_14012b02b:
  if (((*(char *)(lVar7 + 0x1280) != '\x01') || ((bVar6 | *(byte *)(lVar7 + 0x1281)) == 1)) &&
     (cVar5 = func_0x000144da28f0(uVar11), cVar5 != '\0')) {
    lVar7 = func_0x000144da6540(uVar11);
    if ((lVar7 != 0) && (*(longlong *)(lVar7 + 0x10e8) != 0)) {
      uVar1 = *(uint *)(*(longlong *)(lVar7 + 0x10e8) + 0x10);
      uVar9 = (ulonglong)uVar1 & 0x1ffff;
      if ((uVar9 == 0x1ffff) ||
         (plVar4 = *(longlong **)((ulonglong)(uVar1 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0),
         plVar4 == (longlong *)0x0)) {
        lVar7 = 0;
      }
      else {
        uVar3 = *(uint *)(plVar4[5] + uVar9 * 4);
        lVar7 = 0;
        if (uVar1 >> 0x16 == (uVar3 >> 0x11 & 0x3ff) &&
            (uVar3 & *(uint *)(plVar4 + 6)) == *(uint *)(plVar4 + 6)) {
          lVar7 = (ulonglong)(uint)((int)plVar4[1] * (int)uVar9) + *plVar4;
        }
      }
      uVar1 = *(uint *)(param_1 + 0x14f0);
      uVar9 = (ulonglong)uVar1 & 0x1ffff;
      if ((uVar9 == 0x1ffff) ||
         (plVar4 = *(longlong **)((ulonglong)(uVar1 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0),
         plVar4 == (longlong *)0x0)) {
        lVar8 = 0;
      }
      else {
        uVar3 = *(uint *)(plVar4[5] + uVar9 * 4);
        lVar8 = 0;
        if (uVar1 >> 0x16 == (uVar3 >> 0x11 & 0x3ff) &&
            (uVar3 & *(uint *)(plVar4 + 6)) == *(uint *)(plVar4 + 6)) {
          lVar8 = (ulonglong)(uint)((int)plVar4[1] * (int)uVar9) + *plVar4;
        }
      }
      if (lVar7 == lVar8) {
        FUN_14012b320();
        uVar11 = *(undefined4 *)(lVar10 + 0x9c);
      }
    }
    lVar7 = func_0x000144da6540(uVar11);
    iVar2 = *(int *)(*(longlong *)(lVar7 + 0x10d0) + 0x14);
    uVar1 = *(uint *)(*(longlong *)(lVar7 + 0x10d0) + 0x18);
    cVar5 = FUN_1404f6220(lVar10);
    if (cVar5 == '\0') {
      cVar5 = func_0x00014501bbd0(*(undefined4 *)(param_1 + 0x14f0),
                                  *(undefined1 *)(param_1 + 0x1540));
      if (cVar5 != '\0') {
        cVar5 = func_0x00014501bbd0(*(undefined4 *)(param_1 + 0xfc0),
                                    *(undefined1 *)(param_1 + 0x1010));
        if ((cVar5 == '\0') && ((uVar1 == 0 || (((uVar1 & 0xfffffffd) == 5 && (iVar2 == 0)))))) {
          FUN_141b3dfc0();
        }
      }
    }
    cVar5 = func_0x00014501bbd0(*(undefined4 *)(param_1 + 0x14f0),*(undefined1 *)(param_1 + 0x1540))
    ;
    if (cVar5 != '\0') {
      FUN_1422341a0();
      *(undefined4 *)(param_1 + 0x15b4) = _DAT_14abbef40;
      FUN_143519f00(param_1 + 0x1490,0);
    }
    cVar5 = func_0x00014501bbd0(*(undefined4 *)(param_1 + 0xfc0),*(undefined1 *)(param_1 + 0x1010));
    if (((cVar5 != '\0') &&
        (lVar10 = func_0x000144da6540(*(undefined4 *)(lVar10 + 0x9c)), lVar10 != 0)) &&
       (lVar10 = *(longlong *)(lVar10 + 0x10b8), lVar10 != 0)) {
      uVar11 = *(undefined4 *)(lVar10 + 0x14);
      cVar5 = func_0x000144fa2360(uVar11);
      if (cVar5 != '\0') {
        *(byte *)(param_1 + 0x106e) = *(byte *)(param_1 + 0x106e) | 2;
        *(byte *)(param_1 + 0x106f) = *(byte *)(param_1 + 0x106f) | 4;
        uVar11 = *(undefined4 *)(lVar10 + 0x14);
      }
      cVar5 = func_0x000140793d90(uVar11);
      if (cVar5 != '\0') {
        *(byte *)(param_1 + 0x106f) = *(byte *)(param_1 + 0x106f) | 0x10;
        *(byte *)(param_1 + 0x106e) = *(byte *)(param_1 + 0x106e) | 2;
      }
    }
    FUN_144fdb460(param_1 + 0x1490);
    if ((param_2 != 0) &&
       ((*(byte *)(*(longlong *)(*(longlong *)(param_2 + 0x28) + 0x10) + 0x351) & 0x80) == 0)) {
      *(undefined4 *)(param_1 + 0x18) = 0xbf800000;
    }
  }
  return;
}

