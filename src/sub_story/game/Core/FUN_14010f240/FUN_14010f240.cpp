// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14010f240  size: 2313 bytes
// Name:    FUN_14010f240
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144fb6560, FUN_145647140, FUN_144fb6ba0, FUN_144fb5f50
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14010f240(undefined8 param_1,float *param_2)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  char cVar35;
  ushort uVar36;
  ushort uVar37;
  int iVar38;
  longlong lVar39;
  uint uVar40;
  longlong lVar41;
  ulonglong uVar42;
  undefined8 uVar43;
  longlong lVar44;
  ulonglong uVar45;
  ulonglong uVar46;
  bool bVar47;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  undefined1 in_ZMM6 [64];
  undefined1 in_ZMM7 [64];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 in_ZMM8 [64];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 in_ZMM9 [64];
  undefined1 in_ZMM10 [64];
  undefined1 in_ZMM11 [64];
  undefined1 in_ZMM12 [64];
  undefined1 in_ZMM13 [64];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 in_ZMM14 [64];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 in_ZMM15 [64];
  undefined8 auStackX_8 [4];
  undefined8 uStack_48;
  
  uStack_48 = 0x14010f256;
  lVar39 = FUN_145647140();
  lVar39 = -lVar39;
  *(undefined1 (*) [16])(&stack0x0000bf60 + lVar39) = in_ZMM15._0_16_;
  *(undefined1 (*) [16])(&stack0x0000bf50 + lVar39) = in_ZMM14._0_16_;
  *(undefined1 (*) [16])(&stack0x0000bf40 + lVar39) = in_ZMM13._0_16_;
  *(undefined1 (*) [16])(&stack0x0000bf30 + lVar39) = in_ZMM12._0_16_;
  *(undefined1 (*) [16])(&stack0x0000bf20 + lVar39) = in_ZMM11._0_16_;
  *(undefined1 (*) [16])(&stack0x0000bf10 + lVar39) = in_ZMM10._0_16_;
  *(undefined1 (*) [16])(&stack0x0000bf00 + lVar39) = in_ZMM9._0_16_;
  *(undefined1 (*) [16])(&stack0x0000bef0 + lVar39) = in_ZMM8._0_16_;
  *(undefined1 (*) [16])(&stack0x0000bee0 + lVar39) = in_ZMM7._0_16_;
  *(undefined1 (*) [16])(&stack0x0000bed0 + lVar39) = in_ZMM6._0_16_;
  lVar17 = *(longlong *)(param_2 + 0x34);
  *(undefined8 *)(&stack0xffffffffffffffe8 + lVar39) = param_1;
  lVar44 = *(longlong *)(lVar17 + 0xa0);
  if (lVar44 == 0) {
    uVar37 = *(ushort *)(lVar17 + 0x9a);
    if (uVar37 != 0) {
      lVar44 = 0;
      uVar45 = 0;
      do {
        lVar19 = *(longlong *)(*(longlong *)(lVar17 + 0x70) + uVar45 * 8);
        if (((((lVar19 != 0) && (iVar38 = *(int *)(lVar19 + 0x18), iVar38 != -0x7d18c9b7)) &&
             (iVar38 != -0x59b3e649)) && (iVar38 != -0x1f48dabb)) &&
           ((lVar18 = *(longlong *)(lVar17 + 0x88), lVar18 == 0 ||
            (((*(ulonglong *)(lVar18 + lVar44 * 2) &
              *(ulonglong *)
               (*(longlong *)(**(longlong **)(&stack0xffffffffffffffe8 + lVar39) + 0xb0) + 0x100))
              != 0 && ((((ulonglong)DAT_149e44eb0 - 1 | 0x2000) &
                       *(ulonglong *)(lVar18 + 8 + lVar44 * 2)) != 0)))))) {
          *(undefined8 *)(&stack0x000003b0 + lVar39) = 0;
          *(undefined4 *)(&stack0x000003b8 + lVar39) = 0;
          *(longlong *)(&stack0x00000400 + lVar39) = lVar19;
          *(undefined8 *)(&stack0x00000408 + lVar39) = 0xffffffff00000000;
          lVar19 = *(longlong *)(lVar17 + 0x78);
          fVar20 = *param_2;
          fVar21 = param_2[1];
          fVar22 = param_2[2];
          fVar23 = param_2[3];
          fVar50 = param_2[4];
          fVar51 = param_2[5];
          fVar52 = param_2[6];
          fVar53 = param_2[7];
          fVar54 = param_2[8];
          fVar55 = param_2[9];
          fVar56 = param_2[10];
          fVar57 = param_2[0xb];
          fVar2 = *(float *)(lVar19 + lVar44 * 8);
          fVar3 = *(float *)(lVar19 + 4 + lVar44 * 8);
          fVar4 = *(float *)(lVar19 + 8 + lVar44 * 8);
          fVar5 = *(float *)(lVar19 + 0x10 + lVar44 * 8);
          fVar6 = *(float *)(lVar19 + 0x20 + lVar44 * 8);
          fVar7 = *(float *)(lVar19 + 0x30 + lVar44 * 8);
          fVar8 = *(float *)(lVar19 + 0x14 + lVar44 * 8);
          fVar9 = *(float *)(lVar19 + 0x24 + lVar44 * 8);
          fVar10 = *(float *)(lVar19 + 0x34 + lVar44 * 8);
          fVar11 = *(float *)(lVar19 + 0x18 + lVar44 * 8);
          fVar12 = *(float *)(lVar19 + 0x38 + lVar44 * 8);
          *(float *)(&stack0xfffffffffffffff0 + lVar39) = fVar4;
          *(float *)(&stack0xfffffffffffffff4 + lVar39) = fVar4;
          *(float *)(&stack0xfffffffffffffff8 + lVar39) = fVar4;
          *(float *)(&stack0xfffffffffffffffc + lVar39) = fVar4;
          auVar63._0_4_ = fVar4 * fVar54 + fVar3 * fVar50 + fVar20 * fVar2;
          auVar63._4_4_ = fVar4 * fVar55 + fVar3 * fVar51 + fVar21 * fVar2;
          auVar63._8_4_ = fVar4 * fVar56 + fVar3 * fVar52 + fVar22 * fVar2;
          auVar63._12_4_ = fVar4 * fVar57 + fVar3 * fVar53 + fVar23 * fVar2;
          fVar13 = param_2[0xc];
          fVar14 = param_2[0xd];
          fVar15 = param_2[0xe];
          fVar16 = param_2[0xf];
          auVar65._0_4_ = fVar11 * fVar54 + fVar8 * fVar50 + fVar20 * fVar5;
          auVar65._4_4_ = fVar11 * fVar55 + fVar8 * fVar51 + fVar21 * fVar5;
          auVar65._8_4_ = fVar11 * fVar56 + fVar8 * fVar52 + fVar22 * fVar5;
          auVar65._12_4_ = fVar11 * fVar57 + fVar8 * fVar53 + fVar23 * fVar5;
          fVar4 = *(float *)(lVar19 + 0x28 + lVar44 * 8);
          *(undefined1 (*) [16])(&stack0x00000330 + lVar39) = auVar63;
          *(undefined1 (*) [16])(&stack0x00000340 + lVar39) = auVar65;
          *(float *)(&stack0x00000350 + lVar39) = fVar4 * fVar54 + fVar9 * fVar50 + fVar6 * fVar20;
          *(float *)(&stack0x00000354 + lVar39) = fVar4 * fVar55 + fVar9 * fVar51 + fVar6 * fVar21;
          *(float *)(&stack0x00000358 + lVar39) = fVar4 * fVar56 + fVar9 * fVar52 + fVar6 * fVar22;
          *(float *)(&stack0x0000035c + lVar39) = fVar4 * fVar57 + fVar9 * fVar53 + fVar6 * fVar23;
          *(float *)(&stack0x00000360 + lVar39) =
               fVar12 * fVar54 + fVar10 * fVar50 + fVar7 * fVar20 + fVar13;
          *(float *)(&stack0x00000364 + lVar39) =
               fVar12 * fVar55 + fVar10 * fVar51 + fVar7 * fVar21 + fVar14;
          *(float *)(&stack0x00000368 + lVar39) =
               fVar12 * fVar56 + fVar10 * fVar52 + fVar7 * fVar22 + fVar15;
          *(float *)(&stack0x0000036c + lVar39) =
               fVar12 * fVar57 + fVar10 * fVar53 + fVar7 * fVar23 + fVar16;
          fVar20 = param_2[0x10];
          fVar21 = param_2[0x11];
          fVar22 = param_2[0x12];
          fVar23 = param_2[0x13];
          auVar49 = *(undefined1 (*) [16])(param_2 + 0x14);
          fVar13 = param_2[0x1c];
          fVar14 = param_2[0x1d];
          fVar15 = param_2[0x1e];
          fVar16 = param_2[0x1f];
          auVar59 = *(undefined1 (*) [16])(param_2 + 0x18);
          fVar50 = auVar49._0_4_;
          fVar51 = auVar49._4_4_;
          fVar52 = auVar49._8_4_;
          fVar53 = auVar49._12_4_;
          fVar54 = auVar59._0_4_;
          auVar49._0_4_ =
               fVar54 * *(float *)(&stack0xfffffffffffffff0 + lVar39) +
               fVar50 * fVar3 + fVar20 * fVar2;
          fVar55 = auVar59._4_4_;
          auVar49._4_4_ =
               fVar55 * *(float *)(&stack0xfffffffffffffff4 + lVar39) +
               fVar51 * fVar3 + fVar21 * fVar2;
          fVar56 = auVar59._8_4_;
          auVar49._8_4_ =
               fVar56 * *(float *)(&stack0xfffffffffffffff8 + lVar39) +
               fVar52 * fVar3 + fVar22 * fVar2;
          fVar57 = auVar59._12_4_;
          auVar49._12_4_ =
               fVar57 * *(float *)(&stack0xfffffffffffffffc + lVar39) +
               fVar53 * fVar3 + fVar23 * fVar2;
          auVar61._0_4_ = fVar54 * fVar11 + fVar50 * fVar8 + fVar20 * fVar5;
          auVar61._4_4_ = fVar55 * fVar11 + fVar51 * fVar8 + fVar21 * fVar5;
          auVar61._8_4_ = fVar56 * fVar11 + fVar52 * fVar8 + fVar22 * fVar5;
          auVar61._12_4_ = fVar57 * fVar11 + fVar53 * fVar8 + fVar23 * fVar5;
          auVar59._0_4_ = fVar54 * fVar4 + fVar50 * fVar9 + fVar6 * fVar20;
          auVar59._4_4_ = fVar55 * fVar4 + fVar51 * fVar9 + fVar6 * fVar21;
          auVar59._8_4_ = fVar56 * fVar4 + fVar52 * fVar9 + fVar6 * fVar22;
          auVar59._12_4_ = fVar57 * fVar4 + fVar53 * fVar9 + fVar6 * fVar23;
          *(undefined1 (*) [16])(&stack0x00000370 + lVar39) = auVar49;
          *(undefined1 (*) [16])(&stack0x00000380 + lVar39) = auVar61;
          *(undefined1 (*) [16])(&stack0x00000390 + lVar39) = auVar59;
          *(float *)(&stack0x000003a0 + lVar39) =
               fVar12 * fVar54 + fVar10 * fVar50 + fVar7 * fVar20 + fVar13;
          *(float *)(&stack0x000003a4 + lVar39) =
               fVar12 * fVar55 + fVar10 * fVar51 + fVar7 * fVar21 + fVar14;
          *(float *)(&stack0x000003a8 + lVar39) =
               fVar12 * fVar56 + fVar10 * fVar52 + fVar7 * fVar22 + fVar15;
          *(float *)(&stack0x000003ac + lVar39) =
               fVar12 * fVar57 + fVar10 * fVar53 + fVar7 * fVar23 + fVar16;
          *(float *)(&stack0x00000410 + lVar39) = param_2[0x38];
          *(undefined8 *)((longlong)&uStack_48 + lVar39) = 0x14010fa22;
          cVar35 = FUN_144fb6ba0(&stack0x00000330 + lVar39,param_2 + 0x20);
          if (cVar35 != '\0') {
            fVar2 = param_2[0x36];
            uVar42 = (ulonglong)(uint)fVar2;
            uVar37 = 0xffff;
            if (uVar42 == 0) {
              uVar42 = 0;
            }
            else {
              uVar46 = (ulonglong)(((uint)fVar2 & 0xffff) << 4);
              if (((*(short *)(*(longlong *)(_DAT_14abbf348 + 0x28) + 8 + uVar46) ==
                    (short)((uint)fVar2 >> 0x10)) &&
                  (lVar19 = *(longlong *)(*(longlong *)(_DAT_14abbf348 + 0x28) + uVar46),
                  lVar19 != 0)) &&
                 ((*(int *)(lVar19 + 0x10) != 0 && (uVar37 = 0xfffe, uVar45 != 0xfffe)))) {
                *(undefined8 *)((longlong)&uStack_48 + lVar39) = 0x14010fa81;
                uVar37 = func_0x0001401c0010(lVar19,uVar45 & 0xffffffff);
                uVar42 = (ulonglong)(uint)param_2[0x36];
              }
            }
            *(ulonglong *)(&stack0x00000408 + lVar39) =
                 uVar42 | (ulonglong)uVar37 << 0x20 | 0xffff000000000000;
            *(undefined8 *)((longlong)&uStack_48 + lVar39) = 0x14010fabc;
            FUN_144fb5f50(*(undefined8 *)(&stack0xffffffffffffffe8 + lVar39),
                          &stack0x00000330 + lVar39,0);
            uVar37 = *(ushort *)(lVar17 + 0x9a);
          }
        }
        uVar45 = uVar45 + 1;
        lVar44 = lVar44 + 8;
      } while (uVar45 < uVar37);
    }
  }
  else {
    lVar19 = (longlong)auStackX_8 + lVar39 + -8;
    *(undefined1 **)(&stack0x00000340 + lVar39) = &stack0x00000350 + lVar39;
    *(undefined4 *)(&stack0x00000330 + lVar39) = 500;
    uVar24 = *(undefined8 *)(param_2 + 0x20);
    uVar25 = *(undefined8 *)(param_2 + 0x22);
    uVar26 = *(undefined8 *)(param_2 + 0x24);
    uVar27 = *(undefined8 *)(param_2 + 0x26);
    uVar28 = *(undefined8 *)(param_2 + 0x28);
    uVar29 = *(undefined8 *)(param_2 + 0x2a);
    uVar30 = *(undefined8 *)(param_2 + 0x2c);
    uVar31 = *(undefined8 *)(param_2 + 0x2e);
    uVar32 = *(undefined8 *)(param_2 + 0x2e);
    uVar33 = *(undefined8 *)(param_2 + 0x30);
    uVar34 = *(undefined8 *)(param_2 + 0x32);
    uVar43 = *(undefined8 *)(lVar44 + 0x50);
    *(undefined8 *)(&stack0x00000380 + lVar39) = *(undefined8 *)(param_2 + 0x2c);
    *(undefined8 *)(&stack0x00000388 + lVar39) = uVar32;
    *(undefined8 *)(&stack0x00000390 + lVar39) = uVar33;
    *(undefined8 *)(&stack0x00000398 + lVar39) = uVar34;
    *(undefined8 *)(&stack0x00000370 + lVar39) = uVar28;
    *(undefined8 *)(&stack0x00000378 + lVar39) = uVar29;
    *(undefined8 *)(&stack0x00000380 + lVar39) = uVar30;
    *(undefined8 *)(&stack0x00000388 + lVar39) = uVar31;
    *(undefined8 *)(&stack0x00000350 + lVar39) = uVar24;
    *(undefined8 *)(&stack0x00000358 + lVar39) = uVar25;
    *(undefined8 *)(&stack0x00000360 + lVar39) = uVar26;
    *(undefined8 *)(&stack0x00000368 + lVar39) = uVar27;
    *(undefined4 *)(&stack0x00000334 + lVar39) = 1;
    *(undefined8 *)(&stack0x000003a0 + lVar39) = uVar43;
    iVar38 = 1;
    do {
      lVar18 = *(longlong *)(&stack0x00000340 + lVar39);
      lVar41 = (ulonglong)(iVar38 - 1U) * 0x60;
      puVar1 = (undefined8 *)(lVar18 + lVar41);
      uVar43 = *puVar1;
      uVar24 = puVar1[1];
      uVar25 = puVar1[2];
      uVar26 = puVar1[3];
      puVar1 = (undefined8 *)(lVar18 + 0x20 + lVar41);
      uVar27 = *puVar1;
      uVar28 = puVar1[1];
      uVar29 = puVar1[2];
      uVar30 = puVar1[3];
      puVar1 = (undefined8 *)(lVar18 + 0x40 + lVar41);
      uVar31 = *puVar1;
      uVar32 = puVar1[1];
      uVar33 = puVar1[2];
      uVar34 = puVar1[3];
      *(uint *)(&stack0x00000334 + lVar39) = iVar38 - 1U;
      *(undefined8 *)(&stack0x00000040 + lVar39) = uVar31;
      *(undefined8 *)(&stack0x00000048 + lVar39) = uVar32;
      *(undefined8 *)(&stack0x00000050 + lVar39) = uVar33;
      *(undefined8 *)(&stack0x00000058 + lVar39) = uVar34;
      *(undefined8 *)((longlong)auStackX_8 + lVar39 + 0x18) = uVar27;
      *(undefined8 *)(&stack0x00000028 + lVar39) = uVar28;
      *(undefined8 *)(&stack0x00000030 + lVar39) = uVar29;
      *(undefined8 *)(&stack0x00000038 + lVar39) = uVar30;
      puVar1 = (undefined8 *)((longlong)auStackX_8 + lVar39 + -8);
      *puVar1 = uVar43;
      puVar1[1] = uVar24;
      puVar1[2] = uVar25;
      puVar1[3] = uVar26;
      lVar18 = *(longlong *)(&stack0x00000050 + lVar39);
      if (*(char *)(lVar18 + 0xe) == '\0') {
        bVar47 = *(char *)(lVar18 + 0x1e) != '\0';
        uVar40 = (uint)*(ushort *)(lVar18 + 0x1c);
        if (bVar47) {
          uVar40 = 0;
        }
        *(undefined8 *)((longlong)&uStack_48 + lVar39) = 0x14010f423;
        func_0x000145f40560(&stack0x00000240 + lVar39,param_2,0xf0);
        *(longlong *)(&stack0xffffffffffffffe0 + lVar39) = lVar18 + 0x10;
        *(undefined8 *)((longlong)&uStack_48 + lVar39) = 0x14010f441;
        FUN_144fb6560(&stack0x00000330 + lVar39,lVar44,&stack0x00000240 + lVar39,lVar19);
        *(undefined8 *)((longlong)&uStack_48 + lVar39) = 0x14010f452;
        func_0x000145f40560(&stack0x00000150 + lVar39,param_2,0xf0);
        *(ulonglong *)(&stack0xffffffffffffffe0 + lVar39) =
             lVar18 + 0x10 + (ulonglong)((bVar47 | uVar40) << 4);
        *(undefined8 *)((longlong)&uStack_48 + lVar39) = 0x14010f468;
        FUN_144fb6560(&stack0x00000330 + lVar39,lVar44,&stack0x00000150 + lVar39,lVar19);
      }
      else {
        uVar37 = *(ushort *)(lVar18 + 0xc);
        lVar18 = *(longlong *)(*(longlong *)(lVar17 + 0x70) + (ulonglong)uVar37 * 8);
        if (lVar18 != 0) {
          iVar38 = *(int *)(lVar18 + 0x18);
          if ((*(byte *)(**(longlong **)(&stack0xffffffffffffffe8 + lVar39) + 0x1bd) & 4) == 0) {
            uVar43 = 0;
            if (iVar38 < -0x1f48dabb) {
              if (iVar38 < -0x4a6a24d0) {
                if ((iVar38 == -0x7d18c9b7) || (iVar38 == -0x59b3e649)) goto LAB_14010f789;
              }
              else {
LAB_14010f492:
                uVar43 = 0;
                if ((iVar38 == -0x4a6a24d0) || (iVar38 == -0x38228041)) goto LAB_14010f503;
              }
            }
            else if (iVar38 < 0x487980f9) {
              if (iVar38 == -0x1f48dabb) goto LAB_14010f789;
              if (iVar38 == 0x31af61bc) goto LAB_14010f503;
            }
            else if ((iVar38 == 0x5d96ab33) || (iVar38 == 0x487980f9)) {
LAB_14010f503:
              uVar43 = 1;
            }
          }
          else {
            uVar43 = 0;
            if (iVar38 < -0x3658eba7) {
              if (iVar38 < -0x59b3e649) {
                if ((iVar38 != -0x7d18c9b7) && (iVar38 != -0x69dad30b)) goto LAB_14010f506;
              }
              else if (iVar38 != -0x59b3e649) goto LAB_14010f492;
              goto LAB_14010f789;
            }
            if (iVar38 < 0x31af61bc) {
              if ((iVar38 == -0x3658eba7) || (iVar38 == -0x1f48dabb)) goto LAB_14010f789;
            }
            else if ((iVar38 == 0x31af61bc) || ((iVar38 == 0x487980f9 || (iVar38 == 0x5d96ab33))))
            goto LAB_14010f503;
          }
LAB_14010f506:
          lVar41 = *(longlong *)(lVar17 + 0x88);
          if ((lVar41 == 0) ||
             (((*(ulonglong *)(lVar41 + (ulonglong)uVar37 * 0x10) &
               *(ulonglong *)
                (*(longlong *)(**(longlong **)(&stack0xffffffffffffffe8 + lVar39) + 0xb0) + 0x100))
               != 0 && ((((ulonglong)DAT_149e44eb0 - 1 | 0x2000) &
                        *(ulonglong *)(lVar41 + 8 + (ulonglong)uVar37 * 0x10)) != 0)))) {
            *(undefined8 *)(&stack0x000000e0 + lVar39) = 0;
            *(longlong *)(&stack0x00000130 + lVar39) = lVar18;
            *(undefined4 *)(&stack0x00000138 + lVar39) = 0;
            *(undefined2 *)(&stack0x0000013c + lVar39) = 0xffff;
            lVar18 = *(longlong *)(lVar17 + 0x78);
            lVar41 = (ulonglong)uVar37 * 0x40;
            fVar20 = *param_2;
            fVar21 = param_2[1];
            fVar22 = param_2[2];
            fVar23 = param_2[3];
            fVar50 = param_2[4];
            fVar51 = param_2[5];
            fVar52 = param_2[6];
            fVar53 = param_2[7];
            fVar54 = param_2[8];
            fVar55 = param_2[9];
            fVar56 = param_2[10];
            fVar57 = param_2[0xb];
            fVar2 = *(float *)(lVar18 + lVar41);
            fVar3 = *(float *)(lVar18 + 4 + lVar41);
            fVar4 = *(float *)(lVar18 + 8 + lVar41);
            fVar5 = *(float *)(lVar18 + 0x10 + lVar41);
            fVar6 = *(float *)(lVar18 + 0x20 + lVar41);
            fVar7 = *(float *)(lVar18 + 0x30 + lVar41);
            fVar8 = *(float *)(lVar18 + 0x14 + lVar41);
            fVar9 = *(float *)(lVar18 + 0x24 + lVar41);
            fVar10 = *(float *)(lVar18 + 0x34 + lVar41);
            fVar11 = *(float *)(lVar18 + 0x18 + lVar41);
            fVar12 = *(float *)(lVar18 + 0x38 + lVar41);
            *(float *)(&stack0xfffffffffffffff0 + lVar39) = fVar4;
            *(float *)(&stack0xfffffffffffffff4 + lVar39) = fVar4;
            *(float *)(&stack0xfffffffffffffff8 + lVar39) = fVar4;
            *(float *)(&stack0xfffffffffffffffc + lVar39) = fVar4;
            auVar62._0_4_ = fVar4 * fVar54 + fVar3 * fVar50 + fVar20 * fVar2;
            auVar62._4_4_ = fVar4 * fVar55 + fVar3 * fVar51 + fVar21 * fVar2;
            auVar62._8_4_ = fVar4 * fVar56 + fVar3 * fVar52 + fVar22 * fVar2;
            auVar62._12_4_ = fVar4 * fVar57 + fVar3 * fVar53 + fVar23 * fVar2;
            fVar13 = param_2[0xc];
            fVar14 = param_2[0xd];
            fVar15 = param_2[0xe];
            fVar16 = param_2[0xf];
            auVar64._0_4_ = fVar11 * fVar54 + fVar8 * fVar50 + fVar20 * fVar5;
            auVar64._4_4_ = fVar11 * fVar55 + fVar8 * fVar51 + fVar21 * fVar5;
            auVar64._8_4_ = fVar11 * fVar56 + fVar8 * fVar52 + fVar22 * fVar5;
            auVar64._12_4_ = fVar11 * fVar57 + fVar8 * fVar53 + fVar23 * fVar5;
            fVar4 = *(float *)(lVar18 + 0x28 + lVar41);
            *(undefined1 (*) [16])(&stack0x00000060 + lVar39) = auVar62;
            *(undefined1 (*) [16])(&stack0x00000070 + lVar39) = auVar64;
            uVar36 = 0xffff;
            *(float *)(&stack0x00000080 + lVar39) = fVar4 * fVar54 + fVar9 * fVar50 + fVar6 * fVar20
            ;
            *(float *)(&stack0x00000084 + lVar39) = fVar4 * fVar55 + fVar9 * fVar51 + fVar6 * fVar21
            ;
            *(float *)(&stack0x00000088 + lVar39) = fVar4 * fVar56 + fVar9 * fVar52 + fVar6 * fVar22
            ;
            *(float *)(&stack0x0000008c + lVar39) = fVar4 * fVar57 + fVar9 * fVar53 + fVar6 * fVar23
            ;
            *(float *)(&stack0x00000090 + lVar39) =
                 fVar12 * fVar54 + fVar10 * fVar50 + fVar7 * fVar20 + fVar13;
            *(float *)(&stack0x00000094 + lVar39) =
                 fVar12 * fVar55 + fVar10 * fVar51 + fVar7 * fVar21 + fVar14;
            *(float *)(&stack0x00000098 + lVar39) =
                 fVar12 * fVar56 + fVar10 * fVar52 + fVar7 * fVar22 + fVar15;
            *(float *)(&stack0x0000009c + lVar39) =
                 fVar12 * fVar57 + fVar10 * fVar53 + fVar7 * fVar23 + fVar16;
            fVar20 = param_2[0x10];
            fVar21 = param_2[0x11];
            fVar22 = param_2[0x12];
            fVar23 = param_2[0x13];
            auVar49 = *(undefined1 (*) [16])(param_2 + 0x14);
            fVar13 = param_2[0x1c];
            fVar14 = param_2[0x1d];
            fVar15 = param_2[0x1e];
            fVar16 = param_2[0x1f];
            auVar59 = *(undefined1 (*) [16])(param_2 + 0x18);
            fVar50 = auVar49._0_4_;
            fVar51 = auVar49._4_4_;
            fVar52 = auVar49._8_4_;
            fVar53 = auVar49._12_4_;
            fVar54 = auVar59._0_4_;
            auVar48._0_4_ =
                 fVar54 * *(float *)(&stack0xfffffffffffffff0 + lVar39) +
                 fVar50 * fVar3 + fVar20 * fVar2;
            fVar55 = auVar59._4_4_;
            auVar48._4_4_ =
                 fVar55 * *(float *)(&stack0xfffffffffffffff4 + lVar39) +
                 fVar51 * fVar3 + fVar21 * fVar2;
            fVar56 = auVar59._8_4_;
            auVar48._8_4_ =
                 fVar56 * *(float *)(&stack0xfffffffffffffff8 + lVar39) +
                 fVar52 * fVar3 + fVar22 * fVar2;
            fVar57 = auVar59._12_4_;
            auVar48._12_4_ =
                 fVar57 * *(float *)(&stack0xfffffffffffffffc + lVar39) +
                 fVar53 * fVar3 + fVar23 * fVar2;
            auVar60._0_4_ = fVar54 * fVar11 + fVar50 * fVar8 + fVar20 * fVar5;
            auVar60._4_4_ = fVar55 * fVar11 + fVar51 * fVar8 + fVar21 * fVar5;
            auVar60._8_4_ = fVar56 * fVar11 + fVar52 * fVar8 + fVar22 * fVar5;
            auVar60._12_4_ = fVar57 * fVar11 + fVar53 * fVar8 + fVar23 * fVar5;
            auVar58._0_4_ = fVar54 * fVar4 + fVar50 * fVar9 + fVar6 * fVar20;
            auVar58._4_4_ = fVar55 * fVar4 + fVar51 * fVar9 + fVar6 * fVar21;
            auVar58._8_4_ = fVar56 * fVar4 + fVar52 * fVar9 + fVar6 * fVar22;
            auVar58._12_4_ = fVar57 * fVar4 + fVar53 * fVar9 + fVar6 * fVar23;
            *(undefined1 (*) [16])(&stack0x000000a0 + lVar39) = auVar48;
            *(undefined1 (*) [16])(&stack0x000000b0 + lVar39) = auVar60;
            *(undefined1 (*) [16])(&stack0x000000c0 + lVar39) = auVar58;
            *(float *)(&stack0x000000d0 + lVar39) =
                 fVar12 * fVar54 + fVar10 * fVar50 + fVar7 * fVar20 + fVar13;
            *(float *)(&stack0x000000d4 + lVar39) =
                 fVar12 * fVar55 + fVar10 * fVar51 + fVar7 * fVar21 + fVar14;
            *(float *)(&stack0x000000d8 + lVar39) =
                 fVar12 * fVar56 + fVar10 * fVar52 + fVar7 * fVar22 + fVar15;
            *(float *)(&stack0x000000dc + lVar39) =
                 fVar12 * fVar57 + fVar10 * fVar53 + fVar7 * fVar23 + fVar16;
            *(float *)(&stack0x00000140 + lVar39) = param_2[0x38];
            fVar2 = param_2[0x36];
            uVar45 = (ulonglong)(uint)fVar2;
            if (uVar45 == 0) {
              uVar45 = 0;
            }
            else {
              uVar42 = (ulonglong)(((uint)fVar2 & 0xffff) << 4);
              if ((((*(short *)(*(longlong *)(_DAT_14abbf348 + 0x28) + 8 + uVar42) ==
                     (short)((uint)fVar2 >> 0x10)) &&
                   (lVar18 = *(longlong *)(*(longlong *)(_DAT_14abbf348 + 0x28) + uVar42),
                   lVar18 != 0)) && (*(int *)(lVar18 + 0x10) != 0)) &&
                 (uVar36 = 0xfffe, uVar37 != 0xfffe)) {
                *(undefined8 *)((longlong)&uStack_48 + lVar39) = 0x14010f71b;
                uVar36 = func_0x0001401c0010();
                uVar45 = (ulonglong)(uint)param_2[0x36];
              }
            }
            puVar1 = (undefined8 *)((longlong)auStackX_8 + lVar39 + -8);
            uVar24 = *puVar1;
            uVar25 = puVar1[1];
            uVar26 = puVar1[2];
            uVar27 = puVar1[3];
            uVar28 = *(undefined8 *)((longlong)auStackX_8 + lVar39 + 0x18);
            *(ulonglong *)(&stack0x00000138 + lVar39) =
                 uVar45 | (ulonglong)uVar36 << 0x20 | 0xffff000000000000;
            *(undefined8 *)(&stack0x00000110 + lVar39) = *(undefined8 *)(&stack0x00000030 + lVar39);
            *(undefined8 *)(&stack0x00000118 + lVar39) = *(undefined8 *)(&stack0x00000038 + lVar39);
            *(undefined8 *)(&stack0x00000120 + lVar39) = *(undefined8 *)(&stack0x00000040 + lVar39);
            *(undefined8 *)(&stack0x00000128 + lVar39) = *(undefined8 *)(&stack0x00000048 + lVar39);
            *(undefined8 *)(&stack0x00000100 + lVar39) = uVar28;
            *(undefined8 *)(&stack0x00000108 + lVar39) = *(undefined8 *)(&stack0x00000028 + lVar39);
            *(undefined8 *)(&stack0x00000110 + lVar39) = *(undefined8 *)(&stack0x00000030 + lVar39);
            *(undefined8 *)(&stack0x00000118 + lVar39) = *(undefined8 *)(&stack0x00000038 + lVar39);
            *(undefined8 *)(&stack0x000000e0 + lVar39) = uVar24;
            *(undefined8 *)(&stack0x000000e8 + lVar39) = uVar25;
            *(undefined8 *)(&stack0x000000f0 + lVar39) = uVar26;
            *(undefined8 *)(&stack0x000000f8 + lVar39) = uVar27;
            *(undefined8 *)((longlong)&uStack_48 + lVar39) = 0x14010f789;
            FUN_144fb5f50(*(undefined8 *)(&stack0xffffffffffffffe8 + lVar39),
                          &stack0x00000060 + lVar39,uVar43);
          }
        }
      }
LAB_14010f789:
      iVar38 = *(int *)(&stack0x00000334 + lVar39);
    } while (iVar38 != 0);
    if ((&stack0x00000350 + lVar39 != *(undefined1 **)(&stack0x00000340 + lVar39)) &&
       (*(undefined1 **)(&stack0x00000340 + lVar39) != (undefined1 *)0x0)) {
      *(undefined8 *)((longlong)&uStack_48 + lVar39) = 0x14010f7f2;
      func_0x000144d9c130();
    }
  }
  return;
}

