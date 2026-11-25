// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14018e5b0  size: 285 bytes
// Name:    FUN_14018e5b0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1452b3070, FUN_1453b65a0, FUN_140192fc0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Removing unreachable block (ram,0x000140951a75) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14018e5b0(longlong param_1,char param_2)

{
  byte *pbVar1;
  ushort *puVar2;
  byte bVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  char cVar7;
  longlong lVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  undefined1 auStack_3c8 [760];
  undefined4 uStack_d0;
  undefined8 uStack_50;
  undefined *puStack_40;
  undefined1 uStack_38;
  byte bStack_32;
  
  if (*(longlong *)(param_1 + 0x78) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x80) - 2U < 2) {
    lVar8 = func_0x000144da31b0(param_1 + 0xd4);
    if (lVar8 == 0) {
      return;
    }
    puStack_40 = &UNK_14549ce27;
    lVar8 = func_0x000144da31b0(&stack0xfffffffffffffff0);
    if (lVar8 == 0) {
      return;
    }
    uStack_50 = &UNK_1409519c6;
    (**(code **)(_DAT_146cee318 + 0x18))(&DAT_146cee318,lVar8);
    lVar6 = _DAT_14ab73aa0;
    iVar5 = _DAT_14ab73a8c;
    uVar10 = (ulonglong)((uint)*(ushort *)(lVar8 + 0xd4) * _DAT_14ab73a8c);
    lVar4 = *(longlong *)(_DAT_14ab73aa0 + 0x8ac0 + (ulonglong)*(byte *)(lVar8 + 0x7e) * 0x8ad0);
    bVar3 = *(byte *)(lVar4 + 0x63a + uVar10);
    *(byte *)(lVar4 + 0x63a + uVar10) = bVar3 & 0xf7 | (bVar3 >> 3 & 1) << 3;
    pbVar1 = (byte *)(*(longlong *)(lVar6 + 0x8ac0 + (ulonglong)*(byte *)(lVar8 + 0x7e) * 0x8ad0) +
                      0x63a + (ulonglong)((uint)*(ushort *)(lVar8 + 0xd4) * iVar5));
    *pbVar1 = *pbVar1 | 4;
    uStack_50 = &UNK_140951a3f;
    func_0x0001405f2360(lVar8);
    lVar8 = (ulonglong)(iVar5 * (uint)*(ushort *)(lVar8 + 0xd4)) +
            *(longlong *)(lVar6 + 0x8ac0 + (ulonglong)*(byte *)(lVar8 + 0x7e) * 0x8ad0);
    puVar2 = (ushort *)(lVar8 + 0x3d6 + (ulonglong)uRam000000014764e82c * 0xa0);
    *puVar2 = *puVar2 | 2;
    *(undefined4 *)(lVar8 + 0x5e0) = 0x7585d45d;
    return;
  }
  if (*(int *)(param_1 + 0x80) != 1) {
    return;
  }
  lVar8 = func_0x000144da31b0(param_1 + 0xd4);
  if (lVar8 != 0) {
    return;
  }
  FUN_1452b3070(auStack_3c8);
  uStack_38 = 0;
  bStack_32 = bStack_32 | 2;
  if (param_2 != '\0') {
    uStack_d0 = 2000;
  }
  lVar8 = func_0x000144da3240(*(undefined8 *)(param_1 + 0x40));
  lVar8 = func_0x0001450572a0(*(undefined4 *)(lVar8 + 0x9c));
  if ((*(byte *)(lVar8 + 0x11) & 0x40) == 0) {
    uVar9 = func_0x000144da3240(*(undefined8 *)(param_1 + 0x40));
    cVar7 = FUN_1453b65a0(uVar9,0x1b);
    if (cVar7 == '\0') goto LAB_14018e697;
  }
  uStack_d0 = 5000;
LAB_14018e697:
  FUN_140192fc0(param_1,10,
                *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x48) + 0x10) + 0x114),
                param_1 + 0xd4,auStack_3c8);
  func_0x000144de1380((longlong)&uStack_50 + 2);
  return;
}

