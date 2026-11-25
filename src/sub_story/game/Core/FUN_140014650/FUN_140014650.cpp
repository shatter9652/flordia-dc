// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140014650  size: 1473 bytes
// Name:    FUN_140014650
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e3b920, FUN_145647140, FUN_1451ce550, FUN_144dd6e40, FUN_144d9e2f0, FUN_14549f490, FUN_1454837f0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140014650(longlong *param_1,undefined8 param_2,ulonglong *param_3,undefined1 *param_4)

{
  float *pfVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  code *pcVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  char cVar8;
  byte bVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  undefined8 uVar13;
  longlong lVar14;
  undefined7 uVar16;
  ulonglong uVar15;
  longlong lVar17;
  ulonglong uVar18;
  longlong lVar19;
  int iVar20;
  bool bVar21;
  float fVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 extraout_var [56];
  undefined1 extraout_var_00 [56];
  undefined1 auVar27 [16];
  undefined1 in_ZMM1 [64];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined8 unaff_XMM6_Qa;
  undefined8 unaff_XMM6_Qb;
  undefined1 auVar32 [64];
  undefined1 auVar33 [64];
  undefined1 auVar34 [64];
  undefined8 unaff_XMM7_Qa;
  undefined8 unaff_XMM7_Qb;
  undefined1 auVar35 [64];
  float fVar36;
  undefined8 unaff_XMM8_Qa;
  undefined8 unaff_XMM8_Qb;
  undefined1 auVar37 [64];
  float fVar38;
  undefined8 unaff_XMM9_Qa;
  undefined8 unaff_XMM9_Qb;
  undefined1 auVar39 [16];
  float fVar41;
  undefined8 unaff_XMM10_Qa;
  undefined8 unaff_XMM10_Qb;
  float fVar42;
  undefined8 unaff_XMM11_Qa;
  undefined8 unaff_XMM11_Qb;
  float fStackX_14;
  longlong alStackX_18 [2];
  undefined8 uStack_48;
  undefined1 auVar40 [64];
  
  uStack_48 = 0x140014666;
  lVar12 = FUN_145647140();
  lVar12 = -lVar12;
  *(undefined8 *)(&stack0x000020b0 + lVar12) = unaff_XMM11_Qa;
  *(undefined8 *)(&stack0x000020b8 + lVar12) = unaff_XMM11_Qb;
  *(undefined8 *)(&stack0x000020a0 + lVar12) = unaff_XMM10_Qa;
  *(undefined8 *)(&stack0x000020a8 + lVar12) = unaff_XMM10_Qb;
  *(undefined8 *)(&stack0x00002090 + lVar12) = unaff_XMM9_Qa;
  *(undefined8 *)(&stack0x00002098 + lVar12) = unaff_XMM9_Qb;
  *(undefined8 *)(&stack0x00002080 + lVar12) = unaff_XMM8_Qa;
  *(undefined8 *)(&stack0x00002088 + lVar12) = unaff_XMM8_Qb;
  *(undefined8 *)(&stack0x00002070 + lVar12) = unaff_XMM7_Qa;
  *(undefined8 *)(&stack0x00002078 + lVar12) = unaff_XMM7_Qb;
  *(undefined8 *)(&stack0x00002060 + lVar12) = unaff_XMM6_Qa;
  *(undefined8 *)(&stack0x00002068 + lVar12) = unaff_XMM6_Qb;
  puVar3 = *(undefined4 **)(&stack0x00002130 + lVar12);
  auVar32 = ZEXT1664(in_ZMM1._0_16_);
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  *puVar3 = 0;
  *param_4 = 0;
  fVar38 = *(float *)(param_1 + 9);
  fVar22 = *(float *)(param_1 + 0xb) * in_ZMM1._0_4_ + fVar38;
  *(float *)((longlong)&fStackX_14 + lVar12) = fVar22;
  *(float *)((longlong)param_1 + 0x4c) = fVar38;
  *(undefined4 *)(param_1 + 9) = 0;
  fVar38 = *(float *)(param_1 + 7);
  if (*param_1 == 0) {
    cVar8 = '\x01';
    *(float *)(param_1 + 7) = fVar38 + fVar22;
    goto LAB_1400149b9;
  }
  lVar19 = param_1[6];
  lVar17 = param_1[5];
  pfVar1 = (float *)((longlong)&fStackX_14 + lVar12);
  *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x140014703;
  func_0x000145536ee0(lVar17,(int)lVar19,pfVar1,fVar38);
  auVar26 = auVar32._0_16_;
  auVar37 = ZEXT464((uint)*pfVar1);
  fVar22 = *pfVar1 + *(float *)(param_1 + 7);
  *(float *)(param_1 + 7) = fVar22;
  uVar16 = (undefined7)((ulonglong)pfVar1 >> 8);
  if (*(char *)((longlong)param_1 + 0x5c) == '\x01') {
    uVar15 = CONCAT71(uVar16,*(undefined1 *)((longlong)param_1 + 0x5d));
  }
  else if (*param_1 == 0) {
    uVar15 = 0;
  }
  else {
    uVar15 = CONCAT71(uVar16,*(undefined1 *)(*param_1 + 0x3c)) & 0xffffffffffffff01;
  }
  fVar41 = *(float *)(param_1 + 6);
  auVar40 = ZEXT464((uint)fVar41);
  auVar39 = ZEXT416((uint)fVar41);
  if ((fVar22 != fVar38) || (NAN(fVar22) || NAN(fVar38))) {
    fVar38 = 0.0;
    if (param_3[6] == 0 && param_3[4] == 0) {
LAB_140014761:
      auVar32 = ZEXT464((uint)fVar41);
      fVar41 = 0.0;
    }
    else {
      lVar17 = *(longlong *)(*param_1 + 0x40);
      if (_DAT_1498fb090 != -0x1bcc2883) {
        if ((*(uint *)(lVar17 + 0x1c) & 0x7fffffff) != 0) {
          lVar14 = 0;
          lVar19 = *(longlong *)(lVar17 + 0x20) + 0x20 + lVar17;
          if (*(longlong *)(lVar17 + 0x20) == 1) {
            lVar19 = lVar14;
          }
          do {
            if (*(int *)(lVar19 + 0x40 + lVar14) == _DAT_1498fb090) goto LAB_140014a59;
            lVar14 = lVar14 + 0x50;
          } while (((ulonglong)*(uint *)(lVar17 + 0x1c) & 0x7fffffff) * 0x50 != lVar14);
        }
        goto LAB_140014761;
      }
      if (*(char *)(lVar17 + 0x28) != '\x01') goto LAB_140014761;
LAB_140014a59:
      plVar2 = (longlong *)(&stack0x00000030 + lVar12);
      *plVar2 = lVar17;
      *(undefined8 *)(&stack0x00000038 + lVar12) = _DAT_14615def0;
      *(undefined8 *)(&stack0x00000040 + lVar12) = _UNK_14615def8;
      *(undefined8 *)(&stack0x00000048 + lVar12) = 0;
      *(float *)(&stack0x00000050 + lVar12) = fVar22 / fVar41;
      *(float *)(&stack0x00000054 + lVar12) = fVar22 / fVar41 + _DAT_145fc6f00;
      *(int *)(&stack0x00000058 + lVar12) = _DAT_1498fb090;
      *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x140014a9c;
      fVar38 = 0.0;
      FUN_144dd6e40(plVar2);
      auVar26 = auVar32._0_16_;
      lVar17 = *plVar2;
      fVar41 = 0.0;
      uVar10 = *(uint *)(lVar17 + 0x1c) & 0x7fffffff;
      iVar11 = *(int *)(&stack0x00000038 + lVar12);
      if (iVar11 < (int)uVar10 && *(int *)(&stack0x00000040 + lVar12) <= iVar11) {
        lVar19 = 0;
        iVar20 = 0x7fffffff;
        *(ulonglong **)((longlong)alStackX_18 + lVar12 + 8) = param_3 + 4;
        do {
          auVar26 = auVar32._0_16_;
          lVar14 = *(longlong *)(lVar17 + 0x20);
          if (lVar14 == 1) break;
          *(longlong *)((longlong)alStackX_18 + lVar12) = lVar19;
          if (lVar14 == -0x20 - lVar17) {
            lVar19 = *(longlong *)((longlong)alStackX_18 + lVar12);
            break;
          }
          lVar17 = ((longlong)(iVar11 + *(int *)(&stack0x0000003c + lVar12)) % (longlong)(int)uVar10
                   & 0xffffffffU) * 0x50 + lVar14 + lVar17 + 0x20;
          *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x140014b2b;
          uVar13 = FUN_144d9e2f0(lVar17,_DAT_1498fb098);
          *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x140014b38;
          func_0x000144debac0(&stack0x00000028 + lVar12,uVar13);
          *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x140014b47;
          iVar11 = FUN_144e3b920(*(undefined8 *)(&stack0x00000028 + lVar12),0x7fffffff);
          uVar13 = *(undefined8 *)((longlong)alStackX_18 + lVar12 + 8);
          pcVar4 = (code *)param_3[7];
          *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x140014b54;
          bVar9 = (*pcVar4)(uVar13,iVar11);
          bVar21 = (bVar9 & iVar11 < iVar20) != 0;
          if (bVar21) {
            iVar20 = iVar11;
          }
          lVar19 = *(longlong *)((longlong)alStackX_18 + lVar12);
          if (bVar21) {
            lVar19 = lVar17;
          }
          *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x140014b73;
          FUN_14549f490(&stack0x00000030 + lVar12);
          auVar26 = auVar32._0_16_;
          iVar11 = *(int *)(&stack0x00000038 + lVar12);
          if (iVar11 < *(int *)(&stack0x00000040 + lVar12)) break;
          lVar17 = *(longlong *)(&stack0x00000030 + lVar12);
          uVar10 = *(uint *)(lVar17 + 0x1c) & 0x7fffffff;
        } while (iVar11 < (int)uVar10);
        auVar32 = ZEXT1664(auVar40._0_16_);
        if (lVar19 != 0) {
          fVar41 = auVar40._0_4_ * *(float *)(lVar19 + 0x48);
          auVar32 = ZEXT464((uint)(auVar40._0_4_ * *(float *)(lVar19 + 0x4c)));
          uVar15 = CONCAT71((int7)(uVar15 >> 8),1);
        }
      }
      else {
        auVar32 = ZEXT1664(auVar40._0_16_);
      }
      fVar22 = *(float *)(param_1 + 7);
    }
    auVar39 = auVar40._0_16_;
    fVar36 = auVar37._0_4_;
    fVar42 = auVar32._0_4_;
    if (fVar36 <= fVar38) {
      if (fVar41 <= fVar22) goto LAB_1400147ff;
      auVar29 = vmaxss_avx(auVar37._0_16_,ZEXT416((uint)(fVar22 - fVar41)));
      fVar38 = auVar29._0_4_;
      if ((char)uVar15 == '\0') {
        auVar28._0_12_ = ZEXT812(0);
        auVar28._12_4_ = 0;
        *(float *)(param_1 + 7) = fVar41;
        auVar23 = vminss_avx(ZEXT416((uint)(fVar36 - fVar38)),auVar28);
        *(int *)((longlong)param_1 + 0x44) = auVar23._0_4_;
        *param_4 = 0.0 < *(float *)((longlong)param_1 + 0x3c);
        auVar23._0_4_ = fVar38 / *(float *)(param_1 + 0xb);
        auVar23._4_12_ = auVar29._4_12_;
        goto LAB_140014854;
      }
      auVar35 = ZEXT464((uint)(fVar42 - fVar41));
      uVar13 = CONCAT44(auVar29._4_4_ ^ _DAT_145fc6f10,(uint)fVar38 ^ _DAT_145fc6f10);
      auVar34 = ZEXT1664(CONCAT412(auVar29._12_4_ ^ _DAT_145fc6f10,
                                   CONCAT48(auVar29._8_4_ ^ _DAT_145fc6f10,uVar13)));
      *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x1400147de;
      auVar33._0_8_ = func_0x000145f40820(uVar13,fVar42 - fVar41);
      auVar39 = auVar40._0_16_;
      auVar33._8_56_ = extraout_var_00;
      auVar26 = vcmpss_avx(auVar34._0_16_,auVar35._0_16_,6);
      auVar26 = vblendvps_avx(auVar34._0_16_,auVar33._0_16_,auVar26);
      fVar41 = auVar32._0_4_ - auVar26._0_4_;
LAB_1400147ed:
      *(float *)(param_1 + 7) = fVar41;
      *(int *)((longlong)param_1 + 0x44) = auVar37._0_4_;
      *param_4 = 1;
      uVar15 = CONCAT71((int7)(uVar15 >> 8),1);
    }
    else if (fVar22 < fVar42) {
LAB_1400147ff:
      *(float *)((longlong)param_1 + 0x44) = fVar36;
    }
    else {
      auVar29 = vminss_avx(auVar37._0_16_,ZEXT416((uint)(fVar22 - fVar42)));
      auVar32 = ZEXT1664(auVar29);
      if ((char)uVar15 != '\0') {
        auVar33 = ZEXT464((uint)(fVar42 - fVar41));
        *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x14001479a;
        auVar34._0_8_ = func_0x000145f40820(auVar29._0_8_,fVar42 - fVar41);
        auVar39 = auVar40._0_16_;
        auVar34._8_56_ = extraout_var;
        auVar26 = vcmpss_avx(auVar32._0_16_,auVar33._0_16_,6);
        auVar26 = vblendvps_avx(auVar32._0_16_,auVar34._0_16_,auVar26);
        fVar41 = fVar41 + auVar26._0_4_;
        goto LAB_1400147ed;
      }
      auVar27._0_12_ = ZEXT812(0);
      auVar27._12_4_ = 0;
      *(float *)(param_1 + 7) = fVar42;
      auVar23 = vmaxss_avx(ZEXT416((uint)(fVar36 - auVar29._0_4_)),auVar27);
      *(int *)((longlong)param_1 + 0x44) = auVar23._0_4_;
      *param_4 = *(float *)((longlong)param_1 + 0x3c) < fVar42;
      auVar23._0_4_ = auVar29._0_4_ / *(float *)(param_1 + 0xb);
      auVar23._4_12_ = auVar29._4_12_;
LAB_140014854:
      auVar26 = vminss_avx(auVar23,auVar26);
      uVar15 = 0;
      *puVar3 = auVar26._0_4_;
    }
  }
  lVar17 = *param_1;
  cVar8 = '\x01';
  lVar19 = *(longlong *)(lVar17 + 0x40);
  if (((*(uint *)(lVar19 + 0x1c) & 0x7fffffff) != 0) &&
     (uVar18 = param_3[2] | *param_3, uVar18 != 0)) {
    fVar38 = auVar39._0_4_;
    auVar31._4_4_ = _DAT_145fc6f00;
    auVar31._0_4_ = _DAT_145fc6f00;
    auVar31._8_4_ = _DAT_145fc6f00;
    auVar31._12_4_ = _DAT_145fc6f00;
    auVar26 = vinsertps_avx(*(undefined1 (*) [16])(param_1 + 7),ZEXT416(*(uint *)(param_1 + 8)),0x10
                           );
    auVar29._8_8_ = _DAT_14615a740;
    auVar29._0_8_ = _DAT_14615a740;
    auVar26 = vcvtps2pd_avx(auVar26);
    auVar24._0_8_ = auVar26._0_8_ * (_DAT_14615a740 / (double)fVar38);
    auVar24._8_8_ = auVar26._8_8_ * (_DAT_14615a740 / (double)fVar38);
    auVar29 = vminpd_avx(auVar29,auVar24);
    auVar26 = vcmppd_avx(auVar24,ZEXT816(0) << 0x40,5);
    auVar25._0_8_ = auVar26._0_8_ & auVar29._0_8_;
    auVar25._8_8_ = auVar26._8_8_ & auVar29._8_8_;
    auVar26 = vcvtpd2ps_avx(auVar25);
    auVar29 = vmovshdup_avx(auVar26);
    auVar26 = vinsertps_avx(auVar37._0_16_,ZEXT416((uint)(auVar26._0_4_ - auVar29._0_4_)),0x10);
    auVar30._0_4_ = auVar26._0_4_ ^ _DAT_145fc6f10;
    auVar30._4_4_ = auVar26._4_4_ ^ _DAT_145fc6f10;
    auVar30._8_4_ = auVar26._8_4_ ^ _DAT_145fc6f10;
    auVar30._12_4_ = auVar26._12_4_ ^ _DAT_145fc6f10;
    auVar26 = vmaxps_avx(auVar30,auVar26);
    auVar26 = vcmpps_avx(auVar26,auVar31,1);
    auVar26 = vshufps_avx(auVar26,auVar26,0x50);
    uVar10 = vmovmskpd_avx(auVar26);
    if ((uVar10 & 1) != 0) {
      auVar37 = ZEXT464(*(uint *)(param_1 + 0xb));
    }
    auVar26._0_4_ = (uint)fVar38 ^ _DAT_145fc6f10;
    auVar26._4_4_ = auVar39._4_4_ ^ _DAT_145fc6f10;
    auVar26._8_4_ = auVar39._8_4_ ^ _DAT_145fc6f10;
    auVar26._12_4_ = auVar39._12_4_ ^ _DAT_145fc6f10;
    uVar5 = param_3[1];
    uVar6 = param_3[2];
    uVar7 = param_3[3];
    cVar8 = *(char *)((longlong)param_1 + 0x5e);
    bVar9 = *(byte *)((longlong)param_1 + 0x5f);
    auVar26 = vmaxss_avx(auVar26,auVar39);
    auVar26 = vcmpss_avx(auVar26,ZEXT416((uint)_DAT_145fc6f00),1);
    *(ulonglong *)(&stack0x00000030 + lVar12) = *param_3;
    *(ulonglong *)(&stack0x00000038 + lVar12) = uVar5;
    *(ulonglong *)(&stack0x00000040 + lVar12) = uVar6;
    *(ulonglong *)(&stack0x00000048 + lVar12) = uVar7;
    *(undefined4 *)(&stack0x00002050 + lVar12) = 0;
    uVar10 = ~auVar26._0_4_ & (uint)fVar38;
    if ((cVar8 == '\0') && ((bVar9 & 1) == 0)) {
      *(longlong *)(&stack0xfffffffffffffff8 + lVar12) = lVar17;
      *(uint *)(&stack0xffffffffffffffe8 + lVar12) = uVar10;
      *(undefined4 *)(&stack0xfffffffffffffff0 + lVar12) = 0x3f800000;
      *(undefined1 **)((longlong)alStackX_18 + lVar12 + -0x18) = &stack0x00000030 + lVar12;
      (&stack0xffffffffffffffe0)[lVar12] = 0.0 <= auVar37._0_4_;
      *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x140014982;
      cVar8 = FUN_1451ce550(lVar19,lVar17,uVar18,uVar15 & 0xffffffff);
    }
    else {
      *(longlong *)(&stack0xfffffffffffffff8 + lVar12) = lVar17;
      *(uint *)(&stack0xffffffffffffffe8 + lVar12) = uVar10;
      *(undefined4 *)(&stack0xfffffffffffffff0 + lVar12) = 0x3f800000;
      *(undefined1 **)((longlong)alStackX_18 + lVar12 + -0x18) = &stack0x00000030 + lVar12;
      (&stack0xffffffffffffffe0)[lVar12] = 0.0 <= auVar37._0_4_;
      *(undefined8 *)((longlong)&uStack_48 + lVar12) = 0x1400149b9;
      cVar8 = FUN_1454837f0(lVar19,lVar17,uVar18,uVar15 & 0xffffffff);
    }
  }
LAB_1400149b9:
  *(float *)((longlong)param_1 + 0x44) =
       *(float *)(param_1 + 10) + *(float *)((longlong)param_1 + 0x44);
  *(float *)((longlong)param_1 + 0x54) = *(float *)(param_1 + 10);
  *(undefined4 *)(param_1 + 10) = 0;
  *(int *)((longlong)param_1 + 0x3c) = (int)param_1[7];
  if (cVar8 != '\0') {
    *(int *)(param_1 + 8) = (int)param_1[7];
  }
  *(undefined2 *)((longlong)param_1 + 0x5e) = 0;
  return;
}

