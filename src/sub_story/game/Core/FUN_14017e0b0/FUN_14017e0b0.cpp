// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14017e0b0  size: 1193 bytes
// Name:    FUN_14017e0b0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144da6330, FUN_14532db80, FUN_14532db20, FUN_140de7130, FUN_140652be0, FUN_14017e820, FUN_14017e560, FUN_140652ac0, FUN_145034e00
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14017e0b0(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  undefined4 uVar23;
  undefined8 uVar24;
  undefined8 *puVar25;
  longlong lVar26;
  longlong lVar27;
  longlong lVar28;
  longlong lVar29;
  longlong lVar30;
  longlong *plVar31;
  longlong unaff_GS_OFFSET;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auStack_58 [16];
  
  auStack_58._0_12_ = ZEXT812(0);
  auStack_58._12_4_ = 0;
  plVar3 = *(longlong **)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1250);
  if (plVar3 == (longlong *)0x0) {
    lVar30 = FUN_140652be0(param_2);
    lVar26 = func_0x000140652a90(param_2[0x21]);
    lVar27 = func_0x000140652a80(param_2[0x1f]);
    lVar28 = FUN_140652ac0(param_2[0x18]);
    lVar29 = func_0x000144d9c140(0x10,lVar27 + lVar28 + lVar26 + lVar30);
    *(longlong *)(param_1 + 0x128) = lVar29;
    FUN_14532db80(lVar29,lVar30);
    plVar31 = (longlong *)auStack_58;
    auStack_58._0_8_ = lVar29 + lVar30;
  }
  else {
    lVar28 = 0;
    lVar27 = 0;
    lVar26 = 0;
    plVar31 = plVar3;
  }
  uVar2 = *(undefined4 *)((longlong)param_2 + 0xd4);
  uVar23 = (**(code **)(*param_2 + 0x58))(param_2);
  FUN_145034e00(param_1,(int)param_2[0x1a],*(undefined1 *)((longlong)param_2 + 0x82),uVar23,uVar2,0)
  ;
  if (param_2[0xf] == 0) {
    uVar24 = 0;
  }
  else {
    lVar30 = -1;
    if (-1 < (longlong)(int)param_2[0x1a]) {
      lVar30 = (longlong)(int)param_2[0x1a] * 6;
    }
    uVar24 = func_0x000144f97130(lVar30);
  }
  lVar30 = param_2[2];
  lVar29 = param_2[3];
  lVar10 = param_2[4];
  lVar11 = param_2[5];
  lVar12 = param_2[6];
  lVar13 = param_2[7];
  lVar14 = param_2[8];
  lVar15 = param_2[9];
  lVar16 = param_2[0xb];
  lVar17 = param_2[0xc];
  lVar18 = param_2[0xd];
  uVar4 = *(undefined8 *)(param_1 + 0x128);
  uVar5 = *(undefined8 *)(param_1 + 0x88);
  uVar6 = *(undefined8 *)(param_1 + 0xf0);
  uVar7 = *(undefined8 *)(param_1 + 0x118);
  uVar8 = *(undefined8 *)(param_1 + 0xb0);
  uVar9 = *(undefined8 *)(param_1 + 0xb8);
  uVar1 = *(undefined1 *)(param_1 + 0x10);
  *(longlong *)(param_1 + 0x50) = param_2[10];
  *(longlong *)(param_1 + 0x58) = lVar16;
  *(longlong *)(param_1 + 0x60) = lVar17;
  *(longlong *)(param_1 + 0x68) = lVar18;
  *(longlong *)(param_1 + 0x30) = lVar12;
  *(longlong *)(param_1 + 0x38) = lVar13;
  *(longlong *)(param_1 + 0x40) = lVar14;
  *(longlong *)(param_1 + 0x48) = lVar15;
  *(longlong *)(param_1 + 0x10) = lVar30;
  *(longlong *)(param_1 + 0x18) = lVar29;
  *(longlong *)(param_1 + 0x20) = lVar10;
  *(longlong *)(param_1 + 0x28) = lVar11;
  lVar30 = param_2[0xe];
  lVar29 = param_2[0xf];
  lVar10 = param_2[0x10];
  lVar11 = param_2[0x11];
  lVar12 = param_2[0x12];
  lVar13 = param_2[0x13];
  lVar14 = param_2[0x14];
  lVar15 = param_2[0x15];
  lVar16 = param_2[0x16];
  lVar17 = param_2[0x17];
  lVar18 = param_2[0x18];
  lVar19 = param_2[0x19];
  lVar20 = param_2[0x1b];
  lVar21 = param_2[0x1c];
  lVar22 = param_2[0x1d];
  *(longlong *)(param_1 + 0xd0) = param_2[0x1a];
  *(longlong *)(param_1 + 0xd8) = lVar20;
  *(longlong *)(param_1 + 0xe0) = lVar21;
  *(longlong *)(param_1 + 0xe8) = lVar22;
  *(longlong *)(param_1 + 0xb0) = lVar16;
  *(longlong *)(param_1 + 0xb8) = lVar17;
  *(longlong *)(param_1 + 0xc0) = lVar18;
  *(longlong *)(param_1 + 200) = lVar19;
  *(longlong *)(param_1 + 0x90) = lVar12;
  *(longlong *)(param_1 + 0x98) = lVar13;
  *(longlong *)(param_1 + 0xa0) = lVar14;
  *(longlong *)(param_1 + 0xa8) = lVar15;
  *(longlong *)(param_1 + 0x70) = lVar30;
  *(longlong *)(param_1 + 0x78) = lVar29;
  *(longlong *)(param_1 + 0x80) = lVar10;
  *(longlong *)(param_1 + 0x88) = lVar11;
  lVar30 = param_2[0x1e];
  lVar29 = param_2[0x1f];
  lVar10 = param_2[0x20];
  lVar11 = param_2[0x21];
  lVar12 = param_2[0x23];
  lVar13 = param_2[0x24];
  lVar14 = param_2[0x25];
  *(longlong *)(param_1 + 0x110) = param_2[0x22];
  *(longlong *)(param_1 + 0x118) = lVar12;
  *(longlong *)(param_1 + 0x120) = lVar13;
  *(longlong *)(param_1 + 0x128) = lVar14;
  *(longlong *)(param_1 + 0xf0) = lVar30;
  *(longlong *)(param_1 + 0xf8) = lVar29;
  *(longlong *)(param_1 + 0x100) = lVar10;
  *(longlong *)(param_1 + 0x108) = lVar11;
  *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) & 0xfd;
  *(undefined4 *)(param_1 + 0x3c) = 1;
  *(undefined1 *)(param_1 + 0x10) = uVar1;
  *(undefined8 *)(param_1 + 0x78) = uVar24;
  *(undefined8 *)(param_1 + 0x128) = uVar4;
  *(undefined8 *)(param_1 + 0x88) = uVar5;
  *(undefined8 *)(param_1 + 0xf0) = uVar6;
  *(undefined8 *)(param_1 + 0xb0) = uVar8;
  *(undefined8 *)(param_1 + 0xb8) = uVar9;
  *(undefined8 *)(param_1 + 0x118) = uVar7;
  func_0x000145f40560(uVar7,param_2[0x23],(longlong)*(int *)(param_1 + 0xd4));
  func_0x000145f40560(*(undefined8 *)(param_1 + 0xb0),param_2[0x16],
                      (longlong)*(int *)(param_1 + 0xd0) * 6);
  func_0x000145f40560(*(undefined8 *)(param_1 + 0x88),param_2[0x11],
                      (longlong)*(int *)(param_1 + 0xd4) << 4);
  func_0x000145f40560(*(undefined8 *)(param_1 + 0x118),param_2[0x23],
                      (longlong)*(int *)(param_1 + 0xd4));
  if (*(byte *)(param_1 + 0x120) == 1) {
    **(undefined8 **)(param_1 + 0xf0) = *(undefined8 *)param_2[0x1e];
  }
  else {
    func_0x000145f40560(*(undefined8 **)(param_1 + 0xf0),(undefined8 *)param_2[0x1e],
                        (ulonglong)*(byte *)(param_1 + 0x120) << 3);
  }
  lVar30 = (ulonglong)*(byte *)(param_1 + 0x82) * (longlong)*(int *)(param_1 + 0xd0);
  if ((int)lVar30 != 0) {
    func_0x000145f40560(*(undefined8 *)(param_1 + 0xb8),param_2[0x17],lVar30 * 4);
  }
  if (plVar3 == (longlong *)0x0) {
    FUN_14532db20();
    if (param_2[0x21] != 0) {
      FUN_14532db80(*plVar31,lVar26);
      *plVar31 = *plVar31 + lVar26;
      goto LAB_14017e2f9;
    }
LAB_14017e473:
    if (param_2[0x1f] == 0) goto LAB_14017e358;
    *(byte *)(param_1 + 0x100) = *(byte *)(param_1 + 0x100) | 8;
    FUN_14532db80(*plVar31,lVar27);
    *plVar31 = *plVar31 + lVar27;
  }
  else {
    if (param_2[0x21] != 0) {
LAB_14017e2f9:
      puVar25 = (undefined8 *)func_0x000144f97130(0x30);
      FUN_144da6330(puVar25);
      *puVar25 = &UNK_14667bd60;
      *(undefined1 (*) [32])(puVar25 + 2) = ZEXT1232(ZEXT812(0));
      *(undefined8 **)(param_1 + 0x108) = puVar25;
      FUN_140de7130(puVar25,param_2[0x21]);
      *(undefined1 *)(param_1 + 0x110) = 1;
      if (plVar3 == (longlong *)0x0) {
        FUN_14532db20();
        goto LAB_14017e473;
      }
    }
    if (param_2[0x1f] == 0) goto LAB_14017e358;
    *(byte *)(param_1 + 0x100) = *(byte *)(param_1 + 0x100) | 8;
  }
  lVar30 = func_0x000144f97130(0x48);
  if (lVar30 != 0) {
    FUN_14017e820(lVar30,param_2[0x1f],param_1,plVar31);
  }
  *(longlong *)(param_1 + 0xf8) = lVar30;
  if (plVar3 == (longlong *)0x0) {
    FUN_14532db20();
  }
LAB_14017e358:
  if (*(longlong *)(param_1 + 0x78) != 0) {
    func_0x000145f40560(*(longlong *)(param_1 + 0x78),param_2[0xf],
                        (longlong)*(int *)(param_1 + 0xd0) * 6);
  }
  if (param_2[0x18] != 0) {
    if (plVar3 == (longlong *)0x0) {
      FUN_14532db80(*plVar31,lVar28);
      auVar33._0_12_ = ZEXT812(0);
      auVar33._12_4_ = 0;
      *plVar31 = *plVar31 + lVar28;
      *(undefined1 (*) [16])(param_1 + 0xc0) = auVar33;
      FUN_14017e560(param_1,param_2[0x18],param_2[0x19],1);
      FUN_14532db20();
    }
    else {
      auVar32._0_12_ = ZEXT812(0);
      auVar32._12_4_ = 0;
      *(undefined1 (*) [16])(param_1 + 0xc0) = auVar32;
      FUN_14017e560(param_1,param_2[0x18],param_2[0x19],1);
    }
  }
  *(undefined1 *)(param_1 + 0x111) = 1;
  *(undefined1 *)(param_1 + 0xd8) = 1;
  return;
}

