// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401222d0  size: 859 bytes
// Name:    FUN_1401222d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144dbce00, FUN_140037a50, FUN_140056cb0, FUN_140056a20, FUN_1428edcb0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401222d0(longlong param_1)

{
  undefined2 uVar1;
  ushort uVar2;
  undefined4 uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  uint *puVar7;
  char cVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong unaff_GS_OFFSET;
  undefined4 uStack_28;
  undefined2 uStack_24;
  
  if (*(char *)(param_1 + 0x188) != '\0') {
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      func_0x0001455db994();
    }
    lVar5 = *(longlong *)(param_1 + 0x128);
    uVar1 = *(undefined2 *)(lVar5 + 0x16);
    uVar3 = *(undefined4 *)(lVar5 + 0x12);
    lVar6 = *(longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x12a8);
    lVar10 = *(longlong *)(lVar5 + 8);
    if ((lVar10 != 0) && ((ushort)(*(short *)(lVar10 + 0x12) - 1U) < _DAT_14a943ab8)) {
      *(undefined1 *)(lVar6 + 0x121a4) = 1;
      uStack_28 = uVar3;
      uStack_24 = uVar1;
      FUN_144dbce00(lVar6,CONCAT71((int7)((ulonglong)lVar5 >> 8),1),lVar10,&uStack_28,0x105);
    }
    FUN_1428edcb0(param_1,lVar6);
    uVar2 = *(ushort *)(param_1 + 0x198);
    if (uVar2 != 0) {
      if (*(longlong *)(lVar6 + 0x39c0 + (ulonglong)(uVar2 >> 2) * 8) !=
          *(longlong *)(param_1 + 0x128)) {
        *(longlong *)(lVar6 + 0x39c0 + (ulonglong)(uVar2 >> 2) * 8) = *(longlong *)(param_1 + 0x128)
        ;
        *(ulonglong *)(lVar6 + 0x20) = *(ulonglong *)(lVar6 + 0x20) | 0x10L << ((byte)uVar2 & 3);
      }
    }
    lVar10 = *(longlong *)(param_1 + 400);
    lVar5 = *(longlong *)(lVar10 + 0xc70) +
            (ulonglong)
            (*(uint *)(*(longlong *)(lVar10 + 0xc68) + (ulonglong)*(byte *)(param_1 + 0x19e) * 4) >>
             0xf & 0x1ff) * 0x18;
    *(longlong *)(lVar6 + 0x12298) = lVar5;
    lVar5 = *(longlong *)(*(longlong *)(lVar10 + 0xc60) + (ulonglong)*(byte *)(lVar5 + 5) * 8);
    lVar10 = *(longlong *)(lVar6 + 0x10);
    if (lVar10 != lVar5) {
      uVar11 = 0x700002f0ff;
      if ((lVar5 != 0) && (lVar10 != 0)) {
        if ((*(longlong **)(lVar10 + 0xe8) == (longlong *)0x0) ||
           (((*(longlong **)(lVar5 + 0xe8) == (longlong *)0x0 ||
             (**(longlong **)(lVar10 + 0xe8) != **(longlong **)(lVar5 + 0xe8))) ||
            (*(char *)(lVar5 + 0x108) != *(char *)(lVar10 + 0x108))))) {
          uVar11 = 0x1011;
        }
        else {
          uVar11 = 0;
        }
        if (((*(longlong **)(lVar10 + 0xf0) == (longlong *)0x0) ||
            (*(longlong **)(lVar5 + 0xf0) == (longlong *)0x0)) ||
           ((**(longlong **)(lVar10 + 0xf0) != **(longlong **)(lVar5 + 0xf0) ||
            (*(char *)(lVar5 + 0x109) != *(char *)(lVar10 + 0x109))))) {
          uVar11 = uVar11 | 0x2022;
        }
        if (((*(longlong **)(lVar10 + 0xf8) == (longlong *)0x0) ||
            (*(longlong **)(lVar5 + 0xf8) == (longlong *)0x0)) ||
           ((**(longlong **)(lVar10 + 0xf8) != **(longlong **)(lVar5 + 0xf8) ||
            (*(char *)(lVar5 + 0x10a) != *(char *)(lVar10 + 0x10a))))) {
          uVar11 = uVar11 | 0x4044;
        }
        if ((((*(longlong **)(lVar10 + 0x100) == (longlong *)0x0) ||
             (*(longlong **)(lVar5 + 0x100) == (longlong *)0x0)) ||
            (**(longlong **)(lVar10 + 0x100) != **(longlong **)(lVar5 + 0x100))) ||
           (*(char *)(lVar5 + 0x10b) != *(char *)(lVar10 + 0x10b))) {
          uVar11 = uVar11 | 0x8088;
        }
        uVar11 = uVar11 | 0x20000;
      }
      *(longlong *)(lVar6 + 0x10) = lVar5;
      *(ulonglong *)(lVar6 + 0x20) = *(ulonglong *)(lVar6 + 0x20) | uVar11;
    }
    uVar4 = *(uint *)(param_1 + 0x174);
    uVar9 = func_0x0001428ede40(*(undefined8 *)(param_1 + 0x120));
    uVar11 = (ulonglong)uVar9 / (ulonglong)uVar4;
    *(undefined1 *)(lVar6 + 0x121a4) = 1;
    FUN_140056a20(lVar6,uVar11,uVar11,uVar9);
    if (((**(uint **)(lVar6 + 0x12198) & 0xc000000) == 0) &&
       (cVar8 = func_0x000144e88f60(lVar6), cVar8 != '\0')) {
      puVar7 = *(uint **)(lVar6 + 0x12198);
      while ((*puVar7 & 0xe000000) != 0x2000000) {
        FUN_140037a50(puVar7,0,1);
      }
      FUN_140056cb0(lVar6);
    }
    lVar10 = func_0x0001428ede70(*(undefined8 *)(param_1 + 0x120));
    lVar5 = *(longlong *)(lVar10 + 8);
    if ((*(ushort *)(lVar5 + 0x10) & 0x1f80) == 0x980) {
      if (_DAT_14a943ab8 <= (ushort)(*(short *)(lVar5 + 0x12) - 1U)) {
        return;
      }
      uStack_24 = *(undefined2 *)(lVar10 + 0x16);
      uStack_28 = *(undefined4 *)(lVar10 + 0x12);
      *(undefined1 *)(lVar6 + 0x121a4) = 1;
    }
    else {
      if (_DAT_14a943ab8 <= (ushort)(*(short *)(lVar5 + 0x12) - 1U)) {
        return;
      }
      *(undefined1 *)(lVar6 + 0x121a4) = 1;
      uStack_28 = 0xffffffff;
      uStack_24 = 0xffff;
    }
    FUN_144dbce00(lVar6,0,lVar5,&uStack_28,0x103);
  }
  return;
}

