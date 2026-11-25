// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14014cc90  size: 373 bytes
// Name:    FUN_14014cc90
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14038d0d0, FUN_14014ce10
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14014cc90(longlong *param_1)

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
  char cVar15;
  ulonglong uVar16;
  longlong lVar17;
  undefined8 uVar18;
  uint uVar19;
  undefined1 (*pauVar20) [16];
  longlong lVar21;
  undefined1 (*pauVar22) [16];
  float fVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [64];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar29;
  float fVar30;
  undefined1 auVar31 [64];
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
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_104;
  uint uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined2 auStack_d8 [2];
  undefined4 uStack_d4;
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [16];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [16];
  undefined4 uStack_28;
  
  uStack_28 = 0x7f7fffff;
  auStack_38._9_2_ = 0;
  auStack_d8[0] = 0;
  auVar14._12_4_ = 0;
  auVar14._0_12_ = auStack_38._4_12_;
  auStack_38 = auVar14 << 0x20;
  uStack_120 = 0x4014ccd0;
  uStack_11c = 1;
  FUN_14038d0d0(auStack_d8,*param_1,(char)param_1[1]);
  uStack_f8 = auStack_c8._0_8_;
  uStack_f0 = auStack_c8._8_8_;
  uStack_120 = 0x4014cce6;
  uStack_11c = 1;
  cVar15 = FUN_14014ce10(param_1);
  if (cVar15 != '\0') {
    return 1;
  }
  uStack_f8 = auStack_b8._0_8_;
  uStack_f0 = auStack_b8._8_8_;
  uStack_120 = 0x4014cd05;
  uStack_11c = 1;
  cVar15 = FUN_14014ce10(param_1);
  if (cVar15 != '\0') {
    return 1;
  }
  uStack_f8 = auStack_a8._0_8_;
  uStack_f0 = auStack_a8._8_8_;
  uStack_120 = 0x4014cd24;
  uStack_11c = 1;
  cVar15 = FUN_14014ce10(param_1);
  if (cVar15 != '\0') {
    return 1;
  }
  uStack_f8 = auStack_98._0_8_;
  uStack_f0 = auStack_98._8_8_;
  uStack_120 = 0x4014cd46;
  uStack_11c = 1;
  cVar15 = FUN_14014ce10(param_1);
  if (cVar15 != '\0') {
    return 1;
  }
  uStack_f8 = uStack_88;
  uStack_f0 = uStack_80;
  uStack_120 = 0x4014cd68;
  uStack_11c = 1;
  cVar15 = FUN_14014ce10(param_1);
  if (cVar15 != '\0') {
    return 1;
  }
  uStack_e8 = uStack_78;
  uStack_e0 = uStack_70;
  uStack_120 = 0x4014cd8a;
  uStack_11c = 1;
  cVar15 = FUN_14014ce10(param_1);
  if (cVar15 != '\0') {
    return 1;
  }
  uStack_e8 = uStack_68;
  uStack_e0 = uStack_60;
  uStack_120 = 0x4014cda8;
  uStack_11c = 1;
  cVar15 = FUN_14014ce10(param_1);
  if (cVar15 != '\0') {
    return 1;
  }
  uStack_e8 = uStack_58;
  uStack_e0 = uStack_50;
  uStack_120 = 0x4014cdc6;
  uStack_11c = 1;
  cVar15 = FUN_14014ce10(param_1);
  if (cVar15 == '\0') {
    uStack_e8 = uStack_48;
    uStack_e0 = uStack_40;
    uStack_120 = 0x4014cde4;
    uStack_11c = 1;
    cVar15 = FUN_14014ce10(param_1);
    if (cVar15 != '\0') {
      return 1;
    }
    auStack_38 = in_ZMM7._0_16_;
    lVar5 = *param_1;
    if (lVar5 != 0) {
      FUN_14014cfe0(auStack_138);
      uStack_1c8 = *(undefined8 *)(lVar5 + 0x70);
      uStack_1c0 = *(undefined8 *)(lVar5 + 0x78);
      func_0x000144dc3790(&uStack_1c8,auStack_138);
      uStack_124 = (undefined4)param_1[2];
      uStack_120 = (undefined4)((ulonglong)param_1[2] >> 0x20);
      uStack_11c = (undefined4)param_1[3];
      uStack_118 = (undefined4)((ulonglong)param_1[3] >> 0x20);
      uStack_104 = (undefined4)param_1[4];
      uStack_128 = *(undefined4 *)((longlong)param_1 + 0xc);
      uStack_d4 = 0x40400000;
      FUN_14014cec0(auStack_138);
      lVar17 = _DAT_14a9e88c0;
      uVar16 = (ulonglong)uStack_100 & 0xffff;
      if (((uVar16 != 0xffff) && ((uint)uVar16 < 0x12c0)) &&
         (plVar6 = *(longlong **)(_DAT_14a9e88c0 + 0xc30 + uVar16 * 8), plVar6 != (longlong *)0x0))
      {
        if ((uint)*(ushort *)(plVar6 + 1) <= uStack_100 >> 0x10) {
          return 0;
        }
        if (*(ushort *)(plVar6 + 1) == 0 && (short)plVar6[9] == 0) {
          return 0;
        }
        if (*plVar6 != 0) {
          uStack_1d8 = *(undefined8 *)(lVar5 + 0x70);
          uStack_1d0 = *(undefined8 *)(lVar5 + 0x78);
          pauVar20 = (undefined1 (*) [16])(*plVar6 + (ulonglong)(uStack_100 >> 0x10) * 0x34);
          auVar31 = ZEXT1664(*pauVar20);
          func_0x000144dc3790(&uStack_1d8,auStack_1b8);
          uVar16 = (ulonglong)(byte)pauVar20[2][0xc];
          if (uVar16 != 0) {
            auVar26._0_12_ = ZEXT812(0);
            auVar26._12_4_ = 0;
            pauVar22 = (undefined1 (*) [16])0x0;
            uVar19 = (uint)*(short *)(pauVar20[2] + 6);
            auVar14 = vsubps_avx(auStack_1b8,auVar31._0_16_);
            fVar29 = auVar14._0_4_;
            auVar24._0_4_ = fVar29 * fVar29;
            fVar13 = auVar14._4_4_;
            auVar24._4_4_ = fVar13 * fVar13;
            fVar9 = auVar14._8_4_;
            auVar24._8_4_ = fVar9 * fVar9;
            fVar11 = auVar14._12_4_;
            auVar24._12_4_ = fVar11 * fVar11;
            auVar14 = vblendps_avx(auVar24,auVar26,8);
            auVar14 = vhaddps_avx(auVar14,auVar14);
            auVar24 = vhaddps_avx(auVar14,auVar14);
            auVar28 = vrsqrtps_avx(auVar24);
            auVar14 = vcmpps_avx(auVar26,auVar24,1);
            fVar30 = auVar28._0_4_;
            fVar8 = auVar28._4_4_;
            fVar10 = auVar28._8_4_;
            fVar12 = auVar28._12_4_;
            auVar25 = ZEXT464(_DAT_146159bfc);
            do {
              uVar4 = *(uint *)(*(longlong *)
                                 (*(longlong *)
                                   (lVar17 + 0xc30 + (ulonglong)*(ushort *)(pauVar20[1] + 4) * 8) +
                                 0x10) + 4 + (ulonglong)uVar19 * 0x20);
              plVar6 = *(longlong **)(lVar17 + 0xc30 + (ulonglong)(uVar4 & 0xffff) * 8);
              if ((plVar6 != (longlong *)0x0) && (lVar7 = *plVar6, lVar7 != 0)) {
                lVar21 = (ulonglong)(uVar4 >> 0x10) * 0x34;
                auVar28 = vsubps_avx(*(undefined1 (*) [16])(lVar7 + lVar21),auVar31._0_16_);
                auVar27._0_4_ =
                     auVar28._0_4_ *
                     (float)(auVar14._0_4_ &
                            (uint)(((fVar30 * fVar30 * auVar24._0_4_ * _DAT_145fc6f08 -
                                    _DAT_145fc6f08) * fVar30 + fVar30) * fVar29));
                auVar27._4_4_ =
                     auVar28._4_4_ *
                     (float)(auVar14._4_4_ &
                            (uint)(((fVar8 * fVar8 * auVar24._4_4_ * _DAT_145fc6f08 - _DAT_145fc6f08
                                    ) * fVar8 + fVar8) * fVar13));
                auVar27._8_4_ =
                     auVar28._8_4_ *
                     (float)(auVar14._8_4_ &
                            (uint)(((fVar10 * fVar10 * auVar24._8_4_ * _DAT_145fc6f08 -
                                    _DAT_145fc6f08) * fVar10 + fVar10) * fVar9));
                auVar27._12_4_ =
                     auVar28._12_4_ *
                     (float)(auVar14._12_4_ &
                            (uint)(((fVar12 * fVar12 * auVar24._12_4_ * _DAT_145fc6f08 -
                                    _DAT_145fc6f08) * fVar12 + fVar12) * fVar11));
                auVar26 = vhaddps_avx(auVar27,auVar27);
                fVar23 = auVar25._0_4_;
                auVar28 = vcmpss_avx(auVar25._0_16_,auVar26,6);
                auVar28 = vblendvps_avx(auVar26,auVar25._0_16_,auVar28);
                auVar25 = ZEXT1664(auVar28);
                if (fVar23 <= auVar26._0_4_) {
                  pauVar22 = (undefined1 (*) [16])(lVar21 + lVar7);
                }
              }
              uVar19 = uVar19 + 1;
              uVar16 = uVar16 - 1;
            } while (uVar16 != 0);
            if ((pauVar22 != (undefined1 (*) [16])0x0) &&
               (lVar17 = func_0x000144eb5520(lVar17,pauVar20,pauVar22), lVar17 != 0)) {
              auVar14 = *pauVar22;
              auStack_1f8 = vsubps_avx(auVar14,auVar31._0_16_);
              auStack_1e8._0_4_ = (auVar14._0_4_ + auVar31._0_4_) * _DAT_145fc6edc;
              auStack_1e8._4_4_ = (auVar14._4_4_ + auVar31._4_4_) * _DAT_145fc6edc;
              auStack_1e8._8_4_ = (auVar14._8_4_ + auVar31._8_4_) * _DAT_145fc6edc;
              auStack_1e8._12_4_ = (auVar14._12_4_ + auVar31._12_4_) * _DAT_145fc6edc;
              auVar28._0_4_ = (float)*(byte *)(lVar17 + 0x1c);
              auVar28._4_12_ = unaff_00001404;
              if ((*(byte *)(lVar17 + 0x14) & 0x20) == 0) {
                fVar30 = *(float *)(lVar17 + 8);
                bVar1 = *(byte *)(lVar17 + 0x1b);
                bVar2 = *(byte *)(lVar17 + 0x1a);
                bVar3 = bVar2;
                if ((bVar1 == 0) || (bVar3 = bVar1, bVar2 == 0)) {
                  fVar29 = (float)bVar3 * _DAT_145fc6edc * fVar30;
                  fVar30 = fVar29;
                }
                else {
                  fVar13 = *(float *)(lVar17 + 0xc) * _DAT_145fc6edc;
                  fVar29 = fVar30 * (float)bVar2 + fVar13;
                  fVar30 = fVar30 * (float)bVar1 + fVar13;
                }
              }
              else {
                fVar29 = *(float *)(lVar17 + 8) * _DAT_145fc6edc;
                fVar30 = fVar29;
              }
              auStack_1a8._4_4_ = _DAT_145fc6ed8;
              auStack_1a8._0_4_ = _DAT_145fc6ed8;
              auStack_1a8._8_4_ = _DAT_145fc6ed8;
              auStack_1a8._12_4_ = _DAT_145fc6ed8;
              auVar31 = ZEXT1664(auStack_1a8);
              auStack_1b8._0_12_ = ZEXT812(0);
              auStack_1b8._12_4_ = 0;
              auVar25 = ZEXT1664(auStack_1b8);
              auStack_198 = auStack_1a8;
              auStack_188 = auStack_1a8;
              FUN_14521f310(auStack_1b8,auStack_1e8,auStack_1f8,auVar28._0_8_,fVar30 + fVar29,1);
              auStack_b8 = auVar31._0_16_;
              auStack_c8 = auVar25._0_16_;
              auStack_a8 = auStack_b8;
              auStack_98 = auStack_b8;
              FUN_14014d520(auStack_c8,lVar5,1);
              uVar18 = FUN_144f8d2c0(auStack_1b8,auStack_c8);
              return uVar18;
            }
          }
        }
      }
    }
    return 0;
  }
  return 1;
}

