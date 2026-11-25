// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14014d1d0  size: 841 bytes
// Name:    FUN_14014d1d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14014cfe0, FUN_14014cec0, FUN_14014d520, FUN_14521f310, FUN_144f8d2c0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14014d1d0(longlong *param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  ulonglong uVar15;
  longlong lVar16;
  undefined8 uVar17;
  uint uVar18;
  undefined1 (*pauVar19) [16];
  longlong lVar20;
  undefined1 (*pauVar21) [16];
  float fVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [64];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar28;
  float fVar29;
  undefined1 auVar30 [64];
  undefined1 in_ZMM7 [64];
  undefined1 unaff_00001404 [12];
  undefined1 auStack_1f8 [16];
  undefined1 auStack_1e8 [16];
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined1 auStack_1b8 [16];
  undefined1 auStack_1a8 [16];
  undefined1 auStack_198 [16];
  undefined1 auStack_188 [16];
  undefined1 auStack_138 [16];
  undefined4 uStack_128;
  longlong lStack_124;
  longlong lStack_11c;
  undefined4 uStack_104;
  uint uStack_100;
  undefined4 uStack_d4;
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [16];
  undefined1 auStack_38 [16];
  
  auStack_38 = in_ZMM7._0_16_;
  lVar5 = *param_1;
  if (lVar5 != 0) {
    FUN_14014cfe0(auStack_138);
    uStack_1c8 = *(undefined8 *)(lVar5 + 0x70);
    uStack_1c0 = *(undefined8 *)(lVar5 + 0x78);
    func_0x000144dc3790(&uStack_1c8,auStack_138);
    lStack_124 = param_1[2];
    lStack_11c = param_1[3];
    uStack_104 = (undefined4)param_1[4];
    uStack_128 = *(undefined4 *)((longlong)param_1 + 0xc);
    uStack_d4 = 0x40400000;
    FUN_14014cec0(auStack_138);
    lVar16 = _DAT_14a9e88c0;
    uVar15 = (ulonglong)uStack_100 & 0xffff;
    if (((uVar15 != 0xffff) && ((uint)uVar15 < 0x12c0)) &&
       (plVar6 = *(longlong **)(_DAT_14a9e88c0 + 0xc30 + uVar15 * 8), plVar6 != (longlong *)0x0)) {
      if ((uint)*(ushort *)(plVar6 + 1) <= uStack_100 >> 0x10) {
        return 0;
      }
      if (*(ushort *)(plVar6 + 1) == 0 && (short)plVar6[9] == 0) {
        return 0;
      }
      if (*plVar6 != 0) {
        uStack_1d8 = *(undefined8 *)(lVar5 + 0x70);
        uStack_1d0 = *(undefined8 *)(lVar5 + 0x78);
        pauVar19 = (undefined1 (*) [16])(*plVar6 + (ulonglong)(uStack_100 >> 0x10) * 0x34);
        auVar30 = ZEXT1664(*pauVar19);
        func_0x000144dc3790(&uStack_1d8,auStack_1b8);
        uVar15 = (ulonglong)(byte)pauVar19[2][0xc];
        if (uVar15 != 0) {
          auVar25._0_12_ = ZEXT812(0);
          auVar25._12_4_ = 0;
          pauVar21 = (undefined1 (*) [16])0x0;
          uVar18 = (uint)*(short *)(pauVar19[2] + 6);
          auVar27 = vsubps_avx(auStack_1b8,auVar30._0_16_);
          fVar28 = auVar27._0_4_;
          auVar23._0_4_ = fVar28 * fVar28;
          fVar13 = auVar27._4_4_;
          auVar23._4_4_ = fVar13 * fVar13;
          fVar9 = auVar27._8_4_;
          auVar23._8_4_ = fVar9 * fVar9;
          fVar11 = auVar27._12_4_;
          auVar23._12_4_ = fVar11 * fVar11;
          auVar27 = vblendps_avx(auVar23,auVar25,8);
          auVar27 = vhaddps_avx(auVar27,auVar27);
          auVar23 = vhaddps_avx(auVar27,auVar27);
          auVar14 = vrsqrtps_avx(auVar23);
          auVar27 = vcmpps_avx(auVar25,auVar23,1);
          fVar29 = auVar14._0_4_;
          fVar8 = auVar14._4_4_;
          fVar10 = auVar14._8_4_;
          fVar12 = auVar14._12_4_;
          auVar24 = ZEXT464(_DAT_146159bfc);
          do {
            uVar4 = *(uint *)(*(longlong *)
                               (*(longlong *)
                                 (lVar16 + 0xc30 + (ulonglong)*(ushort *)(pauVar19[1] + 4) * 8) +
                               0x10) + 4 + (ulonglong)uVar18 * 0x20);
            plVar6 = *(longlong **)(lVar16 + 0xc30 + (ulonglong)(uVar4 & 0xffff) * 8);
            if ((plVar6 != (longlong *)0x0) && (lVar7 = *plVar6, lVar7 != 0)) {
              lVar20 = (ulonglong)(uVar4 >> 0x10) * 0x34;
              auVar14 = vsubps_avx(*(undefined1 (*) [16])(lVar7 + lVar20),auVar30._0_16_);
              auVar26._0_4_ =
                   auVar14._0_4_ *
                   (float)(auVar27._0_4_ &
                          (uint)(((fVar29 * fVar29 * auVar23._0_4_ * _DAT_145fc6f08 - _DAT_145fc6f08
                                  ) * fVar29 + fVar29) * fVar28));
              auVar26._4_4_ =
                   auVar14._4_4_ *
                   (float)(auVar27._4_4_ &
                          (uint)(((fVar8 * fVar8 * auVar23._4_4_ * _DAT_145fc6f08 - _DAT_145fc6f08)
                                  * fVar8 + fVar8) * fVar13));
              auVar26._8_4_ =
                   auVar14._8_4_ *
                   (float)(auVar27._8_4_ &
                          (uint)(((fVar10 * fVar10 * auVar23._8_4_ * _DAT_145fc6f08 - _DAT_145fc6f08
                                  ) * fVar10 + fVar10) * fVar9));
              auVar26._12_4_ =
                   auVar14._12_4_ *
                   (float)(auVar27._12_4_ &
                          (uint)(((fVar12 * fVar12 * auVar23._12_4_ * _DAT_145fc6f08 -
                                  _DAT_145fc6f08) * fVar12 + fVar12) * fVar11));
              auVar25 = vhaddps_avx(auVar26,auVar26);
              fVar22 = auVar24._0_4_;
              auVar14 = vcmpss_avx(auVar24._0_16_,auVar25,6);
              auVar14 = vblendvps_avx(auVar25,auVar24._0_16_,auVar14);
              auVar24 = ZEXT1664(auVar14);
              if (fVar22 <= auVar25._0_4_) {
                pauVar21 = (undefined1 (*) [16])(lVar20 + lVar7);
              }
            }
            uVar18 = uVar18 + 1;
            uVar15 = uVar15 - 1;
          } while (uVar15 != 0);
          if ((pauVar21 != (undefined1 (*) [16])0x0) &&
             (lVar16 = func_0x000144eb5520(lVar16,pauVar19,pauVar21), lVar16 != 0)) {
            auVar27 = *pauVar21;
            auStack_1f8 = vsubps_avx(auVar27,auVar30._0_16_);
            auStack_1e8._0_4_ = (auVar27._0_4_ + auVar30._0_4_) * _DAT_145fc6edc;
            auStack_1e8._4_4_ = (auVar27._4_4_ + auVar30._4_4_) * _DAT_145fc6edc;
            auStack_1e8._8_4_ = (auVar27._8_4_ + auVar30._8_4_) * _DAT_145fc6edc;
            auStack_1e8._12_4_ = (auVar27._12_4_ + auVar30._12_4_) * _DAT_145fc6edc;
            auVar27._0_4_ = (float)*(byte *)(lVar16 + 0x1c);
            auVar27._4_12_ = unaff_00001404;
            if ((*(byte *)(lVar16 + 0x14) & 0x20) == 0) {
              fVar29 = *(float *)(lVar16 + 8);
              bVar1 = *(byte *)(lVar16 + 0x1b);
              bVar2 = *(byte *)(lVar16 + 0x1a);
              bVar3 = bVar2;
              if ((bVar1 == 0) || (bVar3 = bVar1, bVar2 == 0)) {
                fVar28 = (float)bVar3 * _DAT_145fc6edc * fVar29;
                fVar29 = fVar28;
              }
              else {
                fVar13 = *(float *)(lVar16 + 0xc) * _DAT_145fc6edc;
                fVar28 = fVar29 * (float)bVar2 + fVar13;
                fVar29 = fVar29 * (float)bVar1 + fVar13;
              }
            }
            else {
              fVar28 = *(float *)(lVar16 + 8) * _DAT_145fc6edc;
              fVar29 = fVar28;
            }
            auStack_1a8._4_4_ = _DAT_145fc6ed8;
            auStack_1a8._0_4_ = _DAT_145fc6ed8;
            auStack_1a8._8_4_ = _DAT_145fc6ed8;
            auStack_1a8._12_4_ = _DAT_145fc6ed8;
            auVar30 = ZEXT1664(auStack_1a8);
            auStack_1b8._0_12_ = ZEXT812(0);
            auStack_1b8._12_4_ = 0;
            auVar24 = ZEXT1664(auStack_1b8);
            auStack_198 = auStack_1a8;
            auStack_188 = auStack_1a8;
            FUN_14521f310(auStack_1b8,auStack_1e8,auStack_1f8,auVar27._0_8_,fVar29 + fVar28,1);
            auStack_b8 = auVar30._0_16_;
            auStack_c8 = auVar24._0_16_;
            auStack_a8 = auStack_b8;
            auStack_98 = auStack_b8;
            FUN_14014d520(auStack_c8,lVar5,1);
            uVar17 = FUN_144f8d2c0(auStack_1b8,auStack_c8);
            return uVar17;
          }
        }
      }
    }
  }
  return 0;
}

