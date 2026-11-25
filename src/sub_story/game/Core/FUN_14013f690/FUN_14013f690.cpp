// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14013f690  size: 1181 bytes
// Name:    FUN_14013f690
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140695b10
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14013f690(longlong param_1,undefined1 (*param_2) [16],uint *param_3)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  bool bVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 (*pauVar10) [16];
  uint *puVar11;
  longlong *plVar12;
  ulonglong uVar13;
  longlong *plVar14;
  undefined1 auVar15 [16];
  float fVar16;
  float fVar23;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined1 auVar36 [64];
  undefined1 auVar37 [64];
  undefined1 auVar38 [64];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  uint *puStack_c0;
  longlong lStack_b8;
  longlong lStack_b0;
  longlong lStack_a8;
  longlong lStack_a0;
  
  *param_3 = 0x3f800000;
  if ((ulonglong)*(uint *)(param_1 + 100) == 0) {
    return 0;
  }
  auVar37 = ZEXT1664(CONCAT412(_DAT_146159bfc,
                               CONCAT48(_DAT_146159bfc,CONCAT44(_DAT_146159bfc,_DAT_146159bfc))));
  auVar38 = ZEXT1664(CONCAT412(_DAT_145fc6f14,
                               CONCAT48(_DAT_145fc6f14,CONCAT44(_DAT_145fc6f14,_DAT_145fc6f14))));
  plVar14 = *(longlong **)(param_1 + 0x68);
  auVar36 = ZEXT1264(ZEXT812(0));
  uStack_e0 = 0;
  bVar7 = true;
  plVar12 = plVar14 + (ulonglong)*(uint *)(param_1 + 100) * 7;
  fVar32 = _DAT_145fc6edc;
  fVar33 = _DAT_145fc6edc;
  fVar34 = _DAT_145fc6edc;
  fVar35 = _DAT_145fc6edc;
  puStack_c0 = param_3;
