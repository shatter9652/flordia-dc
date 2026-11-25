// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1448a70c0  size: 3526 bytes
// Name:    crProperties::CalcKey
// Subsystem: core
// Class:   crProperties
//
// Evidence:
//   GTAVSRC: crProperties::CalcKey  (rage/suite/src/crmotiontree/synchronizer.cpp)
//   literal: Synchronizer
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1453d3ca0, FUN_144fc21d0, FUN_144d9e2f0, FUN_1448a8980, FUN_1455db934, FUN_145647140, FUN_1448a9660, FUN_1448a8840, FUN_1455db8cc, FUN_1448a9560, FUN_1448a93f0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"
#include "gta6decomp/crProperties.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void crProperties__CalcKey(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined1 auVar3 [16];
  char cVar4;
  undefined1 uVar5;
  byte bVar6;
  ushort uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  longlong lVar13;
  int *piVar14;
  undefined8 uVar15;
  longlong lVar16;
  longlong lVar17;
  undefined8 uVar18;
  longlong lVar19;
  ulonglong uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  int iVar25;
  ulonglong uVar26;
  int iVar27;
  longlong lVar28;
  ulonglong uVar29;
  longlong lVar30;
  longlong unaff_GS_OFFSET;
  float fVar31;
  undefined1 auVar32 [16];
  undefined1 in_register_000012c4 [12];
  undefined8 unaff_XMM6_Qa;
  undefined8 unaff_XMM6_Qb;
  undefined8 unaff_XMM7_Qa;
  undefined8 unaff_XMM7_Qb;
  undefined1 auVar33 [64];
  undefined8 unaff_XMM8_Qa;
  undefined8 unaff_XMM8_Qb;
  undefined1 auVar34 [64];
  undefined8 unaff_XMM9_Qa;
  undefined8 unaff_XMM9_Qb;
  undefined1 auVar35 [64];
  undefined8 unaff_XMM10_Qa;
  undefined8 unaff_XMM10_Qb;
  undefined1 auVar36 [64];
  undefined1 in_ZMM11 [64];
  undefined1 auVar37 [64];
  float fVar38;
  float fVar39;
  undefined1 in_ZMM12 [64];
  undefined1 auVar40 [64];
  undefined1 in_ZMM13 [64];
  undefined1 auVar41 [64];
  undefined1 in_ZMM14 [64];
  undefined1 auVar42 [64];
  undefined1 in_ZMM15 [64];
  undefined1 auVar43 [64];
  byte bStackX_f;
  uint auStackX_10 [2];
  ulonglong uStackX_18;
  longlong lStackX_20;
  undefined8 uStack_48;
  
  uStack_48 = 0x1448a70d6;
  lVar8 = FUN_145647140();
  lVar8 = -lVar8;
  *(undefined1 (*) [16])(&stack0x00020970 + lVar8) = in_ZMM15._0_16_;
  *(undefined1 (*) [16])(&stack0x00020960 + lVar8) = in_ZMM14._0_16_;
  *(undefined1 (*) [16])(&stack0x00020950 + lVar8) = in_ZMM13._0_16_;
  *(undefined1 (*) [16])(&stack0x00020940 + lVar8) = in_ZMM12._0_16_;
  *(undefined1 (*) [16])(&stack0x00020930 + lVar8) = in_ZMM11._0_16_;
  *(undefined8 *)(&stack0x00020920 + lVar8) = unaff_XMM10_Qa;
  *(undefined8 *)(&stack0x00020928 + lVar8) = unaff_XMM10_Qb;
  *(undefined8 *)(&stack0x00020910 + lVar8) = unaff_XMM9_Qa;
  *(undefined8 *)(&stack0x00020918 + lVar8) = unaff_XMM9_Qb;
  *(undefined8 *)(&stack0x00020900 + lVar8) = unaff_XMM8_Qa;
  *(undefined8 *)(&stack0x00020908 + lVar8) = unaff_XMM8_Qb;
  *(undefined8 *)(&stack0x000208f0 + lVar8) = unaff_XMM7_Qa;
  *(undefined8 *)(&stack0x000208f8 + lVar8) = unaff_XMM7_Qb;
  *(undefined8 *)(&stack0x000208e0 + lVar8) = unaff_XMM6_Qa;
  *(undefined8 *)(&stack0x000208e8 + lVar8) = unaff_XMM6_Qb;
  iVar24 = (int)&stack0x000008e0 + (int)lVar8;
  uVar23 = 0;
  *(longlong *)(&stack0x00000038 + lVar8) = param_1;
  *(undefined8 *)(&stack0x000008d0 + lVar8) = 0;
  uVar26 = (ulonglong)(&stack0x000008ef + lVar8) & 0xfffffffffffffff0;
  *(ulonglong *)(&stack0x000008d8 + lVar8) = uVar26;
  lVar30 = *(longlong *)(param_1 + 0x20);
  if (lVar30 != 0) {
    do {
      if ((*(byte *)(lVar30 + 0x34) & 4) == 0) {
        uVar18 = *(undefined8 *)(lVar30 + 8);
        *(undefined8 *)((longlong)&uStack_48 + lVar8) = 0x1448a7175;
        lVar9 = func_0x0001448a6410(uVar18);
        uVar23 = (uVar23 + 1) - (uint)(lVar9 == 0);
      }
      lVar30 = *(longlong *)(lVar30 + 0x28);
    } while (lVar30 != 0);
    uVar26 = *(ulonglong *)(&stack0x000008d8 + lVar8);
  }
  uVar21 = uVar23 * 0x18 + 0xf & 0xfffffff0;
  if ((iVar24 - (int)uVar26) + 0x20000U < uVar21) {
    *(undefined8 *)((longlong)&uStack_48 + lVar8) = 0x1448a71b6;
    puVar10 = (undefined8 *)func_0x000144d9c140(0x10,uVar21 + 0x10);
    *puVar10 = *(undefined8 *)(&stack0x000008d0 + lVar8);
    *(undefined8 **)(&stack0x000008d0 + lVar8) = puVar10;
    *(undefined8 **)((longlong)&uStackX_18 + lVar8) = puVar10 + 2;
  }
  else {
    *(ulonglong *)((longlong)&uStackX_18 + lVar8) = uVar26;
    *(ulonglong *)(&stack0x000008d8 + lVar8) = uVar21 + uVar26;
  }
  iVar25 = 0;
  lVar30 = *(longlong *)(*(longlong *)(&stack0x00000038 + lVar8) + 0x20);
  if (lVar30 != 0) {
    iVar27 = 0;
    do {
      uVar18 = *(undefined8 *)(lVar30 + 8);
      *(undefined8 *)((longlong)&uStack_48 + lVar8) = 0x1448a720e;
      lVar9 = func_0x0001448a6410(uVar18);
      if (lVar9 != 0 && (char)((*(uint *)(lVar30 + 0x34) & 4) >> 2) == '\0') {
        lVar19 = (longlong)iVar27;
        uVar18 = *(undefined8 *)(&stack0x00000038 + lVar8);
        *(byte *)(*(longlong *)((longlong)&uStackX_18 + lVar8) + 0x14 + lVar19 * 0x18) =
             (byte)*(uint *)(lVar30 + 0x34) & 1;
        *(undefined8 *)((longlong)&uStack_48 + lVar8) = 0x1448a724e;
        uVar21 = FUN_1448a8840(uVar18,&stack0x000000d0 + lVar8,lVar9);
        puVar10 = *(undefined8 **)(&stack0x000008d8 + lVar8);
        uVar22 = uVar21 * 0x10;
        if ((iVar24 - (int)puVar10) + 0x20000U < uVar22) {
          *(undefined8 *)((longlong)&uStack_48 + lVar8) = 0x1448a7277;
          puVar10 = (undefined8 *)func_0x000144d9c140(0x10,uVar22 + 0x10);
          *puVar10 = *(undefined8 *)(&stack0x000008d0 + lVar8);
          *(undefined8 **)(&stack0x000008d0 + lVar8) = puVar10;
          puVar10 = puVar10 + 2;
        }
        else {
          *(ulonglong *)(&stack0x000008d8 + lVar8) = (ulonglong)uVar22 + (longlong)puVar10;
        }
        iVar27 = iVar27 + 1;
        plVar1 = (longlong *)(*(longlong *)((longlong)&uStackX_18 + lVar8) + lVar19 * 0x18);
        plVar1[1] = (longlong)puVar10;
        *(undefined8 *)((longlong)&uStack_48 + lVar8) = 0x1448a72bf;
        func_0x000145f40560(puVar10,&stack0x000000d0 + lVar8,(ulonglong)uVar21 << 4);
        *plVar1 = lVar30;
        *(uint *)(plVar1 + 2) = uVar21;
        uVar18 = *(undefined8 *)(lVar30 + 8);
        *(undefined8 *)((longlong)&uStack_48 + lVar8) = 0x1448a72d0;
        uVar5 = func_0x0001448a63c0(uVar18);
        iVar25 = iVar25 + uVar21;
        *(undefined1 *)((longlong)plVar1 + 0x15) = uVar5;
      }
      lVar30 = *(longlong *)(lVar30 + 0x28);
    } while (lVar30 != 0);
  }
  lVar30 = *(longlong *)((longlong)&uStackX_18 + lVar8);
  if (*(char *)(*(longlong *)(&stack0x00000038 + lVar8) + 0x5d) != '\0') {
    *(undefined8 *)((longlong)&uStack_48 + lVar8) = 0x1448a7306;
    FUN_1448a8980(lVar30,lVar30 + (longlong)(int)uVar23 * 0x18);
  }
  puVar10 = *(undefined8 **)(&stack0x000008d8 + lVar8);
  uVar21 = uVar23 << 5;
  if ((iVar24 - (int)puVar10) + 0x20000U < uVar21) {
    *(undefined8 *)((longlong)&uStack_48 + lVar8) = 0x1448a732e;
    puVar10 = (undefined8 *)func_0x000144d9c140(0x10,uVar21 | 0x10);
    *puVar10 = *(undefined8 *)(&stack0x000008d0 + lVar8);
    *(undefined8 **)(&stack0x000008d0 + lVar8) = puVar10;
    puVar10 = puVar10 + 2;
  }
  else {
    *(ulonglong *)(&stack0x000008d8 + lVar8) = (ulonglong)uVar21 + (longlong)puVar10;
  }
  *(undefined8 *)((longlong)&uStack_48 + lVar8) = 0x1448a736b;
  uVar21 = FUN_1448a93f0(*(undefined8 *)(&stack0x00000038 + lVar8),puVar10,lVar30,uVar23);
  puVar11 = *(undefined8 **)(&stack0x000008d8 + lVar8);
  uVar22 = iVar25 * 0x28 + 0xfU & 0xfffffff0;
  if ((iVar24 - (int)puVar11) + 0x20000U < uVar22) {
    *(undefined8 *)((longlong)&uStack_48 + lVar8) = 0x1448a73a3;
    puVar11 = (undefined8 *)func_0x000144d9c140(0x10,uVar22 + 0x10);
    *puVar11 = *(undefined8 *)(&stack0x000008d0 + lVar8);
    *(undefined8 **)(&stack0x000008d0 + lVar8) = puVar11;
    puVar11 = puVar11 + 2;
    puVar12 = *(undefined8 **)(&stack0x000008d8 + lVar8);
  }
  else {
    puVar12 = (undefined8 *)((longlong)puVar11 + (ulonglong)uVar22);
    *(undefined8 **)(&stack0x000008d8 + lVar8) = puVar12;
  }
  *(undefined8 **)(&stack0x00000060 + lVar8) = puVar11;
  if ((iVar24 - (int)puVar12) + 0x20000U < uVar22) {
    *(undefined8 *)((longlong)&uStack_48 + lVar8) = 0x1448a73f9;
    puVar12 = (undefined8 *)func_0x000144d9c140(0x10,uVar22 + 0x10);
    *puVar12 = *(undefined8 *)(&stack0x000008d0 + lVar8);
    *(undefined8 **)(&stack0x000008d0 + lVar8) = puVar12;
    puVar12 = puVar12 + 2;
  }
  else {
    *(ulonglong *)(&stack0x000008d8 + lVar8) = (ulonglong)uVar22 + (longlong)puVar12;
  }
  *(undefined8 **)(&stack0x00000068 + lVar8) = puVar12;
  if (0 < (int)uVar21) {
    if ((int)uVar23 < 1) goto LAB_1448a7c73;
    lVar30 = 0;
    iVar24 = 0x7fffffff;
    *(undefined4 *)(&stack0x00000040 + lVar8) = 0xffffffff;
    *(undefined8 **)(&stack0x00000028 + lVar8) = puVar10;
    *(ulonglong *)(&stack0x00000048 + lVar8) = (ulonglong)uVar21;
    *(ulonglong *)(&stack0x00000058 + lVar8) = (ulonglong)uVar23;
    uVar23 = 0;
    do {
      lVar19 = *(longlong *)(&stack0x00000058 + lVar8);
      *(uint *)((longlong)auStackX_10 + lVar8) = uVar23;
      iVar25 = 0;
      uVar26 = (ulonglong)(~uVar23 & 1);
      lVar28 = *(longlong *)((longlong)&uStackX_18 + lVar8);
      lVar9 = *(longlong *)(&stack0x00000060 + uVar26 * 8 + lVar8);
      do {
        *(undefined8 *)((longlong)&uStack_48 + lVar8) = 0x1448a74a6;
        iVar27 = FUN_1448a9560(puVar10 + lVar30 * 2,lVar28,lVar9,iVar24 - iVar25);
        iVar25 = iVar27 + iVar25;
        if (iVar24 <= iVar25) {
          puVar10 = *(undefined8 **)(&stack0x00000028 + lVar8);
          uVar26 = (ulonglong)*(uint *)((longlong)auStackX_10 + lVar8);
          goto LAB_1448a74e4;
        }
        piVar14 = (int *)(lVar28 + 0x10);
        lVar28 = lVar28 + 0x18;
        lVar19 = lVar19 + -1;
        lVar9 = lVar9 + (longlong)*piVar14 * 0x28;
      } while (lVar19 != 0);
      puVar10 = *(undefined8 **)(&stack0x00000028 + lVar8);
      *(int *)(&stack0x00000040 + lVar8) = (int)lVar30;
      iVar24 = iVar25;
      if (iVar25 == 0) break;
LAB_1448a74e4:
      lVar30 = lVar30 + 1;
      uVar23 = (uint)uVar26;
    } while (lVar30 != *(longlong *)(&stack0x00000048 + lVar8));
    lVar30 = *(longlong *)((longlong)&uStackX_18 + lVar8);
    if (-1 < (int)*(uint *)(&stack0x00000040 + lVar8)) {
      auVar33 = ZEXT464(_DAT_145fc6f54);
      auVar34 = ZEXT464(_DAT_145fc6f50);
      auVar35 = ZEXT464(_DAT_145fc6ed8);
      auVar36 = ZEXT1264(ZEXT812(0));
      lVar19 = 0;
      lVar9 = *(longlong *)(&stack0x00000060 + uVar26 * 8 + lVar8);
      *(ulonglong *)(&stack0x00000078 + lVar8) =
           (longlong)puVar10 + (ulonglong)*(uint *)(&stack0x00000040 + lVar8) * 0x10 + 0xc;
      uVar18 = _DAT_146159bc0;
      do {
        lVar28 = *(longlong *)(lVar30 + lVar19 * 0x18);
        uVar23 = *(uint *)(lVar30 + 0x10 + lVar19 * 0x18);
        lVar13 = (longlong)(int)uVar23;
        *(undefined2 *)(lVar28 + 0x40) = 0;
        *(undefined8 *)(lVar28 + 0x48) = uVar18;
        if (0 < lVar13) {
          *(longlong *)(&stack0x00000050 + lVar8) = lVar13;
          uVar26 = (ulonglong)uVar23;
          piVar14 = (int *)(lVar9 + 0x20);
          uVar20 = 0;
          iVar25 = 0;
          uVar29 = 0;
          auVar40 = ZEXT1664(auVar34._0_16_);
          auVar37 = ZEXT1664(auVar33._0_16_);
          auVar41 = ZEXT1664(auVar34._0_16_);
          auVar42 = ZEXT1664(auVar33._0_16_);
          iVar24 = 0;
          do {
            if (*(longlong *)(piVar14 + -4) != 0 && *(longlong *)(piVar14 + -8) != 0) {
              fVar31 = *(float *)(*(longlong *)(piVar14 + -4) + 0x48);
              iVar27 = *piVar14;
              iVar25 = iVar25 + 1;
              fVar38 = auVar40._0_4_;
              auVar3 = vminss_avx(ZEXT416((uint)fVar31),auVar40._0_16_);
              auVar40 = ZEXT1664(auVar3);
              auVar3 = vmaxss_avx(ZEXT416((uint)fVar31),auVar37._0_16_);
              auVar37 = ZEXT1664(auVar3);
              if (fVar31 < fVar38) {
                uVar29 = uVar20 & 0xffffffff;
              }
              if (iVar24 <= iVar27) {
                iVar24 = iVar27;
              }
              auVar32 = ZEXT416((uint)((float)iVar27 +
                                      *(float *)(*(longlong *)(piVar14 + -8) + 0x48)));
              auVar3 = vminss_avx(auVar32,auVar41._0_16_);
              auVar41 = ZEXT1664(auVar3);
              auVar3 = vmaxss_avx(auVar32,auVar42._0_16_);
              auVar42 = ZEXT1664(auVar3);
            }
            uVar20 = uVar20 + 1;
            piVar14 = piVar14 + 10;
          } while (uVar26 != uVar20);
          lVar13 = *(longlong *)(&stack0x00000050 + lVar8);
          if (0 < iVar25) {
            uVar15 = *(undefined8 *)(lVar28 + 8);
            *(ulonglong *)(&stack0x00000040 + lVar8) = uVar29;
            *(longlong *)((longlong)auStackX_10 + lVar8) = lVar28;
            *(undefined8 *)((longlong)&uStack_48 + lVar8) = 0x1448a7628;
            bVar6 = func_0x0001448a63c0(uVar15);
            lVar28 = *(longlong *)((longlong)auStackX_10 + lVar8);
            (&bStackX_f)[lVar8] = bVar6;
            cVar2 = **(char **)(&stack0x00000078 + lVar8);
            uVar21 = (iVar25 - (uint)bVar6) + 2;
            uVar23 = (uint)*(ushort *)(lVar28 + 0x42);
            if (*(ushort *)(lVar28 + 0x42) < uVar21) {
              lVar28 = *(longlong *)(lVar28 + 0x38);
              *(undefined8 *)((longlong)&uStack_48 + lVar8) = 0x1448a7662;
              uVar15 = func_0x000144d9c140(4,(ulonglong)uVar21 << 3);
              if (lVar28 != 0) {
                *(undefined8 *)((longlong)&uStack_48 + lVar8) = 0x1448a7672;
                func_0x000144d9c130(lVar28);
              }
              lVar28 = *(longlong *)((longlong)auStackX_10 + lVar8);
              *(short *)(lVar28 + 0x42) = (short)uVar21;
              *(undefined8 *)(lVar28 + 0x38) = uVar15;
              uVar23 = uVar21;
            }
            iVar25 = 0;
            bVar6 = (&bStackX_f)[lVar8];
            *(undefined4 *)(lVar28 + 0x48) = 0;
            iVar27 = 0;
            *(longlong *)(&stack0x00000028 + lVar8) = lVar9;
            *(ulonglong *)(&stack0x00000048 + lVar8) = uVar26;
            auVar43 = ZEXT1664(CONCAT124(in_register_000012c4,(float)(iVar24 + 1)));
            *(float *)(lVar28 + 0x4c) = (float)(iVar24 + 1);
            *(undefined8 *)(&stack0x000000d0 + lVar8) = 8;
            *(undefined8 *)(&stack0x00000088 + lVar8) = 8;
            uVar20 = 0;
            if (bVar6 == 0) {
              *(undefined1 **)(&stack0xfffffffffffffff8 + lVar8) = &stack0x00000088 + lVar8;
              *(undefined1 **)(&stack0xffffffffffffffe8 + lVar8) = &stack0x00000030 + lVar8;
              *(undefined1 **)(&stack0xfffffffffffffff0 + lVar8) = &stack0x000000d0 + lVar8;
              *(undefined1 **)(&stack0xffffffffffffffe0 + lVar8) = &stack0x00000034 + lVar8;
              *(undefined8 *)((longlong)&uStack_48 + lVar8) = 0x1448a7716;
              uVar15 = FUN_1448a9660(lVar9,uVar26,*(undefined8 *)(&stack0x00000040 + lVar8),
                                     CONCAT71((int7)((ulonglong)lVar30 >> 8),cVar2) & 0xffffffff);
              fVar31 = auVar41._0_4_;
              cVar4 = (char)uVar15;
              fVar38 = auVar36._0_4_;
              fVar39 = auVar40._0_4_;
              if (cVar4 == '\0') {
                lVar28 = *(longlong *)((longlong)auStackX_10 + lVar8);
                iVar27 = 0;
                uVar20 = 0;
                if (fVar38 < fVar39) goto LAB_1448a785d;
              }
              else {
                if (cVar2 == '\0') {
                  auVar3 = vmaxss_avx(ZEXT416(*(uint *)(&stack0x00000034 + lVar8)),auVar36._0_16_);
                  *(int *)(&stack0x00000034 + lVar8) = auVar3._0_4_;
                  auVar3 = vminss_avx(ZEXT416(*(uint *)(&stack0x00000030 + lVar8)),auVar43._0_16_);
                  *(int *)(&stack0x00000030 + lVar8) = auVar3._0_4_;
                }
                lVar28 = *(longlong *)((longlong)auStackX_10 + lVar8);
                iVar27 = 0;
                if (fVar38 < fVar39) {
                  fVar31 = *(float *)(&stack0x00000034 + lVar8);
                  uVar15 = 0;
                  auVar3 = vroundss_avx(ZEXT416((uint)fVar31),ZEXT416((uint)fVar31),9);
                  iVar27 = (int)(float)(auVar3._0_4_ ^ _DAT_145fc6f10);
                  if (fVar38 <= fVar31) {
                    iVar27 = 0;
                  }
                }
                auVar3 = vcmpss_avx(auVar37._0_16_,auVar35._0_16_,1);
                uVar20 = CONCAT71((int7)((ulonglong)uVar15 >> 8),1);
                auVar3 = vblendvps_avx(auVar42._0_16_,ZEXT416(*(uint *)(&stack0x00000030 + lVar8)),
                                       auVar3);
                fVar31 = fVar31 + (float)iVar27;
                *(float *)(lVar28 + 0x48) = fVar31;
                *(float *)(lVar28 + 0x4c) = auVar3._0_4_ + (float)iVar27;
                if (fVar38 < fVar39) {
                  uVar7 = *(ushort *)(lVar28 + 0x40);
                  lVar30 = *(longlong *)(lVar28 + 0x38);
                  lVar13 = lVar30;
                  if (uVar7 == (ushort)uVar23) {
                    *(undefined8 *)((longlong)&uStack_48 + lVar8) = 0x1448a77de;
                    lVar13 = func_0x000144d9c140(4,(uVar23 & 0xffff) * 8 + 0x80);
                    *(undefined8 *)((longlong)&uStack_48 + lVar8) = 0x1448a77f4;
                    func_0x000145f40560(lVar13,lVar30,(uVar23 & 0xffff) * 8);
                    if (lVar30 != 0) {
                      *(undefined8 *)((longlong)&uStack_48 + lVar8) = 0x1448a7801;
                      func_0x000144d9c130(lVar30);
                    }
                    lVar28 = *(longlong *)((longlong)auStackX_10 + lVar8);
                    *(ushort *)(lVar28 + 0x42) = (ushort)uVar23 + 0x10;
                    *(longlong *)(lVar28 + 0x38) = lVar13;
                    lVar9 = *(longlong *)(&stack0x00000028 + lVar8);
                    fVar31 = *(float *)(lVar28 + 0x48);
                    uVar7 = *(ushort *)(lVar28 + 0x40);
                  }
                  uVar20 = (ulonglong)uVar7;
                  *(ushort *)(lVar28 + 0x40) = uVar7 + 1;
                  *(undefined4 *)(lVar13 + uVar20 * 8) = 0;
                  *(float *)(lVar13 + 4 + uVar20 * 8) = fVar31;
LAB_1448a785d:
                  *(char *)((longlong)&lStackX_20 + lVar8) = cVar4;
                  if (0 < (longlong)*(int *)(&stack0x000000d4 + lVar8)) {
                    auVar40 = ZEXT1664(CONCAT124(in_register_000012c4,(float)iVar27));
                    uVar29 = (longlong)*(int *)(&stack0x000000d4 + lVar8) + 1;
                    do {
                      uVar7 = *(ushort *)(lVar28 + 0x40);
                      lVar30 = *(longlong *)(lVar28 + 0x38);
                      lVar13 = lVar30;
                      if (uVar7 == *(ushort *)(lVar28 + 0x42)) {
                        *(undefined8 *)((longlong)&uStack_48 + lVar8) = 0x1448a78a2;
                        lVar13 = func_0x000144d9c140(4,(uint)uVar7 * 8 + 0x80);
                        *(undefined8 *)((longlong)&uStack_48 + lVar8) = 0x1448a78b8;
                        func_0x000145f40560(lVar13,lVar30,(uint)uVar7 * 8);
                        if (lVar30 != 0) {
                          *(undefined8 *)((longlong)&uStack_48 + lVar8) = 0x1448a78c5;
                          func_0x000144d9c130(lVar30);
                        }
                        lVar28 = *(longlong *)((longlong)auStackX_10 + lVar8);
                        uVar26 = *(ulonglong *)(&stack0x00000048 + lVar8);
                        *(ushort *)(lVar28 + 0x42) = uVar7 + 0x10;
                        *(longlong *)(lVar28 + 0x38) = lVar13;
                        uVar7 = *(ushort *)(lVar28 + 0x40);
                      }
                      uVar20 = (ulonglong)uVar7;
                      *(ushort *)(lVar28 + 0x40) = uVar7 + 1;
                      uVar15 = *(undefined8 *)(&stack0x000000c8 + uVar29 * 8 + lVar8);
                      uVar29 = uVar29 - 1;
                      *(undefined8 *)(lVar13 + uVar20 * 8) = uVar15;
                      *(float *)(lVar13 + 4 + uVar20 * 8) =
                           auVar40._0_4_ + (float)((ulonglong)uVar15 >> 0x20);
                    } while (1 < uVar29);
                  }
                  uVar20 = CONCAT71((int7)(uVar20 >> 8),
                                    *(undefined1 *)((longlong)&lStackX_20 + lVar8));
                }
              }
            }
            uVar15 = *(undefined8 *)(&stack0x00000040 + lVar8);
            *(ulonglong *)(&stack0x00000080 + lVar8) = uVar20;
            *(longlong *)((longlong)&lStackX_20 + lVar8) = lVar19;
            do {
              lVar13 = (longlong)(((int)uVar15 + iVar25) % (int)uVar26);
              lVar30 = *(longlong *)(lVar9 + lVar13 * 0x28);
              lVar19 = *(longlong *)(lVar9 + 0x10 + lVar13 * 0x28);
              if (lVar19 != 0 && lVar30 != 0) {
                uVar7 = *(ushort *)(lVar28 + 0x40);
                lVar17 = *(longlong *)(lVar28 + 0x38);
                lVar16 = lVar17;
                if (uVar7 == *(ushort *)(lVar28 + 0x42)) {
                  *(undefined8 *)((longlong)&uStack_48 + lVar8) = 0x1448a7990;
                  lVar16 = func_0x000144d9c140(4,(uint)uVar7 * 8 + 0x80);
                  *(undefined8 *)((longlong)&uStack_48 + lVar8) = 0x1448a79a6;
                  func_0x000145f40560(lVar16,lVar17,(uint)uVar7 * 8);
                  if (lVar17 != 0) {
                    *(undefined8 *)((longlong)&uStack_48 + lVar8) = 0x1448a79b3;
                    func_0x000144d9c130(lVar17);
                  }
                  lVar28 = *(longlong *)((longlong)auStackX_10 + lVar8);
                  uVar15 = *(undefined8 *)(&stack0x00000040 + lVar8);
                  uVar26 = *(ulonglong *)(&stack0x00000048 + lVar8);
                  *(ushort *)(lVar28 + 0x42) = uVar7 + 0x10;
                  *(longlong *)(lVar28 + 0x38) = lVar16;
                  lVar9 = *(longlong *)(&stack0x00000028 + lVar8);
                  uVar7 = *(ushort *)(lVar28 + 0x40);
                }
                *(ushort *)(lVar28 + 0x40) = uVar7 + 1;
                *(undefined4 *)(lVar16 + (ulonglong)uVar7 * 8) = *(undefined4 *)(lVar19 + 0x48);
                *(float *)(lVar16 + 4 + (ulonglong)uVar7 * 8) =
                     (float)(*(int *)(lVar9 + lVar13 * 0x28 + 0x20) + iVar27) +
                     *(float *)(lVar30 + 0x48);
              }
              iVar25 = iVar25 + 1;
            } while ((int)uVar26 != iVar25);
            if ((&bStackX_f)[lVar8] == 0) {
              lVar30 = *(longlong *)((longlong)&uStackX_18 + lVar8);
              lVar19 = *(longlong *)((longlong)&lStackX_20 + lVar8);
              if ((char)*(undefined8 *)(&stack0x00000080 + lVar8) == '\x01' &&
                  auVar37._0_4_ < auVar35._0_4_) {
                iVar24 = *(int *)(&stack0x0000008c + lVar8);
                if (0 < (longlong)iVar24) {
                  auVar37 = ZEXT1664(CONCAT124(in_register_000012c4,(float)iVar27));
                  lVar30 = 0;
                  do {
                    uVar7 = *(ushort *)(lVar28 + 0x40);
                    lVar19 = *(longlong *)(lVar28 + 0x38);
                    lVar13 = lVar19;
                    if (uVar7 == *(ushort *)(lVar28 + 0x42)) {
                      *(undefined8 *)((longlong)&uStack_48 + lVar8) = 0x1448a7aef;
                      lVar13 = func_0x000144d9c140(4,(uint)uVar7 * 8 + 0x80);
                      *(undefined8 *)((longlong)&uStack_48 + lVar8) = 0x1448a7b05;
                      func_0x000145f40560(lVar13,lVar19,(uint)uVar7 * 8);
                      if (lVar19 != 0) {
                        *(undefined8 *)((longlong)&uStack_48 + lVar8) = 0x1448a7b12;
                        func_0x000144d9c130(lVar19);
                      }
                      lVar28 = *(longlong *)((longlong)auStackX_10 + lVar8);
                      *(ushort *)(lVar28 + 0x42) = uVar7 + 0x10;
                      *(longlong *)(lVar28 + 0x38) = lVar13;
                      lVar9 = *(longlong *)(&stack0x00000028 + lVar8);
                      uVar7 = *(ushort *)(lVar28 + 0x40);
                    }
                    *(ushort *)(lVar28 + 0x40) = uVar7 + 1;
                    uVar15 = *(undefined8 *)(&stack0x00000090 + lVar30 * 8 + lVar8);
                    lVar30 = lVar30 + 1;
                    *(undefined8 *)(lVar13 + (ulonglong)uVar7 * 8) = uVar15;
                    *(float *)(lVar13 + 4 + (ulonglong)uVar7 * 8) =
                         auVar37._0_4_ + (float)((ulonglong)uVar15 >> 0x20);
                  } while (iVar24 != lVar30);
                }
                uVar7 = *(ushort *)(lVar28 + 0x40);
                lVar13 = *(longlong *)(lVar28 + 0x38);
                if (uVar7 == *(ushort *)(lVar28 + 0x42)) {
                  *(undefined8 *)((longlong)&uStack_48 + lVar8) = 0x1448a7b8e;
                  lVar17 = func_0x000144d9c140(4,(uint)uVar7 * 8 + 0x80);
                  *(undefined8 *)((longlong)&uStack_48 + lVar8) = 0x1448a7ba4;
                  func_0x000145f40560(lVar17,lVar13,(uint)uVar7 * 8);
                  lVar30 = *(longlong *)((longlong)&uStackX_18 + lVar8);
                  lVar19 = *(longlong *)((longlong)&lStackX_20 + lVar8);
                  if (lVar13 != 0) {
                    *(undefined8 *)((longlong)&uStack_48 + lVar8) = 0x1448a7bbb;
                    func_0x000144d9c130(lVar13);
                  }
                  lVar28 = *(longlong *)((longlong)auStackX_10 + lVar8);
                  *(ushort *)(lVar28 + 0x42) = uVar7 + 0x10;
                  *(longlong *)(lVar28 + 0x38) = lVar17;
                  lVar9 = *(longlong *)(&stack0x00000028 + lVar8);
                  uVar7 = *(ushort *)(lVar28 + 0x40);
                  lVar13 = lVar17;
                }
                else {
                  lVar30 = *(longlong *)((longlong)&uStackX_18 + lVar8);
                  lVar19 = *(longlong *)((longlong)&lStackX_20 + lVar8);
                }
                *(ushort *)(lVar28 + 0x40) = uVar7 + 1;
                *(undefined4 *)(lVar13 + (ulonglong)uVar7 * 8) = 0x3f800000;
                *(undefined4 *)(lVar13 + 4 + (ulonglong)uVar7 * 8) = *(undefined4 *)(lVar28 + 0x4c);
              }
            }
            else {
              uVar7 = *(ushort *)(lVar28 + 0x40);
              puVar10 = *(undefined8 **)(lVar28 + 0x38);
              puVar11 = puVar10;
              if (uVar7 == *(ushort *)(lVar28 + 0x42)) {
                *(undefined8 *)((longlong)&uStack_48 + lVar8) = 0x1448a7a4f;
                puVar11 = (undefined8 *)func_0x000144d9c140(4,(uint)uVar7 * 8 + 0x80);
                *(undefined8 *)((longlong)&uStack_48 + lVar8) = 0x1448a7a65;
                func_0x000145f40560(puVar11,puVar10,(uint)uVar7 * 8);
                if (puVar10 != (undefined8 *)0x0) {
                  *(undefined8 *)((longlong)&uStack_48 + lVar8) = 0x1448a7a72;
                  func_0x000144d9c130(puVar10);
                }
                lVar28 = *(longlong *)((longlong)auStackX_10 + lVar8);
                *(ushort *)(lVar28 + 0x42) = uVar7 + 0x10;
                *(undefined8 **)(lVar28 + 0x38) = puVar11;
                uVar7 = *(ushort *)(lVar28 + 0x40);
              }
              lVar30 = *(longlong *)((longlong)&uStackX_18 + lVar8);
              *(ushort *)(lVar28 + 0x40) = uVar7 + 1;
              puVar11[uVar7] = *puVar10;
              lVar19 = *(longlong *)((longlong)&lStackX_20 + lVar8);
            }
            lVar13 = *(longlong *)(&stack0x00000050 + lVar8);
          }
        }
        lVar19 = lVar19 + 1;
        lVar9 = lVar9 + lVar13 * 0x28;
      } while (lVar19 != *(longlong *)(&stack0x00000058 + lVar8));
      goto LAB_1448a7c73;
    }
  }
  uVar18 = _DAT_146159bc0;
  for (lVar30 = *(longlong *)(*(longlong *)(&stack0x00000038 + lVar8) + 0x20); lVar30 != 0;
      lVar30 = *(longlong *)(lVar30 + 0x28)) {
    *(undefined2 *)(lVar30 + 0x40) = 0;
    *(undefined8 *)(lVar30 + 0x48) = uVar18;
  }
