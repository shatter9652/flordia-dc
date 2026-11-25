// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14011b010  size: 444 bytes
// Name:    FUN_14011b010
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14011a8a0, FUN_140324ef0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14011b010(uint *param_1,undefined4 *param_2)

{
  undefined1 (*pauVar1) [16];
  longlong *plVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined8 *puVar7;
  longlong unaff_GS_OFFSET;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  uVar4 = param_1[1];
  if (uVar4 == *param_1) {
    uVar6 = 1;
    if (1 < uVar4) {
      uVar6 = uVar4 >> 1;
    }
    FUN_14011a8a0(param_1,uVar6 + uVar4);
    uVar4 = param_1[1];
  }
  param_1[1] = uVar4 + 1;
  puVar3 = (undefined8 *)(*(longlong *)(param_1 + 2) + (ulonglong)uVar4 * 0x28);
  if (*(longlong *)(param_1 + 2) != 0) {
    auVar8._0_12_ = ZEXT812(0);
    auVar8._12_4_ = 0;
    uVar5 = *param_2;
    *puVar3 = 0xfffffff003fffff;
    *(undefined1 (*) [16])(puVar3 + 1) = auVar8;
    plVar2 = (longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1448);
    if (*(char *)((*(longlong **)(unaff_GS_OFFSET + 0x58))[__tls_index] + 8) == '\0') {
      func_0x0001455db994();
    }
    puVar7 = (undefined8 *)*plVar2;
    pauVar1 = (undefined1 (*) [16])(puVar3 + 1);
    if (puVar7 == (undefined8 *)0x0) {
      *(undefined8 *)*pauVar1 = 0;
    }
    else if (*(longlong *)*pauVar1 != 0) {
      if (*(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
          '\0') {
        func_0x0001455db994();
        puVar7 = (undefined8 *)*plVar2;
      }
      FUN_140324ef0(*puVar7,pauVar1);
    }
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      func_0x0001455db994();
    }
    puVar7 = (undefined8 *)*plVar2;
    if ((puVar7 != (undefined8 *)0x0) && (puVar3[2] != 0)) {
      if (*(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
          '\0') {
        func_0x0001455db994();
        puVar7 = (undefined8 *)*plVar2;
      }
      FUN_140324ef0(*puVar7,puVar3 + 2);
    }
    auVar9._0_12_ = ZEXT812(0);
    auVar9._12_4_ = 0;
    *(undefined4 *)(puVar3 + 3) = 0;
    *(undefined4 *)((longlong)puVar3 + 0x1c) = uVar5;
    *(undefined1 *)(puVar3 + 4) = 0;
    *pauVar1 = auVar9;
  }
  return;
}

