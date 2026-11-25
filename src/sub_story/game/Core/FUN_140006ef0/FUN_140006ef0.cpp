// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140006ef0  size: 790 bytes
// Name:    FUN_140006ef0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140006ef0(longlong param_1,longlong param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  longlong lStack_60;
  undefined1 auStack_58 [16];
  uint uStack_48;
  undefined8 uStack_44;
  undefined4 uStack_3c;
  int iStack_38;
  uint uStack_34;
  undefined2 uStack_30;
  undefined1 uStack_2e;
  char cStack_2d;
  
  lStack_60 = *(longlong *)(param_2 + 0x20);
  if (lStack_60 == 0) {
    *(byte *)(param_1 + 0x117) = *(byte *)(param_1 + 0x117) | 1;
    return;
  }
  uStack_44 = 0xffffffff;
  uStack_2e = 0;
  uVar6 = *(uint *)(param_2 + 8);
  uVar8 = *(uint *)(param_2 + 0xc);
  uStack_30 = *(undefined2 *)(param_1 + 0x78);
  uVar1 = **(uint **)(param_2 + 0x18);
  uVar2 = *(uint *)(param_1 + 0x114);
  uStack_48 = uVar8;
  uStack_34 = uVar1;
  switch(uVar2 >> 0x11 & 0xf) {
  case 4:
    iVar11 = *(int *)(param_2 + 4) << 0xb;
    break;
  case 5:
    iVar11 = 0;
    if (*(int *)(param_2 + 0x30) == 0) {
      iVar11 = (uint)*(ushort *)(*(longlong *)(param_1 + 0x70) + 0x16) << 7;
    }
    uVar6 = iVar11 + uVar6;
    if (*(char *)(param_2 + 0x34) == '\x01') {
      uStack_48 = **(int **)(param_1 + 0x70) - uVar1;
    }
    if (uStack_48 < uVar6) {
      uVar6 = uStack_48;
    }
    auVar4._4_4_ = uVar6;
    auVar4._0_4_ = *(int *)(param_2 + 4) << 0xb;
    auVar4._8_8_ = 0;
    auStack_58 = auVar4 << 0x40;
    goto LAB_1400070ba;
  default:
    auVar3._4_4_ = uVar6;
    auVar3._0_4_ = uVar8 * 2;
    auVar3._8_8_ = 0;
    auStack_58 = auVar3 << 0x40;
    uStack_48 = 0xffffffff;
    if (*(char *)(param_2 + 0x34) != '\0') {
      uStack_48 = uVar8;
    }
    goto LAB_1400070ba;
  case 7:
    iVar11 = *(int *)(param_2 + 0x14);
    if (*(char *)(param_2 + 0x34) == '\x01') {
      uStack_44 = CONCAT44(uVar8,0xffffffff);
    }
    break;
  case 8:
    uVar10 = param_3;
    if (param_3 == 0xffffffff) {
      uStack_34 = uVar6 + uVar1;
      uVar10 = 0;
    }
    if (*(char *)(param_2 + 0x34) == '\x01') {
      uStack_48 = **(int **)(param_1 + 0x70) - uVar1;
    }
    auStack_58._8_8_ = CONCAT44(uVar10,*(int *)(param_2 + 4) << 0xb);
    uVar6 = uVar10;
    goto code_r0x0001400070a7;
  case 0xb:
    uVar10 = param_3;
    if (param_3 == 0xffffffff) {
      uStack_34 = uVar6 + uVar1;
      uVar10 = 0;
    }
    if (**(uint **)(param_1 + 0x70) < uVar1 + uVar8) {
      uStack_48 = **(uint **)(param_1 + 0x70) - uVar1;
    }
    auStack_58._8_8_ = CONCAT44(uVar10,*(int *)(param_2 + 4) << 0xb);
    uVar6 = uVar10;
code_r0x0001400070a7:
    auStack_58._0_8_ = *(uint **)(param_2 + 0x18);
    goto LAB_1400070ba;
  }
  auVar5._4_4_ = uVar6;
  auVar5._0_4_ = iVar11;
  auVar5._8_8_ = 0;
  auStack_58 = auVar5 << 0x40;
LAB_1400070ba:
  uStack_3c = 0;
  uVar10 = *(uint *)(param_2 + 0x28);
  if ((-1 < (int)uVar10) && (uVar9 = *(uint *)(param_2 + 0x2c), 0 < (int)uVar9)) {
    uVar8 = uVar8 + uVar1;
    iVar11 = uVar10 - uVar1;
    if (uVar10 < uVar8 && (uVar1 <= uVar10 && iVar11 != 0)) {
      uVar6 = uVar6 + iVar11;
      auStack_58._12_4_ = uVar6;
      if (((uVar2 & 0x1e0000) == 0xe0000) && (0x2f < uVar6)) {
        uVar6 = uVar6 - 0x30;
        auStack_58._12_4_ = uVar6;
      }
    }
    if (uVar9 < uVar8) {
      uStack_48 = uStack_48 + (uVar9 - uVar8);
      uVar9 = uVar2 & 0x1e0000;
      if ((uVar9 == 0xe0000) && (0x2f < uStack_48)) {
        uStack_48 = uStack_48 - 0x30;
        uVar9 = 0xe0000;
      }
    }
    else {
      uVar9 = uVar2 & 0x1e0000;
    }
    if (((uVar9 == 0xe0000 && (uVar10 < uVar8 && (uVar1 <= uVar10 && iVar11 != 0))) &&
        (0x490 < uVar6)) && (0x490 < uStack_48)) {
      uVar6 = uVar6 - 0x490;
      uStack_48 = uStack_48 - 0x490;
      auStack_58._12_4_ = uVar6;
      uStack_2e = 1;
    }
  }
  cStack_2d = *(char *)(param_2 + 0x34);
  iStack_38 = (int)*(short *)(param_1 + 0x68);
  if (((*(int *)(param_2 + 0x30) == 0) &&
      (lVar7 = *(longlong *)(param_1 + 0x70), *(char *)(lVar7 + 0x1c) == '\a')) &&
     ((*(short *)(lVar7 + 0x18) == 1 && (*(int *)(lVar7 + 4) == -1)))) {
    uStack_2e = 1;
  }
  if (-1 < (int)param_3) {
    auStack_58._12_4_ = param_3;
    uVar6 = param_3;
  }
  if (uVar6 < uStack_48) {
    (**(code **)(**(longlong **)(param_1 + 0x60) + 0x20))(*(longlong **)(param_1 + 0x60),&lStack_60)
    ;
  }
  else if ((cStack_2d != '\0') &&
          (lVar7 = func_0x000144f131b0(), *(char *)(lVar7 + 0x840) != '\x01')) {
    *(uint *)(param_1 + 0x114) = uVar2 | 0x1000000;
  }
  *(int *)(param_1 + 0xe8) = *(int *)(param_1 + 0xe8) + 1;
  return;
}

