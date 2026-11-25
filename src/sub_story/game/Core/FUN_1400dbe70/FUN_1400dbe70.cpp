// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400dbe70  size: 1914 bytes
// Name:    FUN_1400dbe70
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1456a5900, FUN_1400cb830, FUN_1400e7dc0, FUN_143406f40, FUN_1400ce820, FUN_1400e0280, FUN_145647140
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400dbe70(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,uint param_5
                  )

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auVar4 [16];
  char cVar5;
  undefined7 uVar12;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  int *piVar13;
  int *piVar14;
  byte bVar15;
  undefined1 *puVar16;
  longlong lVar17;
  ulonglong uVar18;
  byte bVar19;
  bool bVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined8 auStack_220 [5];
  longlong lStack_1f8;
  longlong lStack_1f0;
  uint auStack_1e8 [4];
  int aiStack_1d8 [20];
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  int aiStack_138 [6];
  float fStack_120;
  int aiStack_e8 [6];
  float fStack_d0;
  int iStack_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  undefined1 auStack_88 [16];
  int *piStack_70;
  uint uStack_68;
  uint uStack_64;
  undefined1 *puStack_60;
  longlong lStack_58;
  longlong lStack_50;
  undefined4 uStack_44;
  
  lVar6 = param_2[4];
  if ((lVar6 == 0) ||
     ((((*(uint *)(lVar6 + 0x10) & 0x20) == 0 || (*(longlong *)(lVar6 + 0x898) == 0)) &&
      (((*(uint *)(lVar6 + 0x10) >> 0xb & 1) == 0 || (*(longlong *)(lVar6 + 0x8e8) == 0)))))) {
    uVar12 = (undefined7)((ulonglong)lVar6 >> 8);
    uStack_44 = (undefined4)CONCAT71(uVar12,1);
    if ((*param_2 != 0) && (bVar19 = *(byte *)((longlong)param_2 + 0xe1), (bVar19 & 2) != 0)) {
      if ((bVar19 & 8) != 0) goto LAB_1400dc591;
      uStack_44 = (undefined4)CONCAT71(uVar12,(bVar19 & 0x10) == 0);
    }
  }
  else {
LAB_1400dc591:
    uStack_44 = 0;
  }
  uVar1 = *(uint *)(param_3 + 4);
  auStack_1e8[2] = 0x400dbeff;
  auStack_1e8[3] = 1;
  lStack_58 = param_4;
  lStack_50 = param_3;
  lVar6 = FUN_145647140();
  lVar6 = -lVar6;
  puStack_60 = (undefined1 *)((longlong)aiStack_1d8 + lVar6);
  piStack_70 = (int *)((longlong)aiStack_1d8 + lVar6);
  puVar16 = (undefined1 *)((longlong)aiStack_1d8 + lVar6);
  uStack_68 = uVar1;
  if (uVar1 == 0) {
    uStack_64 = 0;
  }
  else {
    lVar17 = (ulonglong)uVar1 * 0x50;
    piStack_70 = (int *)((longlong)aiStack_1d8 + lVar6);
    puStack_60 = (undefined1 *)((longlong)aiStack_1d8 + lVar6);
    do {
      *(undefined8 *)((longlong)auStack_220 + lVar6 + 0x20) = 0x1400dbf3b;
      func_0x000144f65360(puVar16);
      puVar16 = puVar16 + 0x50;
      lVar17 = lVar17 + -0x50;
    } while (lVar17 != 0);
    uStack_64 = uVar1;
    if (0 < (int)uVar1) {
      uVar18 = 0;
      piVar14 = piStack_70;
      do {
        *(undefined8 *)((longlong)auStack_220 + lVar6 + 0x20) = 0x1400dbf7d;
        plVar7 = (longlong *)func_0x000144f63b60(param_1 + 0x2a0,param_5,uVar18 & 0xffffffff);
        if (((plVar7 != (longlong *)0x0) && ((int)plVar7[4] == 4)) &&
           (*(short *)((longlong)plVar7 + 0x1e) != 0)) {
          *(byte *)((longlong)auStack_1e8 + lVar6) = (*(byte *)(lStack_58 + 0x1a4) & 0x40) >> 6;
          uVar2 = uStack_44;
          *(undefined1 *)((longlong)&lStack_1f0 + lVar6) = 1;
          *(char *)((longlong)&lStack_1f8 + lVar6) = (char)uVar2;
          *(undefined8 *)((longlong)auStack_220 + lVar6) = 0x1400dbfdc;
          FUN_1400cb830(param_1,plVar7,piVar14,param_2);
          if (-1 < (longlong)*piVar14) {
            uVar2 = *(undefined4 *)(*plVar7 + 0x20 + (longlong)*piVar14 * 0x40);
            *(undefined8 *)((longlong)auStack_220 + lVar6 + 0x20) = 0x1400dbffc;
            lVar8 = func_0x00014540d1f0(uVar2);
            lVar17 = lStack_50;
            if ((lVar8 == 0) || ((0x1cU >> (*(uint *)(lVar8 + 0x30) & 0x1f) & 1) == 0)) {
              lVar8 = 0;
            }
            *(undefined8 *)((longlong)auStack_220 + lVar6 + 0x20) = 0x1400dc021;
            FUN_1400ce820(param_2,lVar17,lVar8);
          }
        }
        uVar18 = uVar18 + 1;
        piVar14 = piVar14 + 0x14;
      } while (uVar1 != uVar18);
    }
  }
  *(undefined8 *)((longlong)auStack_220 + lVar6 + 0x20) = 0x1400dc045;
  func_0x000144f65360(aiStack_1d8);
  lVar17 = param_1 + 0x2a0;
  *(undefined8 *)((longlong)auStack_220 + lVar6 + 0x20) = 0x1400dc068;
  lVar8 = func_0x000144f653e0(lVar17,param_5,1);
  if (((lVar8 != 0) && (*(int *)(lVar8 + 0x20) == 4)) && (*(short *)(lVar8 + 0x1e) != 0)) {
    *(byte *)((longlong)auStack_1e8 + lVar6) = (*(byte *)(lStack_58 + 0x1a4) & 0x40) >> 6;
    uVar2 = uStack_44;
    *(undefined1 *)((longlong)&lStack_1f0 + lVar6) = 0;
    *(char *)((longlong)&lStack_1f8 + lVar6) = (char)uVar2;
    *(undefined8 *)((longlong)auStack_220 + lVar6) = 0x1400dc0ba;
    FUN_1400cb830(param_1,lVar8,aiStack_1d8,param_2);
  }
  *(undefined8 *)((longlong)auStack_220 + lVar6 + 0x20) = 0x1400dc0ce;
  func_0x000144f65360(&uStack_188);
  *(undefined8 *)((longlong)auStack_220 + lVar6 + 0x20) = 0x1400dc0da;
  func_0x000144f65360(aiStack_138);
  *(undefined8 *)((longlong)auStack_220 + lVar6 + 0x20) = 0x1400dc0e3;
  func_0x000144f65360(aiStack_e8);
  piVar14 = piStack_70;
  if ((*(byte *)((longlong)param_2 + 0x141) & 4) == 0) {
    *(undefined8 *)((longlong)auStack_220 + lVar6 + 0x20) = 0x1400dc108;
    cVar5 = func_0x0001400ca280(param_2);
    if (cVar5 != '\0') goto LAB_1400dc3a5;
  }
  else {
LAB_1400dc3a5:
    *(undefined8 *)((longlong)auStack_220 + lVar6 + 0x20) = 0x1400dc3bd;
    lVar8 = func_0x000144f653e0(lVar17,param_5,2);
    uVar2 = uStack_44;
    if (((lVar8 != 0) && (*(int *)(lVar8 + 0x20) == 4)) && (*(short *)(lVar8 + 0x1e) != 0)) {
      *(undefined1 *)((longlong)auStack_1e8 + lVar6) = 0;
      *(undefined1 *)((longlong)&lStack_1f0 + lVar6) = 1;
      *(char *)((longlong)&lStack_1f8 + lVar6) = (char)uVar2;
      *(undefined8 *)((longlong)auStack_220 + lVar6) = 0x1400dc3fd;
      FUN_1400cb830(param_1,lVar8,aiStack_138,param_2);
    }
    *(undefined8 *)((longlong)auStack_220 + lVar6 + 0x20) = 0x1400dc419;
    lVar8 = func_0x000144f653e0(lVar17,param_5,3);
    uVar2 = uStack_44;
    if (((lVar8 != 0) && (*(int *)(lVar8 + 0x20) == 4)) && (*(short *)(lVar8 + 0x1e) != 0)) {
      *(undefined1 *)((longlong)auStack_1e8 + lVar6) = 0;
      *(undefined1 *)((longlong)&lStack_1f0 + lVar6) = 1;
      *(char *)((longlong)&lStack_1f8 + lVar6) = (char)uVar2;
      *(undefined8 *)((longlong)auStack_220 + lVar6) = 0x1400dc459;
      FUN_1400cb830(param_1,lVar8,aiStack_e8,param_2);
    }
    bVar20 = -1 < aiStack_e8[0];
    if (aiStack_138[0] < 0 || !bVar20) {
      if ((aiStack_138[0] < 0) && (aiStack_e8[0] < 0)) goto LAB_1400dc114;
    }
    else {
      bVar20 = fStack_120 < fStack_d0;
    }
    piVar13 = aiStack_138;
    if (bVar20) {
      piVar13 = aiStack_e8;
    }
    uStack_188 = *(undefined8 *)piVar13;
    uStack_180 = *(undefined8 *)(piVar13 + 2);
    uStack_178 = *(undefined8 *)(piVar13 + 4);
    uStack_170 = *(undefined8 *)(piVar13 + 6);
    uStack_148 = *(undefined8 *)(piVar13 + 0x10);
    uStack_140 = *(undefined8 *)(piVar13 + 0x12);
    uStack_168 = *(undefined8 *)(piVar13 + 8);
    uStack_160 = *(undefined8 *)(piVar13 + 10);
    uStack_158 = *(undefined8 *)(piVar13 + 0xc);
    uStack_150 = *(undefined8 *)(piVar13 + 0xe);
  }
