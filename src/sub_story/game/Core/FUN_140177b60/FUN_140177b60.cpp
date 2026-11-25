// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140177b60  size: 1082 bytes
// Name:    FUN_140177b60
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14548bea0, FUN_144fe3470, FUN_140177fa0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_140177b60(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  char cVar5;
  bool bVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined7 uVar10;
  ulonglong uVar9;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar19;
  undefined1 auVar20 [16];
  float fVar22;
  float fVar23;
  undefined1 auVar24 [16];
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  undefined1 auVar43 [64];
  undefined1 auVar44 [64];
  undefined1 auStack_148 [12];
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  longlong lStack_118;
  longlong lStack_110;
  longlong lStack_108;
  longlong lStack_100;
  undefined1 auStack_f8 [16];
  undefined1 auStack_e8 [16];
  undefined1 aauStack_d8 [11] [16];
  undefined1 auVar21 [64];
  undefined1 auVar25 [64];
  
  plVar2 = *(longlong **)(param_1 + 0x10);
  if (((plVar2 == (longlong *)0x0) ||
      (((((*(uint *)(plVar2 + 0x1d) & 0x380000) == 0x180000 &&
         ((*(byte *)(param_1 + 0x270) & 0x10) == 0)) ||
        (plVar7 = (longlong *)FUN_140177fa0(*(undefined4 *)(param_1 + 0x1f0)),
        plVar7 == (longlong *)0x0)) ||
       (((char)plVar7[6] != '\x02' ||
        (uVar1 = *(uint *)(param_1 + 0x270), plVar7 == plVar2 || (uVar1 & 0x24000) != 0)))))) ||
     (lVar8 = FUN_14548bea0(*(undefined4 *)((longlong)plVar7 + 0x9c)),
     lVar8 == 0 && (uVar1 & 0x10) == 0)) goto LAB_140177c00;
  lStack_108 = plVar7[0xe];
  lStack_100 = plVar7[0xf];
  func_0x000144dc3790(&lStack_108,aauStack_d8);
  lStack_118 = plVar2[0xe];
  lStack_110 = plVar2[0xf];
  func_0x000144dc3790(&lStack_118,auStack_e8);
  auVar20._0_12_ = ZEXT812(0);
  auVar20._12_4_ = 0;
  auVar21 = ZEXT1664(auVar20);
  uVar9 = 0;
  auVar13 = vsubps_avx(aauStack_d8[0],auStack_e8);
  auVar43 = ZEXT1664(auVar13);
  auVar12._0_4_ = auVar13._0_4_ * auVar13._0_4_;
  auVar12._4_4_ = auVar13._4_4_ * auVar13._4_4_;
  auVar12._8_4_ = auVar13._8_4_ * auVar13._8_4_;
  auVar12._12_4_ = auVar13._12_4_ * auVar13._12_4_;
  auVar13 = vblendps_avx(auVar12,auVar20,8);
  auVar13 = vhaddps_avx(auVar13,auVar13);
  auVar13 = vhaddps_avx(auVar13,auVar13);
  auVar44 = ZEXT1664(auVar13);
  if (_DAT_14615b728 < auVar13._0_4_) goto LAB_140177c02;
  FUN_144fe3470(&fStack_128,plVar7,0);
  auVar24._4_4_ = _DAT_146159bfc;
  auVar24._0_4_ = _DAT_146159bfc;
  auVar24._8_4_ = _DAT_146159bfc;
  auVar24._12_4_ = _DAT_146159bfc;
  auVar25 = ZEXT1664(auVar24);
  auVar13._0_4_ = fStack_128 * fStack_128;
  auVar13._4_4_ = fStack_124 * fStack_124;
  auVar13._8_4_ = fStack_120 * fStack_120;
  auVar13._12_4_ = fStack_11c * fStack_11c;
  auVar13 = vblendps_avx(auVar13,auVar21._0_16_,8);
  auVar13 = vhaddps_avx(auVar13,auVar13);
  auVar12 = vhaddps_avx(auVar13,auVar13);
  auVar13 = vrsqrtps_avx(auVar12);
  fVar30 = auVar13._0_4_;
  fVar31 = auVar13._4_4_;
  fVar32 = auVar13._8_4_;
  fVar33 = auVar13._12_4_;
  fVar30 = (_DAT_145fc6f08 * fVar30 * fVar30 * auVar12._0_4_ - _DAT_145fc6f08) * fVar30 + fVar30;
  fVar31 = (_DAT_145fc6f08 * fVar31 * fVar31 * auVar12._4_4_ - _DAT_145fc6f08) * fVar31 + fVar31;
  fVar32 = (_DAT_145fc6f08 * fVar32 * fVar32 * auVar12._8_4_ - _DAT_145fc6f08) * fVar32 + fVar32;
  fVar33 = (_DAT_145fc6f08 * fVar33 * fVar33 * auVar12._12_4_ - _DAT_145fc6f08) * fVar33 + fVar33;
  auVar13 = vcmpps_avx(auVar24,auVar12,2);
  fVar22 = (float)(auVar13._0_4_ & (uint)(fVar30 * auVar12._0_4_));
  if (fVar22 < _DAT_14615a2c4) goto LAB_140177c02;
  uVar9 = 0;
  fVar19 = _DAT_14615a2c4;
  fVar26 = fStack_128;
  fVar27 = fStack_124;
  fVar28 = fStack_120;
  fVar29 = fStack_11c;
  fVar41 = _DAT_145fc6f08;
  fVar35 = _DAT_145fc6f08;
  fVar37 = _DAT_145fc6f08;
  fVar39 = _DAT_145fc6f08;
  FUN_144fe3470(&fStack_138,plVar2,0);
  auVar17._0_12_ = ZEXT812(0);
  auVar17._12_4_ = 0;
  auVar14._0_4_ = fStack_138 * fStack_138;
  auVar14._4_4_ = fStack_134 * fStack_134;
  auVar14._8_4_ = fStack_130 * fStack_130;
  auVar14._12_4_ = fStack_12c * fStack_12c;
  auVar13 = vblendps_avx(auVar14,auVar17,8);
  auVar13 = vhaddps_avx(auVar13,auVar13);
  auVar12 = vhaddps_avx(auVar13,auVar13);
  auVar13 = vrsqrtps_avx(auVar12);
  fVar34 = auVar13._0_4_;
  fVar36 = auVar13._4_4_;
  fVar38 = auVar13._8_4_;
  fVar40 = auVar13._12_4_;
  fVar34 = (fVar34 * fVar34 * auVar12._0_4_ * fVar41 - fVar41) * fVar34 + fVar34;
  fVar36 = (fVar36 * fVar36 * auVar12._4_4_ * fVar35 - fVar35) * fVar36 + fVar36;
  fVar38 = (fVar38 * fVar38 * auVar12._8_4_ * fVar37 - fVar37) * fVar38 + fVar38;
  fVar40 = (fVar40 * fVar40 * auVar12._12_4_ * fVar39 - fVar39) * fVar40 + fVar40;
  auVar13 = vcmpps_avx(auVar25._0_16_,auVar12,2);
  fVar41 = (float)(auVar13._0_4_ & (uint)(fVar34 * auVar12._0_4_));
  if (fVar41 < _DAT_146159bd0) goto LAB_140177c02;
  auVar21 = ZEXT1664(CONCAT124(auVar44._4_12_,SQRT(auVar44._0_4_)));
  fVar35 = fStack_138;
  fVar37 = fStack_134;
  fVar39 = fStack_130;
  fVar42 = fStack_12c;
  if (SQRT(auVar44._0_4_) <= _DAT_145fc6ed8) {
    (**(code **)(*plVar2 + 0x470))(plVar2,auStack_148,0);
  }
  else {
    auVar13 = vrsqrtps_avx(auVar44._0_16_);
    auStack_148._0_4_ = auVar43._0_4_ * auVar13._0_4_;
    auStack_148._4_4_ = auVar43._4_4_ * auVar13._4_4_;
    auStack_148._8_4_ = auVar43._8_4_ * auVar13._8_4_;
    fStack_13c = auVar43._12_4_ * auVar13._12_4_;
  }
  (**(code **)(*plVar2 + 0x470))(plVar2,auStack_f8,0);
  auVar15._0_4_ = (float)auStack_f8._0_8_ * auStack_148._0_4_;
  auVar15._4_4_ = SUB84(auStack_f8._0_8_,4) * auStack_148._4_4_;
  auVar15._8_8_ = 0;
  fVar23 = auVar21._0_4_;
  auVar13 = vhaddps_avx(auVar15,auVar15);
  fVar11 = auVar13._0_4_;
  uVar10 = (undefined7)((ulonglong)auStack_f8 >> 8);
  bVar6 = fVar11 < _DAT_145fc6f08;
  uVar9 = CONCAT71(uVar10,(_DAT_145fc6edc < fVar11 || bVar6) || fVar23 < _DAT_146161310);
  if ((fVar23 < _DAT_146161310) ||
     ((_DAT_145fc6edc >= fVar11 && !bVar6) && fVar23 >= _DAT_146161310)) goto LAB_140177c02;
  auVar18._0_4_ = fVar34 * fVar35 * fVar30 * fVar26;
  auVar18._4_4_ = fVar36 * fVar37 * fVar31 * fVar27;
  auVar18._8_4_ = fVar38 * fVar39 * fVar32 * fVar28;
  auVar18._12_4_ = fVar40 * fVar42 * fVar33 * fVar29;
  auVar13 = vhaddps_avx(auVar18,auVar18);
  auVar43 = ZEXT1664(auVar13);
  fVar30 = auVar13._0_4_;
  if (fVar11 <= _DAT_145fc6edc) {
    if (fVar23 < _DAT_146161310 || !bVar6) {
LAB_140177f8a:
      uVar9 = CONCAT71(uVar10,_DAT_145fc6edc < fVar30);
      goto LAB_140177c02;
    }
    if (fVar23 <= _DAT_146159d50) {
      cVar5 = func_0x000140272050(*(undefined4 *)(param_1 + 0x270),*(undefined1 *)(param_1 + 0x2b4))
      ;
      fVar30 = auVar43._0_4_;
      fVar31 = _DAT_14614f804;
      if (cVar5 == '\0') {
        fVar31 = _DAT_145fc6ed8;
      }
      if (fVar41 - fVar22 <= fVar31) goto LAB_140177f8a;
    }
  }
  else {
    auVar3._4_4_ = fStack_134;
    auVar3._0_4_ = fStack_138;
    auVar3._8_4_ = fStack_130;
    auVar3._12_4_ = fStack_12c;
    auVar4._4_4_ = fStack_124;
    auVar4._0_4_ = fStack_128;
    auVar4._8_4_ = fStack_120;
    auVar4._12_4_ = fStack_11c;
    auVar13 = vsubps_avx(auVar3,auVar4);
    auVar44 = ZEXT1664(CONCAT412(auVar13._12_4_ * fStack_13c,
                                 CONCAT48(auVar13._8_4_ * (float)auStack_148._8_4_,
                                          CONCAT44(auVar13._4_4_ * auStack_148._4_4_,
                                                   auVar13._0_4_ * auStack_148._0_4_))));
    fVar30 = _DAT_145fc6f08;
    cVar5 = func_0x000140272050(*(undefined4 *)(param_1 + 0x270),*(undefined1 *)(param_1 + 0x2b4));
    if (cVar5 != '\0') {
      fVar30 = _DAT_145fc6edc;
    }
    if (fVar30 <= auVar43._0_4_) {
      auVar16._0_12_ = ZEXT812(0);
      auVar16._12_4_ = 0;
      auVar13 = vblendps_avx(auVar44._0_16_,auVar16,8);
      auVar13 = vhaddps_avx(auVar13,auVar13);
      auVar13 = vhaddps_avx(auVar13,auVar13);
      if (auVar13._0_4_ <= _DAT_14615bdb0) {
        bVar6 = false;
      }
      else {
        auVar13 = vmaxss_avx(auVar13,ZEXT416(_DAT_146159bd4));
        bVar6 = auVar21._0_4_ / auVar13._0_4_ < fVar19;
      }
      uVar9 = CONCAT71(uVar10,auVar21._0_4_ < _DAT_14615b35c | bVar6);
      goto LAB_140177c02;
    }
  }
LAB_140177c00:
  uVar9 = 0;
LAB_140177c02:
  return uVar9 & 0xffffffff;
}

