// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14002ff90  size: 480 bytes
// Name:    FUN_14002ff90
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401ff310, FUN_140030310, FUN_140030170, FUN_14013fb30
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14002ff90(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  int iVar9;
  int iStack_44;
  
  lVar8 = *(longlong *)(param_1 + 0x10);
  uVar1 = *(undefined4 *)(lVar8 + 0x9c);
  lVar5 = func_0x000144d9f7c0(uVar1);
  lVar2 = *(longlong *)(lVar5 + 0x28d8);
  lVar3 = *(longlong *)(lVar5 + 0x2680);
  lVar6 = func_0x000144e6ea40(uVar1);
  if (lVar6 != 0) {
    uVar7 = func_0x000144e6e9f0(lVar6);
    cVar4 = FUN_1401ff310(uVar7);
    if (cVar4 != '\0') {
      FUN_14013fb30(uVar7,&iStack_44,0xeacea4de);
      goto LAB_14003000b;
    }
  }
  iStack_44 = -0x1b20b92b;
LAB_14003000b:
  if (lVar3 == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = *(int *)(lVar3 + 8);
  }
  cVar4 = FUN_140030170(lVar5 + 0x1fd0);
  if ((((cVar4 != '\0') || (*(longlong *)(param_1 + 0x2b8) != lVar2)) ||
      (*(int *)(param_1 + 0x2c0) != iVar9)) || (*(int *)(param_1 + 0x2c4) != iStack_44)) {
    *(longlong *)(param_1 + 0x2b8) = lVar2;
    *(int *)(param_1 + 0x2c0) = iVar9;
    iVar9 = iStack_44;
    if (*(longlong *)(lVar5 + 0x2a80) == 0) {
      iVar9 = 0;
    }
    *(int *)(param_1 + 0x2c4) = iVar9;
    FUN_140030310(lVar8);
  }
  if (param_1 + 0x2c8 != param_2) {
    iVar9 = *(int *)(param_1 + 0x2d8);
    *(int *)(param_2 + 0x10) = iVar9;
    if ((longlong)iVar9 != 0) {
      lVar8 = 0;
      do {
        *(undefined4 *)(param_2 + lVar8) = *(undefined4 *)(param_1 + 0x2c8 + lVar8);
        lVar8 = lVar8 + 4;
      } while ((longlong)iVar9 * 4 != lVar8);
    }
    iVar9 = *(int *)(param_1 + 0x2ec);
    *(int *)(param_2 + 0x24) = iVar9;
    if ((longlong)iVar9 != 0) {
      lVar8 = 0;
      do {
        *(undefined4 *)(param_2 + 0x14 + lVar8) = *(undefined4 *)(param_1 + 0x2dc + lVar8);
        lVar8 = lVar8 + 4;
      } while ((longlong)iVar9 * 4 != lVar8);
    }
    iVar9 = *(int *)(param_1 + 0x300);
    *(int *)(param_2 + 0x38) = iVar9;
    if ((longlong)iVar9 != 0) {
      lVar8 = 0;
      do {
        *(undefined4 *)(param_2 + 0x28 + lVar8) = *(undefined4 *)(param_1 + 0x2f0 + lVar8);
        lVar8 = lVar8 + 4;
      } while ((longlong)iVar9 * 4 != lVar8);
    }
    iVar9 = *(int *)(param_1 + 0x314);
    *(int *)(param_2 + 0x4c) = iVar9;
    if ((longlong)iVar9 != 0) {
      lVar8 = 0;
      do {
        *(undefined4 *)(param_2 + 0x3c + lVar8) = *(undefined4 *)(param_1 + 0x304 + lVar8);
        lVar8 = lVar8 + 4;
      } while ((longlong)iVar9 * 4 != lVar8);
    }
  }
  *(undefined1 *)(param_2 + 0x52) = *(undefined1 *)(param_1 + 0x31a);
  *(undefined2 *)(param_2 + 0x50) = *(undefined2 *)(param_1 + 0x318);
  *(undefined1 *)(param_2 + 0x52) = 0;
  return;
}

