// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140079d80  size: 982 bytes
// Name:    FUN_140079d80
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1455925a0, FUN_144e332b0, FUN_14355b090, FUN_145647140, FUN_144e258f0, FUN_14500ff60
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140079d80(longlong *param_1,longlong *param_2,undefined4 param_3,char param_4,
                  undefined4 param_5,char param_6,char param_7)

{
  undefined1 auVar1 [16];
  char cVar2;
  short sVar3;
  undefined2 uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 *puVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 ***pppuVar12;
  bool bVar13;
  undefined1 auVar14 [16];
  int iVar15;
  undefined4 uVar16;
  undefined8 auStack_f0 [4];
  undefined8 uStack_d0;
  undefined1 **ppuStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined1 **ppuStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined4 uStack_84;
  undefined1 *puStack_80;
  undefined4 *puStack_78;
  longlong lStack_70;
  undefined4 uStack_64;
  undefined1 *puStack_60;
  
  auStack_f0[0] = 0x140079dc1;
  uStack_64 = param_3;
  lVar7 = (**(code **)(*param_2 + 0xa8))(param_2);
  *(char *)((longlong)param_1 + 0x24) = param_6;
  if (param_6 != '\0') {
    auStack_f0[0] = 0x140079ddd;
    lVar8 = FUN_144e258f0(param_2);
    if ((lVar8 != 0) && (*(longlong *)(lVar8 + 0x170) != 0)) {
      auStack_f0[0] = 0x140079dfc;
      lVar8 = FUN_144e258f0(param_2);
      lVar8 = *(longlong *)(lVar8 + 0x170);
      auStack_f0[0] = 0x140079e13;
      cVar2 = func_0x000144eeb6b0(lVar8);
      if (cVar2 != '\0') {
        lVar7 = *(longlong *)(lVar8 + 0x110);
      }
    }
  }
  pppuVar12 = &ppuStack_c8;
  iVar15 = (int)param_1[1];
  uVar16 = *(undefined4 *)((longlong)param_1 + 0xc);
  lVar8 = param_2[6];
  lStack_70 = *param_1;
  param_1[2] = 0;
  param_1[3] = -0x100000000;
  *param_1 = 0;
  param_1[1] = -0x100000000;
  if (lVar7 == 0) {
    *(undefined4 *)(param_1 + 4) = 0;
    return;
  }
  if (((char)lVar8 == '\x02') && ((longlong *)param_2[4] != (longlong *)0x0)) {
    auStack_f0[0] = 0x140079e74;
    sVar3 = (**(code **)(*(longlong *)param_2[4] + 0x68))();
    if (sVar3 == 0) {
      uVar4 = 0;
      puVar9 = (undefined1 *)0x0;
    }
    else {
      auStack_f0[0] = 0x140079e8c;
      puVar9 = (undefined1 *)(**(code **)(*(longlong *)param_2[4] + 0x60))();
      auStack_f0[0] = 0x140079ea2;
      uVar4 = (**(code **)(*(longlong *)param_2[4] + 0x68))();
    }
  }
  else {
    uVar4 = 0;
    puVar9 = (undefined1 *)0x0;
  }
  if ((param_7 != '\0') && (DAT_14908f7ee == '\x01')) {
    lVar11 = param_2[5];
    puStack_60 = puVar9;
    if ((param_6 == '\0') || (*(int *)(lVar11 + 0xb08) == -1)) {
      auStack_f0[0] = 0x140079f17;
      uVar5 = func_0x00014517b070(lVar11);
      cVar2 = '\0';
      puVar9 = puStack_60;
      if (*(int *)(lVar11 + 0xb04) == -1) goto LAB_140079f48;
    }
    else {
      auStack_f0[0] = 0x140079f02;
      uVar5 = func_0x00014355b030(lVar11);
      cVar2 = '\x01';
    }
    puVar9 = puStack_60;
    if (uVar5 <= *(uint *)(lVar7 + 0x1d4)) {
      uStack_d0 = 0x14007a09d;
      lVar10 = FUN_145647140();
      lVar10 = -lVar10;
      puStack_80 = (undefined1 *)((longlong)&ppuStack_c8 + lVar10);
      puStack_60 = (undefined1 *)((longlong)&ppuStack_c8 + lVar10);
      pppuVar12 = (undefined1 ***)((longlong)&ppuStack_c8 + lVar10);
      puStack_78 = &uStack_84;
      uStack_84 = 0;
      if (cVar2 == '\0') {
        pcStack_a0 = FUN_14355b060;
        puStack_98 = &UNK_1408d04c0;
        puStack_90 = &SUB_140004380;
        ppuStack_a8 = &puStack_80;
        puStack_80 = (undefined1 *)((longlong)&ppuStack_c8 + lVar10);
        puStack_60 = (undefined1 *)((longlong)&ppuStack_c8 + lVar10);
        *(undefined8 *)((longlong)auStack_f0 + lVar10) = 0x14007a12c;
        FUN_14500ff60(lVar11);
      }
      else {
        pcStack_c0 = FUN_14355b060;
        puStack_b8 = &UNK_1408d04c0;
        puStack_b0 = &SUB_140004380;
        ppuStack_c8 = &puStack_80;
        *(undefined8 *)((longlong)auStack_f0 + lVar10) = 0x14007a0f6;
        FUN_14355b090(lVar11);
      }
      *(undefined8 *)((longlong)auStack_f0 + lVar10) = 0x14007a13c;
      uVar4 = func_0x000144db6ef0(uVar5);
      cVar2 = '\x01';
      puVar9 = puStack_60;
      goto LAB_140079f48;
    }
  }
  cVar2 = '\0';
  pppuVar12 = &ppuStack_c8;
LAB_140079f48:
  if ((char)lVar8 == '\x02') {
    bVar13 = false;
  }
  else {
    *(undefined8 *)((longlong)pppuVar12 + -0x28) = 0x140079f71;
    iVar6 = FUN_1455925a0(lVar7);
    bVar13 = iVar6 == 2;
  }
  *(bool *)((longlong)param_1 + 0x25) = bVar13;
  *(char *)((longlong)pppuVar12 + -0x10) = cVar2;
  *(char *)((longlong)pppuVar12 + -0x18) = param_7;
  *(undefined2 *)((longlong)pppuVar12 + -0x20) = uVar4;
  *(undefined8 *)((longlong)pppuVar12 + -0x48) = 0x140079fb0;
  FUN_144e332b0(lVar7,param_1,param_5,puVar9);
  lVar7 = lStack_70;
  if ((*(char *)((longlong)param_1 + 0x25) == '\x01') && ((ulonglong)*(uint *)(param_1 + 1) != 0)) {
    auVar14._8_8_ = 0;
    auVar14._0_8_ = _DAT_146159bc0;
    lVar8 = *param_1;
    lVar11 = 0;
    do {
      auVar1 = vcmpps_avx(ZEXT416(_DAT_145fc6ed8),*(undefined1 (*) [16])(lVar8 + lVar11),4);
      if ((((((SUB161(auVar1 >> 0x1f,0) & 1) != 0 || (SUB161(auVar1 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar1 >> 0x5f,0) & 1) != 0) || auVar1[0xf] < '\0') ||
          (auVar1 = vcmpps_avx(auVar14,*(undefined1 (*) [16])(lVar8 + 0x10 + lVar11),4),
          (((SUB161(auVar1 >> 0x1f,0) & 1) != 0 || (SUB161(auVar1 >> 0x3f,0) & 1) != 0) ||
          (SUB161(auVar1 >> 0x5f,0) & 1) != 0) || auVar1[0xf] < '\0')) ||
         (auVar1 = vcmpps_avx(_DAT_14614f7f0,*(undefined1 (*) [16])(lVar8 + 0x20 + lVar11),4),
         (((SUB161(auVar1 >> 0x1f,0) & 1) != 0 || (SUB161(auVar1 >> 0x3f,0) & 1) != 0) ||
         (SUB161(auVar1 >> 0x5f,0) & 1) != 0) || auVar1[0xf] < '\0')) {
        *(undefined1 *)((longlong)param_1 + 0x25) = 0;
        break;
      }
      lVar11 = lVar11 + 0x30;
    } while ((ulonglong)*(uint *)(param_1 + 1) * 0x30 != lVar11);
  }
  lVar8 = param_1[4];
  *(undefined8 *)((longlong)pppuVar12 + -0x28) = 0x14007a02f;
  iVar6 = func_0x000144ee1290();
  if ((param_4 == '\0' && lVar7 != 0) && (int)lVar8 == iVar6 + -1) {
    *(undefined4 *)(param_1 + 4) = uStack_64;
    if (iVar15 == (int)param_1[1]) {
      param_1[2] = lVar7;
      *(int *)(param_1 + 3) = iVar15;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar16;
      return;
    }
  }
  else {
    *(undefined4 *)(param_1 + 4) = uStack_64;
  }
  param_1[2] = *param_1;
  param_1[3] = param_1[1];
  return;
}