LAB_1448a7c73:
  if (*(int *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 4
              ) < _DAT_149fe5f40) {
    *(undefined8 *)((longlong)&uStack_48 + lVar8) = 0x1448a7e16;
    FUN_1455db8cc(&DAT_149fe5f40);
    if (_DAT_149fe5f40 == -1) {
      *(undefined8 *)((longlong)&uStack_48 + lVar8) = 0x1448a7e31;
      _DAT_149fe5f3c = FUN_144fc21d0(&UNK_14677d726,0);
      *(undefined8 *)((longlong)&uStack_48 + lVar8) = 0x1448a7e43;
      FUN_1455db934(&DAT_149fe5f40);
    }
  }
  if (*(int *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 4
              ) < _DAT_149fe5f48) {
    *(undefined8 *)((longlong)&uStack_48 + lVar8) = 0x1448a7e54;
    FUN_1455db8cc(&DAT_149fe5f48);
    if (_DAT_149fe5f48 == -1) {
      *(undefined8 *)((longlong)&uStack_48 + lVar8) = 0x1448a7e6f;
      _DAT_149fe5f44 = FUN_144fc21d0(&UNK_14677a7ad,0);
      *(undefined8 *)((longlong)&uStack_48 + lVar8) = 0x1448a7e81;
      FUN_1455db934(&DAT_149fe5f48);
    }
  }
  lVar30 = *(longlong *)(*(longlong *)(&stack0x00000038 + lVar8) + 0x20);
  if (lVar30 != 0) {
    do {
      *(byte *)(lVar30 + 0x34) = *(byte *)(lVar30 + 0x34) & 0xfd;
      uVar18 = *(undefined8 *)(lVar30 + 8);
      *(undefined8 *)((longlong)&uStack_48 + lVar8) = 0x1448a7cef;
      lVar9 = func_0x0001448a6450(uVar18);
      if (lVar9 != 0) {
        lVar19 = *(longlong *)(lVar9 + 0x20) + 0x20 + lVar9;
        if (*(longlong *)(lVar9 + 0x20) == 1) {
          lVar19 = 0;
        }
        if ((*(uint *)(lVar9 + 0x1c) & 0x7fffffff) != 0) {
          lVar9 = ((ulonglong)*(uint *)(lVar9 + 0x1c) & 0x7fffffff) * 0x48;
          do {
            if (*(int *)(lVar19 + 0x40) == _DAT_149fe5f3c) {
              *(undefined8 *)((longlong)&uStack_48 + lVar8) = 0x1448a7d3b;
              uVar18 = FUN_144d9e2f0(lVar19,_DAT_149fe5f44);
              *(undefined8 *)((longlong)&uStack_48 + lVar8) = 0x1448a7d46;
              func_0x000144debac0(&stack0x000000d0 + lVar8,uVar18);
              (&stack0x00000088)[lVar8] = 0;
              *(undefined8 *)((longlong)&uStack_48 + lVar8) = 0x1448a7d5e;
              FUN_1453d3ca0(*(undefined8 *)(&stack0x000000d0 + lVar8),&stack0x00000088 + lVar8);
              *(uint *)(lVar30 + 0x34) =
                   (*(uint *)(lVar30 + 0x34) & 0xfffffffd) +
                   (uint)(byte)(&stack0x00000088)[lVar8] * 2;
              break;
            }
            lVar19 = lVar19 + 0x48;
            lVar9 = lVar9 + -0x48;
          } while (lVar9 != 0);
        }
      }
      lVar30 = *(longlong *)(lVar30 + 0x28);
    } while (lVar30 != 0);
  }
  puVar10 = *(undefined8 **)(&stack0x000008d0 + lVar8);
  while (puVar10 != (undefined8 *)0x0) {
    puVar10 = (undefined8 *)*puVar10;
    *(undefined8 *)((longlong)&uStack_48 + lVar8) = 0x1448a7d94;
    func_0x000144d9c130();
  }
  return;
}

