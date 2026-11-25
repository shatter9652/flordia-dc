// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400613c0  size: 212 bytes
// Name:    FUN_1400613c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400613c0(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x10e0) = *(undefined4 *)(param_2 + 0x1a4);
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x248);
  if (0 < *(int *)(param_2 + 0xe4)) {
    lVar9 = 0;
    lVar10 = 0;
    do {
      puVar1 = (undefined8 *)(param_2 + 0x260 + lVar9 * 2);
      uVar5 = *puVar1;
      uVar6 = puVar1[1];
      lVar10 = lVar10 + 1;
      puVar1 = (undefined8 *)(param_2 + 0x65e0 + lVar9 * 4);
      uVar7 = *puVar1;
      uVar8 = puVar1[1];
      uVar3 = *(undefined8 *)(param_2 + 0x878 + lVar9);
      uVar4 = *(undefined8 *)(param_2 + 0x670 + lVar9);
      *(int *)(param_1 + 0x94) = (int)lVar10;
      uVar2 = *(undefined8 *)(param_2 + 0x65f0 + lVar9 * 4);
      puVar1 = (undefined8 *)(param_1 + 0xa0 + lVar9 * 8);
      *puVar1 = uVar5;
      puVar1[1] = uVar6;
      puVar1[2] = uVar7;
      puVar1[3] = uVar8;
      *(undefined8 *)(param_1 + 0xc0 + lVar9 * 8) = uVar3;
      *(undefined8 *)(param_1 + 200 + lVar9 * 8) = uVar2;
      *(undefined8 *)(param_1 + 0xd0 + lVar9 * 8) = uVar4;
      lVar9 = lVar9 + 8;
    } while (lVar10 < *(int *)(param_2 + 0xe4));
  }
  return;
}

