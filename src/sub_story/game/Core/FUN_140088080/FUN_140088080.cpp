// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140088080  size: 434 bytes
// Name:    FUN_140088080
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f00b30, FUN_1452075c0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140088080(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ushort uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  longlong lVar14;
  ulonglong uVar15;
  
  uVar3 = *(ushort *)(param_2 + 1);
  if (*(ushort *)(param_1 + 0x10a) < uVar3) {
    FUN_144f00b30(param_1 + 0x100,uVar3,*(undefined2 *)(param_1 + 0x108));
  }
  *(ushort *)(param_1 + 0x108) = uVar3;
  uVar13 = func_0x000140088240();
  *(undefined4 *)(param_1 + 0x88) = uVar13;
  if ((short)param_2[1] != 0) {
    lVar14 = 0;
    uVar15 = 0;
    do {
      lVar4 = *param_2;
      lVar5 = *(longlong *)(param_1 + 0x100);
      puVar1 = (undefined8 *)(lVar4 + lVar14);
      uVar6 = *puVar1;
      uVar7 = puVar1[1];
      uVar8 = puVar1[2];
      uVar9 = puVar1[3];
      puVar1 = (undefined8 *)(lVar4 + 0x18 + lVar14);
      uVar10 = puVar1[1];
      uVar11 = puVar1[2];
      uVar12 = puVar1[3];
      puVar2 = (undefined8 *)(lVar5 + 0x18 + lVar14);
      *puVar2 = *puVar1;
      puVar2[1] = uVar10;
      puVar2[2] = uVar11;
      puVar2[3] = uVar12;
      puVar1 = (undefined8 *)(lVar5 + lVar14);
      *puVar1 = uVar6;
      puVar1[1] = uVar7;
      puVar1[2] = uVar8;
      puVar1[3] = uVar9;
      *(undefined8 *)(lVar5 + 0x38 + lVar14) = *(undefined8 *)(lVar4 + 0x38 + lVar14);
      *(undefined4 *)(lVar5 + 0x40 + lVar14) = *(undefined4 *)(lVar4 + 0x40 + lVar14);
      puVar1 = (undefined8 *)(lVar4 + 0x44 + lVar14);
      uVar6 = puVar1[1];
      uVar7 = puVar1[2];
      uVar8 = puVar1[3];
      puVar2 = (undefined8 *)(lVar4 + 0x58 + lVar14);
      uVar9 = *puVar2;
      uVar10 = puVar2[1];
      uVar11 = puVar2[2];
      uVar12 = puVar2[3];
      puVar2 = (undefined8 *)(lVar5 + 0x44 + lVar14);
      *puVar2 = *puVar1;
      puVar2[1] = uVar6;
      puVar2[2] = uVar7;
      puVar2[3] = uVar8;
      puVar1 = (undefined8 *)(lVar5 + 0x58 + lVar14);
      *puVar1 = uVar9;
      puVar1[1] = uVar10;
      puVar1[2] = uVar11;
      puVar1[3] = uVar12;
      *(undefined1 *)(lVar5 + 0x78 + lVar14) = *(undefined1 *)(lVar4 + 0x78 + lVar14);
      uVar13 = *(undefined4 *)(lVar4 + 0x79 + lVar14);
      *(undefined4 *)(lVar5 + 0x7c + lVar14) = *(undefined4 *)(lVar4 + 0x7c + lVar14);
      *(undefined4 *)(lVar5 + 0x79 + lVar14) = uVar13;
      *(undefined1 *)(lVar5 + 0x80 + lVar14) = *(undefined1 *)(lVar4 + 0x80 + lVar14);
      uVar13 = *(undefined4 *)(lVar4 + 0x81 + lVar14);
      *(undefined4 *)(lVar5 + 0x84 + lVar14) = *(undefined4 *)(lVar4 + 0x84 + lVar14);
      *(undefined4 *)(lVar5 + 0x81 + lVar14) = uVar13;
      *(undefined1 *)(lVar5 + 0x88 + lVar14) = *(undefined1 *)(lVar4 + 0x88 + lVar14);
      uVar13 = *(undefined4 *)(lVar4 + 0x89 + lVar14);
      *(undefined4 *)(lVar5 + 0x8c + lVar14) = *(undefined4 *)(lVar4 + 0x8c + lVar14);
      *(undefined4 *)(lVar5 + 0x89 + lVar14) = uVar13;
      *(undefined1 *)(lVar5 + 0x92 + lVar14) = *(undefined1 *)(lVar4 + 0x92 + lVar14);
      *(undefined2 *)(lVar5 + 0x90 + lVar14) = *(undefined2 *)(lVar4 + 0x90 + lVar14);
      uVar13 = *(undefined4 *)(lVar4 + 0x96 + lVar14);
      *(undefined4 *)(lVar5 + 0x93 + lVar14) = *(undefined4 *)(lVar4 + 0x93 + lVar14);
      *(undefined4 *)(lVar5 + 0x96 + lVar14) = uVar13;
      FUN_1452075c0(*(undefined4 *)(param_1 + 0x88),lVar5 + lVar14);
      uVar15 = uVar15 + 1;
      lVar14 = lVar14 + 0xa0;
    } while (uVar15 < *(ushort *)(param_2 + 1));
  }
  *(longlong *)(param_1 + 0x28) = param_1 + 0x100;
  return;
}

