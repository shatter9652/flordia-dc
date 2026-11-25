// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400f1680  size: 211 bytes
// Name:    FUN_1400f1680
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14043b290, FUN_141922710
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


uint * FUN_1400f1680(longlong *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint *puVar7;
  
  uVar1 = *(uint *)(param_1 + 1);
  if (uVar1 == 0) {
    FUN_141922710(param_1);
    uVar1 = *(uint *)(param_1 + 1);
  }
  uVar4 = (ulonglong)uVar1;
  uVar6 = (ulonglong)*param_2 % uVar4;
  lVar5 = *param_1;
  puVar7 = *(uint **)(lVar5 + uVar6 * 8);
  for (puVar3 = puVar7; puVar3 != (uint *)0x0; puVar3 = *(uint **)(puVar3 + 2)) {
    if (*param_2 == *puVar3) goto LAB_1400f16ff;
  }
  uVar2 = (int)param_1[2] + 1;
  *(uint *)(param_1 + 2) = uVar2;
  if (uVar2 == uVar1) {
    if (*(char *)((longlong)param_1 + 0x17) != '\0') {
      func_0x0001400f6200();
      FUN_14043b290(param_1);
      uVar4 = (ulonglong)*(uint *)(param_1 + 1);
      lVar5 = *param_1;
    }
    uVar6 = (ulonglong)*param_2 % uVar4;
    puVar7 = *(uint **)(lVar5 + uVar6 * 8);
  }
  puVar3 = (uint *)func_0x000144f97130(0x10);
  if (puVar3 != (uint *)0x0) {
    *puVar3 = *param_2;
    puVar3[1] = 0;
    *(uint **)(puVar3 + 2) = puVar7;
  }
  *(uint **)(lVar5 + uVar6 * 8) = puVar3;
  puVar3 = *(uint **)(*param_1 + uVar6 * 8);
LAB_1400f16ff:
  return puVar3 + 1;
}

