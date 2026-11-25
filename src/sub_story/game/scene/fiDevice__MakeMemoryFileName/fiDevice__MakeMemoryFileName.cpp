// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14274c250  size: 1231 bytes
// Name:    fiDevice::MakeMemoryFileName
// Subsystem: core
// Class:   fiDevice
//
// Evidence:
//   GTAVSRC: fiDevice::MakeMemoryFileName  (game/scene/DownloadableTextureManager.cpp)
//   literal: DownloadedTexture
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14249b800, FUN_1457d1ec0, FUN_1451fbd80, FUN_14186c9c0, FUN_1414e7eb0, FUN_141962d10, FUN_14249bd10, FUN_140979820, FUN_14501f4a0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"
#include "gta6decomp/fiDevice.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 fiDevice__MakeMemoryFileName(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  byte bVar14;
  undefined4 uVar15;
  undefined1 auVar16 [16];
  undefined4 *in_stack_ffffffffffffff28;
  undefined4 *in_stack_ffffffffffffff30;
  uint uStack_a8;
  uint uStack_a4;
  byte bStack_9d;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined1 auStack_90 [4];
  undefined1 auStack_8c [4];
  undefined1 auStack_88 [72];
  
  uVar1 = *(uint *)(param_1 + 0xa0);
  if (uVar1 < 4) {
    return 0;
  }
  plVar2 = *(longlong **)(param_1 + 0x98);
  if (*(char *)(param_1 + 0x75) == '\x01') {
    in_stack_ffffffffffffff28 = (undefined4 *)(param_1 + 0xec);
    in_stack_ffffffffffffff30 = (undefined4 *)(param_1 + 0xe0);
    cVar4 = (**(code **)(param_1 + 0x78))
                      (plVar2,uVar1,param_1 + 0xe4,param_1 + 0xe8,in_stack_ffffffffffffff28,
                       in_stack_ffffffffffffff30);
    if (cVar4 == '\0') {
      uVar8 = 4;
      uVar11 = 0x567;
      uVar13 = 0xf89a3236;
      goto LAB_14274c704;
    }
    *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_1 + 0xa0);
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 4) = 4;
LAB_14274c3aa:
    bVar3 = true;
  }
  else {
    if ((int)*plVar2 == 0x20534444) {
      FUN_1414e7eb0(auStack_88,0x40,plVar2,uVar1,
                    (ulonglong)in_stack_ffffffffffffff28 & 0xffffffffffffff00,&UNK_146782005);
      in_stack_ffffffffffffff28 = &uStack_94;
      in_stack_ffffffffffffff30 = &uStack_98;
      FUN_14249b800(auStack_88,&bStack_9d,&uStack_a4,&uStack_a8,in_stack_ffffffffffffff28,
                    in_stack_ffffffffffffff30,&uStack_9c,auStack_8c,auStack_90);
      *(uint *)(param_1 + 0xe4) = uStack_a4;
      *(uint *)(param_1 + 0xe8) = uStack_a8;
      *(undefined4 *)(param_1 + 0xec) = uStack_94;
      *(uint *)(param_1 + 0xe0) = (uint)bStack_9d;
      *(undefined4 *)(param_1 + 0xf0) = uStack_9c;
      *(undefined4 *)(param_1 + 0xf4) = uStack_98;
      *(undefined4 *)(param_1 + 4) = 2;
      goto LAB_14274c3aa;
    }
    bVar3 = false;
  }
  iVar9 = 0;
  if (((short)*plVar2 != -0x2701) || (bVar3)) {
    bVar14 = 0;
  }
  else {
    bVar14 = 0;
    iVar9 = 0;
    if ((*plVar2 & 0xe0ff0000) == 0xe0ff0000) {
      in_stack_ffffffffffffff30 = (undefined4 *)&UNK_146782005;
      FUN_1414e7eb0(auStack_88,0x40,plVar2,uVar1,
                    (ulonglong)in_stack_ffffffffffffff28 & 0xffffffffffffff00,&UNK_146782005);
      cVar4 = FUN_14249bd10(auStack_88,&uStack_a4,&uStack_a8);
      if (cVar4 == '\0') {
        uVar8 = 4;
        uVar11 = 0x59b;
        uVar13 = 0xe3161fe2;
        goto LAB_14274c704;
      }
      iVar9 = 0;
      uVar6 = uStack_a4 / *(uint *)(param_1 + 0x70);
      bVar14 = *(byte *)(param_1 + 0x74);
      *(uint *)(param_1 + 0xe4) = uVar6;
      uVar10 = 0x5b;
      if (bVar14 != 0) {
        uVar10 = 0x48;
        iVar9 = uVar6 << 4;
      }
      *(uint *)(param_1 + 0xe8) = uStack_a8 / *(uint *)(param_1 + 0x70);
      *(undefined4 *)(param_1 + 0xec) = 1;
      *(undefined4 *)(param_1 + 0xe0) = uVar10;
      *(undefined8 *)(param_1 + 0xf0) = 0;
      *(undefined4 *)(param_1 + 4) = 1;
      bVar3 = true;
    }
  }
  if ((*plVar2 == 0xa1a0a0d474e5089) && (*(int *)((longlong)plVar2 + 0xc) == 0x52444849)) {
    iVar7 = 0x5b;
    uVar10 = 1;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = plVar2[2];
    auVar16 = vpshufb_avx(auVar16,_DAT_145fc1aa0);
    *(longlong *)(param_1 + 0xe4) = auVar16._0_8_;
    *(undefined4 *)(param_1 + 0xec) = 1;
    *(undefined4 *)(param_1 + 0xe0) = 0x5b;
    *(undefined8 *)(param_1 + 0xf0) = 0;
    *(undefined4 *)(param_1 + 4) = 3;
    uVar12 = auVar16._4_4_;
    uVar15 = auVar16._0_4_;
  }
  else {
    if ((!bVar3) || (iVar7 = *(int *)(param_1 + 0xe0), iVar7 == 0)) {
      if (uVar1 < 0x10) {
        return 0;
      }
      *(undefined4 *)(param_1 + 4) = 5;
      return 1;
    }
    uVar10 = *(undefined4 *)(param_1 + 0xec);
    uVar15 = *(undefined4 *)(param_1 + 0xe4);
    uVar12 = *(undefined4 *)(param_1 + 0xe8);
  }
  FUN_14501f4a0(auStack_88,iVar7,uVar15,uVar12,uVar10,
                (ulonglong)in_stack_ffffffffffffff30 & 0xffffffffffffff00,0xff,1,1);
  FUN_1451fbd80(auStack_88,8,&uStack_a4,&uStack_a8);
  lVar5 = FUN_141962d10(uStack_a4,3);
  if (lVar5 == 0) {
    uVar8 = 5;
    uVar11 = 0x5e7;
    uVar13 = 0x19f22fa7;
LAB_14274c704:
    FUN_1457d1ec0(0x14690aff8,uVar8,uVar11,uVar13);
    return 0;
  }
  *(longlong *)(param_1 + 0xa8) = lVar5;
  *(uint *)(param_1 + 0xb0) = uStack_a4;
  if ((bVar14 & iVar9 != 0) == 1) {
    lVar5 = FUN_141962d10(iVar9,1);
    if (lVar5 == 0) {
      if (*(longlong *)(param_1 + 0xa8) != 0) {
        FUN_14186c9c0();
        *(undefined8 *)(param_1 + 0xa8) = 0;
      }
      uVar8 = 5;
      uVar11 = 0x5fc;
      uVar13 = 0x473af1a0;
      goto LAB_14274c704;
    }
    *(longlong *)(param_1 + 0xb8) = lVar5;
    *(int *)(param_1 + 0xc0) = iVar9;
  }
  if (*(int *)(param_1 + 4) == 2) {
    lVar5 = 0;
    uVar10 = 0;
  }
  else {
    uVar10 = FUN_140979820(auStack_88);
    lVar5 = FUN_141962d10(uVar10,3);
    if (lVar5 == 0) {
      if (*(longlong *)(param_1 + 0xa8) != 0) {
        FUN_14186c9c0();
        *(undefined8 *)(param_1 + 0xa8) = 0;
      }
      if (*(longlong *)(param_1 + 0xb8) != 0) {
        FUN_1457d1ec0(0x14690aff8,5,0x615,0xcdc3c941);
        FUN_14186c9c0(*(undefined8 *)(param_1 + 0xb8));
        *(undefined8 *)(param_1 + 0xb8) = 0;
      }
      uVar8 = 5;
      uVar11 = 0x61a;
      uVar13 = 0xf0f5bc;
      goto LAB_14274c704;
    }
  }
  *(longlong *)(param_1 + 200) = lVar5;
  *(undefined4 *)(param_1 + 0xd0) = uVar10;
  return 1;
}