LAB_14013f729:
  if (((*(char *)((longlong)plVar14 + 0x29) != '\x05') &&
      ((byte)(*(char *)((longlong)plVar14 + 0x29) - 5U) < 0xfe ||
       (*(byte *)(plVar14 + 5) >> 4 & plVar14[6] != 0) != 0)) && (lVar2 = *plVar14, lVar2 != 0)) {
    if (*(char *)(lVar2 + 0x1a) == '\x01') {
      if (((*(byte *)(lVar2 + 0x24) & 0x20) != 0) &&
         (uVar1 = *(uint *)(param_1 + 100), (ulonglong)uVar1 != 0)) {
        uVar3 = *(undefined8 *)(param_1 + 8);
        plVar9 = *(longlong **)(param_1 + 0x68);
        uVar13 = 0;
        do {
          if ((*plVar9 == lVar2) &&
             ((lVar8 = FUN_140695b10(uVar3,0xff,*(undefined4 *)((longlong)plVar9 + 0x14)),
              lVar8 != 0 || (lVar8 = FUN_140695b10(uVar3,0xff,0x7d8f3db3), lVar8 != 0)))) {
            lVar8 = func_0x000140a2c4d0(*(undefined8 *)(lVar8 + 0x40));
            if ((longlong)*(int *)(lVar8 + 4) != 0) {
              pauVar10 = *(undefined1 (**) [16])(lVar8 + 8);
              lVar8 = (longlong)*(int *)(lVar8 + 4) * 0x140;
              goto LAB_14013f897;
            }
            break;
          }
          uVar13 = uVar13 + 1;
          plVar9 = plVar9 + 7;
        } while (uVar13 < uVar1);
      }
    }
    else if (((*(char *)(lVar2 + 0x1a) == '\x02') && ((*(byte *)(lVar2 + 0x24) & 8) != 0)) &&
            (uVar1 = *(uint *)(param_1 + 100), (ulonglong)uVar1 != 0)) {
      uVar3 = *(undefined8 *)(param_1 + 8);
      plVar9 = *(longlong **)(param_1 + 0x68);
      uVar13 = 0;
      do {
        if ((*plVar9 == lVar2) &&
           ((lVar8 = FUN_140695b10(uVar3,0xff,*(undefined4 *)((longlong)plVar9 + 0x14)), lVar8 != 0
            || (lVar8 = FUN_140695b10(uVar3,0xff,0x7d8f3db3), lVar8 != 0)))) {
          lVar8 = func_0x000144daa200(*(undefined8 *)(lVar8 + 0x40));
          if ((longlong)*(int *)(lVar8 + 4) != 0) {
            plVar9 = *(longlong **)(lVar8 + 8);
            lVar8 = (longlong)*(int *)(lVar8 + 4) * 0x1d0;
            goto LAB_14013f85c;
          }
          break;
        }
        uVar13 = uVar13 + 1;
        plVar9 = plVar9 + 7;
      } while (uVar13 < uVar1);
    }
  }
  goto LAB_14013facd;
  while( true ) {
    pauVar10 = pauVar10 + 0x14;
    lVar8 = lVar8 + -0x140;
    if (lVar8 == 0) break;
LAB_14013f897:
    if (*(longlong *)pauVar10[8] == lVar2) {
      auVar17 = *pauVar10;
      auVar19 = pauVar10[1];
      auVar15 = vsubps_avx(auVar19,auVar17);
      fVar16 = auVar15._0_4_ * fVar32;
      fVar28 = auVar15._4_4_ * fVar33;
      fVar23 = auVar15._8_4_ * fVar34;
      fVar29 = auVar15._12_4_ * fVar35;
      auVar15._0_4_ = (auVar19._0_4_ + auVar17._0_4_) * fVar32;
      auVar15._4_4_ = (auVar19._4_4_ + auVar17._4_4_) * fVar33;
      auVar15._8_4_ = (auVar19._8_4_ + auVar17._8_4_) * fVar34;
      auVar15._12_4_ = (auVar19._12_4_ + auVar17._12_4_) * fVar35;
      auVar17._0_4_ = fVar16 * fVar16;
      auVar17._4_4_ = fVar28 * fVar28;
      auVar17._8_4_ = fVar23 * fVar23;
      auVar17._12_4_ = fVar29 * fVar29;
      auVar17 = vblendps_avx(auVar17,auVar36._0_16_,8);
      auVar17 = vhaddps_avx(auVar17,auVar17);
      auVar19 = vhaddps_avx(auVar17,auVar17);
      auVar17 = vrsqrtps_avx(auVar19);
      fVar16 = auVar17._0_4_;
      fVar28 = auVar17._4_4_;
      fVar23 = auVar17._8_4_;
      fVar29 = auVar17._12_4_;
      auVar17 = vcmpps_avx(auVar37._0_16_,auVar19,2);
      auVar18._0_4_ =
           auVar17._0_4_ &
           (uint)(((-(fVar32 * fVar16 * fVar16 * auVar19._0_4_) + fVar32) * fVar16 + fVar16) *
                 auVar19._0_4_);
      auVar18._4_4_ =
           auVar17._4_4_ &
           (uint)(((-(fVar33 * fVar28 * fVar28 * auVar19._4_4_) + fVar33) * fVar28 + fVar28) *
                 auVar19._4_4_);
      auVar18._8_4_ =
           auVar17._8_4_ &
           (uint)(((-(fVar34 * fVar23 * fVar23 * auVar19._8_4_) + fVar34) * fVar23 + fVar23) *
                 auVar19._8_4_);
      auVar18._12_4_ =
           auVar17._12_4_ &
           (uint)(((-(fVar35 * fVar29 * fVar29 * auVar19._12_4_) + fVar35) * fVar29 + fVar29) *
                 auVar19._12_4_);
      auVar17 = vblendps_avx(auVar15,auVar18,8);
      if (bVar7) {
        bVar7 = false;
      }
      else {
        auVar19 = *param_2;
        auVar22 = vsubps_avx(auVar19,auVar17);
        fVar16 = auVar22._0_4_;
        auVar25._0_4_ = fVar16 * fVar16;
        fVar23 = auVar22._4_4_;
        auVar25._4_4_ = fVar23 * fVar23;
        fVar4 = auVar22._8_4_;
        auVar25._8_4_ = fVar4 * fVar4;
        fVar5 = auVar22._12_4_;
        auVar25._12_4_ = fVar5 * fVar5;
        auVar15 = vblendps_avx(auVar25,auVar36._0_16_,8);
        auVar15 = vhaddps_avx(auVar15,auVar15);
        auVar21 = vhaddps_avx(auVar15,auVar15);
        auVar18 = vrsqrtps_avx(auVar21);
        auVar15 = vcmpps_avx(auVar37._0_16_,auVar21,2);
        fVar28 = auVar18._0_4_;
        fVar29 = auVar18._4_4_;
        fVar30 = auVar18._8_4_;
        fVar31 = auVar18._12_4_;
        fVar28 = (-(fVar32 * fVar28 * fVar28 * auVar21._0_4_) + fVar32) * fVar28 + fVar28;
        fVar29 = (-(fVar33 * fVar29 * fVar29 * auVar21._4_4_) + fVar33) * fVar29 + fVar29;
        fVar30 = (-(fVar34 * fVar30 * fVar30 * auVar21._8_4_) + fVar34) * fVar30 + fVar30;
        fVar31 = (-(fVar35 * fVar31 * fVar31 * auVar21._12_4_) + fVar35) * fVar31 + fVar31;
        auVar18 = vcmpps_avx(auVar38._0_16_,auVar21,1);
        auVar22 = vshufps_avx(auVar22,auVar22,0xff);
        auVar27._0_4_ = auVar15._0_4_ & (uint)(fVar28 * auVar21._0_4_);
        auVar27._4_4_ = auVar15._4_4_ & (uint)(fVar29 * auVar21._4_4_);
        auVar27._8_4_ = auVar15._8_4_ & (uint)(fVar30 * auVar21._8_4_);
        auVar27._12_4_ = auVar15._12_4_ & (uint)(fVar31 * auVar21._12_4_);
        auVar21._0_4_ = (float)(auVar18._0_4_ & (uint)(fVar28 * fVar16)) * auVar22._0_4_;
        auVar21._4_4_ = (float)(auVar18._4_4_ & (uint)(fVar29 * fVar23)) * auVar22._4_4_;
        auVar21._8_4_ = (float)(auVar18._8_4_ & (uint)(fVar30 * fVar4)) * auVar22._8_4_;
        auVar21._12_4_ = (float)(auVar18._12_4_ & (uint)(fVar31 * fVar5)) * auVar22._12_4_;
        auVar15 = vblendps_avx(auVar21,auVar27,8);
        auVar22._0_4_ = (auVar17._0_4_ + auVar19._0_4_ + auVar15._0_4_) * fVar32;
        auVar22._4_4_ = (auVar17._4_4_ + auVar19._4_4_ + auVar15._4_4_) * fVar33;
        auVar22._8_4_ = (auVar17._8_4_ + auVar19._8_4_ + auVar15._8_4_) * fVar34;
        auVar22._12_4_ = (auVar17._12_4_ + auVar19._12_4_ + auVar15._12_4_) * fVar35;
        auVar15 = vcmpps_avx(auVar22,auVar19,1);
        auVar15 = vshufps_avx(auVar15,auVar15,0xff);
        auVar19 = vblendvps_avx(auVar22,auVar19,auVar15);
        auVar15 = vcmpps_avx(auVar19,auVar17,1);
        auVar15 = vshufps_avx(auVar15,auVar15,0xff);
        auVar17 = vblendvps_avx(auVar19,auVar17,auVar15);
      }
      *param_2 = auVar17;
      puVar11 = (uint *)&UNK_1465c2d9c;
      goto LAB_14013fab5;
    }
  }
