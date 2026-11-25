// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401ce0a0  size: 310 bytes
// Name:    FUN_1401ce0a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401ce0a0(longlong param_1,longlong param_2,undefined8 *param_3,uint param_4)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined4 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  uVar1 = _UNK_146180f28;
  uVar5 = (ulonglong)(param_4 >> 0x10);
  plVar2 = *(longlong **)(param_1 + (ulonglong)*(ushort *)(param_2 + 4 + uVar5 * 8) * 8);
  *param_3 = _DAT_146180f20;
  param_3[1] = uVar1;
  uVar3 = (**(code **)(*plVar2 + 8))(plVar2);
  switch(uVar3) {
  case 0:
    lVar4 = (**(code **)(*plVar2 + 0x80))(plVar2);
    lVar4 = (ulonglong)((uint)*(ushort *)(param_2 + 2 + uVar5 * 8) * 0x60) + lVar4;
    *param_3 = *(undefined8 *)(lVar4 + 0x50);
    auVar9._8_8_ = 0;
    auVar9._0_8_ = *(ulonglong *)(lVar4 + 0x58);
    auVar8 = vsqrtps_avx(auVar9);
    uVar1 = vmovlps_avx(auVar8);
    param_3[1] = uVar1;
    return;
  case 1:
    lVar4 = (**(code **)(*plVar2 + 0x80))(plVar2);
    lVar4 = (ulonglong)((uint)*(ushort *)(param_2 + 2 + uVar5 * 8) * 0x30) + lVar4;
    break;
  case 2:
    lVar4 = (**(code **)(*plVar2 + 0x80))(plVar2);
    lVar4 = (ulonglong)((uint)*(ushort *)(param_2 + 2 + uVar5 * 8) * 0x90) + lVar4;
    *param_3 = *(undefined8 *)(lVar4 + 0x80);
    auVar7._8_8_ = 0;
    auVar7._0_8_ = *(ulonglong *)(lVar4 + 0x88);
    auVar8 = vsqrtps_avx(auVar7);
    uVar1 = vmovlps_avx(auVar8);
    param_3[1] = uVar1;
    return;
  case 3:
    lVar4 = (**(code **)(*plVar2 + 0x80))(plVar2);
    lVar4 = (ulonglong)((uint)*(ushort *)(param_2 + 2 + uVar5 * 8) * 0x30) + lVar4;
    break;
  case 4:
    lVar4 = (**(code **)(*plVar2 + 0x80))(plVar2);
    lVar4 = (ulonglong)((uint)*(ushort *)(param_2 + 2 + uVar5 * 8) * 0x30) + lVar4;
    *param_3 = *(undefined8 *)(lVar4 + 0x14);
    auVar8._8_8_ = 0;
    auVar8._0_8_ = *(ulonglong *)(lVar4 + 0x1c);
    auVar8 = vsqrtps_avx(auVar8);
    uVar1 = vmovlps_avx(auVar8);
    param_3[1] = uVar1;
    return;
  default:
    return;
  }
  *param_3 = *(undefined8 *)(lVar4 + 0x20);
  auVar6._8_8_ = 0;
  auVar6._0_8_ = *(ulonglong *)(lVar4 + 0x28);
  auVar8 = vsqrtps_avx(auVar6);
  uVar1 = vmovlps_avx(auVar8);
  param_3[1] = uVar1;
  return;
}

