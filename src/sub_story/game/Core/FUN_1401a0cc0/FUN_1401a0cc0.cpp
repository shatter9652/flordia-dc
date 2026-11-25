// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401a0cc0  size: 487 bytes
// Name:    FUN_1401a0cc0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_142d03b20, FUN_142d03d70
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401a0cc0(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong unaff_GS_OFFSET;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined8 auStack_98 [2];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [16];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  iVar1 = *(int *)(param_1 + 0x510);
  if (0 < (longlong)iVar1) {
    lVar8 = 0;
    do {
      if (*(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
          '\0') {
        func_0x0001455db994();
        uStack_b8 = *(undefined8 *)(param_1 + 0x554);
        uStack_b0 = *(undefined8 *)(param_1 + 0x55c);
        uVar7 = *(undefined4 *)(param_1 + 0x550);
        uStack_a8 = *(undefined4 *)(param_1 + 0x564);
        uStack_d8 = *(undefined8 *)(param_1 + 0x568);
        uStack_d0 = *(undefined8 *)(param_1 + 0x570);
        uStack_c8 = *(undefined4 *)(param_1 + 0x578);
        if (*(char *)(*(longlong *)
                       (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
            '\0') {
          func_0x0001455db994();
        }
      }
      else {
        uStack_a8 = *(undefined4 *)(param_1 + 0x564);
        uVar7 = *(undefined4 *)(param_1 + 0x550);
        uStack_b8 = *(undefined8 *)(param_1 + 0x554);
        uStack_b0 = *(undefined8 *)(param_1 + 0x55c);
        uStack_d8 = *(undefined8 *)(param_1 + 0x568);
        uStack_d0 = *(undefined8 *)(param_1 + 0x570);
        uStack_c8 = *(undefined4 *)(param_1 + 0x578);
      }
      uVar2 = *(undefined4 *)(param_1 + 0x57c);
      *(undefined4 *)(param_1 + 0x40 + lVar8) = uVar7;
      puVar6 = (undefined8 *)(param_1 + 0x44 + lVar8);
      *puVar6 = uStack_b8;
      puVar6[1] = uStack_b0;
      *(undefined4 *)(param_1 + 0x54 + lVar8) = uStack_a8;
      puVar6 = (undefined8 *)(param_1 + 0x58 + lVar8);
      *puVar6 = uStack_d8;
      puVar6[1] = uStack_d0;
      *(undefined4 *)(param_1 + 0x68 + lVar8) = uStack_c8;
      *(undefined4 *)(param_1 + 0x6c + lVar8) = uVar2;
      uVar4 = *(undefined8 *)(param_1 + 0x580);
      uVar5 = *(undefined8 *)(param_1 + 0x588);
      *(undefined8 *)(param_1 + 0x80 + lVar8) = *(undefined8 *)(param_1 + 0x590);
      puVar6 = (undefined8 *)(param_1 + 0x70 + lVar8);
      *puVar6 = uVar4;
      puVar6[1] = uVar5;
      plVar3 = *(longlong **)(param_1 + 0x538);
      if (plVar3 == (longlong *)0x0) {
        FUN_142d03d70(param_1,auStack_78);
        puVar6 = auStack_98;
      }
      else {
        (**(code **)(*plVar3 + 0x68))(plVar3,&uStack_68,auStack_58);
        puVar6 = &uStack_88;
        uStack_88 = uStack_68;
        uStack_80 = uStack_60;
      }
      FUN_142d03b20(param_1 + 0x10 + lVar8,puVar6);
      lVar8 = lVar8 + 0xa0;
    } while ((longlong)iVar1 * 0xa0 != lVar8);
  }
  return;
}

