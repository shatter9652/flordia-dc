// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14004b9b0  size: 684 bytes
// Name:    FUN_14004b9b0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145252bd0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14004b9b0(char param_1)

{
  uint *puVar1;
  undefined1 auVar2 [32];
  undefined2 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined1 auVar7 [16];
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  uint uVar11;
  char cVar12;
  longlong lVar13;
  undefined8 uVar14;
  ushort *puVar15;
  undefined8 *puVar16;
  longlong lVar17;
  ulonglong uVar18;
  uint uVar19;
  ulonglong uVar20;
  longlong lVar21;
  int *piVar22;
  ulonglong uVar23;
  undefined2 *puVar24;
  int iVar25;
  undefined1 (*pauVar26) [16];
  undefined8 *puVar27;
  longlong unaff_GS_OFFSET;
  float fVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [64];
  float fVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined8 unaff_XMM6_Qa;
  undefined8 unaff_XMM6_Qb;
  undefined8 uVar37;
  undefined1 auVar36 [64];
  undefined8 unaff_XMM7_Qa;
  undefined8 unaff_XMM7_Qb;
  undefined1 auVar38 [64];
  undefined8 unaff_XMM8_Qa;
  undefined8 uVar39;
  undefined8 unaff_XMM8_Qb;
  undefined8 uVar41;
  undefined1 auVar40 [64];
  undefined8 unaff_XMM9_Qa;
  undefined8 unaff_XMM9_Qb;
  undefined1 auVar42 [64];
  undefined8 unaff_XMM10_Qa;
  undefined8 unaff_XMM10_Qb;
  undefined1 auVar43 [64];
  undefined1 in_ZMM11 [64];
  undefined1 auVar44 [64];
  undefined8 unaff_XMM12_Qa;
  undefined8 unaff_XMM12_Qb;
  undefined8 unaff_XMM13_Qa;
  undefined8 unaff_XMM13_Qb;
  undefined1 auVar45 [64];
  undefined8 unaff_XMM14_Qa;
  undefined8 unaff_XMM14_Qb;
  undefined1 auVar46 [64];
  undefined8 unaff_XMM15_Qa;
  undefined8 unaff_XMM15_Qb;
  undefined1 auVar47 [64];
  float afStackX_8 [2];
  undefined8 uStackX_10;
  float afStackX_18 [2];
  undefined8 uStackX_20;
  undefined1 auStack_108 [144];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined1 extraout_var [56];
  
  uStack_78 = unaff_XMM6_Qa;
  uStack_70 = unaff_XMM6_Qb;
  uStack_68 = unaff_XMM7_Qa;
  uStack_60 = unaff_XMM7_Qb;
  uStack_58 = unaff_XMM8_Qa;
  uStack_50 = unaff_XMM8_Qb;
  if (param_1 == '\0') {
    lVar21 = (longlong)_DAT_14a210d10;
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      func_0x0001455db994();
    }
    lVar17 = 0x5c;
    puVar1 = (uint *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x12d8);
    uVar19 = *puVar1;
    if ((uVar19 & 6) == 0) {
      if (*(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
          '\0') {
        func_0x0001455db994();
        uVar19 = *puVar1;
      }
      if ((uVar19 & 0x20) == 0) {
        lVar17 = 0x58;
      }
    }
    lVar17 = (longlong)*(int *)(lVar17 + 0x14a210cb8) * 0x730;
    FUN_145252bd0(auStack_108,lVar17 + 0x14a94bbb0,1);
    uVar14 = *(undefined8 *)(lVar17 + 0x14a94c160);
    uVar37 = *(undefined8 *)(lVar17 + 0x14a94c168);
    fVar31 = SQRT(*(float *)(lVar17 + 0x14a94c2a4) * *(float *)(lVar17 + 0x14a94c2a4) +
                  *(float *)(lVar17 + 0x14a94c2a0) * *(float *)(lVar17 + 0x14a94c2a0) +
                  _DAT_145fc6ed8) * *(float *)(lVar17 + 0x14a94c280);
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      func_0x0001455db994();
      uVar19 = *puVar1;
    }
    if ((uVar19 & 6) == 0) {
      if (*(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
          '\0') {
        func_0x0001455db994();
        uVar19 = *puVar1;
      }
      lVar17 = 0x58;
      if ((uVar19 & 0x20) != 0) goto LAB_14004bb52;
    }
    else {
LAB_14004bb52:
      lVar17 = 0x5c;
    }
    lVar17 = (longlong)*(int *)(lVar17 + 0x14a210cb8) * 0x730;
    uVar39 = *(undefined8 *)(lVar17 + 0x14a94bca0);
    uVar41 = *(undefined8 *)(lVar17 + 0x14a94bca8);
    _DAT_1488cd9d8 = _DAT_1488cd810;
    _DAT_1488cd9f0 = lVar21 * 0x300 + 0x1488cda10;
    _DAT_1488cd9f8 = (uint *)(lVar21 * 4 + 0x1488ce010);
    _DAT_1488cda00 = (undefined8 *)(lVar21 * 0x30 + 0x1488ce020);
    _DAT_1488cda08 = (undefined8 *)(lVar21 * 0x30 + 0x1488ce080);
    func_0x000145f40560(0x1488cd920,auStack_108,0x90);
    _DAT_1488cd9c8 = (uint *)0x1488cd818;
    _DAT_1488cd9d0 = (uint *)0x1488cd814;
    _DAT_1488cd9b0 = uVar14;
    uRam00000001488cd9b8 = uVar37;
    _DAT_1488cd9c0 = fVar31;
    _DAT_1488cd9e0 = uVar39;
    uRam00000001488cd9e8 = uVar41;
  }
  puStack_48 = &UNK_144e68f66;
  lVar17 = _DAT_146b52050;
  lVar21 = FUN_145647140();
  lVar21 = -lVar21;
  *(undefined8 *)(&stack0x00001c70 + lVar21) = unaff_XMM15_Qa;
  *(undefined8 *)(&stack0x00001c78 + lVar21) = unaff_XMM15_Qb;
  *(undefined8 *)(&stack0x00001c60 + lVar21) = unaff_XMM14_Qa;
  *(undefined8 *)(&stack0x00001c68 + lVar21) = unaff_XMM14_Qb;
  *(undefined8 *)(&stack0x00001c50 + lVar21) = unaff_XMM13_Qa;
  *(undefined8 *)(&stack0x00001c58 + lVar21) = unaff_XMM13_Qb;
  *(undefined8 *)(&stack0x00001c40 + lVar21) = unaff_XMM12_Qa;
  *(undefined8 *)(&stack0x00001c48 + lVar21) = unaff_XMM12_Qb;
  *(undefined1 (*) [16])(&stack0x00001c30 + lVar21) = in_ZMM11._0_16_;
  *(undefined8 *)(&stack0x00001c20 + lVar21) = unaff_XMM10_Qa;
  *(undefined8 *)(&stack0x00001c28 + lVar21) = unaff_XMM10_Qb;
  *(undefined8 *)(&stack0x00001c10 + lVar21) = unaff_XMM9_Qa;
  *(undefined8 *)(&stack0x00001c18 + lVar21) = unaff_XMM9_Qb;
  *(undefined8 *)(&stack0x00001c00 + lVar21) = uStack_58;
  *(undefined8 *)(&stack0x00001c08 + lVar21) = uStack_50;
  *(undefined8 *)(&stack0x00001bf0 + lVar21) = uStack_68;
  *(undefined8 *)(&stack0x00001bf8 + lVar21) = uStack_60;
  *(undefined8 *)(&stack0x00001be0 + lVar21) = uStack_78;
  *(undefined8 *)(&stack0x00001be8 + lVar21) = uStack_70;
  *(undefined4 *)(&stack0x00001bd8 + lVar21) = 0;
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    *(undefined **)((longlong)&puStack_48 + lVar21) = &UNK_144e69584;
    func_0x0001455db994();
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      *(undefined **)((longlong)&puStack_48 + lVar21) = &UNK_144e695a9;
      func_0x0001455db994();
    }
  }
  uVar11 = _DAT_1488cd9d8;
  uVar19 = *_DAT_1488cd9c8;
  uVar18 = (ulonglong)uVar19;
  uVar4 = *_DAT_1488cd9d0;
  if (uVar19 == uVar4) goto code_r0x000144e694e7;
  auVar45 = ZEXT1664(auRam00000001488cd970);
  auVar46 = ZEXT1664(auRam00000001488cd980);
  auVar47 = ZEXT1664(auRam00000001488cd990);
  *(uint **)(&stack0xfffffffffffffff8 + lVar21) = _DAT_1488cd9f8;
  uVar5 = *_DAT_1488cd9f8;
  uVar14 = _DAT_1488cda00[2];
  uVar37 = _DAT_1488cda00[3];
  uVar39 = _DAT_1488cda00[4];
  uVar41 = _DAT_1488cda00[5];
  *(undefined8 **)(&stack0xffffffffffffffe8 + lVar21) = _DAT_1488cda00;
  *(undefined8 *)(&stack0x00000040 + lVar21) = uRam00000001488cd920;
  *(undefined8 *)(&stack0x00000048 + lVar21) = uRam00000001488cd928;
  *(ulonglong *)(&stack0xffffffffffffffe0 + lVar21) = (ulonglong)uVar5 * 2 + _DAT_1488cd9f0;
  *(undefined8 *)(&stack0x00000030 + lVar21) = uRam00000001488cd930;
  *(undefined8 *)(&stack0x00000038 + lVar21) = uRam00000001488cd938;
  *(undefined8 **)(&stack0xfffffffffffffff0 + lVar21) = _DAT_1488cda08;
  *(undefined8 *)((longlong)&uStackX_20 + lVar21) = uRam00000001488cd940;
  *(undefined8 *)(&stack0x00000028 + lVar21) = uRam00000001488cd948;
  *(undefined8 *)((longlong)&uStackX_10 + lVar21) = uRam00000001488cd950;
  *(undefined8 *)((longlong)afStackX_18 + lVar21) = uRam00000001488cd958;
  *(undefined8 *)(&stack0x00000000 + lVar21) = uRam00000001488cd960;
  *(undefined8 *)((longlong)(&stack0x00000000 + lVar21) + 8) = uRam00000001488cd968;
  uVar8 = _DAT_1488cda00[1];
  uVar9 = _DAT_1488cda00[2];
  uVar10 = _DAT_1488cda00[3];
  *(undefined8 *)(&stack0x00000090 + lVar21) = *_DAT_1488cda00;
  *(undefined8 *)(&stack0x00000098 + lVar21) = uVar8;
  *(undefined8 *)(&stack0x000000a0 + lVar21) = uVar9;
  *(undefined8 *)(&stack0x000000a8 + lVar21) = uVar10;
  *(undefined8 *)(&stack0x000000a0 + lVar21) = uVar14;
  *(undefined8 *)(&stack0x000000a8 + lVar21) = uVar37;
  *(undefined8 *)(&stack0x000000b0 + lVar21) = uVar39;
  *(undefined8 *)(&stack0x000000b8 + lVar21) = uVar41;
  uVar14 = _DAT_1488cda08[1];
  uVar37 = _DAT_1488cda08[2];
  uVar39 = _DAT_1488cda08[3];
  auVar2 = *(undefined1 (*) [32])(_DAT_1488cda08 + 2);
  *(undefined8 *)(&stack0x00000060 + lVar21) = *_DAT_1488cda08;
  *(undefined8 *)(&stack0x00000068 + lVar21) = uVar14;
  *(undefined8 *)(&stack0x00000070 + lVar21) = uVar37;
  *(undefined8 *)(&stack0x00000078 + lVar21) = uVar39;
  *(undefined1 (*) [32])(&stack0x00000070 + lVar21) = auVar2;
  if (uVar19 < uVar4) {
    auVar7._8_8_ = uRam00000001488cd9b8;
    auVar7._0_8_ = _DAT_1488cd9b0;
    auVar38 = ZEXT1664(auVar7);
    uVar20 = (ulonglong)_DAT_1488cd9d8;
    auVar40 = ZEXT1664(CONCAT88(uRam00000001488cd9e8,_DAT_1488cd9e0));
    auVar36 = ZEXT464((uint)_DAT_1488cd9c0);
    iVar25 = 0;
    auVar43 = ZEXT1264(ZEXT812(0));
    auVar7 = vshufps_avx(auVar7,auVar7,0xff);
    auVar42 = ZEXT1664(auVar7);
    do {
      uVar6 = *(undefined4 *)(lVar17 + 0x84 + uVar18 * 0x3d0);
      auVar36 = ZEXT1664(auVar36._0_16_);
      auVar38 = ZEXT1664(auVar38._0_16_);
      auVar40 = ZEXT1664(auVar40._0_16_);
      auVar42 = ZEXT1664(auVar42._0_16_);
      auVar43 = ZEXT1664(auVar43._0_16_);
      auVar45 = ZEXT1664(auVar45._0_16_);
      auVar46 = ZEXT1664(auVar46._0_16_);
      auVar47 = ZEXT1664(auVar47._0_16_);
      *(undefined **)((longlong)&puStack_48 + lVar21) = &UNK_144e6916c;
      cVar12 = func_0x000144ea5d30(uVar6);
      if (cVar12 != '\0') {
        pauVar26 = (undefined1 (*) [16])(uVar18 * 0x3d0 + lVar17);
        auVar7 = *pauVar26;
        auVar44 = ZEXT1664(auVar7);
        auVar29._0_4_ = auVar7._0_4_ * auVar38._0_4_;
        auVar29._4_4_ = auVar7._4_4_ * auVar38._4_4_;
        auVar29._8_4_ = auVar7._8_4_ * auVar38._8_4_;
        auVar29._12_4_ = auVar7._12_4_ * auVar38._12_4_;
        auVar7 = vblendps_avx(auVar29,auVar43._0_16_,8);
        auVar7 = vhaddps_avx(auVar7,auVar7);
        auVar7 = vhaddps_avx(auVar7,auVar7);
        fVar31 = auVar42._0_4_ + auVar7._0_4_;
        *(undefined **)((longlong)&puStack_48 + lVar21) = &UNK_144e69196;
        auVar30._0_8_ = FUN_144e695b0(pauVar26);
        auVar30._8_56_ = extraout_var;
        fVar28 = (float)auVar30._0_8_;
        if (fVar28 < fVar31) {
          auVar33 = auVar44._0_16_;
          auVar7 = vshufps_avx(auVar33,auVar33,0xaa);
          auVar29 = vshufps_avx(auVar33,auVar33,0x55);
          fVar31 = auVar44._0_4_;
          auVar32._4_4_ = fVar28;
          auVar32._0_4_ = fVar28;
          auVar32._8_4_ = fVar28;
          auVar32._12_4_ = fVar28;
          auVar34._0_4_ =
               fVar31 * *(float *)(&stack0x00000000 + lVar21) +
               auVar45._0_4_ * auVar29._0_4_ + auVar46._0_4_ * auVar7._0_4_ + auVar47._0_4_;
          auVar34._4_4_ =
               fVar31 * *(float *)(&stack0x00000004 + lVar21) +
               auVar45._4_4_ * auVar29._4_4_ + auVar46._4_4_ * auVar7._4_4_ + auVar47._4_4_;
          auVar34._8_4_ =
               fVar31 * *(float *)((longlong)afStackX_8 + lVar21) +
               auVar45._8_4_ * auVar29._8_4_ + auVar46._8_4_ * auVar7._8_4_ + auVar47._8_4_;
          auVar34._12_4_ =
               fVar31 * *(float *)((longlong)afStackX_8 + lVar21 + 4) +
               auVar45._12_4_ * auVar29._12_4_ + auVar46._12_4_ * auVar7._12_4_ + auVar47._12_4_;
          auVar35._0_4_ =
               fVar31 * *(float *)(&stack0x00000040 + lVar21) +
               auVar29._0_4_ * *(float *)(&stack0x00000030 + lVar21) +
               auVar7._0_4_ * *(float *)((longlong)&uStackX_20 + lVar21) +
               *(float *)((longlong)&uStackX_10 + lVar21);
          auVar35._4_4_ =
               fVar31 * *(float *)(&stack0x00000044 + lVar21) +
               auVar29._4_4_ * *(float *)(&stack0x00000034 + lVar21) +
               auVar7._4_4_ * *(float *)((longlong)&uStackX_20 + lVar21 + 4) +
               *(float *)((longlong)afStackX_18 + lVar21 + -4);
          auVar35._8_4_ =
               fVar31 * *(float *)(&stack0x00000048 + lVar21) +
               auVar29._8_4_ * *(float *)(&stack0x00000038 + lVar21) +
               auVar7._8_4_ * *(float *)(&stack0x00000028 + lVar21) +
               *(float *)((longlong)afStackX_18 + lVar21);
          auVar35._12_4_ =
               fVar31 * *(float *)(&stack0x0000004c + lVar21) +
               auVar29._12_4_ * *(float *)(&stack0x0000003c + lVar21) +
               auVar7._12_4_ * *(float *)(&stack0x0000002c + lVar21) +
               *(float *)((longlong)afStackX_18 + lVar21 + 4);
          auVar7 = vmaxps_avx(auVar35,auVar34);
          auVar7 = vcmpps_avx(auVar7,auVar32,6);
          if ((((((SUB161(auVar7 >> 0x1f,0) & 1) == 0 && (SUB161(auVar7 >> 0x3f,0) & 1) == 0) &&
                (SUB161(auVar7 >> 0x5f,0) & 1) == 0) && -1 < auVar7[0xf]) &&
              ((*(uint *)(pauVar26[7] + 0xc) & 0x20000) == 0)) && ((pauVar26[8][1] & 8) == 0)) {
            if (((*(uint *)(pauVar26[7] + 0xc) & 0x180) != 0 && *(longlong *)pauVar26[0x34] != 0) &&
                uVar11 != 0) {
              lVar13 = 0;
              do {
                if (*(longlong *)(lVar13 + 0x148872280) == *(longlong *)pauVar26[0x34]) {
                  *(uint *)(&stack0x00000060 + (uVar18 >> 5 & 0x7ffffff) * 4 + lVar21) =
                       *(uint *)(&stack0x00000060 + (uVar18 >> 5 & 0x7ffffff) * 4 + lVar21) |
                       1 << ((uint)uVar18 & 0x1f);
                  break;
                }
                lVar13 = lVar13 + 0x3d0;
              } while (uVar20 * 0x3d0 - lVar13 != 0);
            }
            auVar7 = vsubps_avx(auVar40._0_16_,auVar33);
            auVar44 = ZEXT464((uint)_DAT_14615d770);
            auVar33._0_4_ = auVar7._0_4_ * auVar7._0_4_;
            auVar33._4_4_ = auVar7._4_4_ * auVar7._4_4_;
            auVar33._8_4_ = auVar7._8_4_ * auVar7._8_4_;
            auVar33._12_4_ = auVar7._12_4_ * auVar7._12_4_;
            auVar7 = vblendps_avx(auVar33,auVar43._0_16_,8);
            auVar7 = vhaddps_avx(auVar7,auVar7);
            auVar29 = vhaddps_avx(auVar7,auVar7);
            auVar7 = vrsqrtss_avx(auVar29,auVar29);
            fVar31 = auVar7._0_4_;
            auVar7 = vcmpss_avx(ZEXT416(_DAT_146159bfc),auVar29,2);
            fVar31 = (float)(auVar7._0_4_ &
                            (uint)(((fVar31 * fVar31 * auVar29._0_4_ * _DAT_145fc6f08 +
                                    _DAT_145fc6edc) * fVar31 + fVar31) * auVar29._0_4_));
            if (_DAT_14615b49c < fVar31) {
              auVar44 = ZEXT1664(CONCAT124(auVar30._4_12_,fVar28 / fVar31));
            }
            *(undefined1 (*) [16])(&stack0x00000050 + lVar21) = auVar40._0_16_;
            *(undefined **)((longlong)&puStack_48 + lVar21) = &UNK_144e692c8;
            cVar12 = FUN_144e695f0(pauVar26,&stack0x00000050 + lVar21,auVar36._0_8_,_DAT_145fc6f48);
            fVar31 = auVar44._0_4_;
            if (cVar12 != '\0') {
              fVar31 = fVar31 + _DAT_14615d770;
              *(uint *)(&stack0x00000090 + (uVar18 >> 5 & 0x7ffffff) * 4 + lVar21) =
                   *(uint *)(&stack0x00000090 + (uVar18 >> 5 & 0x7ffffff) * 4 + lVar21) |
                   1 << ((uint)uVar18 & 0x1f);
            }
            uVar6 = *(undefined4 *)(pauVar26[0x34] + 8);
            lVar13 = (longlong)iVar25;
            iVar25 = iVar25 + 1;
            lVar13 = lVar13 * 0x10;
            *(short *)(&stack0x000003d8 + lVar13 + lVar21) = (short)uVar18;
            *(float *)(&stack0x000003e0 + lVar13 + lVar21) = fVar31;
            *(undefined4 *)(&stack0x000003e4 + lVar13 + lVar21) = uVar6;
          }
        }
      }
      uVar18 = uVar18 + 1;
    } while (uVar18 != uVar4);
    uVar19 = 0;
    *(int *)(&stack0x00001bd8 + lVar21) = iVar25;
    if (iVar25 < 1) goto code_r0x000144e69566;
    *(undefined **)((longlong)&puStack_48 + lVar21) = &UNK_144e6936a;
    qsort(&stack0x000003d8 + lVar21,iVar25,0x10,&UNK_1455c0020);
    uVar4 = *(uint *)(&stack0x00001bd8 + lVar21);
    lVar17 = (longlong)(int)uVar4;
    piVar22 = *(int **)(&stack0xfffffffffffffff8 + lVar21);
    puVar16 = *(undefined8 **)(&stack0xfffffffffffffff0 + lVar21);
    puVar27 = *(undefined8 **)(&stack0xffffffffffffffe8 + lVar21);
    uVar14 = *(undefined8 *)(&stack0xffffffffffffffe0 + lVar21);
    if (0 < lVar17) {
      if (uVar4 < 0x11) {
        uVar18 = 0;
        uVar20 = 0;
      }
      else {
        uVar18 = 0x10;
        if ((uVar4 & 0xf) != 0) {
          uVar18 = (ulonglong)(uVar4 & 0xf);
        }
        uVar18 = lVar17 - uVar18;
        puVar15 = (ushort *)(&stack0x000004c8 + lVar21);
        uVar20 = 0;
        do {
          uVar23 = uVar20 + 0x10;
          auVar7 = vpinsrw_avx(ZEXT416(*(uint *)(puVar15 + -0x78)),(uint)puVar15[-0x70],1);
          auVar29 = vpinsrw_avx(ZEXT416(*(uint *)(puVar15 + -0x38)),(uint)puVar15[-0x30],1);
          auVar7 = vpinsrw_avx(auVar7,(uint)puVar15[-0x68],2);
          auVar29 = vpinsrw_avx(auVar29,(uint)puVar15[-0x28],2);
          auVar7 = vpinsrw_avx(auVar7,(uint)puVar15[-0x60],3);
          auVar29 = vpinsrw_avx(auVar29,(uint)puVar15[-0x20],3);
          auVar7 = vpinsrw_avx(auVar7,(uint)puVar15[-0x58],4);
          auVar29 = vpinsrw_avx(auVar29,(uint)puVar15[-0x18],4);
          auVar7 = vpinsrw_avx(auVar7,(uint)puVar15[-0x50],5);
          auVar29 = vpinsrw_avx(auVar29,(uint)puVar15[-0x10],5);
          auVar7 = vpinsrw_avx(auVar7,(uint)puVar15[-0x48],6);
          auVar29 = vpinsrw_avx(auVar29,(uint)puVar15[-8],6);
          auVar7 = vpinsrw_avx(auVar7,(uint)puVar15[-0x40],7);
          auVar29 = vpinsrw_avx(auVar29,(uint)*puVar15,7);
          puVar15 = puVar15 + 0x80;
          *(undefined1 (*) [16])(&stack0x000000e0 + (uVar20 & 0xffffffff) * 2 + lVar21) = auVar29;
          *(undefined1 (*) [16])(&stack0x000000d0 + (uVar20 & 0xffffffff) * 2 + lVar21) = auVar7;
          uVar20 = uVar23;
        } while (uVar18 != uVar23);
        uVar20 = uVar18 & 0xffffffff;
      }
      lVar17 = lVar17 - uVar18;
      puVar24 = (undefined2 *)(&stack0x000003d8 + uVar18 * 0x10 + lVar21);
      do {
        uVar3 = *puVar24;
        uVar19 = (int)uVar20 + 1;
        puVar24 = puVar24 + 8;
        lVar17 = lVar17 + -1;
        *(undefined2 *)(&stack0x000000d0 + uVar20 * 2 + lVar21) = uVar3;
        uVar20 = (ulonglong)uVar19;
      } while (lVar17 != 0);
    }
  }
  else {
code_r0x000144e69566:
    uVar19 = 0;
    piVar22 = *(int **)(&stack0xfffffffffffffff8 + lVar21);
    puVar16 = *(undefined8 **)(&stack0xfffffffffffffff0 + lVar21);
    puVar27 = *(undefined8 **)(&stack0xffffffffffffffe8 + lVar21);
    uVar14 = *(undefined8 *)(&stack0xffffffffffffffe0 + lVar21);
  }
  *(undefined **)((longlong)&puStack_48 + lVar21) = &UNK_144e6949c;
  func_0x000145f40560(uVar14,&stack0x000000d0 + lVar21,(ulonglong)uVar19 * 2);
  uVar14 = *(undefined8 *)(&stack0x00000090 + lVar21);
  uVar37 = *(undefined8 *)(&stack0x00000098 + lVar21);
  uVar39 = *(undefined8 *)(&stack0x000000a0 + lVar21);
  uVar41 = *(undefined8 *)(&stack0x000000a8 + lVar21);
  uVar8 = *(undefined8 *)(&stack0x000000a8 + lVar21);
  uVar9 = *(undefined8 *)(&stack0x000000b0 + lVar21);
  uVar10 = *(undefined8 *)(&stack0x000000b8 + lVar21);
  puVar27[2] = *(undefined8 *)(&stack0x000000a0 + lVar21);
  puVar27[3] = uVar8;
  puVar27[4] = uVar9;
  puVar27[5] = uVar10;
  *puVar27 = uVar14;
  puVar27[1] = uVar37;
  puVar27[2] = uVar39;
  puVar27[3] = uVar41;
  uVar14 = *(undefined8 *)(&stack0x00000060 + lVar21);
  uVar37 = *(undefined8 *)(&stack0x00000068 + lVar21);
  uVar39 = *(undefined8 *)(&stack0x00000070 + lVar21);
  uVar41 = *(undefined8 *)(&stack0x00000078 + lVar21);
  uVar8 = *(undefined8 *)(&stack0x00000078 + lVar21);
  uVar9 = *(undefined8 *)(&stack0x00000080 + lVar21);
  uVar10 = *(undefined8 *)(&stack0x00000088 + lVar21);
  puVar16[2] = *(undefined8 *)(&stack0x00000070 + lVar21);
  puVar16[3] = uVar8;
  puVar16[4] = uVar9;
  puVar16[5] = uVar10;
  *puVar16 = uVar14;
  puVar16[1] = uVar37;
  puVar16[2] = uVar39;
  puVar16[3] = uVar41;
  LOCK();
  *piVar22 = *piVar22 + uVar19;
  UNLOCK();
  uVar19 = *_DAT_1488cd9d0;
code_r0x000144e694e7:
  *_DAT_1488cd9c8 = uVar19;
  return;
}

