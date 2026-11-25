// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401b02c0  size: 1962 bytes
// Name:    FUN_1401b02c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_142feeb00, FUN_140fea6e0, FUN_144fa4c80, FUN_1453c60b0, FUN_140b081e0, FUN_144fa46c0, FUN_142ff4f50, FUN_142ff5300, FUN_142ff4ee0, FUN_141fee1f0, FUN_142ff2a70, FUN_14059e840, FUN_144fa4840, FUN_142ff51e0, FUN_140100070, FUN_1400ff690
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401b02c0(undefined8 *param_1,undefined1 *param_2,longlong param_3,longlong param_4,
                  int *param_5,int *param_6,longlong param_7,undefined4 param_8,longlong param_9,
                  char param_10)

{
  float fVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  longlong *plVar5;
  int iVar6;
  char cVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined *puVar13;
  ushort uVar14;
  longlong lVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined1 uVar18;
  int iVar19;
  undefined4 uVar20;
  undefined1 *puVar21;
  int iStack_194;
  longlong lStack_190;
  int iStack_188;
  undefined4 uStack_184;
  undefined5 uStack_180;
  undefined3 uStack_17b;
  undefined5 uStack_178;
  undefined1 auStack_170 [24];
  undefined8 uStack_158;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined1 auStack_138 [16];
  undefined1 auStack_120 [16];
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  
  *(undefined1 *)((longlong)param_1 + 0x16c) = 1;
  lVar10 = _DAT_14ab56e38;
  lVar15 = param_7;
  if (param_10 != '\0') {
    lVar15 = param_9;
  }
  if (param_2 == (undefined1 *)0x0) {
    return;
  }
  lVar8 = FUN_144fa46c0(_DAT_14ab7f650,param_2,_DAT_14ab56e38,param_3,param_9,0);
  uVar20 = FUN_144fa4840(lVar8,param_3,lVar10,param_8,1);
  *(undefined4 *)((longlong)param_1 + 0xb4) = uVar20;
  if (lVar8 != 0) {
    if (0.0 <= *(float *)(lVar8 + 0x14)) {
      *(float *)(param_1 + 0x22) = *(float *)(lVar8 + 0x14);
    }
    if (0.0 <= *(float *)(lVar8 + 0x44)) {
      *(float *)(param_1 + 0x20) = *(float *)(lVar8 + 0x44);
    }
    if (0.0 <= *(float *)(lVar8 + 0x48)) {
      *(float *)((longlong)param_1 + 0x10c) = *(float *)(lVar8 + 0x48);
    }
    if (((((*(uint *)(param_1 + 2) & 0x7f) != 1) && (*(int *)(param_2 + 0x9c) == 0)) &&
        (*(int *)(param_2 + 8) != -0x7343e483)) &&
       (FUN_140100070(&iStack_194,lVar8,*(undefined4 *)(param_4 + 0x28),lVar10), iStack_194 != 0)) {
      uVar3 = *(uint *)(param_1 + 5);
      uVar9 = (ulonglong)uVar3 & 0x1ffff;
      if (((uVar9 != 0x1ffff) &&
          (plVar5 = *(longlong **)((ulonglong)(uVar3 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0),
          plVar5 != (longlong *)0x0)) &&
         ((uVar4 = *(uint *)(plVar5[5] + uVar9 * 4), (uVar4 >> 0x11 & 0x3ff) == uVar3 >> 0x16 &&
          (((uVar4 & *(uint *)(plVar5 + 6)) == *(uint *)(plVar5 + 6) && (*plVar5 != 0)))))) {
        auStack_138._0_12_ = ZEXT812(0);
        auStack_138._12_4_ = 0;
        FUN_1400ff690(&iStack_188,*plVar5 + (ulonglong)(uint)((int)uVar9 * (int)plVar5[1]));
        *param_1 = CONCAT44(uStack_184,iStack_188);
        param_1[1] = CONCAT35(uStack_17b,uStack_180);
        *(ulonglong *)((longlong)param_1 + 0xd) = CONCAT53(uStack_178,uStack_17b);
        FUN_1453c60b0(param_1 + 3,auStack_170);
        param_1[6] = uStack_158;
      }
    }
  }
  if (lVar15 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = func_0x0001450da490(*(undefined4 *)(lVar15 + 0x9c));
  }
  if ((param_3 != 0) && (lVar8 == 0)) {
    lVar8 = func_0x0001450da490(*(undefined4 *)(param_3 + 0x9c));
  }
  if ((lVar8 == 0) || (cVar7 = FUN_141fee1f0(lVar15,param_2), cVar7 == '\0')) {
    lVar11 = 0;
  }
  else {
    lVar11 = lVar8 + 0x1050;
    if (*(longlong *)(lVar8 + 0x1050) == 0) {
      lVar11 = 0;
    }
  }
  lStack_190 = lVar10;
  if ((lVar15 == 0) || (cVar7 = FUN_144fa4c80(lVar15,0x20), cVar7 == '\0')) {
    if ((lVar11 != 0 & (byte)((*(uint *)(param_2 + 0x88) & 0x40) >> 6)) == 0) {
      if ((*(uint *)(param_2 + 0x88) & 0x20) == 0 || lVar11 == 0) goto LAB_1401b05b8;
      cVar7 = FUN_140b081e0(lVar10,lVar15);
      iVar19 = -1;
      if (cVar7 != '\0') {
        uStack_148 = *(undefined8 *)(lVar15 + 0x70);
        uStack_140 = *(undefined8 *)(lVar15 + 0x78);
        cVar7 = FUN_142ff4ee0(*(undefined4 *)(lVar10 + 0x9c),&uStack_148,1);
        if ((cVar7 != '\0') && (cVar7 = FUN_144fa4c80(lVar15,0x39), cVar7 == '\0'))
        goto LAB_1401b0550;
      }
    }
    else {
LAB_1401b0550:
      iVar19 = *(int *)(lVar11 + 0x14);
    }
LAB_1401b05c8:
    if ((*(uint *)(lVar11 + 0x1c) & 5) == 1) goto LAB_1401b05d7;
    uVar18 = (undefined1)((*(uint *)(lVar11 + 0x1c) & 2) >> 1);
  }
  else {
LAB_1401b05b8:
    iVar19 = -1;
    if (lVar11 != 0) goto LAB_1401b05c8;
LAB_1401b05d7:
    uVar18 = 0;
  }
  iStack_188 = 0;
  iVar6 = *param_5;
  if ((*param_5 == 0) &&
     ((lVar15 == 0 ||
      (cVar7 = FUN_142ff2a70(lVar15,param_8,&iStack_188), iVar6 = iStack_188, cVar7 == '\0')))) {
    FUN_142feeb00(_DAT_14ab7f650,&iStack_188,param_2,lStack_190,param_7,param_9,0 < iVar19,uVar18);
    iVar6 = iStack_188;
  }
  iStack_188 = iVar6;
  if (*param_6 == 0) {
    if ((lVar8 != 0) && ((*(uint *)(param_2 + 0x90) & 0x10) != 0)) {
      func_0x000140019da0(*(undefined4 *)(lVar8 + 0xfd4),&iStack_194);
      *param_6 = iStack_194;
      if (iStack_194 != 0) goto LAB_1401b06b4;
    }
    FUN_142ff4f50(&iStack_194,lVar15,lVar11,param_8);
    *param_6 = iStack_194;
  }
LAB_1401b06b4:
  if (iStack_188 == 0) {
    if ((param_2[0x96] & 0x20) != 0) {
      *(undefined4 *)(param_1 + 0xf) = 0;
    }
  }
  else {
    lVar10 = FUN_142ff51e0(&iStack_188,param_6,iVar19,lVar15);
    puVar21 = param_2;
    lVar8 = FUN_14059e840(lStack_190,param_7,param_9,lVar15,param_2,lVar8);
    lVar11 = FUN_142ff5300(param_2,lVar15);
    if (lVar10 == 0) {
      if (lVar11 == 0 || lVar8 == 0) {
        if (lVar8 != 0) {
          puVar17 = auStack_80;
          func_0x00014059ed00(puVar17,iStack_188);
          uVar12 = func_0x0001413e5fa0(lVar8);
          puVar16 = auStack_90;
          goto LAB_1401b0875;
        }
        if (lVar11 != 0) {
          uVar12 = func_0x0001413e5fa0(lVar11);
          puVar17 = auStack_a0;
          func_0x0001407e09f0(puVar17,uVar12);
          puVar16 = auStack_b0;
          func_0x00014059ed00(puVar16,iStack_188);
          goto LAB_1401b0a3b;
        }
        *(int *)(param_1 + 0xf) = iStack_188;
        goto LAB_1401b089e;
      }
      uVar12 = func_0x0001413e5fa0(lVar11);
      puVar21 = auStack_50;
      func_0x0001407e09f0(puVar21,uVar12);
      puVar17 = auStack_60;
      func_0x00014059ed00(puVar17,iStack_188);
      uVar12 = func_0x0001413e5fa0(lVar8);
      puVar16 = auStack_70;
      func_0x0001407e09f0(puVar16,uVar12);
      puVar13 = &UNK_14677824f;
    }
    else if (lVar11 == 0 || lVar8 == 0) {
      if (lVar8 == 0) {
        if (lVar11 == 0) {
          param_1[0x17] = lVar10;
          goto LAB_1401b089e;
        }
        uVar12 = func_0x0001413e5fa0(lVar11);
        puVar17 = auStack_110;
        func_0x0001407e09f0(puVar17,uVar12);
        uVar12 = func_0x0001413e5fa0(lVar10);
        puVar16 = auStack_120;
        func_0x0001407e09f0(puVar16,uVar12);
LAB_1401b0a3b:
        puVar13 = &UNK_146778262;
      }
      else {
        uVar12 = func_0x0001413e5fa0(lVar10);
        puVar17 = auStack_f0;
        func_0x0001407e09f0(puVar17,uVar12);
        uVar12 = func_0x0001413e5fa0(lVar8);
        puVar16 = auStack_100;
LAB_1401b0875:
        func_0x0001407e09f0(puVar16,uVar12);
        puVar13 = &UNK_146778262;
      }
    }
    else {
      uVar12 = func_0x0001413e5fa0(lVar11);
      puVar21 = auStack_c0;
      func_0x0001407e09f0(puVar21,uVar12);
      uVar12 = func_0x0001413e5fa0(lVar10);
      puVar17 = auStack_d0;
      func_0x0001407e09f0(puVar17,uVar12);
      uVar12 = func_0x0001413e5fa0(lVar8);
      puVar16 = auStack_e0;
      func_0x0001407e09f0(puVar16,uVar12);
      puVar13 = &UNK_14677824f;
    }
    uVar12 = FUN_140fea6e0(puVar13,2,puVar16,puVar17,puVar21);
    param_1[0x17] = uVar12;
  }
LAB_1401b089e:
  if (*(int *)(param_2 + 0x70) == 0) {
    if ((((lVar15 != 0) && (*(char *)(lVar15 + 0x30) == '\x04')) && (_DAT_14ab56e38 != 0)) &&
       (lVar10 = func_0x000144f3a1d0(*(undefined4 *)(_DAT_14ab56e38 + 0x9c)), lVar10 != 0)) {
      iStack_194 = 0;
      cVar7 = func_0x0001410246f0(*(undefined8 *)(lVar10 + 8),lVar15);
      if (cVar7 != '\0') {
        *(undefined4 *)(param_1 + 0x10) = 0x76945e82;
      }
    }
  }
  else {
    *(int *)(param_1 + 0x10) = *(int *)(param_2 + 0x70);
  }
  *(undefined4 *)((longlong)param_1 + 0x8c) = *(undefined4 *)(param_2 + 0x38);
  fVar1 = *(float *)(param_2 + 0x50);
  if ((fVar1 != _DAT_145fc6f48) || (NAN(fVar1) || NAN(_DAT_145fc6f48))) {
    *(undefined4 *)(param_1 + 0x38) = 3;
    *(float *)(param_1 + 0x12) = fVar1;
    uVar20 = 0;
  }
  else {
    if (*(int *)(param_2 + 0x4c) == 0) goto LAB_1401b0943;
    *(undefined4 *)(param_1 + 0x38) = 1;
    uVar20 = *(undefined4 *)(param_2 + 0x4c);
  }
  *(undefined4 *)((longlong)param_1 + 0x1c4) = uVar20;
LAB_1401b0943:
  bVar2 = param_2[0x67];
  uVar14 = *(ushort *)(param_2 + 0x60);
  if ((char)bVar2 < '\0') {
    uVar14 = bVar2 & 0x7f;
  }
  if (uVar14 != 0) {
    puVar13 = &UNK_14678d1bb;
    if (*(undefined **)(param_2 + 0x58) != (undefined *)0x0) {
      puVar13 = *(undefined **)(param_2 + 0x58);
    }
    if ((char)bVar2 < '\0') {
      puVar13 = param_2 + 0x58;
    }
    uVar12 = func_0x000144f66800(1,puVar13);
    param_1[0x2a] = uVar12;
  }
  uVar3 = *(uint *)(param_2 + 0x88);
  if ((uVar3 & 2) != 0) {
    *(byte *)((longlong)param_1 + 0x1b1) = *(byte *)((longlong)param_1 + 0x1b1) | 8;
  }
  if ((uVar3 & 4) != 0) {
    *(byte *)((longlong)param_1 + 0x1b1) = *(byte *)((longlong)param_1 + 0x1b1) | 4;
  }
  if ((param_2[0x93] & 1) != 0) {
    *(byte *)((longlong)param_1 + 0x1b2) = *(byte *)((longlong)param_1 + 0x1b2) | 2;
  }
  return;
}

