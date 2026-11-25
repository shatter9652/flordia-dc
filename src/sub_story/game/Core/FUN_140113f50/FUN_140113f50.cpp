// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140113f50  size: 263 bytes
// Name:    FUN_140113f50
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


int * FUN_140113f50(longlong param_1,int param_2,uint param_3)

{
  ushort uVar1;
  uint *puVar2;
  int *piVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar1 = *(ushort *)(param_1 + 0x20);
  if ((ulonglong)uVar1 != 0) {
    puVar2 = *(uint **)(param_1 + 0x18);
    uVar4 = (ulonglong)uVar1;
    do {
      uVar6 = uVar4 >> 1;
      if (puVar2[uVar6 * 0xc] < param_3) {
        puVar2 = puVar2 + uVar6 * 0xc + 0xc;
        uVar6 = ~uVar6 + uVar4;
      }
      uVar4 = uVar6;
    } while (0 < (longlong)uVar6);
    if ((puVar2 != (uint *)((longlong)*(uint **)(param_1 + 0x18) + (ulonglong)((uint)uVar1 * 0x30)))
       && (*puVar2 == param_3)) {
      uVar4 = (ulonglong)(ushort)puVar2[8];
      if (uVar4 == 0) {
        return (int *)0x0;
      }
      piVar3 = *(int **)(puVar2 + 6);
      do {
        uVar5 = uVar4 >> 1;
        uVar6 = ~uVar5 + uVar4;
        uVar4 = uVar5;
        if ((piVar3 + uVar5 * 0x10 + 0x10)[-0x10] < param_2) {
          piVar3 = piVar3 + uVar5 * 0x10 + 0x10;
          uVar4 = uVar6;
        }
      } while (0 < (longlong)uVar4);
      if (piVar3 == *(int **)(puVar2 + 6) + (ulonglong)(ushort)puVar2[8] * 0x10) {
        return (int *)0x0;
      }
      goto LAB_140114048;
    }
  }
  uVar4 = (ulonglong)*(ushort *)(param_1 + 0x40);
  if (uVar4 == 0) {
    return (int *)0x0;
  }
  piVar3 = *(int **)(param_1 + 0x38);
  do {
    uVar5 = uVar4 >> 1;
    uVar6 = ~uVar5 + uVar4;
    uVar4 = uVar5;
    if ((piVar3 + uVar5 * 0x10 + 0x10)[-0x10] < param_2) {
      piVar3 = piVar3 + uVar5 * 0x10 + 0x10;
      uVar4 = uVar6;
    }
  } while (0 < (longlong)uVar4);
  if (piVar3 == *(int **)(param_1 + 0x38) + (ulonglong)*(ushort *)(param_1 + 0x40) * 0x10) {
    return (int *)0x0;
  }
LAB_140114048:
  if (*piVar3 != param_2) {
    return (int *)0x0;
  }
  return piVar3 + 2;
}

