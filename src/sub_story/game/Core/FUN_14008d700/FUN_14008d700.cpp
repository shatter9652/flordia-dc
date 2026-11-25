// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14008d700  size: 1074 bytes
// Name:    FUN_14008d700
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_14008d700(longlong *param_1,uint param_2,uint param_3)

{
  undefined1 (*pauVar1) [12];
  undefined1 (*pauVar2) [12];
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  ulonglong uVar17;
  ushort uVar18;
  uint uVar19;
  ulonglong uVar20;
  uint uVar21;
  ushort uVar22;
  bool bVar23;
  bool bVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [64];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  ushort auStack_dc [2];
  uint auStack_d8 [2];
  float afStack_d0 [2];
  ushort *apuStack_c8 [2];
  longlong alStack_b8 [2];
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  float fStack_9c;
  longlong lStack_98;
  undefined8 uStack_88;
  undefined4 uStack_80;
  float fStack_7c;
  
  auStack_d8[0] = 0;
  auStack_d8[1] = 0;
  auVar28._0_12_ = ZEXT812(0);
  auVar28._12_4_ = 0;
  auVar27 = ZEXT1264(ZEXT812(0));
  auStack_dc[0] = (ushort)(param_2 >> 0x10);
  auStack_dc[1] = (ushort)(param_3 >> 0x10);
  lVar4 = *param_1;
  uVar17 = (ulonglong)((param_2 & 0xffff) * 0x50);
  apuStack_c8[0] = (ushort *)(lVar4 + uVar17);
  apuStack_c8[1] = (ushort *)((ulonglong)((param_3 & 0xffff) * 0x50) + lVar4);
  lVar5 = param_1[2];
  uVar19 = 0;
  auVar14 = vsubps_avx(*(undefined1 (*) [16])
                        (lVar5 + (ulonglong)((*(ushort *)(lVar4 + 4 + uVar17) & 0x3fff) << 4)),
                       *(undefined1 (*) [16])
                        (lVar5 + (ulonglong)((*(ushort *)(lVar4 + uVar17) & 0x3fff) << 4)));
  uVar3 = *(uint *)(param_1 + 1);
  auVar14 = vblendps_avx(auVar14,auVar28,4);
  fVar6 = auVar14._0_4_;
  auVar25._0_4_ = fVar6 * fVar6;
  fVar8 = auVar14._4_4_;
  auVar25._4_4_ = fVar8 * fVar8;
  fVar10 = auVar14._8_4_;
  auVar25._8_4_ = fVar10 * fVar10;
  fVar12 = auVar14._12_4_;
  auVar25._12_4_ = fVar12 * fVar12;
  auVar14 = vblendps_avx(auVar25,auVar28,8);
  auVar14 = vhaddps_avx(auVar14,auVar14);
  auVar14 = vhaddps_avx(auVar14,auVar14);
  auVar25 = vrsqrtps_avx(auVar14);
  fVar7 = auVar25._0_4_;
  fVar9 = auVar25._4_4_;
  fVar11 = auVar25._8_4_;
  fVar13 = auVar25._12_4_;
  uVar21 = param_2;
  do {
    auVar26 = auVar27._0_16_;
    uVar18 = (ushort)uVar21;
    uVar22 = (ushort)uVar3;
    auVar25 = ZEXT416(_DAT_146159bfc);
    if (uVar22 <= uVar18) break;
    uVar17 = (ulonglong)((uVar21 & 0xffff) * 0x50);
    uVar21 = (uint)*(ushort *)(lVar4 + 0x4a + uVar17);
    bVar23 = uVar19 < 0xf;
    uVar19 = uVar19 + 1;
    auVar26 = vsubps_avx(*(undefined1 (*) [16])
                          (lVar5 + (ulonglong)((*(ushort *)(lVar4 + 4 + uVar17) & 0x3fff) << 4)),
                         *(undefined1 (*) [16])
                          (lVar5 + (ulonglong)((*(ushort *)(lVar4 + uVar17) & 0x3fff) << 4)));
    auVar29._0_4_ = auVar26._0_4_ * auVar26._0_4_;
    auVar29._4_4_ = auVar26._4_4_ * auVar26._4_4_;
    auVar29._8_4_ = auVar26._8_4_ * auVar26._8_4_;
    auVar29._12_4_ = auVar26._12_4_ * auVar26._12_4_;
    auVar26 = vblendps_avx(auVar29,auVar28,8);
    auVar26 = vhaddps_avx(auVar26,auVar26);
    auVar29 = vhaddps_avx(auVar26,auVar26);
    auVar26 = vrsqrtss_avx(auVar29,auVar29);
    fVar31 = auVar26._0_4_;
    auVar26 = vcmpss_avx(auVar25,auVar29,2);
    fVar31 = (float)(auVar26._0_4_ &
                    (uint)(((_DAT_145fc6f08 * fVar31 * fVar31 * auVar29._0_4_ + _DAT_145fc6edc) *
                            fVar31 + fVar31) * auVar29._0_4_)) + auVar27._0_4_;
    auVar27 = ZEXT464((uint)fVar31);
    auVar26 = ZEXT416((uint)fVar31);
  } while (uVar18 != auStack_dc[0] && bVar23);
  auVar27 = ZEXT464(0) << 0x20;
  uVar19 = 0;
  auVar30._0_12_ = ZEXT812(0);
  auVar30._12_4_ = 0;
  afStack_d0[0] = auVar26._0_4_;
  do {
    auVar28 = auVar27._0_16_;
    uVar18 = (ushort)param_3;
    if (uVar22 <= uVar18) break;
    uVar17 = (ulonglong)((param_3 & 0xffff) * 0x50);
    param_3 = (uint)*(ushort *)(lVar4 + 0x4a + uVar17);
    bVar23 = uVar19 < 0xf;
    uVar19 = uVar19 + 1;
    auVar28 = vsubps_avx(*(undefined1 (*) [16])
                          (lVar5 + (ulonglong)((*(ushort *)(lVar4 + 4 + uVar17) & 0x3fff) << 4)),
                         *(undefined1 (*) [16])
                          (lVar5 + (ulonglong)((*(ushort *)(lVar4 + uVar17) & 0x3fff) << 4)));
    auVar32._0_4_ = auVar28._0_4_ * auVar28._0_4_;
    auVar32._4_4_ = auVar28._4_4_ * auVar28._4_4_;
    auVar32._8_4_ = auVar28._8_4_ * auVar28._8_4_;
    auVar32._12_4_ = auVar28._12_4_ * auVar28._12_4_;
    auVar28 = vblendps_avx(auVar32,auVar30,8);
    auVar28 = vhaddps_avx(auVar28,auVar28);
    auVar29 = vhaddps_avx(auVar28,auVar28);
    auVar28 = vrsqrtss_avx(auVar29,auVar29);
    fVar31 = auVar28._0_4_;
    auVar28 = vcmpss_avx(auVar25,auVar29,2);
    fVar31 = (float)((uint)(((_DAT_145fc6f08 * fVar31 * fVar31 * auVar29._0_4_ + _DAT_145fc6edc) *
                             fVar31 + fVar31) * auVar29._0_4_) & auVar28._0_4_) + auVar27._0_4_;
    auVar27 = ZEXT464((uint)fVar31);
    auVar28 = ZEXT416((uint)fVar31);
  } while (uVar18 != auStack_dc[1] && bVar23);
  afStack_d0[1] = auVar28._0_4_;
  auVar29 = vcmpss_avx(auVar26,auVar28,1);
  auVar29 = vblendvps_avx(ZEXT416((uint)(afStack_d0[0] - afStack_d0[1])),
                          ZEXT416((uint)(afStack_d0[1] - afStack_d0[0])),auVar29);
  auVar28 = vminss_avx(auVar26,auVar28);
  if (auVar29._0_4_ <= auVar28._0_4_) {
    uVar21 = 0;
    auVar26._0_12_ = ZEXT812(0);
    auVar26._12_4_ = 0;
    uVar19 = 0;
    do {
      if (((uVar3 & 0xffff) <= (param_2 & 0xffff)) || (0x1f < uVar21)) break;
      uVar21 = uVar21 + 1;
      apuStack_c8[uVar19] = (ushort *)((ulonglong)((param_2 & 0xffff) * 0x50) + lVar4);
      uVar17 = (ulonglong)((*apuStack_c8[0] & 0x3fff) << 4);
      alStack_b8[0] = lVar5 + uVar17;
      pauVar1 = (undefined1 (*) [12])(lVar5 + (ulonglong)((apuStack_c8[0][2] & 0x3fff) << 4));
      uStack_a8 = *(undefined8 *)*pauVar1;
      uStack_a0 = (undefined4)*(undefined8 *)(*pauVar1 + 8);
      fStack_9c = (float)((ulonglong)*(undefined8 *)(*pauVar1 + 8) >> 0x20);
      uVar20 = (ulonglong)((*apuStack_c8[1] & 0x3fff) << 4);
      lStack_98 = lVar5 + uVar20;
      pauVar2 = (undefined1 (*) [12])(lVar5 + (ulonglong)((apuStack_c8[1][2] & 0x3fff) << 4));
      uStack_88 = *(undefined8 *)*pauVar2;
      uStack_80 = (undefined4)*(undefined8 *)(*pauVar2 + 8);
      fStack_7c = (float)((ulonglong)*(undefined8 *)(*pauVar2 + 8) >> 0x20);
      auVar15._12_4_ = fStack_9c;
      auVar15._0_12_ = *pauVar1;
      auVar16._12_4_ = fStack_7c;
      auVar16._0_12_ = *pauVar2;
      auVar28 = vsubps_avx(auVar15,auVar16);
      auVar33._0_4_ =
           auVar28._0_4_ *
           ((fVar7 * fVar7 * auVar14._0_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar7 + fVar7) *
           fVar6;
      auVar33._4_4_ =
           auVar28._4_4_ *
           ((fVar9 * fVar9 * auVar14._4_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar9 + fVar9) *
           fVar8;
      auVar33._8_4_ =
           auVar28._8_4_ *
           ((fVar11 * fVar11 * auVar14._8_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar11 + fVar11) *
           fVar10;
      auVar33._12_4_ =
           auVar28._12_4_ *
           ((fVar13 * fVar13 * auVar14._12_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar13 + fVar13)
           * fVar12;
      auVar28 = vhaddps_avx(auVar33,auVar33);
      auStack_d8
      [fStack_9c + *(float *)(lVar5 + 0xc + uVar17) < fStack_7c + *(float *)(lVar5 + 0xc + uVar20)]
           = auStack_d8
             [fStack_9c + *(float *)(lVar5 + 0xc + uVar17) <
              fStack_7c + *(float *)(lVar5 + 0xc + uVar20)] + 1;
      auVar28 = vcmpss_avx(auVar28,auVar26,2);
      uVar19 = (int)(longlong)(float)(~auVar28._0_4_ & _DAT_145fc6ed8) + uVar19 & 1;
      uVar18 = apuStack_c8[uVar19][0x25];
      param_2 = (uint)uVar18;
      auVar28 = vsubps_avx(**(undefined1 (**) [16])((longlong)alStack_b8 + (ulonglong)(uVar19 << 5))
                           ,*(undefined1 (*) [16])((longlong)&uStack_a8 + (ulonglong)(uVar19 << 5)))
      ;
      auVar34._0_4_ = auVar28._0_4_ * auVar28._0_4_;
      auVar34._4_4_ = auVar28._4_4_ * auVar28._4_4_;
      auVar34._8_4_ = auVar28._8_4_ * auVar28._8_4_;
      auVar34._12_4_ = auVar28._12_4_ * auVar28._12_4_;
      auVar28 = vblendps_avx(auVar34,ZEXT816(0) << 0x20,8);
      auVar28 = vhaddps_avx(auVar28,auVar28);
      auVar29 = vhaddps_avx(auVar28,auVar28);
      auVar28 = vrsqrtss_avx(auVar29,auVar29);
      fVar31 = auVar28._0_4_;
      auVar28 = vcmpss_avx(auVar25,auVar29,2);
      afStack_d0[uVar19] =
           (float)((uint)(((_DAT_145fc6f08 * fVar31 * fVar31 * auVar29._0_4_ + _DAT_145fc6edc) *
                           fVar31 + fVar31) * auVar29._0_4_) & auVar28._0_4_) + afStack_d0[uVar19];
    } while (uVar18 == auStack_dc[uVar19]);
    bVar24 = auStack_d8[0] < auStack_d8[1];
    bVar23 = auStack_d8[0] == auStack_d8[1];
  }
  else {
    bVar23 = afStack_d0[0] == afStack_d0[1];
    bVar24 = afStack_d0[0] < afStack_d0[1];
  }
  return !bVar24 && !bVar23;
}

