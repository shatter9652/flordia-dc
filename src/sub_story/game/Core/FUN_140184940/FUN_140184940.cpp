// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140184940  size: 625 bytes
// Name:    FUN_140184940
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1445578a0, FUN_14503e0d0, FUN_140184d90, FUN_145183eb0, FUN_14456a0f0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_140184940(longlong param_1,undefined8 param_2)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  undefined1 auVar7 [64];
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 auStack_88 [88];
  
  if ((*(longlong *)(param_1 + 0x20) != 0) &&
     ((*(longlong *)(param_1 + 0xc0) == 0 ||
      (*(longlong *)(*(longlong *)(param_1 + 0xc0) + 0x18) == 0)))) {
    uVar1 = *(ushort *)(param_1 + 0x4a);
    uVar6 = 2;
    if ((uVar1 & 0x40) == 0) {
      uVar6 = (uint)((uVar1 & 0xc) == 4);
    }
    lVar2 = **(longlong **)(param_1 + 0xb0);
    if ((*(byte *)(lVar2 + 0xf) & 0x10) == 0) {
      lVar4 = (ulonglong)(byte)(&UNK_146631d34)[(ulonglong)(*(byte *)(lVar2 + 0xf) & 0xf) * 5] *
              0x10;
      uStack_a8 = *(undefined4 *)(lVar2 + 0x10 + lVar4);
      uStack_a4 = *(undefined4 *)(lVar2 + 0x14 + lVar4);
      uStack_a0 = *(undefined4 *)(lVar2 + 0x18 + lVar4);
      uStack_9c = *(undefined4 *)(lVar2 + 0x1c + lVar4);
      uStack_98 = *(undefined4 *)(lVar2 + 0x20 + lVar4);
      uStack_94 = *(undefined4 *)(lVar2 + 0x24 + lVar4);
      uStack_90 = *(undefined4 *)(lVar2 + 0x28 + lVar4);
      uStack_8c = *(undefined4 *)(lVar2 + 0x2c + lVar4);
    }
    else {
      FUN_1445578a0(param_1,auStack_88);
      lVar2 = param_1;
      if (*(longlong *)(param_1 + 0x28) == 0) {
        lVar2 = *(longlong *)(param_1 + 0x30);
      }
      uVar3 = FUN_14503e0d0(*(undefined8 *)(lVar2 + 0x28));
      FUN_14456a0f0(param_1,param_2,uVar3,&uStack_a8,auStack_88);
    }
    lVar2 = param_1;
    if (*(longlong *)(param_1 + 0x28) == 0) {
      lVar2 = *(longlong *)(param_1 + 0x30);
    }
    iVar5 = uVar6 + (uVar1 >> 7 & 1) * 8;
    lVar2 = FUN_14503e0d0(*(undefined8 *)(lVar2 + 0x28));
    auVar7 = ZEXT464(*(uint *)(lVar2 + 0x98));
    lVar2 = param_1;
    if (*(longlong *)(param_1 + 0x28) == 0) {
      lVar2 = *(longlong *)(param_1 + 0x30);
    }
    lVar2 = FUN_14503e0d0(*(undefined8 *)(lVar2 + 0x28));
    puVar8 = &uStack_a8;
    uVar10 = 0;
    FUN_145183eb0(param_1,param_2,*(undefined8 *)(lVar2 + 0x90),auVar7._0_8_,puVar8,iVar5,0);
    uVar9 = (undefined4)((ulonglong)puVar8 >> 0x20);
    if (((*(char *)(param_1 + 0xd0) == '\0') && (*(longlong *)(param_1 + 0x98) != 0)) &&
       (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x98) + 0x58) + 0x20) != 0)) {
      func_0x00014538eaf0(auStack_88);
      lVar2 = param_1;
      if (*(longlong *)(param_1 + 0x28) == 0) {
        lVar2 = *(longlong *)(param_1 + 0x30);
      }
      lVar2 = FUN_14503e0d0(*(undefined8 *)(lVar2 + 0x28));
      (**(code **)(*(longlong *)(*(longlong *)(lVar2 + 0x90) + 0x10) + 0x60))
                (*(longlong *)(lVar2 + 0x90) + 0x10,param_2,
                 *(undefined8 *)(*(longlong *)(param_1 + 0xc0) + 0x18),auStack_88,
                 CONCAT44(uVar9,*(undefined4 *)(param_1 + 0xd4)),0,CONCAT44(uVar10,iVar5));
      FUN_140184d90(param_1 + 0xb0,auStack_88,0);
    }
  }
  if (*(longlong *)(param_1 + 0xc0) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0xc0) + 0x18);
  }
  return uVar3;
}

