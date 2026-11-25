// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14003d350  size: 712 bytes
// Name:    FUN_14003d350
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144fa4cb0, FUN_144de6230, FUN_140debe80, FUN_1440c6320, FUN_144e511b0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14003d350(longlong param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  byte bVar9;
  ulonglong uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  
  uVar5 = _DAT_145fc6f48;
  auVar11._0_12_ = ZEXT812(0);
  auVar11._12_4_ = 0;
  puVar1 = (undefined1 *)(param_1 + 0xc30);
  *(undefined1 (*) [16])(param_1 + 0xc40) = auVar11;
  *(undefined8 *)(param_1 + 0xc50) = 0x1ffff0001ffff;
  *(undefined1 *)(param_1 + 0xc30) = 0;
  *(undefined1 *)(param_1 + 0xcb8) = 1;
  *(undefined8 *)(param_1 + 0xc90) = 0xffffffff00000000;
  uVar2 = vmovlps_avx(ZEXT416(uVar5));
  *(undefined8 *)(param_1 + 0xc58) = uVar2;
  *(undefined4 *)(param_1 + 0xcb4) = 0;
  func_0x00014003d1e0(puVar1);
  func_0x00014003d1f0(puVar1);
  *(undefined8 *)(param_1 + 0xcbc) = 0x1ffff00000000;
  *(undefined4 *)(param_1 + 0xc98) = 0;
  uVar10 = *(ulonglong *)(param_1 + 8);
  uStack_78 = *(undefined8 *)(_DAT_14ab56e38 + 0x70);
  uStack_70 = *(undefined8 *)(_DAT_14ab56e38 + 0x78);
  uVar7 = uVar10 & 0xfffffffffffffff0;
  func_0x000144dc3790(&uStack_78,auStack_58);
  func_0x000144dc3790();
  plVar3 = *(longlong **)((ulonglong)*(byte *)(uVar7 + 0x30) * 8 + 0x14abbe7c0);
  uVar5 = (uint)((uVar7 - *plVar3) / (ulonglong)*(uint *)(plVar3 + 1)) & 0x1ffff;
  *(uint *)(param_1 + 0xc50) =
       (*(byte *)(uVar7 + 0x30) & 0x1f) << 0x11 | uVar5 |
       (*(uint *)(plVar3[5] + (ulonglong)uVar5 * 4) & 0x7fe0000) << 5;
  auVar11 = vsubps_avx(auStack_68,auStack_58);
  auVar12._0_4_ = auVar11._0_4_ * auVar11._0_4_;
  auVar12._4_4_ = auVar11._4_4_ * auVar11._4_4_;
  auVar12._8_4_ = auVar11._8_4_ * auVar11._8_4_;
  auVar12._12_4_ = auVar11._12_4_ * auVar11._12_4_;
  auVar11 = vhaddps_avx(auVar12,auVar12);
  *(int *)(param_1 + 0xc58) = auVar11._0_4_;
  cVar4 = FUN_1440c6320(uVar7);
  if (cVar4 == '\0') {
    return;
  }
  uVar8 = *(undefined4 *)(param_1 + 100);
  cVar4 = FUN_144e511b0(uVar10,uVar8,0,0);
  if (cVar4 != '\0') {
    lVar6 = func_0x00014003d9a0(uVar10);
    if (*(longlong *)(lVar6 + 0x78) != 0) goto LAB_14003d566;
    uVar10 = *(ulonglong *)(param_1 + 8);
    uVar8 = *(undefined4 *)(param_1 + 100);
  }
  cVar4 = FUN_144e511b0(uVar10,uVar8,1,0);
  if (cVar4 != '\0') {
    lVar6 = func_0x00014003d9a0(uVar10);
    if (*(longlong *)(lVar6 + 0x78) != 0) goto LAB_14003d566;
    uVar10 = *(ulonglong *)(param_1 + 8);
    uVar8 = *(undefined4 *)(param_1 + 100);
  }
  cVar4 = FUN_144e511b0(uVar10,uVar8,2,0);
  if (cVar4 != '\0') {
    lVar6 = func_0x00014003d9a0(uVar10);
    if (*(longlong *)(lVar6 + 0x78) != 0) goto LAB_14003d566;
    uVar10 = *(ulonglong *)(param_1 + 8);
    uVar8 = *(undefined4 *)(param_1 + 100);
  }
  cVar4 = FUN_144e511b0(uVar10,uVar8,3,0);
  if (cVar4 == '\0') {
    return;
  }
  lVar6 = func_0x00014003d9a0(uVar10);
  if (*(longlong *)(lVar6 + 0x78) == 0) {
    return;
  }
LAB_14003d566:
  uVar8 = *(undefined4 *)(uVar7 + 0x9c);
  lVar6 = func_0x000144dd1230(uVar8);
  if (lVar6 == 0) {
    bVar9 = 0;
  }
  else {
    bVar9 = *(byte *)(lVar6 + 0x10);
  }
  lVar6 = FUN_144de6230(uVar8);
  if (lVar6 == 0) {
    lVar6 = FUN_140debe80(uVar7);
    if (lVar6 == 0) {
      uVar5 = 0x1ffff;
    }
    else {
      plVar3 = *(longlong **)((ulonglong)*(byte *)(lVar6 + 0x30) * 8 + 0x14abbe7c0);
      uVar5 = (uint)((ulonglong)(lVar6 - *plVar3) / (ulonglong)*(uint *)(plVar3 + 1)) & 0x1ffff;
      uVar5 = (*(byte *)(lVar6 + 0x30) & 0x1f) << 0x11 | uVar5 |
              (*(uint *)(plVar3[5] + (ulonglong)uVar5 * 4) & 0x7fe0000) << 5;
    }
    *(uint *)(param_1 + 0xcc0) = uVar5;
  }
  if ((bVar9 & 1) == 0) {
    *puVar1 = 1;
    lVar6 = FUN_144fa4cb0(_DAT_14ab7f650,uVar7,0);
    if (lVar6 != 0) {
      *(undefined4 *)(param_1 + 0xc98) = *(undefined4 *)(lVar6 + 0x110);
    }
  }
  return;
}