LAB_1400dc114:
  lVar8 = lStack_58;
  iVar3 = *piVar14;
  if (iVar3 < 0) {
    if (-1 < piVar14[0x14]) goto LAB_1400dc2f6;
    bVar19 = *(byte *)(lStack_58 + 0x1a4) & 0xed;
    *(byte *)(lStack_58 + 0x1a4) = bVar19;
  }
  else {
    if (piVar14[0x14] < 0) {
LAB_1400dc2f6:
      *(byte *)(lStack_58 + 0x1a4) = *(byte *)(lStack_58 + 0x1a4) | 2;
      piVar13 = piVar14 + 4;
      if (iVar3 == -1) {
        piVar13 = piVar14 + 0x18;
      }
      iStack_98 = piVar13[2];
      auVar4._4_4_ = iStack_98;
      auVar4._0_4_ = iStack_98;
      auVar4._8_4_ = iStack_98;
      auVar4._12_4_ = iStack_98;
      auVar4 = vblendps_avx(*(undefined1 (*) [16])(lStack_50 + 0xf0),auVar4,4);
      *(undefined1 (*) [16])(lStack_50 + 0xf0) = auVar4;
      bVar19 = *(byte *)(lStack_58 + 0x1a4) & 0xef;
      *(byte *)(lStack_58 + 0x1a4) = bVar19;
      piVar13 = piVar14 + 0x14;
      if (-1 < iVar3) {
        piVar13 = piVar14;
      }
      *(undefined8 *)(lStack_58 + 0xa0) = *(undefined8 *)(piVar13 + 0xe);
      uVar11 = *(undefined8 *)(piVar13 + 0xc);
      iStack_94 = iStack_98;
      iStack_90 = iStack_98;
      iStack_8c = iStack_98;
    }
    else {
      *(byte *)(lStack_58 + 0x1a4) = *(byte *)(lStack_58 + 0x1a4) | 2;
      if ((*(int *)(param_1 + 0x380) == 0) ||
         ((((*(byte *)(param_1 + 0xb0 + (ulonglong)param_5 * 8) & 1) != 0 &&
           (*(float *)(lStack_58 + 0x174) == 0.0)) && (!NAN(*(float *)(lStack_58 + 0x174)))))) {
        iVar3 = piVar14[0x1a];
        auVar21._4_4_ = iVar3;
        auVar21._0_4_ = iVar3;
        auVar21._8_4_ = iVar3;
        auVar21._12_4_ = iVar3;
        iVar3 = piVar14[6];
        auVar22._4_4_ = iVar3;
        auVar22._0_4_ = iVar3;
        auVar22._8_4_ = iVar3;
        auVar22._12_4_ = iVar3;
        auStack_88 = vmaxps_avx(auVar22,auVar21);
        auVar4 = vblendps_avx(*(undefined1 (*) [16])(lStack_58 + 0xb0),auStack_88,4);
        *(undefined1 (*) [16])(lStack_58 + 0xb0) = auVar4;
      }
      if ((*(byte *)(param_2 + 0x28) & 8) == 0) {
        *(undefined8 *)((longlong)auStack_220 + lVar6 + 0x20) = 0x1400dc18d;
        cVar5 = func_0x0001400ca280(param_2);
        lVar9 = lStack_50;
        if (cVar5 != '\0') {
          *(undefined8 **)((longlong)auStack_1e8 + lVar6) = &uStack_188;
          *(uint *)((longlong)aiStack_1d8 + lVar6 + -8) = param_5;
          *(undefined8 *)((longlong)auStack_220 + lVar6 + 0x10) = 0x1400dc4e7;
          FUN_1400e7dc0(param_1,param_2,lVar9,&uStack_68);
          goto LAB_1400dc4e7;
        }
        if ((*(byte *)((longlong)param_2 + 0x141) & 4) != 0) {
          *(undefined8 **)((longlong)auStack_1e8 + lVar6) = &uStack_188;
          *(uint *)((longlong)aiStack_1d8 + lVar6 + -8) = param_5;
          *(undefined8 *)((longlong)auStack_220 + lVar6 + 0x10) = 0x1400dc5cc;
          FUN_143406f40(param_1,param_2,lVar9,&uStack_68);
          goto LAB_1400dc4e7;
        }
        *(int **)((longlong)&lStack_1f0 + lVar6) = aiStack_1d8;
        *(uint **)((longlong)&lStack_1f8 + lVar6) = &uStack_68;
        *(uint *)((longlong)auStack_1e8 + lVar6) = param_5;
        *(undefined8 *)((longlong)auStack_220 + lVar6) = 0x1400dc1db;
        FUN_1400e0280(param_1,param_2,lVar9,lVar8);
        bVar19 = *(byte *)(lVar8 + 0x1a4);
      }
      else {
        *(undefined8 *)((longlong)auStack_220 + lVar6 + 0x20) = 0x1400dc554;
        uVar11 = func_0x000144f63b60(lVar17,param_5,0);
        lVar9 = lStack_50;
        *(uint *)((longlong)aiStack_1d8 + lVar6 + -8) = param_5;
        *(uint **)((longlong)auStack_1e8 + lVar6) = &uStack_68;
        *(undefined8 *)((longlong)auStack_220 + lVar6 + 0x10) = 0x1400dc57d;
        FUN_1456a5900(param_1,param_2,lVar9,uVar11);
LAB_1400dc4e7:
        bVar19 = *(byte *)(lVar8 + 0x1a4) & 0xef;
        *(byte *)(lVar8 + 0x1a4) = bVar19;
      }
      *(undefined8 *)(lVar8 + 0xa0) = *(undefined8 *)(piVar14 + 0xe);
      uVar11 = *(undefined8 *)(piVar14 + 0xc);
    }
    *(undefined8 *)(lVar8 + 0xa8) = uVar11;
  }
  bVar15 = 0;
  *(undefined8 *)((longlong)auStack_220 + lVar6 + 0x20) = 0x1400dc21a;
  lVar9 = func_0x000144f63b60(lVar17,param_5,0);
  *(undefined8 *)((longlong)auStack_220 + lVar6 + 0x20) = 0x1400dc236;
  lVar10 = func_0x000144f63b60(lVar17,param_5,1);
  *(undefined8 *)((longlong)auStack_220 + lVar6 + 0x20) = 0x1400dc24f;
  lVar6 = func_0x000144f653e0(lVar17,param_5,0);
  if ((bVar19 & 2) != 0) goto LAB_1400dc259;
  if ((lVar9 == 0) || (*(short *)(lVar9 + 0x1e) == 0)) {
    if (lVar10 == 0) {
      if ((bVar19 & 8) != 0) goto LAB_1400dc5db;
    }
    else {
      bVar15 = 0;
      if (((bVar19 & 8) != 0) || (*(short *)(lVar10 + 0x1e) != 0)) goto LAB_1400dc259;
    }
    if (lVar6 == 0) {
      bVar15 = 4;
    }
    else {
      bVar15 = (*(short *)(lVar6 + 0x1e) == 0) << 2;
    }
  }
  else {
LAB_1400dc5db:
    bVar15 = 0;
  }
LAB_1400dc259:
  *(byte *)(lVar8 + 0x1a4) = bVar19 & 0xfb | bVar15;
  return;
}

