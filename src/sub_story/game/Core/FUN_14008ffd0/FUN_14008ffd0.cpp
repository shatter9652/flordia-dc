// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14008ffd0  size: 819 bytes
// Name:    FUN_14008ffd0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144da5fd0, FUN_140113b30, FUN_1402e5b80, FUN_14130e3d0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14008ffd0(longlong param_1,int *param_2)

{
  short sVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  short sVar5;
  ulonglong uVar6;
  longlong lStack_68;
  longlong lStack_60;
  longlong lStack_58;
  longlong lStack_50;
  longlong *plStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  
  if (*param_2 != 4) {
    if (*param_2 == 3) {
      *(undefined2 *)(param_1 + 0x28) = 0;
      *(undefined2 *)(param_1 + 0x38) = 0;
      lVar2 = *(longlong *)(param_1 + 0x10);
      if (lVar2 != 0) {
        lVar4 = param_1 + 0x20;
        lVar3 = param_1 + 0x30;
        FUN_144da5fd0(lVar2 + 0x80 + (ulonglong)*(uint *)(lVar2 + 0x78) * 0x30,0x32788d11,lVar4);
        FUN_144da5fd0(lVar2 + 0x80 + (ulonglong)*(uint *)(lVar2 + 0x78) * 0x30,0x1d318936,lVar4);
        FUN_144da5fd0(lVar2 + 0x80 + (ulonglong)*(uint *)(lVar2 + 0x78) * 0x30,0x1a835830,lVar4);
        FUN_144da5fd0(lVar2 + 0x80 + (ulonglong)*(uint *)(lVar2 + 0x78) * 0x30,0xf4fc6cfe,lVar4);
        FUN_144da5fd0(lVar2 + 0x80 + (ulonglong)*(uint *)(lVar2 + 0x78) * 0x30,0x1d8508ea,lVar4);
        FUN_144da5fd0(lVar2 + 0x80 + (ulonglong)*(uint *)(lVar2 + 0x78) * 0x30,0x9dabd1e7,lVar4);
        FUN_144da5fd0(lVar2 + 0x80 + (ulonglong)*(uint *)(lVar2 + 0x78) * 0x30,0xb26fe576,lVar4);
        FUN_144da5fd0(lVar2 + 0x80 + (ulonglong)*(uint *)(lVar2 + 0x78) * 0x30,0x9d19ddec,lVar3);
        FUN_144da5fd0(lVar2 + 0x80 + (ulonglong)*(uint *)(lVar2 + 0x78) * 0x30,0xf7ab50a9,lVar3);
        FUN_144da5fd0(lVar2 + 0x80 + (ulonglong)*(uint *)(lVar2 + 0x78) * 0x30,0xdd4b1cd,lVar3);
        FUN_144da5fd0(lVar2 + 0x80 + (ulonglong)*(uint *)(lVar2 + 0x78) * 0x30,0x2265f751,lVar3);
        if (*(short *)(param_1 + 0x38) != 0 || *(short *)(param_1 + 0x28) != 0) {
          *(undefined1 *)(lVar2 + 0x208) = 1;
        }
      }
    }
    return;
  }
  sVar1 = *(short *)(param_1 + 0x28);
  sVar5 = *(short *)(param_1 + 0x38);
  if (sVar1 == 0 && sVar5 == 0) {
    return;
  }
  lVar2 = *(longlong *)(param_1 + 0x10);
  if (lVar2 == 0) {
    return;
  }
  lVar4 = **(longlong **)(*(longlong *)(lVar2 + 0x1d0) + 8);
  lVar3 = lVar4;
  if (*(char *)(lVar4 + 0x30) != '\x03') {
    if (*(char *)(lVar4 + 0x30) != '\x04') {
      return;
    }
    lVar3 = func_0x000144fc0920(*(undefined4 *)(lVar4 + 0x9c));
    if (lVar3 == 0) {
      return;
    }
    lVar3 = FUN_140113b30(*(undefined4 *)(lVar3 + 0x14),*(undefined8 *)(lVar3 + 0x18));
    if (lVar3 == 0) {
      return;
    }
  }
  if (DAT_149977320 == '\x01') {
    if (sVar1 != 0) {
      plStack_48 = &lStack_68;
      puStack_40 = &UNK_1437d4b90;
      puStack_38 = &UNK_1403a85f0;
      puStack_30 = &SUB_140004380;
      lStack_68 = param_1;
      lStack_60 = lVar3;
      lStack_58 = lVar4;
      lStack_50 = lVar2;
      FUN_1402e5b80(4);
      sVar5 = *(short *)(param_1 + 0x38);
    }
    if (sVar5 == 0) {
      return;
    }
    plStack_48 = &lStack_68;
    puStack_40 = &UNK_1437d4bb0;
    puStack_38 = &UNK_141b7b630;
    puStack_30 = &SUB_140004380;
    lStack_68 = param_1;
    lStack_60 = lVar3;
    lStack_58 = lVar2;
    FUN_1402e5b80(4);
    return;
  }
  if (sVar1 != 0) {
    FUN_14130e3d0(param_1,lVar4,*(undefined4 *)(lVar3 + 0x9c),lVar2);
    sVar5 = *(short *)(param_1 + 0x38);
  }
  if (sVar5 != 0) {
    lVar4 = func_0x00014549d080(*(undefined4 *)(lVar3 + 0x9c));
    if (lVar4 == 0) {
      puStack_30 = (undefined *)CONCAT71(puStack_30._1_7_,1);
      puStack_38 = (undefined *)CONCAT71(puStack_38._1_7_,1);
      puStack_40 = (undefined *)CONCAT71(puStack_40._1_7_,1);
      plStack_48 = (longlong *)CONCAT71(plStack_48._1_7_,1);
      FUN_14052a0c0(_DAT_14ab56e30,lVar3,*(undefined2 *)(lVar3 + 0xc0),0x20027);
      lVar4 = func_0x00014549d080(*(undefined4 *)(lVar3 + 0x9c));
      if (lVar4 == 0) {
        return;
      }
    }
    if (*(short *)(param_1 + 0x38) != 0) {
      uVar6 = 0;
      do {
        func_0x000142976960(lVar4,*(undefined8 *)(*(longlong *)(param_1 + 0x30) + uVar6 * 8),lVar2);
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(ushort *)(param_1 + 0x38));
    }
    return;
  }
  return;
}

