// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140191490  size: 616 bytes
// Name:    FUN_140191490
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145213fe0, FUN_144dd3550, FUN_140192c80, FUN_144dd33e0, FUN_145414e50, FUN_14549ce10, FUN_144e66270
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Removing unreachable block (ram,0x000140951a75) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140191490(longlong param_1,undefined4 param_2)

{
  byte *pbVar1;
  ushort *puVar2;
  byte bVar3;
  uint uVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  undefined8 uVar13;
  undefined1 uVar14;
  undefined1 auStack_58 [24];
  undefined *puStack_40;
  undefined4 auStack_38 [2];
  
  uVar4 = *(uint *)(param_1 + 0x5d8);
  lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x10);
  if (uVar4 != *(uint *)(param_1 + 0xad4)) {
    auStack_58._0_12_ = ZEXT812(0);
    auStack_58._12_4_ = 0;
    uVar7 = func_0x000144ddb100(1);
    cVar5 = FUN_145414e50(uVar7,*(undefined8 *)(lVar9 + 0x10),auStack_58);
    if (cVar5 != '\0') {
      cVar5 = FUN_144dd33e0(auStack_58._0_8_,auStack_58._8_8_,0x34,1);
      if (cVar5 != '\0') {
        FUN_14549ce10(*(undefined8 *)(param_1 + 0x84),0x7585d45d);
      }
    }
    iVar6 = FUN_144e66270(*(undefined4 *)(lVar9 + 0x158));
    if ((iVar6 != -0x1c7030ea) && (iVar6 != 0)) {
      FUN_14549ce10(*(undefined8 *)(param_1 + 0x8c),0x7585d45d);
    }
    *(uint *)(param_1 + 0xad4) = uVar4;
  }
  auStack_58._0_12_ = ZEXT812(0);
  auStack_58._12_4_ = 0;
  uVar7 = func_0x000144ddb100(1);
  cVar5 = FUN_145414e50(uVar7,*(undefined8 *)(lVar9 + 0x10),auStack_58);
  if (cVar5 != '\0') {
    cVar5 = FUN_144dd33e0(auStack_58._0_8_,auStack_58._8_8_,0x34,1);
    if (cVar5 != '\0') {
      lVar10 = param_1 + 0x84;
      lVar8 = func_0x000144da31b0(lVar10);
      if (lVar8 != 0) {
        return;
      }
      uVar7 = func_0x000144ddb100(1);
      FUN_145213fe0(*(undefined4 *)(lVar9 + 0x10),*(undefined4 *)(lVar9 + 0x14),auStack_38);
      lVar9 = FUN_144dd3550(uVar7,auStack_38[0],0x34);
      if (lVar9 == 0) {
        return;
      }
      if (*(ushort *)(lVar9 + 7) == 0) {
        return;
      }
      uVar12 = *(ushort *)(lVar9 + 7) - 1;
      if ((int)uVar4 <= (int)uVar12) {
        uVar12 = uVar4;
      }
      uVar7 = 0;
      uVar13 = *(undefined8 *)(lVar9 + 9 + (longlong)(int)uVar12 * 8);
      uVar14 = 0;
      goto LAB_14019158a;
    }
  }
  lVar10 = func_0x000144da31b0(param_1 + 0x84);
  if (lVar10 == 0) {
    FUN_140192c80(param_1,0,*(undefined8 *)(lVar9 + 0x10),param_1 + 0x84,0,param_2);
  }
  if (0 < (int)uVar4) {
    lVar10 = param_1 + 0x8c;
    lVar8 = func_0x000144da31b0(lVar10);
    if (lVar8 == 0) {
      uVar7 = func_0x000144ddb100(1);
      FUN_145213fe0(*(undefined4 *)(lVar9 + 0x158),*(undefined4 *)(lVar9 + 0x15c),&puStack_40);
      lVar9 = FUN_144dd3550(uVar7,(ulonglong)puStack_40 & 0xffffffff,0x34);
      if (lVar9 == 0) {
        return;
      }
      if (*(ushort *)(lVar9 + 7) == 0) {
        return;
      }
      uVar12 = *(ushort *)(lVar9 + 7) - 1;
      uVar7 = 1;
      if (uVar4 <= uVar12) {
        uVar12 = uVar4;
      }
      uVar13 = *(undefined8 *)(lVar9 + 9 + (ulonglong)uVar12 * 8);
      uVar14 = 1;
LAB_14019158a:
      FUN_140192c80(param_1,uVar7,uVar13,lVar10,uVar14,param_2);
      return;
    }
  }
  puStack_40 = &UNK_14549ce27;
  lVar9 = func_0x000144da31b0(&stack0xfffffffffffffff0);
  if (lVar9 == 0) {
    return;
  }
  auStack_58._8_8_ = &UNK_1409519c6;
  (**(code **)(_DAT_146cee318 + 0x18))(&DAT_146cee318,lVar9);
  lVar8 = _DAT_14ab73aa0;
  iVar6 = _DAT_14ab73a8c;
  uVar11 = (ulonglong)((uint)*(ushort *)(lVar9 + 0xd4) * _DAT_14ab73a8c);
  lVar10 = *(longlong *)(_DAT_14ab73aa0 + 0x8ac0 + (ulonglong)*(byte *)(lVar9 + 0x7e) * 0x8ad0);
  bVar3 = *(byte *)(lVar10 + 0x63a + uVar11);
  *(byte *)(lVar10 + 0x63a + uVar11) = bVar3 & 0xf7 | (bVar3 >> 3 & 1) << 3;
  pbVar1 = (byte *)(*(longlong *)(lVar8 + 0x8ac0 + (ulonglong)*(byte *)(lVar9 + 0x7e) * 0x8ad0) +
                    0x63a + (ulonglong)((uint)*(ushort *)(lVar9 + 0xd4) * iVar6));
  *pbVar1 = *pbVar1 | 4;
  auStack_58._8_8_ = &UNK_140951a3f;
  func_0x0001405f2360(lVar9);
  lVar9 = (ulonglong)(iVar6 * (uint)*(ushort *)(lVar9 + 0xd4)) +
          *(longlong *)(lVar8 + 0x8ac0 + (ulonglong)*(byte *)(lVar9 + 0x7e) * 0x8ad0);
  puVar2 = (ushort *)(lVar9 + 0x3d6 + (ulonglong)uRam000000014764e82c * 0xa0);
  *puVar2 = *puVar2 | 2;
  *(undefined4 *)(lVar9 + 0x5e0) = 0x7585d45d;
  return;
}

