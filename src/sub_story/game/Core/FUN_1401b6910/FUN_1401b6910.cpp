// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401b6910  size: 382 bytes
// Name:    FUN_1401b6910
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140458a60, FUN_140458a90, FUN_144e96700, FUN_14045a030, FUN_144fac3c0, FUN_145e0e0e0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1401b6910(longlong param_1,ulonglong param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  longlong lStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  
  if (1 < *(int *)(param_1 + 0x44) - 1U) {
    return param_3;
  }
  lVar4 = *(longlong *)(param_1 + 0x50);
  lVar3 = (param_2 & 0xffffffff) * 0x10;
  lStack_50 = param_3;
  if (*(longlong *)(lVar4 + lVar3) != 0) goto LAB_1401b69a5;
  lVar1 = FUN_144e96700(0x149ab0660);
  if (lVar1 == 0) {
    uVar2 = func_0x000144fc99c0(0,0);
    lVar1 = FUN_144fac3c0(uVar2,0x40,0x10);
    if (lVar1 != 0) goto LAB_1401b6975;
    lVar1 = 0;
  }
  else {
LAB_1401b6975:
    auVar5._4_4_ = _DAT_145fc6ed8;
    auVar5._0_4_ = _DAT_145fc6ed8;
    auVar5._8_4_ = _DAT_145fc6ed8;
    auVar5._12_4_ = _DAT_145fc6ed8;
    *(undefined8 *)(lVar1 + 0x10) = 0;
    *(undefined1 (*) [16])(lVar1 + 0x20) = auVar5;
    *(undefined1 *)(lVar1 + 0x30) = 0;
  }
  if (*(longlong *)(lVar4 + lVar3) != 0) {
    FUN_145e0e0e0();
  }
  *(longlong *)(lVar4 + lVar3) = lVar1;
  lVar4 = *(longlong *)(param_1 + 0x50);
LAB_1401b69a5:
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  if (param_3 == 0) {
    lVar1 = 0;
  }
  else {
    func_0x0001401b6a90(*(undefined8 *)(lVar4 + lVar3));
    func_0x000140198500(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + lVar3),&lStack_50);
    lVar4 = *(longlong *)(param_1 + 0x50);
    lVar1 = lStack_50;
  }
  func_0x0001404598d0(*(undefined8 *)(lVar4 + lVar3),&uStack_40);
  uStack_44 = 0;
  uStack_48 = 0;
  FUN_140458a60(uVar2,&uStack_44);
  FUN_140458a90(uVar2,&uStack_48);
  FUN_14045a030(param_1,0xc49e0888,uStack_40,uStack_44,uStack_48,*(int *)(param_1 + 0x44) == 1);
  return lVar1;
}

