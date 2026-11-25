// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1422e5560  size: 743 bytes
// Name:    CNetwork::RestartNetworkTimePausable
// Subsystem: network
// Class:   CNetwork
//
// Evidence:
//   GTAVSRC: CNetwork::RestartNetworkTimePausable  (game/script/commands_network.cpp)
//   literal: %02d:%02d.%03d
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14224c010, FUN_140592930
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"
#include "gta6decomp/CNetwork.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
CNetwork__RestartNetworkTimePausable
          (longlong param_1,uint param_2,undefined8 param_3,undefined8 param_4,undefined1 param_5,
          undefined4 *param_6)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 unaff_RBX;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined *puVar11;
  int iVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 in_ZMM0 [64];
  float fVar15;
  undefined1 in_register_00001284 [12];
  undefined1 auStack_50 [16];
  undefined4 uStack_40;
  undefined1 uStack_3c;
  undefined1 uStack_3b;
  undefined4 uStack_38;
  undefined2 uStack_34;
  
  if ((int)param_2 < 0) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0x34);
  uVar2 = *(uint *)(param_1 + 0x30);
  uVar8 = 0;
  uVar9 = 1;
  if (iVar1 == 0) {
    uVar9 = 60000;
  }
  iVar12 = 1000;
  if (iVar1 != 0) {
    iVar12 = 0;
  }
  if ((uVar2 & 1) != 0) {
    uVar7 = 0x3c;
    if (iVar1 == 0) {
      uVar7 = 3600000;
    }
    uVar8 = (ulonglong)param_2 / (ulonglong)uVar7;
    param_2 = param_2 % uVar7;
  }
  uVar3 = param_2 / uVar9;
  uVar9 = (ulonglong)param_2 % uVar9;
  uVar10 = 0;
  auVar13._4_12_ = in_ZMM0._4_12_;
  if ((uVar2 & 4) == 0) {
    if ((uVar2 & 8) != 0) {
      fVar15 = _DAT_145fc6ed8;
      if (*(char *)(param_1 + 0x38) == '\0') {
        fVar15 = _DAT_146159bd0;
      }
      auVar14 = ZEXT416((uint)((float)(int)(short)((short)uVar9 +
                                                  (short)((uint)(uVar9 >> 3) / 0x7d) * -1000) /
                               fVar15 + _DAT_145fc6edc));
LAB_1422e56ad:
      vroundss_avx(auVar14,auVar14,9);
      uVar10 = (ulonglong)((uint)(uVar9 >> 3) / 0x7d);
    }
  }
  else {
    auVar13._0_4_ = (float)(int)uVar9 / (float)iVar12;
    if ((uVar2 & 2) == 0) {
      auVar13 = ZEXT416((uint)(auVar13._0_4_ + _DAT_145fc6edc));
    }
    if ((uVar2 & 8) != 0) {
      fVar15 = _DAT_145fc6ed8;
      if (*(char *)(param_1 + 0x38) == '\0') {
        fVar15 = _DAT_146159bd0;
      }
      auVar14._0_4_ =
           (float)(int)(short)((short)uVar9 + (short)((uint)(uVar9 >> 3) / 0x7d) * -1000) / fVar15;
      auVar14._4_12_ = in_register_00001284;
      goto LAB_1422e56ad;
    }
    auVar13 = vroundss_avx(auVar13,auVar13,9);
    uVar10 = (ulonglong)(uint)(int)auVar13._0_4_;
  }
  auStack_50[0] = 0;
  if (*(char *)(param_1 + 0x39) == '\x01') {
    if ((int)uVar2 < 0xe) {
      if (uVar2 == 3) {
        puVar6 = &UNK_146784f8e;
        uVar10 = uVar3;
        goto LAB_1422e57d2;
      }
      if (uVar2 == 7) {
        puVar6 = &UNK_146784f71;
        uVar10 = uVar3;
        goto LAB_1422e57d2;
      }
    }
    else {
      if (uVar2 == 0xe) {
        puVar11 = &UNK_146784e5f;
        puVar6 = &UNK_146784fb7;
LAB_1422e57bd:
        uVar8 = uVar3;
        if (*(char *)(param_1 + 0x38) != '\0') {
          puVar6 = puVar11;
        }
        goto LAB_1422e57d2;
      }
      if (uVar2 == 0xf) {
        puVar11 = &UNK_146784e39;
        puVar6 = &UNK_146784fa0;
LAB_1422e575f:
        uVar10 = uVar3;
        if (*(char *)(param_1 + 0x38) != '\0') {
          puVar6 = puVar11;
        }
        goto LAB_1422e57d2;
      }
    }
    puVar6 = &UNK_146784f8e;
    uVar8 = uVar3;
  }
  else {
    if ((int)uVar2 < 0xe) {
      if (uVar2 == 3) {
        puVar6 = &UNK_146784f98;
        uVar10 = uVar3;
        goto LAB_1422e57d2;
      }
      if (uVar2 == 7) {
        puVar6 = &UNK_146784f80;
        uVar10 = uVar3;
        goto LAB_1422e57d2;
      }
    }
    else {
      if (uVar2 == 0xe) {
        puVar11 = &UNK_146784e6e;
        puVar6 = &UNK_146784fc6;
        goto LAB_1422e57bd;
      }
      if (uVar2 == 0xf) {
        puVar11 = &UNK_146784e4d;
        puVar6 = &UNK_146784fb4;
        goto LAB_1422e575f;
      }
    }
    puVar6 = &UNK_146784f98;
    uVar8 = uVar3;
  }
LAB_1422e57d2:
  FUN_14224c010(auStack_50,puVar6,uVar8,uVar10);
  uStack_38 = 0;
  uStack_34 = 0xff01;
  uVar4 = func_0x00014100beb0(auStack_50);
  uStack_40 = *param_6;
  uStack_3c = *(undefined1 *)(param_6 + 1);
  uStack_3b = *(undefined1 *)((longlong)param_6 + 5);
  uVar5 = FUN_140592930(param_3,param_4,
                        CONCAT71((int7)((ulonglong)unaff_RBX >> 8),param_5) & 0xffffffff,&uStack_40,
                        auStack_50,uVar4,0xb,&uStack_38);
  return uVar5;
}

