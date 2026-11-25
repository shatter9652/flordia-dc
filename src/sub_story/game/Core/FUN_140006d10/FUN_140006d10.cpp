// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140006d10  size: 461 bytes
// Name:    FUN_140006d10
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8
FUN_140006d10(longlong param_1,longlong *param_2,uint param_3,undefined8 *param_4,int param_5)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined8 uVar4;
  bool bVar5;
  longlong lVar6;
  undefined8 *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  
  lVar6 = *param_2;
  if (((lVar6 != 0) && (*(int *)(lVar6 + 0xc) == 4)) && (*(longlong *)(param_1 + 0xd0) != 0)) {
    uVar8 = *(uint *)(*(longlong *)(param_1 + 0xd0) + 8);
    uVar10 = 0;
    if (uVar8 <= param_3) {
      return 0;
    }
    piVar2 = *(int **)(lVar6 + 0xa0);
    iVar1 = (uint)(*piVar2 == -1) * 8 + 0x10;
    iVar12 = uVar8 * iVar1;
    do {
      lVar6 = func_0x000140006ee0(piVar2,iVar1,uVar10);
      uVar10 = uVar10 + 1;
      iVar12 = iVar12 + *(int *)(lVar6 + 4) * 4;
    } while (uVar8 != uVar10);
    uVar8 = 0;
    uVar10 = 0;
    if (param_3 != 0) {
      uVar10 = 0;
      uVar11 = 0;
      uVar8 = 0;
      uVar9 = 0;
      if (param_5 == 7) {
        do {
          lVar6 = func_0x000140006ee0(piVar2,iVar1,uVar11);
          uVar8 = uVar8 + *(int *)(lVar6 + 4);
          uVar11 = uVar11 + 1;
          uVar10 = uVar9 + (*(int *)(lVar6 + 0x14) + 0xfU & 0xfffffff0);
          uVar9 = uVar10;
        } while (param_3 != uVar11);
      }
      else {
        do {
          lVar6 = func_0x000140006ee0(piVar2,iVar1,uVar11);
          uVar8 = uVar8 + *(int *)(lVar6 + 4);
          uVar11 = uVar11 + 1;
        } while (param_3 != uVar11);
      }
    }
    uVar9 = uVar8 << 0xb;
    if (param_5 == 7) {
      uVar9 = uVar10;
    }
    uVar10 = iVar12 + 0x7ffU & 0xfffff800;
    puVar7 = (undefined8 *)func_0x000140006ee0(piVar2,iVar1,param_3);
    uVar4 = puVar7[1];
    *param_4 = *puVar7;
    param_4[1] = uVar4;
    param_4[2] = puVar7[2];
    param_4[4] = (longlong)piVar2 + (ulonglong)uVar9 + (ulonglong)uVar10;
    lVar6 = *param_2;
    *(undefined4 *)(param_4 + 6) = *(undefined4 *)(lVar6 + 8);
    piVar3 = *(int **)(param_1 + 0xd0);
    if (uVar10 + uVar9 < (uint)piVar3[1]) {
      param_4[3] = piVar2 + (ulonglong)(uint)piVar3[2] * 6 + (ulonglong)uVar8;
      if (*(char *)(param_1 + 0x840) == '\x01') {
        bVar5 = false;
      }
      else if (*piVar3 + -1 == *(int *)(lVar6 + 8)) {
        bVar5 = true;
      }
      else {
        bVar5 = 0 < (int)param_2[2];
      }
      *(bool *)((longlong)param_4 + 0x34) = bVar5;
      param_4[5] = *(undefined8 *)((longlong)param_2 + 0xc);
      return CONCAT71((uint7)(uint3)(uVar9 >> 8),1);
    }
  }
  return 0;
}