LAB_14013facd:
  plVar14 = plVar14 + 7;
  if (plVar14 == plVar12) {
    return uStack_e0;
  }
  goto LAB_14013f729;
LAB_14013f85c:
  if (*plVar9 != lVar2) goto code_r0x00014013f861;
  if (bVar7) {
    lStack_b8 = plVar9[0xc];
    lStack_b0 = plVar9[0xd];
    func_0x00014022bfc0(&lStack_b8,&uStack_d8);
    bVar7 = false;
    *(undefined8 *)*param_2 = uStack_d8;
    *(undefined8 *)(*param_2 + 8) = uStack_d0;
  }
  else {
    lStack_a8 = plVar9[0xc];
    lStack_a0 = plVar9[0xd];
    func_0x00014022bfc0(&lStack_a8,&uStack_d8);
    auVar6._8_8_ = uStack_d0;
    auVar6._0_8_ = uStack_d8;
    auVar17 = *param_2;
    auVar21 = vsubps_avx(auVar17,auVar6);
    fVar16 = auVar21._0_4_;
    auVar24._0_4_ = fVar16 * fVar16;
    fVar23 = auVar21._4_4_;
    auVar24._4_4_ = fVar23 * fVar23;
    fVar4 = auVar21._8_4_;
    auVar24._8_4_ = fVar4 * fVar4;
    fVar5 = auVar21._12_4_;
    auVar24._12_4_ = fVar5 * fVar5;
    auVar19 = vblendps_avx(auVar24,auVar36._0_16_,8);
    auVar19 = vhaddps_avx(auVar19,auVar19);
    auVar18 = vhaddps_avx(auVar19,auVar19);
    auVar15 = vrsqrtps_avx(auVar18);
    auVar19 = vcmpps_avx(auVar37._0_16_,auVar18,2);
    fVar28 = auVar15._0_4_;
    fVar29 = auVar15._4_4_;
    fVar30 = auVar15._8_4_;
    fVar31 = auVar15._12_4_;
    fVar28 = (-(fVar32 * fVar28 * fVar28 * auVar18._0_4_) + fVar32) * fVar28 + fVar28;
    fVar29 = (-(fVar33 * fVar29 * fVar29 * auVar18._4_4_) + fVar33) * fVar29 + fVar29;
    fVar30 = (-(fVar34 * fVar30 * fVar30 * auVar18._8_4_) + fVar34) * fVar30 + fVar30;
    fVar31 = (-(fVar35 * fVar31 * fVar31 * auVar18._12_4_) + fVar35) * fVar31 + fVar31;
    auVar15 = vcmpps_avx(auVar38._0_16_,auVar18,1);
    auVar21 = vshufps_avx(auVar21,auVar21,0xff);
    auVar26._0_4_ = auVar19._0_4_ & (uint)(fVar28 * auVar18._0_4_);
    auVar26._4_4_ = auVar19._4_4_ & (uint)(fVar29 * auVar18._4_4_);
    auVar26._8_4_ = auVar19._8_4_ & (uint)(fVar30 * auVar18._8_4_);
    auVar26._12_4_ = auVar19._12_4_ & (uint)(fVar31 * auVar18._12_4_);
    auVar19._0_4_ = (float)(auVar15._0_4_ & (uint)(fVar28 * fVar16)) * auVar21._0_4_;
    auVar19._4_4_ = (float)(auVar15._4_4_ & (uint)(fVar29 * fVar23)) * auVar21._4_4_;
    auVar19._8_4_ = (float)(auVar15._8_4_ & (uint)(fVar30 * fVar4)) * auVar21._8_4_;
    auVar19._12_4_ = (float)(auVar15._12_4_ & (uint)(fVar31 * fVar5)) * auVar21._12_4_;
    auVar19 = vblendps_avx(auVar19,auVar26,8);
    auVar20._0_4_ = (auVar17._0_4_ + (float)uStack_d8 + auVar19._0_4_) * fVar32;
    auVar20._4_4_ = (auVar17._4_4_ + (float)((ulonglong)uStack_d8 >> 0x20) + auVar19._4_4_) * fVar33
    ;
    auVar20._8_4_ = (auVar17._8_4_ + (float)uStack_d0 + auVar19._8_4_) * fVar34;
    auVar20._12_4_ =
         (auVar17._12_4_ + (float)((ulonglong)uStack_d0 >> 0x20) + auVar19._12_4_) * fVar35;
    auVar19 = vcmpps_avx(auVar20,auVar17,1);
    auVar19 = vshufps_avx(auVar19,auVar19,0xff);
    auVar17 = vblendvps_avx(auVar20,auVar17,auVar19);
    auVar19 = vcmpps_avx(auVar17,auVar6,1);
    auVar19 = vshufps_avx(auVar19,auVar19,0xff);
    auVar17 = vblendvps_avx(auVar17,auVar6,auVar19);
    *param_2 = auVar17;
  }
  puVar11 = (uint *)&UNK_1465c2d98;
LAB_14013fab5:
  auVar17 = vminss_avx(ZEXT416(*puStack_c0),ZEXT416(*puVar11));
  uStack_e0 = CONCAT71((int7)((ulonglong)puVar11 >> 8),1);
  *puStack_c0 = auVar17._0_4_;
  goto LAB_14013facd;
code_r0x00014013f861:
  plVar9 = plVar9 + 0x3a;
  lVar8 = lVar8 + -0x1d0;
  if (lVar8 == 0) goto LAB_14013facd;
  goto LAB_14013f85c;
}

