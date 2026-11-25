// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140fc2240  size: 591 bytes
// Name:    FUN_140fc2240
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401bd1f0, FUN_1428cd1a0, FUN_14079e350, FUN_14056eb30, FUN_140643cd0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140fc2240(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  undefined8 *puVar1;
  char cVar2;
  undefined2 uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  longlong unaff_GS_OFFSET;
  undefined1 auVar11 [16];
  undefined8 uStack_140;
  undefined1 auStack_138 [272];
  undefined1 auVar12 [64];
  
  *param_1 = &UNK_1462fd890;
  *(undefined1 *)(param_1 + 1) = 0;
  uStack_140 = param_2;
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
  }
  lVar8 = **(longlong **)(unaff_GS_OFFSET + 0x58);
  lVar6 = *(longlong *)(lVar8 + 0x1448);
  if (lVar6 == 0) {
    *(undefined1 *)(param_1 + 1) = 0;
  }
  *(undefined1 *)((longlong)param_1 + 9) = 0;
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
    lVar6 = *(longlong *)(lVar8 + 0x1448);
  }
  if (lVar6 == 0) {
    *(undefined1 *)((longlong)param_1 + 9) = 0;
  }
  puVar1 = param_1 + 7;
  auVar11._0_12_ = ZEXT812(0);
  auVar11._12_4_ = 0;
  auVar12 = ZEXT1664(auVar11);
  *(undefined4 *)((longlong)param_1 + 10) = 0xffff0000;
  *(undefined2 *)((longlong)param_1 + 0xe) = 0;
  param_1[2] = 0;
  param_1[3] = 0xffffffffffffffff;
  *(undefined1 (*) [16])(param_1 + 4) = auVar11;
  param_1[6] = 0;
  FUN_1401bd1f0(puVar1,0,0);
  *(undefined1 (*) [16])(param_1 + 9) = auVar12._0_16_;
  param_1[0xb] = 0;
  if (param_3 == 0) {
    uVar9 = FUN_140643cd0();
    FUN_14056eb30(uVar9,auStack_138,param_2,&UNK_14678d1bb);
  }
  else {
    func_0x000144dac8f0(auStack_138,&uStack_140,0x100);
  }
  FUN_14079e350(puVar1,auStack_138);
  uVar3 = FUN_1428cd1a0(puVar1);
  *(undefined2 *)((longlong)param_1 + 0xe) = uVar3;
  puVar10 = (undefined8 *)&UNK_14678d1bb;
  if ((undefined8 *)param_1[7] != (undefined8 *)0x0) {
    puVar10 = (undefined8 *)param_1[7];
  }
  if (*(char *)((longlong)param_1 + 0x47) < '\0') {
    puVar10 = puVar1;
  }
  plVar7 = (longlong *)func_0x000140968480(puVar10,1);
  param_1[2] = plVar7;
  if (plVar7 != (longlong *)0x0) {
    lVar8 = (**(code **)(*plVar7 + 0x28))(plVar7,auStack_138,param_1 + 4);
    param_1[3] = lVar8;
    if (lVar8 != -1) {
      if (param_3 == 0) {
        uVar9 = (**(code **)(*(longlong *)param_1[2] + 0x108))((longlong *)param_1[2],auStack_138);
      }
      else {
        uVar9 = *(undefined8 *)(param_3 + 0x18);
      }
      LOCK();
      param_1[6] = uVar9;
      UNLOCK();
      cVar2 = (**(code **)(*(longlong *)param_1[2] + 0x1d0))();
      if (cVar2 == '\0') {
        if (param_3 == 0) {
          uVar9 = (**(code **)(*(longlong *)param_1[2] + 0xf8))((longlong *)param_1[2],auStack_138);
        }
        else {
          uVar9 = *(undefined8 *)(param_3 + 0x10);
        }
      }
      else {
        plVar7 = (longlong *)(**(code **)(*(longlong *)param_1[2] + 0x1e0))();
        uVar4 = (**(code **)(*plVar7 + 0x2a8))(plVar7,param_2);
        iVar5 = (**(code **)(*plVar7 + 0x3d0))(plVar7);
        uVar9 = (**(code **)(*plVar7 + 0x2e8))(plVar7,uVar4 & 0xffff | iVar5 << 0x10);
      }
      param_1[5] = uVar9;
      uVar3 = func_0x0001455b2550(_DAT_1498d4b30,param_1);
      *(undefined2 *)((longlong)param_1 + 0xc) = uVar3;
    }
  }
  return param_1;
}

