// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400fb5b0  size: 336 bytes
// Name:    FUN_1400fb5b0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_1400fb5b0(longlong *param_1,uint *param_2)

{
  longlong lVar1;
  uint *puVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong lVar5;
  uint *puVar6;
  uint uVar7;
  ulonglong uVar8;
  bool bVar9;
  
  uVar4 = *(uint *)(param_1 + 1);
  if (uVar4 == 0) {
    uVar4 = func_0x0001400f6200(10);
    *(uint *)(param_1 + 1) = uVar4;
    lVar5 = -1;
    if (-1 < (int)uVar4) {
      lVar5 = (ulonglong)uVar4 * 8;
    }
    lVar5 = func_0x000144f97130(lVar5);
    *param_1 = lVar5;
    if (uVar4 != 0) {
      uVar8 = 0;
      do {
        *(undefined8 *)(*param_1 + uVar8 * 8) = 0;
        uVar8 = uVar8 + 1;
      } while (uVar4 != uVar8);
    }
    bVar9 = false;
    *(undefined1 *)((longlong)param_1 + 0x17) = 1;
  }
  else {
    bVar9 = *(char *)((longlong)param_1 + 0x17) == '\0';
  }
  uVar7 = (int)param_1[2] + 1;
  *(uint *)(param_1 + 2) = uVar7;
  if ((uVar7 != uVar4) || (bVar9)) {
    lVar5 = *param_1;
  }
  else {
    uVar7 = func_0x0001400f6200(uVar4);
    lVar5 = -1;
    if (-1 < (int)uVar7) {
      lVar5 = (ulonglong)uVar7 << 3;
    }
    lVar5 = func_0x000144f97130(lVar5);
    func_0x000145f40580(lVar5,0,(ulonglong)uVar7 << 3);
    lVar1 = *param_1;
    if (uVar4 != 0) {
      uVar8 = 0;
      do {
        puVar6 = *(uint **)(lVar1 + uVar8 * 8);
        while (puVar6 != (uint *)0x0) {
          puVar2 = *(uint **)(puVar6 + 2);
          *(undefined8 *)(puVar6 + 2) =
               *(undefined8 *)(lVar5 + ((ulonglong)*puVar6 % (ulonglong)uVar7) * 8);
          *(uint **)(lVar5 + ((ulonglong)*puVar6 % (ulonglong)uVar7) * 8) = puVar6;
          puVar6 = puVar2;
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 != uVar4);
    }
    *(uint *)(param_1 + 1) = uVar7;
    uVar4 = uVar7;
    if (lVar1 != 0) {
      func_0x000144d9c130();
      uVar4 = *(uint *)(param_1 + 1);
    }
    *param_1 = lVar5;
  }
  uVar7 = *param_2;
  uVar8 = (ulonglong)uVar7 % (ulonglong)uVar4;
  uVar3 = *(undefined8 *)(lVar5 + uVar8 * 8);
  puVar6 = (uint *)func_0x000144f97130(0x10);
  if (puVar6 != (uint *)0x0) {
    *puVar6 = uVar7;
    *(undefined1 *)(puVar6 + 1) = 0;
    *(undefined8 *)(puVar6 + 2) = uVar3;
  }
  *(uint **)(lVar5 + uVar8 * 8) = puVar6;
  return *(undefined8 *)(*param_1 + uVar8 * 8);
}

