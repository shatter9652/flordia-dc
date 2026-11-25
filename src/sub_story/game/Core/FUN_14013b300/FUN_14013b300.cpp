// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14013b300  size: 554 bytes
// Name:    FUN_14013b300
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_142bb3d70
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14013b300(longlong param_1,longlong param_2,char param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  undefined1 in_XMM3 [16];
  undefined1 auVar11 [64];
  undefined1 auVar12 [64];
  float fVar13;
  
  auVar11 = ZEXT1664(in_XMM3);
  lVar6 = (ulonglong)((uint)DAT_14abbe8d0 * 2) * 3;
  uVar4 = (ulonglong)*(byte *)(param_2 + 0x18 + lVar6);
  if (((((((uVar4 == 0x1e) || (lVar5 = *(longlong *)(param_2 + 0xa0 + uVar4 * 8), lVar5 == 0)) ||
         ((*(byte *)(lVar5 + 0x12) & 4) != 0)) &&
        (((uVar4 = (ulonglong)*(byte *)(param_2 + (ulonglong)((uint)DAT_14abbe8d0 * 2) * 3 + 0x19),
          uVar4 == 0x1e || (lVar5 = *(longlong *)(param_2 + 0xa0 + uVar4 * 8), lVar5 == 0)) ||
         ((*(byte *)(lVar5 + 0x12) & 4) != 0)))) &&
       ((((uVar4 = (ulonglong)*(byte *)(param_2 + 0x1a + lVar6), uVar4 == 0x1e ||
          (lVar5 = *(longlong *)(param_2 + 0xa0 + uVar4 * 8), lVar5 == 0)) ||
         ((*(byte *)(lVar5 + 0x12) & 4) != 0)) &&
        (((uVar4 = (ulonglong)*(byte *)(param_2 + 0x1b + lVar6), uVar4 == 0x1e ||
          (lVar5 = *(longlong *)(param_2 + 0xa0 + uVar4 * 8), lVar5 == 0)) ||
         ((*(byte *)(lVar5 + 0x12) & 4) != 0)))))) &&
      (((uVar4 = (ulonglong)*(byte *)(param_2 + 0x1c + lVar6), uVar4 == 0x1e ||
        (lVar5 = *(longlong *)(param_2 + 0xa0 + uVar4 * 8), lVar5 == 0)) ||
       ((*(byte *)(lVar5 + 0x12) & 4) != 0)))) &&
     (((uVar4 = (ulonglong)*(byte *)(param_2 + 0x1d + lVar6), uVar4 == 0x1e ||
       (lVar5 = *(longlong *)(param_2 + 0xa0 + uVar4 * 8), lVar5 == 0)) ||
      ((*(byte *)(lVar5 + 0x12) & 4) != 0)))) {
    lVar5 = 0;
  }
  bVar1 = *(byte *)(lVar5 + 0x114);
  *(bool *)(param_1 + 1) = 1 < bVar1 && (*(byte *)(lVar5 + 0x119) & 8) == 0;
  iVar2 = *(int *)(param_1 + 0x10);
  uVar9 = *(undefined4 *)(param_1 + 0x18);
  *(int *)(param_1 + 0x14) = iVar2;
  iVar3 = _DAT_14abbef44;
  *(int *)(param_1 + 0x10) = _DAT_14abbef44;
  auVar12 = ZEXT464(*(uint *)(param_1 + 0x20));
  uVar7 = iVar3 - iVar2;
  uVar8 = 1;
  if (1 < (int)uVar7) {
    uVar8 = uVar7;
  }
  if ((int)(uint)bVar1 <= (int)uVar8) {
    uVar8 = (uint)bVar1;
  }
  *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x20);
  *(int *)(param_1 + 0x20) = in_XMM3._0_4_;
  *(undefined4 *)(param_1 + 0x1c) = uVar9;
  *(uint *)(param_1 + 0x18) = uVar8;
  if (iVar2 == 0) {
    auVar12 = ZEXT1664(in_XMM3);
    *(int *)(param_1 + 0x24) = in_XMM3._0_4_;
  }
  uVar4 = (ulonglong)CONCAT31((int3)(uVar7 >> 8),*(undefined1 *)(lVar5 + 0x11a)) &
          0xffffffffffffff10;
  uVar10 = func_0x000142bb3cb0(lVar5 + 0xf0,
                               CONCAT71((int7)(uVar4 >> 8),
                                        (byte)uVar4 >> 4 & (*(byte *)(lVar5 + 0xe8) & 9) != 0),iVar3
                               ,iVar3,iVar2);
  uVar4 = (ulonglong)(uint)_DAT_145fc6ed8;
  if (param_3 == '\0') {
    uVar4 = uVar10;
  }
  fVar13 = 0.0;
  if (param_3 == '\0') {
    fVar13 = _DAT_145fc6ed8 - (float)uVar10;
  }
  *(int *)(param_1 + 0xc) = (int)uVar4;
  uVar9 = FUN_142bb3d70(*(undefined4 *)(param_1 + 4),uVar4,uVar8,uVar9,auVar11._0_4_,auVar12._0_4_);
  *(undefined4 *)(param_1 + 8) = uVar9;
  lVar6 = func_0x000144db7870(param_2);
  uVar4 = (ulonglong)*(byte *)(lVar6 + 0xc0 + (ulonglong)DAT_149fee6b8);
  if ((uVar4 != 0xff) && (lVar6 = *(longlong *)(lVar6 + 0x10 + uVar4 * 8), lVar6 != 0)) {
    *(float *)(lVar6 + 0x50) = fVar13;
  }
  return;
}

