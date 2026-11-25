// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14012a2a0  size: 1380 bytes
// Name:    FUN_14012a2a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14515da50, FUN_14381a5b0, FUN_14012a890, FUN_14012a820, FUN_145299a50, FUN_14381a6f0, FUN_1451d7530, FUN_14381a420, FUN_144fdadb0, FUN_144ec2d60, FUN_144ec2f00, FUN_144eb3750, FUN_144ec2da0, FUN_14381a360
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14012a2a0(undefined1 (*param_1) [16],longlong param_2,longlong param_3,undefined4 param_4)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  byte bVar6;
  undefined8 unaff_RBP;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined7 uVar10;
  char cVar11;
  byte bVar12;
  bool bVar13;
  bool bVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  undefined1 extraout_var [56];
  undefined1 auVar17 [64];
  float fVar18;
  float fVar19;
  longlong lStack_108;
  undefined8 uStack_100;
  float afStack_f8 [4];
  undefined8 uStack_e8;
  float afStack_e0 [4];
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined5 uStack_b0;
  undefined3 uStack_ab;
  undefined1 auStack_a8 [13];
  
  uStack_e8 = 4;
  FUN_14012a890(param_2);
  uStack_100 = 4;
  FUN_14012a820(param_1);
  FUN_144ec2da0(param_3,&uStack_b8,0xed3880e00000000);
  iVar5 = func_0x0001450487d0(uStack_b8,uStack_b4);
  uVar15 = FUN_144ec2d60(param_3);
  auVar17._0_8_ = FUN_144ec2f00(param_3);
  auVar17._8_56_ = extraout_var;
  if ((ulonglong)*(uint *)(param_1[2] + 4) == 0) {
    uVar15 = 0;
    bVar14 = false;
    bVar6 = 1;
    cVar11 = '\0';
    bVar12 = 0;
  }
  else {
    lVar8 = *(longlong *)(param_1[2] + 8);
    auVar17 = ZEXT1664(auVar17._0_16_);
    bVar6 = 1;
    fVar18 = 0.0;
    bVar13 = false;
    cVar11 = '\0';
    lStack_108 = (ulonglong)*(uint *)(param_1[2] + 4) * 0x48;
    fVar19 = _DAT_146159ec4;
    do {
      if (*(char *)(lVar8 + 0x44) == '\x01') {
        lVar9 = FUN_144eb3750(*(undefined4 *)(param_2 + 0x9c));
        uVar7 = (ulonglong)*(uint *)(lVar8 + 8);
        bVar2 = true;
        bVar14 = true;
        if (uVar7 != 0) {
          bVar14 = fVar18 < afStack_e0[uVar7];
        }
        if (fVar18 <= *(float *)(lVar8 + 0x10)) {
          bVar2 = fVar19 * (float)(uint)(_DAT_14abbef40 - *(int *)(lVar8 + 0x3c)) <
                  *(float *)(lVar8 + 0x10);
        }
        if (*(int *)(lVar8 + 4) == 2) {
          bVar3 = (float)uVar15 <= fVar18;
          bVar3 = (uVar7 == 3 && (fVar18 < auVar17._0_4_ || bVar3) || iVar5 == 0) ||
                  (uVar7 == 2 && bVar3 || lVar9 == 0);
        }
        else {
          bVar3 = false;
        }
        if ((bVar3) || (!(bool)(bVar14 & bVar2))) {
          *(undefined1 *)(lVar8 + 0x44) = 0;
          *(int *)(lVar8 + 0x40) = _DAT_14abbef40;
          FUN_14381a360(param_2,lVar8);
          cVar11 = '\x01';
          if (*(int *)(lVar8 + 4) == 0) {
            *(undefined1 *)(lVar8 + 0x45) = 1;
          }
        }
      }
      if ((*(char *)(lVar8 + 0x44) == '\x01') && (*(int *)(lVar8 + 4) - 1U < 2)) {
        bVar13 = true;
        bVar6 = bVar6 & *(int *)(lVar8 + 4) == 2;
      }
      lVar8 = lVar8 + 0x48;
      lStack_108 = lStack_108 + -0x48;
    } while (lStack_108 != 0);
    if ((ulonglong)*(uint *)(param_1[2] + 4) == 0) {
LAB_14012a5ff:
      uVar15 = 0;
      bVar14 = false;
      if (bVar13) {
LAB_14012a60c:
        bVar12 = 1;
        cVar4 = '\x01';
        if ((bool)(iVar5 == 0 & bVar14)) goto LAB_14012a371;
        bVar13 = bVar6 == 0;
        bVar12 = 1;
LAB_14012a627:
        cVar4 = '\x01';
        if (!bVar13) goto LAB_14012a371;
        goto LAB_14012a36e;
      }
    }
    else {
      lVar8 = *(longlong *)(param_1[2] + 8);
      lVar9 = (ulonglong)*(uint *)(param_1[2] + 4) * 0x48;
      do {
        if ((*(char *)(lVar8 + 0x44) == '\0') && (*(int *)(lVar8 + 4) == 0)) {
          cVar4 = FUN_14381a420(param_2,lVar8,&uStack_e8,&uStack_100,param_4,param_3);
          if (cVar4 != '\0') {
            *(undefined1 *)(lVar8 + 0x44) = 1;
            *(int *)(lVar8 + 0x3c) = _DAT_14abbef40;
            FUN_14381a5b0(param_2,lVar8);
            afStack_f8[*(uint *)(lVar8 + 8)] =
                 afStack_f8[*(uint *)(lVar8 + 8)] + *(float *)(lVar8 + 0xc);
          }
        }
        lVar8 = lVar8 + 0x48;
        lVar9 = lVar9 + -0x48;
      } while (lVar9 != 0);
      if ((ulonglong)*(uint *)(param_1[2] + 4) == 0) goto LAB_14012a5ff;
      lVar8 = *(longlong *)(param_1[2] + 8);
      lVar9 = 0;
      lStack_108 = (ulonglong)*(uint *)(param_1[2] + 4) * 0x48;
      do {
        if ((*(char *)(lVar8 + 0x44) == '\0') && (*(int *)(lVar8 + 4) - 1U < 2)) {
          lVar9 = func_0x00014381a6d0(lVar9,lVar8);
        }
        lVar8 = lVar8 + 0x48;
        lStack_108 = lStack_108 + -0x48;
      } while (lStack_108 != 0);
      bVar14 = lVar9 != 0;
      uVar10 = (undefined7)((ulonglong)lVar8 >> 8);
      uVar15 = CONCAT71(uVar10,bVar14);
      if ((!bVar14 || bVar13) || (iVar5 == 0 || cVar11 != '\0')) {
        if (bVar13) goto LAB_14012a60c;
        bVar12 = 0;
        if (iVar5 != 0) goto LAB_14012a7fb;
        bVar13 = lVar9 == 0;
        goto LAB_14012a627;
      }
      cVar4 = FUN_14381a420(param_2,lVar9,&uStack_e8,&uStack_100,param_4,param_3);
      if (cVar4 != '\0') {
        *(undefined1 *)(lVar9 + 0x44) = 1;
        *(int *)(lVar9 + 0x3c) = _DAT_14abbef40;
        FUN_14381a5b0(param_2,lVar9);
        uVar15 = CONCAT71(uVar10,1);
        bVar14 = true;
        bVar6 = bVar6 & *(int *)(lVar9 + 4) == 2;
        goto LAB_14012a60c;
      }
      uVar15 = CONCAT71(uVar10,1);
      bVar14 = true;
      if (param_1[6][0] == '\0') {
        FUN_14381a6f0(param_2,lVar9,&uStack_e8);
      }
      cVar11 = '\0';
    }
LAB_14012a7fb:
    bVar12 = 0;
  }
