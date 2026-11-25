// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401b9610  size: 388 bytes
// Name:    FUN_1401b9610
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401bbc80
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


longlong * FUN_1401b9610(longlong *param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  undefined4 *puVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [32];
  undefined4 uStack_24;
  
  *param_1 = param_2;
  param_1[1] = 0;
  auVar10._0_12_ = ZEXT812(0);
  auVar10._12_4_ = 0;
  lVar6 = *(longlong *)(*(longlong *)(param_2 + 8) + 0x18);
  param_1[2] = lVar6;
  LOCK();
  piVar1 = (int *)(lVar6 + 0x10);
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)(param_1 + 4) = 2;
  *(undefined1 (*) [32])(param_1 + 5) = ZEXT1632(auVar10);
  *(undefined1 (*) [32])(param_1 + 7) = ZEXT1632(auVar10);
  param_1[0xb] = 0x800000008;
  auVar11 = ZEXT1632(auVar10);
  *(undefined1 (*) [32])(param_1 + 0xc) = auVar11;
  *(undefined1 (*) [32])(param_1 + 0x10) = auVar11;
  *(undefined1 (*) [32])(param_1 + 0x14) = auVar11;
  *(undefined1 (*) [32])(param_1 + 0x18) = auVar11;
  *(undefined1 (*) [32])(param_1 + 0x1c) = ZEXT1632(auVar10);
  lVar6 = (**(code **)(**(longlong **)(*(longlong *)(param_2 + 8) + 0x18) + 0x18))();
  param_1[0x20] = lVar6;
  *(undefined4 *)(param_1 + 0x21) = 1;
  *(undefined2 *)((longlong)param_1 + 0x10c) = 0;
  puVar7 = (undefined4 *)*param_1;
  lVar6 = *(longlong *)(puVar7 + 4);
  if (param_1[1] != lVar6) {
    LOCK();
    *(int *)(lVar6 + 0x10) = *(int *)(lVar6 + 0x10) + 1;
    UNLOCK();
    puVar3 = (undefined8 *)param_1[1];
    if (puVar3 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar3 + 2);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
    param_1[1] = lVar6;
    puVar7 = (undefined4 *)*param_1;
  }
  func_0x000140019da0(*puVar7,&uStack_24);
  *(undefined4 *)(param_1 + 3) = uStack_24;
  lVar8 = (**(code **)(*(longlong *)param_1[2] + 0x40))();
  lVar6 = func_0x0001450b1c60(lVar8);
  param_1[0x1f] = lVar6;
  lVar6 = *(longlong *)(*param_1 + 8);
  if ((lVar8 != 0) && (lVar4 = *(longlong *)(lVar6 + 0x48), lVar4 != 0)) {
    FUN_1401bbc80(lVar4,lVar8);
  }
  iVar2 = *(int *)(lVar6 + 0x20);
  if (iVar2 == 0) {
    uVar5 = func_0x000144f8a660();
    uVar9 = 0;
    if (2 < uVar5) {
      return param_1;
    }
  }
  else {
    if (8 < iVar2 - 1U) {
      return param_1;
    }
    uVar5 = func_0x000144f8a660(*(undefined8 *)(*(longlong *)(param_2 + 8) + 0x18));
    if (3 < uVar5) {
      return param_1;
    }
    uVar9 = *(undefined4 *)(&UNK_1465ec7a8 + (ulonglong)uVar5 * 4);
  }
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar9;
  return param_1;
}

