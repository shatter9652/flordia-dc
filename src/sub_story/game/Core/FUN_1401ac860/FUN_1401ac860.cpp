// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401ac860  size: 649 bytes
// Name:    FUN_1401ac860
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_142f66010, FUN_1401bd1f0, FUN_14052a0c0, FUN_1401abd40, FUN_145224aa0, FUN_1401aa530, FUN_1403c9020
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401ac860(longlong param_1)

{
  uint uVar1;
  undefined1 auVar2 [16];
  char cVar3;
  byte bVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  bool bVar9;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined1 auStack_a0 [16];
  undefined4 uStack_90;
  undefined2 uStack_8c;
  undefined1 uStack_8a;
  undefined1 auStack_88 [16];
  undefined4 *puStack_78;
  undefined4 uStack_6c;
  undefined1 auStack_68 [72];
  
  cVar3 = func_0x0001400c3df0(*(undefined1 *)(param_1 + 0x92));
  if (cVar3 != '\0') {
    return;
  }
  uVar1 = *(uint *)(param_1 + 0x20);
  if (uVar1 == 0x1ffff) {
    return;
  }
  uVar8 = *(uint *)(_DAT_14abb6918[5] + (ulonglong)(uVar1 & 0x1ffff) * 4);
  if ((~uVar8 & *(uint *)(_DAT_14abb6918 + 6)) != 0) {
    return;
  }
  uVar8 = uVar8 & 0x7fe0000;
  if (uVar8 != (uVar1 & 0xfffe0000)) {
    return;
  }
  if (*_DAT_14abb6918 == 0) {
    return;
  }
  lVar7 = *_DAT_14abb6918 + (ulonglong)((uVar1 & 0x1ffff) * (int)_DAT_14abb6918[1]);
  uVar5 = FUN_1401abd40(param_1,CONCAT71((uint7)(uint3)((uVar1 & 0xfffe0000) >> 8),1),uVar8,0);
  *(undefined4 *)(param_1 + 0x68) = uVar5;
  FUN_145224aa0(auStack_68,lVar7);
  lVar6 = func_0x0001454dcdb0(*(undefined4 *)(lVar7 + 0x9c));
  if (lVar6 == 0) {
    FUN_14052a0c0(_DAT_14ab56e30,lVar7,*(undefined2 *)(lVar7 + 0xc0),0x11,1,1,1,1,5);
    lVar6 = func_0x0001454dcdb0(*(undefined4 *)(lVar7 + 0x9c));
    if (lVar6 == 0) goto LAB_1401ac916;
  }
  *(byte *)(lVar6 + 0x84) = *(byte *)(lVar6 + 0x84) | 2;
LAB_1401ac916:
  FUN_1401bd1f0(auStack_a0,0,0);
  auStack_88._0_12_ = ZEXT812(0);
  auStack_88._12_4_ = 0;
  uStack_90 = 0xffffffff;
  uStack_b0 = 0;
  uStack_a8 = 0;
  puStack_78 = (undefined4 *)0x0;
  FUN_1403c9020(auStack_a0);
  uStack_90 = 0xffffffff;
  uStack_8c = 0x100;
  uStack_8a = 0;
  if (auStack_88._4_4_ != 0) {
    auStack_88._4_4_ = 0;
  }
  auStack_88._8_4_ = 0;
  if (puStack_78 != (undefined4 *)0x0) {
    func_0x000144d9c130();
  }
  uStack_b0 = CONCAT44(uStack_b0._4_4_,0x94b56f02);
  uVar5 = *(undefined4 *)(param_1 + 0x68);
  puStack_78 = (undefined4 *)func_0x000144d9c140(4,4);
  *puStack_78 = uVar5;
  auStack_88._8_4_ = auStack_88._8_4_;
  auStack_88._0_8_ = 0x100000001;
  auStack_88._12_4_ = 0;
  bVar4 = FUN_1401aa530(param_1);
  if (bVar4 == 0) {
    bVar9 = false;
  }
  else {
    uStack_6c = 0xd34253f0;
    FUN_142f66010(auStack_88);
    bVar9 = auStack_88._4_4_ == 0;
  }
  *(byte *)(param_1 + 0x94) = *(byte *)(param_1 + 0x94) & 0xfe | bVar4;
  cVar3 = func_0x0001401acaf0(auStack_68,0x7dd27eab,&uStack_b0);
  *(byte *)(param_1 + 0x92) = *(byte *)(param_1 + 0x92) & 0xfb | cVar3 << 2;
  if (!bVar9) {
    auStack_88._4_4_ = 0;
  }
  auStack_88._8_8_ = 0;
  if (puStack_78 != (undefined4 *)0x0) {
    func_0x000144d9c130();
  }
  auVar2._12_4_ = 0;
  auVar2._0_12_ = auStack_88._4_12_;
  auStack_88 = auVar2 << 0x20;
  puStack_78 = (undefined4 *)0x0;
  FUN_1403c9020(auStack_a0);
  return;
}

