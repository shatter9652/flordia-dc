// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400f0690  size: 153 bytes
// Name:    FUN_1400f0690
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


ulonglong FUN_1400f0690(longlong param_1,longlong *param_2,longlong param_3)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  
  if (param_3 == 0) {
    return 0xfffffff;
  }
  if ((int)param_2[4] == 0) {
    uVar1 = *(uint *)(param_2 + 3);
    *(uint *)(param_2 + 3) = uVar1 + 1;
    iVar2 = *(int *)((longlong)param_2 + 0x1c);
    if ((int)(uVar1 + 1) < iVar2) {
      lVar4 = param_2[1];
    }
    else {
      pcVar3 = *(code **)(param_1 + 8);
      if (pcVar3 == (code *)0x0) {
        return 0xfffffff;
      }
      lVar6 = param_2[1];
      *(int *)((longlong)param_2 + 0x1c) = iVar2 * 2;
      lVar4 = (*pcVar3)(*(undefined8 *)(param_1 + 0x18),lVar6,iVar2 << 4);
      param_2[1] = lVar4;
      if (lVar4 == 0) {
        param_2[1] = lVar6;
        return 0xfffffff;
      }
    }
    *(longlong *)(lVar4 + (longlong)(int)uVar1 * 8) = param_3;
    return (ulonglong)~uVar1;
  }
  param_2 = (longlong *)*param_2;
  uVar11 = (longlong)(int)param_2[2] + 1;
  iVar10 = (int)uVar11;
  *(int *)(param_2 + 2) = iVar10;
  iVar2 = *(int *)((longlong)param_2 + 0x14);
  if (iVar2 < iVar10 * 2) {
    pcVar3 = *(code **)(param_1 + 8);
    if (pcVar3 == (code *)0x0) {
      return 0xfffffff;
    }
    lVar4 = param_2[1];
    lVar6 = *param_2;
    *(int *)((longlong)param_2 + 0x14) = iVar2 * 2;
    lVar5 = (*pcVar3)(*(undefined8 *)(param_1 + 0x18),lVar6,iVar2 * 8 + 4);
    *param_2 = lVar5;
    if (lVar5 == 0) {
      *param_2 = lVar6;
      return 0xfffffff;
    }
    lVar6 = (**(code **)(param_1 + 8))
                      (*(undefined8 *)(param_1 + 0x18),param_2[1],
                       *(int *)((longlong)param_2 + 0x14) * 0x10 + 0x10);
    param_2[1] = lVar6;
    if (lVar6 == 0) {
      param_2[1] = lVar4;
      return 0xfffffff;
    }
  }
  else {
    lVar6 = param_2[1];
  }
  uVar7 = (ulonglong)(int)*(uint *)(param_2 + 3);
  uVar8 = uVar11 & 0xffffffff;
  uVar9 = uVar11;
  uVar12 = uVar11;
  if (uVar7 != 0) {
    uVar12 = (ulonglong)iVar10;
    uVar8 = (ulonglong)*(uint *)(param_2 + 3);
    *(undefined4 *)(param_2 + 3) = *(undefined4 *)(lVar6 + 8 + uVar7 * 0x10);
    uVar9 = uVar7;
  }
  lVar4 = *param_2;
  *(int *)(lVar4 + uVar12 * 4) = (int)uVar8;
  *(int *)(lVar6 + 8 + uVar9 * 0x10) = iVar10;
  *(longlong *)(lVar6 + uVar9 * 0x10) = param_3;
  if (*(int *)((longlong)param_2 + 0x1c) != 0) {
    FUN_14520f710(lVar4,lVar6,uVar11 & 0xffffffff);
  }
  return uVar8;
}

