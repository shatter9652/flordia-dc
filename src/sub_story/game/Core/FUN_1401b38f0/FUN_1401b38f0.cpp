// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401b38f0  size: 757 bytes
// Name:    FUN_1401b38f0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145077bc0, FUN_145077190, FUN_1401b3df0, FUN_1401b3c20, FUN_145077e40, FUN_1404c66f0, FUN_144e96700, FUN_144fac3c0, FUN_1401b4390, FUN_145077900, FUN_1401b40f0, FUN_145077c80, FUN_145077c30, FUN_1401ef860, FUN_1401b4500, FUN_1450778c0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_1401b38f0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined1 auVar11 [16];
  undefined4 uStack_6c;
  int aiStack_68 [10];
  
  lVar2 = FUN_1450778c0(param_2);
  if (lVar2 == 0) {
    return 0;
  }
  uStack_6c = 4;
  FUN_145077c30(*(undefined8 *)(*param_2 + 0x20),&uStack_6c);
  func_0x0001450778a0(param_2,uStack_6c);
  lVar2 = FUN_1401b40f0(param_1,param_2);
  if (lVar2 == 0) {
    *(byte *)(param_1 + 0x48) = *(byte *)(param_1 + 0x48) & 0xfc;
    return 0;
  }
  func_0x00014067b3e0(param_2,lVar2);
  lVar3 = FUN_1401b4500(param_1,param_2);
  if (lVar3 == 0) {
    *(byte *)(param_1 + 0x48) = *(byte *)(param_1 + 0x48) & 0xfd;
    return 0;
  }
  uVar10 = (ulonglong)*(uint *)(param_2 + 1);
  lVar8 = uVar10 * 0x30;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + lVar8);
  lVar9 = lVar1;
  if (lVar1 != 0) goto LAB_1401b3a9b;
  puVar4 = (undefined8 *)FUN_144e96700(0x149fee260);
  if (puVar4 == (undefined8 *)0x0) {
    uVar7 = func_0x000144fc99c0(0,0);
    puVar4 = (undefined8 *)FUN_144fac3c0(uVar7,0xd8,0x10);
    if (puVar4 != (undefined8 *)0x0) goto LAB_1401b39b3;
    puVar5 = *(undefined8 **)(*(longlong *)(param_1 + 0x10) + lVar8);
    if (puVar5 != (undefined8 *)0x0) {
      *(undefined8 *)(*(longlong *)(param_1 + 0x10) + lVar8) = 0;
      goto LAB_1401b3baa;
    }
  }
  else {
LAB_1401b39b3:
    puVar5 = (undefined8 *)FUN_144e96700();
    if (puVar5 == (undefined8 *)0x0) {
      uVar7 = func_0x000144fc99c0(0,0);
      puVar5 = (undefined8 *)FUN_144fac3c0(uVar7,0x30,0x10);
      if (puVar5 != (undefined8 *)0x0) goto LAB_1401b39cb;
      puVar5 = (undefined8 *)0x0;
    }
    else {
LAB_1401b39cb:
      auVar11._0_12_ = ZEXT812(0);
      auVar11._12_4_ = 0;
      puVar5[1] = 0;
      *(undefined4 *)((longlong)puVar5 + 0x14) = 0;
      *puVar5 = &UNK_1465eab90;
      *(undefined1 (*) [16])(puVar5 + 3) = auVar11;
      *(undefined8 *)((longlong)puVar5 + 0x25) = 0;
    }
    FUN_1401b4390(puVar4,puVar5);
    *puVar4 = &UNK_1465eab60;
    puVar5 = *(undefined8 **)(*(longlong *)(param_1 + 0x10) + lVar8);
    if (puVar5 == puVar4) {
      FUN_1404c66f0(puVar4,1);
    }
    else {
      *(undefined8 **)(*(longlong *)(param_1 + 0x10) + lVar8) = puVar4;
      if (puVar5 != (undefined8 *)0x0) {
LAB_1401b3baa:
        (**(code **)*puVar5)(puVar5,1);
      }
    }
  }
  lVar9 = uVar10 * 0x30;
  func_0x0001450778b0(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + lVar9),*param_2,uVar10);
  uVar7 = *(undefined8 *)(*param_2 + 0x20);
  uVar6 = func_0x000144e3bfa0(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + lVar9));
  FUN_145077c80(uVar6,uVar7);
  uVar7 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + lVar9);
  FUN_145077bc0(*(undefined8 *)(*param_2 + 0x20),aiStack_68);
  FUN_145077e40(uVar7,aiStack_68);
  lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x10) + lVar9);
LAB_1401b3a9b:
  func_0x0001401b3c00(lVar9,lVar2,lVar3);
  lVar2 = *param_2;
  FUN_1401b3df0(*(undefined8 *)(lVar2 + 0x20),aiStack_68);
  uVar7 = func_0x0001401b3bf0(lVar9);
  FUN_145077190(lVar2,uVar7,aiStack_68,uVar10);
  if (lVar1 == 0) {
    FUN_1401b3c20(*(undefined8 *)(*param_2 + 0x20),aiStack_68);
    *(int *)(lVar9 + 0x40) = aiStack_68[0];
  }
  else {
    aiStack_68[0] = *(int *)(lVar9 + 0x40);
  }
  if (((aiStack_68[0] == 1) && (*(longlong *)(param_2[2] + 0x2a0) != 0)) &&
     (lVar2 = FUN_1401ef860(*(longlong *)(param_2[2] + 0x2a0),&UNK_1465e4000), lVar2 != 0)) {
    FUN_145077900(param_2[2],lVar2);
  }
  return *(undefined8 *)(*(longlong *)(param_1 + 0x10) + lVar8);
}

