// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140058760  size: 167 bytes
// Name:    FUN_140058760
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140058760(longlong param_1,uint *param_2)

{
  undefined8 *puVar1;
  ushort uVar2;
  uint *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  uint *puVar12;
  
  if ((*param_2 & 0xfffffff) != 0xfffffff) {
    uVar2 = *(ushort *)(param_1 + 0x18);
    uVar11 = (ulonglong)uVar2;
    puVar3 = *(uint **)(param_1 + 0x10);
    puVar12 = puVar3;
    if (uVar11 != 0) {
      do {
        if ((*puVar12 & 0xfffffff) == (*param_2 & 0xfffffff) && (*puVar12 & 0xfffffff) != 0xfffffff)
        {
          uVar4 = *(undefined8 *)(param_2 + 4);
          uVar5 = *(undefined8 *)(param_2 + 6);
          uVar6 = *(undefined8 *)(param_2 + 8);
          uVar7 = *(undefined8 *)(param_2 + 10);
          uVar8 = *(undefined8 *)(param_2 + 0xe);
          uVar9 = *(undefined8 *)(param_2 + 0x10);
          uVar10 = *(undefined8 *)(param_2 + 0x12);
          *(undefined8 *)(puVar12 + 0xc) = *(undefined8 *)(param_2 + 0xc);
          *(undefined8 *)(puVar12 + 0xe) = uVar8;
          *(undefined8 *)(puVar12 + 0x10) = uVar9;
          *(undefined8 *)(puVar12 + 0x12) = uVar10;
          *(undefined8 *)(puVar12 + 4) = uVar4;
          *(undefined8 *)(puVar12 + 6) = uVar5;
          *(undefined8 *)(puVar12 + 8) = uVar6;
          *(undefined8 *)(puVar12 + 10) = uVar7;
          return;
        }
        uVar11 = uVar11 - 1;
        puVar12 = puVar12 + 0x14;
      } while (uVar11 != 0);
      if (9 < uVar2) {
        return;
      }
    }
    *(ushort *)(param_1 + 0x18) = uVar2 + 1;
    uVar11 = (ulonglong)((uint)uVar2 * 0x50);
    *(uint *)((longlong)puVar3 + uVar11) = *param_2;
    uVar4 = *(undefined8 *)(param_2 + 6);
    uVar5 = *(undefined8 *)(param_2 + 8);
    uVar6 = *(undefined8 *)(param_2 + 10);
    uVar7 = *(undefined8 *)(param_2 + 0xc);
    uVar8 = *(undefined8 *)(param_2 + 0xe);
    uVar9 = *(undefined8 *)(param_2 + 0x10);
    uVar10 = *(undefined8 *)(param_2 + 0x12);
    puVar1 = (undefined8 *)((longlong)puVar3 + uVar11 + 0x10);
    *puVar1 = *(undefined8 *)(param_2 + 4);
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    puVar1 = (undefined8 *)((longlong)puVar3 + uVar11 + 0x30);
    *puVar1 = uVar7;
    puVar1[1] = uVar8;
    puVar1[2] = uVar9;
    puVar1[3] = uVar10;
  }
  return;
}