LAB_14012a36e:
  cVar4 = cVar11;
LAB_14012a371:
  FUN_144fdadb0(param_3,0xed3880e00000000,cVar4);
  FUN_1451d7530(param_3,0xed3880e00000000,1,
                CONCAT71((int7)((ulonglong)uVar15 >> 8),bVar14 | bVar12) & 0xffffffff);
  FUN_1451d7530(param_3,0xed3880e00000000,0,
                CONCAT71((int7)((ulonglong)unaff_RBP >> 8),bVar6 | bVar12 ^ 1) & 0xffffffff);
  if (((iVar5 != 0 & (bVar12 ^ 1)) != 0) || (cVar11 != '\0')) {
    uStack_d0 = 0;
    func_0x000144ec3e30(&uStack_d0,0);
    uStack_c8 = CONCAT44(uStack_cc,uStack_d0);
    uStack_c0 = 0;
    FUN_145299a50(param_3,0xed3880e00000000,&uStack_c8,1,0);
  }
  auVar16._0_12_ = ZEXT812(0);
  auVar16._12_4_ = 0;
  *(undefined1 (*) [16])(*param_1 + 0xd) = auVar16;
  *param_1 = auVar16;
  if ((*(byte *)(param_3 + 0xfd) & 1) == 0) {
    uVar1 = *(uint *)(param_1[2] + 4);
    if ((ulonglong)uVar1 != 0) {
      lVar8 = *(longlong *)(param_1[2] + 8);
      lVar9 = 0;
      do {
        if (*(char *)(lVar8 + 0x44 + lVar9) == '\x01') {
          func_0x00014515da80(param_1,lVar8 + 0x14 + lVar9);
        }
        lVar9 = lVar9 + 0x48;
      } while ((ulonglong)uVar1 * 0x48 != lVar9);
    }
    auStack_a8._9_4_ = 0;
    auStack_a8._0_9_ = SUB129(ZEXT812(0),3);
    uStack_b8 = 0;
    uStack_b4 = 0;
    uStack_b0 = 0;
    uStack_ab = 0;
    FUN_14515da50(param_1,&uStack_b8);
    func_0x00014515da80(param_1,&uStack_b8);
  }
  func_0x00014012a810(param_1);
  param_1[6][0] = iVar5 != 0;
  return;
}

