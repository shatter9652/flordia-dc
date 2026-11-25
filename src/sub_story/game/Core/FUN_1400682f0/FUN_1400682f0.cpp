// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400682f0  size: 734 bytes
// Name:    FUN_1400682f0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400685d0, FUN_1400686d0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400682f0(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  ushort *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar16;
  undefined1 auVar17 [64];
  undefined1 auVar18 [64];
  float fStack_2f8;
  float fStack_2f4;
  float fStack_2f0;
  float fStack_2ec;
  undefined1 auStack_2e8 [16];
  undefined1 auStack_2d8 [16];
  undefined8 uStack_2bc;
  undefined8 uStack_2b4;
  undefined8 uStack_2ac;
  undefined8 uStack_2a4;
  undefined4 uStack_29c;
  undefined1 auStack_298 [16];
  undefined1 auStack_288 [16];
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined4 uStack_258;
  
  lVar3 = *param_2;
  func_0x000144eaee50(*(undefined1 *)(param_1 + 0x56),auStack_2d8);
  fVar10 = *(float *)(param_1 + 0x3c);
  if (fVar10 <= 0.0) {
    auStack_288._4_4_ = _DAT_145fc6f50;
    auStack_288._0_4_ = _DAT_145fc6f50;
    auStack_288._8_4_ = _DAT_145fc6f50;
    auStack_288._12_4_ = _DAT_145fc6f50;
    auStack_298._4_4_ = (float)_DAT_145fc6f54;
    auStack_298._0_4_ = (float)_DAT_145fc6f54;
    auStack_298._8_4_ = (float)_DAT_145fc6f54;
    auStack_298._12_4_ = (float)_DAT_145fc6f54;
  }
  else {
    if (*(char *)(param_1 + 0x5b) == '\x01') {
      auVar11 = vsubps_avx(auStack_2d8,*(undefined1 (*) [16])(lVar3 + 0x2a020));
      auVar15._0_4_ = auVar11._0_4_ * auVar11._0_4_;
      auVar15._4_4_ = auVar11._4_4_ * auVar11._4_4_;
      auVar15._8_4_ = auVar11._8_4_ * auVar11._8_4_;
      auVar15._12_4_ = auVar11._12_4_ * auVar11._12_4_;
      auVar15 = vhaddps_avx(auVar15,auVar15);
      auVar11 = vrsqrtss_avx(auVar15,auVar15);
      fVar16 = auVar11._0_4_;
      auVar11 = vcmpss_avx(ZEXT416(_DAT_146159bfc),auVar15,2);
      auVar11 = vminss_avx(ZEXT416((uint)fVar10),
                           ZEXT416((uint)((float)(auVar11._0_4_ &
                                                 (uint)(((fVar16 * fVar16 * auVar15._0_4_ *
                                                          _DAT_145fc6f08 + _DAT_145fc6edc) * fVar16
                                                        + fVar16) * auVar15._0_4_)) + _DAT_14615b980
                                         )));
      fVar10 = auVar11._0_4_;
    }
    auVar11._4_4_ = fVar10;
    auVar11._0_4_ = fVar10;
    auVar11._8_4_ = fVar10;
    auVar11._12_4_ = fVar10;
    auStack_288 = vsubps_avx(auStack_2d8,auVar11);
    auStack_298._0_4_ = fVar10 + auStack_2d8._0_4_;
    auStack_298._4_4_ = fVar10 + auStack_2d8._4_4_;
    auStack_298._8_4_ = fVar10 + auStack_2d8._8_4_;
    auStack_298._12_4_ = fVar10 + auStack_2d8._12_4_;
  }
  if (0.0 < *(float *)(param_1 + 0x40)) {
    FUN_1400686d0(lVar3,&uStack_278);
    auVar4._8_8_ = uStack_270;
    auVar4._0_8_ = uStack_278;
    fVar10 = *(float *)(param_1 + 0x40);
    auVar14._4_4_ = fVar10;
    auVar14._0_4_ = fVar10;
    auVar14._8_4_ = fVar10;
    auVar14._12_4_ = fVar10;
    auStack_288 = vsubps_avx(auVar4,auVar14);
    auStack_298._0_4_ = fVar10 + (float)uStack_278;
    auStack_298._4_4_ = fVar10 + (float)((ulonglong)uStack_278 >> 0x20);
    auStack_298._8_4_ = fVar10 + (float)uStack_270;
    auStack_298._12_4_ = fVar10 + (float)((ulonglong)uStack_270 >> 0x20);
  }
  auVar18 = ZEXT1664(auStack_298);
  auVar17 = ZEXT1664(auStack_288);
  lVar5 = param_2[2];
  if ((lVar5 != 0) && (*(short *)(lVar5 + 0x30) != 0)) {
    lVar5 = lVar5 + 0x20;
    uVar6 = 0;
    uVar7 = 0;
    do {
      auVar15 = vcmpps_avx(auVar17._0_16_,auVar18._0_16_,2);
      fVar10 = *(float *)(*(longlong *)(lVar5 + 8) + 0x24 + (ulonglong)uVar6 * 0x40);
      auVar12._4_4_ = fVar10;
      auVar12._0_4_ = fVar10;
      auVar12._8_4_ = fVar10;
      auVar12._12_4_ = fVar10;
      auVar11 = vblendps_avx(auVar12,*(undefined1 (*) [16])
                                      (*(longlong *)(lVar5 + 8) + 0x10 + (ulonglong)uVar6 * 0x40),7)
      ;
      uVar8 = vmovmskps_avx(auVar15);
      auStack_288 = vsubps_avx(auVar11,auVar12);
      auStack_298._0_4_ = fVar10 + auVar11._0_4_;
      auStack_298._4_4_ = fVar10 + auVar11._4_4_;
      auStack_298._8_4_ = fVar10 + auVar11._8_4_;
      auStack_298._12_4_ = fVar10 + auVar11._12_4_;
      if ((~(byte)uVar8 & 7) == 0) {
        auStack_288 = vminps_avx(auStack_288,auVar17._0_16_);
        auStack_298 = vmaxps_avx(auStack_298,auVar18._0_16_);
      }
      auVar18 = ZEXT1664(auStack_298);
      auVar17 = ZEXT1664(auStack_288);
      if (uVar7 == 0x20) {
        uVar7 = 0x20;
      }
      else {
        uVar9 = (ulonglong)uVar7;
        uVar7 = uVar7 + 1;
        *(undefined1 (*) [16])(&uStack_268 + uVar9 * 2) = auVar11;
      }
      puVar1 = (ushort *)(lVar5 + 0x10);
      uVar6 = uVar6 + 1;
      if ((int)(uint)*puVar1 <= (int)uVar6) {
        lVar5 = 0;
      }
      if ((int)(uint)*puVar1 <= (int)uVar6) {
        uVar6 = 0;
      }
    } while ((uVar6 != 0) || (lVar5 != 0));
    if (uVar7 != 0) {
      lVar5 = 0;
      uVar6 = *(uint *)(param_3 + 5);
      do {
        auVar11 = *(undefined1 (*) [16])((longlong)&uStack_268 + lVar5);
        fStack_2ec = *(float *)((longlong)&uStack_260 + lVar5 + 4);
        auVar13._4_4_ = fStack_2ec;
        auVar13._0_4_ = fStack_2ec;
        auVar13._8_4_ = fStack_2ec;
        auVar13._12_4_ = fStack_2ec;
        auStack_2e8 = vsubps_avx(auVar11,auVar13);
        fStack_2f8 = fStack_2ec + auVar11._0_4_;
        fStack_2f4 = fStack_2ec + auVar11._4_4_;
        fStack_2f0 = fStack_2ec + auVar11._8_4_;
        fStack_2ec = fStack_2ec + auVar11._12_4_;
        auVar17 = ZEXT1664(auVar17._0_16_);
        auVar18 = ZEXT1664(auVar18._0_16_);
        FUN_1400685d0(lVar3 + 0x29ed0,&uStack_2bc,auStack_2e8,&fStack_2f8);
        auStack_288 = auVar17._0_16_;
        auStack_298 = auVar18._0_16_;
        lVar5 = lVar5 + 0x10;
        *(uint *)(param_3 + 5) = uVar6 + 1;
        *(undefined4 *)((longlong)param_3 + (ulonglong)uVar6 * 0x24 + 0x4c) = uStack_29c;
        puVar2 = (undefined8 *)((longlong)param_3 + (ulonglong)uVar6 * 0x24 + 0x2c);
        *puVar2 = uStack_2bc;
        puVar2[1] = uStack_2b4;
        puVar2[2] = uStack_2ac;
        puVar2[3] = uStack_2a4;
        uVar6 = uVar6 + 1;
      } while ((ulonglong)uVar7 << 4 != lVar5);
    }
  }
  FUN_1400685d0(lVar3 + 0x29ed0,&uStack_278);
  *(undefined4 *)(param_3 + 4) = uStack_258;
  *param_3 = uStack_278;
  param_3[1] = uStack_270;
  param_3[2] = uStack_268;
  param_3[3] = uStack_260;
  return;
}

