// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14002fe00  size: 145 bytes
// Name:    FUN_14002fe00
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14002fe00(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  int iVar10;
  int iStack_44;
  
  plVar2 = *(longlong **)(param_1 + 0x18);
  if (plVar2 == (longlong *)0x0) {
LAB_14002fe35:
    func_0x000145f40580(param_2,0,(longlong)(int)param_2[2] << 2);
    func_0x000145f40580((longlong)param_2 + 0x14,0,(longlong)*(int *)((longlong)param_2 + 0x24) << 2
                       );
    func_0x000145f40580(param_2 + 5,0,(longlong)(int)param_2[7] << 2);
    func_0x000145f40580((longlong)param_2 + 0x3c,0,(longlong)*(int *)((longlong)param_2 + 0x4c) << 2
                       );
    *(undefined2 *)(param_2 + 10) = 0;
    *(undefined1 *)((longlong)param_2 + 0x52) = 1;
    return;
  }
  cVar5 = (**(code **)(*plVar2 + 8))(plVar2,0x342fb499);
  if (cVar5 == '\0') goto LAB_14002fe35;
  lVar9 = plVar2[2];
  uVar1 = *(undefined4 *)(lVar9 + 0x9c);
  lVar6 = func_0x000144d9f7c0(uVar1);
  lVar3 = *(longlong *)(lVar6 + 0x28d8);
  lVar4 = *(longlong *)(lVar6 + 0x2680);
  lVar7 = func_0x000144e6ea40(uVar1);
  if (lVar7 != 0) {
    uVar8 = func_0x000144e6e9f0(lVar7);
    cVar5 = FUN_1401ff310(uVar8);
    if (cVar5 != '\0') {
      FUN_14013fb30(uVar8,&iStack_44,0xeacea4de);
      goto LAB_14003000b;
    }
  }
  iStack_44 = -0x1b20b92b;
LAB_14003000b:
  if (lVar4 == 0) {
    iVar10 = 0;
  }
  else {
    iVar10 = *(int *)(lVar4 + 8);
  }
  cVar5 = FUN_140030170(lVar6 + 0x1fd0);
  if ((((cVar5 != '\0') || (plVar2[0x57] != lVar3)) || ((int)plVar2[0x58] != iVar10)) ||
     (*(int *)((longlong)plVar2 + 0x2c4) != iStack_44)) {
    plVar2[0x57] = lVar3;
    *(int *)(plVar2 + 0x58) = iVar10;
    iVar10 = iStack_44;
    if (*(longlong *)(lVar6 + 0x2a80) == 0) {
      iVar10 = 0;
    }
    *(int *)((longlong)plVar2 + 0x2c4) = iVar10;
    FUN_140030310(lVar9);
  }
  if (plVar2 + 0x59 != param_2) {
    iVar10 = (int)plVar2[0x5b];
    *(int *)(param_2 + 2) = iVar10;
    if ((longlong)iVar10 != 0) {
      lVar9 = 0;
      do {
        *(undefined4 *)((longlong)param_2 + lVar9) =
             *(undefined4 *)((longlong)(plVar2 + 0x59) + lVar9);
        lVar9 = lVar9 + 4;
      } while ((longlong)iVar10 * 4 != lVar9);
    }
    iVar10 = *(int *)((longlong)plVar2 + 0x2ec);
    *(int *)((longlong)param_2 + 0x24) = iVar10;
    if ((longlong)iVar10 != 0) {
      lVar9 = 0;
      do {
        *(undefined4 *)((longlong)param_2 + lVar9 + 0x14) =
             *(undefined4 *)((longlong)plVar2 + lVar9 + 0x2dc);
        lVar9 = lVar9 + 4;
      } while ((longlong)iVar10 * 4 != lVar9);
    }
    iVar10 = (int)plVar2[0x60];
    *(int *)(param_2 + 7) = iVar10;
    if ((longlong)iVar10 != 0) {
      lVar9 = 0;
      do {
        *(undefined4 *)((longlong)param_2 + lVar9 + 0x28) =
             *(undefined4 *)((longlong)plVar2 + lVar9 + 0x2f0);
        lVar9 = lVar9 + 4;
      } while ((longlong)iVar10 * 4 != lVar9);
    }
    iVar10 = *(int *)((longlong)plVar2 + 0x314);
    *(int *)((longlong)param_2 + 0x4c) = iVar10;
    if ((longlong)iVar10 != 0) {
      lVar9 = 0;
      do {
        *(undefined4 *)((longlong)param_2 + lVar9 + 0x3c) =
             *(undefined4 *)((longlong)plVar2 + lVar9 + 0x304);
        lVar9 = lVar9 + 4;
      } while ((longlong)iVar10 * 4 != lVar9);
    }
  }
  *(undefined1 *)((longlong)param_2 + 0x52) = *(undefined1 *)((longlong)plVar2 + 0x31a);
  *(short *)(param_2 + 10) = (short)plVar2[99];
  *(undefined1 *)((longlong)param_2 + 0x52) = 0;
  return;
}

