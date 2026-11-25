// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14016a970  size: 1641 bytes
// Name:    FUN_14016a970
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14016b380, FUN_140851520, FUN_141fdb3a0, FUN_143396670, FUN_145025b00, FUN_145408670, FUN_141e366d0, FUN_141995160, FUN_14006e840, FUN_141e29360, FUN_1402e5b80
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14016a970(longlong *param_1)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  bool bVar13;
  bool bVar14;
  int iVar15;
  char cVar16;
  longlong *plVar17;
  undefined8 uVar18;
  longlong lVar19;
  longlong lVar20;
  ulonglong uVar21;
  longlong lVar22;
  longlong lVar23;
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float fVar30;
  undefined4 uVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 auVar35 [16];
  uint uVar36;
  undefined1 auVar37 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [64];
  undefined1 auVar41 [64];
  undefined1 auVar42 [64];
  longlong *plStack_208;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  uint uStack_1f8;
  int iStack_1f4;
  float *pfStack_1f0;
  undefined4 uStack_1e8;
  int iStack_1e4;
  longlong lStack_1e0;
  longlong lStack_1d8;
  float *pfStack_1d0;
  longlong lStack_1c8;
  undefined1 auStack_1b8 [16];
  undefined1 auStack_1a8 [16];
  undefined8 uStack_198;
  undefined8 uStack_190;
  int iStack_188;
  uint uStack_184;
  undefined4 uStack_180;
  float fStack_17c;
  uint uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  char cStack_168;
  undefined1 uStack_167;
  longlong **pplStack_158;
  code *pcStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  undefined1 auStack_118 [48];
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 auVar38 [64];
  
  if (param_1[1] == 0) {
    return;
  }
  plVar5 = (longlong *)*param_1;
  lVar6 = param_1[2];
  lVar20 = param_1[3];
  uVar3 = *(uint *)(param_1 + 4);
  uVar31 = *(undefined4 *)((longlong)param_1 + 0x24);
  cVar1 = (char)param_1[6];
  cVar2 = *(char *)((longlong)param_1 + 0x31);
  plVar17 = (longlong *)func_0x00014016a080(*(undefined4 *)(param_1[1] + 8));
  if (plVar17 == (longlong *)0x0) {
    return;
  }
  if (*(char *)(lVar20 + 0x2c) != '\x01') {
    return;
  }
  iVar4 = *(int *)(lVar20 + 0x38);
  if (iVar4 == 0) {
    return;
  }
  cVar16 = (**(code **)(*plVar5 + 0x288))(plVar5);
  if (cVar16 == '\0') {
    return;
  }
  uVar18 = (**(code **)(*plVar5 + 0xa8))(plVar5);
  FUN_14006e840(uVar18,&uStack_1e8,iVar4);
  if ((char)uStack_1e8 == '\0') {
    return;
  }
  iStack_1f4 = iStack_1e4;
  if (iStack_1e4 == -1) {
    return;
  }
  lVar22 = *plVar17;
  lVar23 = (ulonglong)uVar3 * 0x30;
  uVar21 = (ulonglong)*(uint *)(lVar22 + 0x10 + lVar23);
  pfStack_1f0 = (float *)func_0x000145025af0();
  if (pfStack_1f0 == (float *)0x0) {
    return;
  }
  if ((*pfStack_1f0 == 0.0) && (!NAN(*pfStack_1f0))) {
    return;
  }
  if ((cVar1 == '\0') && (*(char *)(pfStack_1f0 + 2) != '\0')) {
    return;
  }
  fVar32 = *(float *)(lVar20 + 0x20);
  fVar33 = *(float *)(lVar20 + 0x28);
  fVar24 = (float)FUN_145408670();
  if (_DAT_145fc6ed8 <= fVar24) {
    fVar24 = *(float *)(lVar20 + 0x28);
    uStack_1fc = 0;
    uStack_1f8 = 0;
  }
  else {
    fVar30 = *(float *)(lVar20 + 0x20) * _DAT_145fc6edc;
    fVar24 = *(float *)(lVar20 + 0x28);
    auVar25 = vcmpps_avx(ZEXT416((uint)fVar30),ZEXT416((uint)fVar24),2);
    auVar37 = vcmpps_avx(ZEXT416((uint)*(float *)(lVar20 + 0x24)),ZEXT416((uint)fVar30),1);
    uStack_1f8 = auVar37._0_4_ & auVar25._0_4_;
    if (fVar30 <= *(float *)(lVar20 + 0x24)) {
      uStack_1fc = (undefined4)CONCAT71((int7)(uVar21 >> 8),fVar24 < fVar30);
    }
    else {
      uStack_1fc = 0;
    }
  }
  if (fVar24 <= 0.0) {
    bVar13 = false;
  }
  else {
    bVar13 = fVar24 < *(float *)(lVar20 + 0x20);
  }
  if ((((uStack_1f8 & 1) == 0 && (char)uStack_1fc == '\0') && (!bVar13)) && (fVar33 < fVar32)) {
    return;
  }
  uStack_200 = *(undefined4 *)((longlong)plVar5 + 0x9c);
  lVar19 = func_0x00014093a530();
  if (lVar19 == 0) {
    bVar14 = false;
  }
  else {
    bVar14 = 0.0 < *(float *)(lVar19 + 0x1e4);
  }
  lVar19 = func_0x0001450f21c0(uStack_200);
  if (lVar19 == 0) {
    return;
  }
  auVar37._0_12_ = ZEXT812(0);
  auVar38 = ZEXT1264(auVar37._0_12_);
  auVar37._12_4_ = 0;
  auVar25._0_12_ = ZEXT812(0);
  auVar25._12_4_ = 0.0;
  if (*(char *)(*(longlong *)(*(longlong *)(*(longlong *)(lVar19 + 0x28) + 8) + 0x20) + 0x10) ==
      '\x06') {
    auVar25 = vcvtps2ph_f16c(ZEXT416(_DAT_145fc6f48),3);
    FUN_140851520(&uStack_1e8,*(longlong *)(lVar19 + 0x28),*(undefined8 *)(lVar20 + 0x30),
                  auVar25._0_2_ | 0x10000);
    auVar37 = auVar38._0_16_;
    auVar25._4_4_ = (float)iStack_1e4;
    auVar25._0_4_ = (float)uStack_1e8;
    auVar25._8_8_ = lStack_1e0;
  }
  iVar15 = iStack_1f4;
  fVar24 = auVar25._0_4_;
  auVar26._0_4_ = fVar24 * fVar24;
  fVar7 = auVar25._4_4_;
  auVar26._4_4_ = fVar7 * fVar7;
  fVar9 = auVar25._8_4_;
  auVar26._8_4_ = fVar9 * fVar9;
  fVar11 = auVar25._12_4_;
  auVar26._12_4_ = fVar11 * fVar11;
  auVar35 = vblendps_avx(auVar26,auVar37,8);
  auVar35 = vhaddps_avx(auVar35,auVar35);
  auVar26 = vhaddps_avx(auVar35,auVar35);
  auVar35 = vrsqrtps_avx(auVar26);
  fVar30 = auVar35._0_4_;
  fVar8 = auVar35._4_4_;
  fVar10 = auVar35._8_4_;
  fVar12 = auVar35._12_4_;
  fVar30 = (_DAT_145fc6f08 * fVar30 * fVar30 * auVar26._0_4_ - _DAT_145fc6f08) * fVar30 + fVar30;
  auVar35 = vcmpss_avx(ZEXT416(_DAT_146159bfc),auVar26,2);
  fVar34 = (float)(auVar35._0_4_ & (uint)(fVar30 * auVar26._0_4_));
  auVar35 = ZEXT416((uint)_DAT_145fc6ed8);
  if (0.0 < fVar34) {
    auVar35._0_4_ = fVar30 * fVar24;
    auVar35._4_4_ =
         ((_DAT_145fc6f08 * fVar8 * fVar8 * auVar26._4_4_ - _DAT_145fc6f08) * fVar8 + fVar8) * fVar7
    ;
    auVar35._8_4_ =
         ((_DAT_145fc6f08 * fVar10 * fVar10 * auVar26._8_4_ - _DAT_145fc6f08) * fVar10 + fVar10) *
         fVar9;
    auVar35._12_4_ =
         ((_DAT_145fc6f08 * fVar12 * fVar12 * auVar26._12_4_ - _DAT_145fc6f08) * fVar12 + fVar12) *
         fVar11;
  }
  auVar38 = ZEXT1664(auVar35);
  lVar22 = lVar22 + lVar23;
  if (cVar2 != '\0') {
    auVar25._0_4_ = fVar24 + fVar24;
    auVar25._4_4_ = fVar7 + fVar7;
    auVar25._8_4_ = fVar9 + fVar9;
    auVar25._12_4_ = fVar11 + fVar11;
  }
  auVar26 = vshufpd_avx(auVar25,auVar25,1);
  auVar25 = vblendps_avx(auVar25,auVar37,4);
  auVar35 = vmaxss_avx(ZEXT816(0),auVar26);
  auVar41 = ZEXT1664(auVar35);
  auVar39._0_4_ = _DAT_145fc6f10 ^ auVar26._0_4_;
  auVar39._4_4_ = _DAT_145fc6f10 ^ auVar26._4_4_;
  auVar39._8_4_ = _DAT_145fc6f10 ^ auVar26._8_4_;
  auVar39._12_4_ = _DAT_145fc6f10 ^ auVar26._12_4_;
  auVar35 = vmaxss_avx(ZEXT816(0),auVar39);
  auVar40 = ZEXT1664(auVar35);
  fVar24 = auVar25._0_4_;
  auVar29._0_4_ = fVar24 * fVar24;
  fVar7 = auVar25._4_4_;
  auVar29._4_4_ = fVar7 * fVar7;
  fVar9 = auVar25._8_4_;
  auVar29._8_4_ = fVar9 * fVar9;
  fVar11 = auVar25._12_4_;
  auVar29._12_4_ = fVar11 * fVar11;
  auVar25 = vblendps_avx(auVar29,auVar37,8);
  auVar25 = vhaddps_avx(auVar25,auVar25);
  auVar37 = vhaddps_avx(auVar25,auVar25);
  auVar35 = vrsqrtps_avx(auVar37);
  auVar25 = vcmpss_avx(ZEXT416(_DAT_146159bfc),auVar37,2);
  fVar30 = auVar35._0_4_;
  fVar8 = auVar35._4_4_;
  fVar10 = auVar35._8_4_;
  fVar12 = auVar35._12_4_;
  fVar30 = (fVar30 * fVar30 * auVar37._0_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar30 + fVar30;
  auVar27._0_4_ = fVar30 * fVar24;
  auVar27._4_4_ =
       ((fVar8 * fVar8 * auVar37._4_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar8 + fVar8) * fVar7;
  auVar27._8_4_ =
       ((fVar10 * fVar10 * auVar37._8_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar10 + fVar10) *
       fVar9;
  auVar27._12_4_ =
       ((fVar12 * fVar12 * auVar37._12_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar12 + fVar12) *
       fVar11;
  auVar28._4_4_ = _DAT_145fc6f14;
  auVar28._0_4_ = _DAT_145fc6f14;
  auVar28._8_4_ = _DAT_145fc6f14;
  auVar28._12_4_ = _DAT_145fc6f14;
  uVar36 = auVar25._0_4_ & (uint)(fVar30 * auVar37._0_4_);
  auVar25 = vcmpps_avx(auVar28,auVar37,1);
  auVar25 = vblendvps_avx(ZEXT416((uint)_DAT_145fc6ed8),auVar27,auVar25);
  auVar42 = ZEXT1664(auVar25);
  FUN_145025b00(auStack_118,plVar5,iStack_1f4,0,0,1);
  uStack_138 = uStack_e8;
  uStack_130 = uStack_e0;
  FUN_14016b380(&fStack_128);
  uStack_1e8 = SUB84(plVar5,0);
  iStack_1e4 = (int)((ulonglong)plVar5 >> 0x20);
  fStack_128 = _DAT_1492e1a70 * fStack_128;
  fStack_124 = _DAT_1492e1a70 * fStack_124;
  fStack_120 = _DAT_1492e1a70 * fStack_120;
  fStack_11c = _DAT_1492e1a70 * fStack_11c;
  pfStack_1d0 = pfStack_1f0;
  auStack_1b8 = auVar38._0_16_;
  auStack_1a8 = auVar42._0_16_;
  uStack_198 = CONCAT44(fStack_124,fStack_128);
  uStack_190 = CONCAT44(fStack_11c,fStack_120);
  iStack_188 = iVar15;
  uStack_174 = auVar41._0_4_;
  uStack_170 = auVar40._0_4_;
  uStack_16c = *(undefined4 *)((longlong)param_1 + 0x2c);
  lStack_1e0 = lVar6;
  lStack_1d8 = lVar20;
  lStack_1c8 = lVar22;
  uStack_184 = uVar3;
  uStack_180 = uVar31;
  fStack_17c = fVar34;
  uStack_178 = uVar36;
  cStack_168 = cVar1;
  uStack_167 = bVar14;
  if ((uStack_1f8 & 1) == 0) {
    if ((char)uStack_1fc == '\0') {
      if (bVar13) {
        FUN_141995160(&uStack_1e8);
      }
      else {
        if (fVar33 < fVar32) goto LAB_14016ae69;
        FUN_143396670(&uStack_1e8);
      }
    }
    else {
      FUN_141e366d0(&uStack_1e8);
      if (!(bool)(bVar13 | fVar32 <= fVar33)) goto LAB_14016ae69;
    }
  }
  else {
    FUN_141e29360(&uStack_1e8);
  }
  lVar20 = func_0x00014528ee90(*(undefined4 *)((longlong)plVar5 + 0x9c));
  if (lVar20 != 0) {
    FUN_141fdb3a0(*(undefined8 *)(lVar20 + 8),*(undefined8 *)(lVar20 + 0x240),(ulonglong)uVar3,
                  *(undefined4 *)(lVar6 + 0x138));
  }
LAB_14016ae69:
  if (iVar4 < -0x4ca5457d) {
    if (iVar4 == -0x5b6442bd) {
      pcStack_150 = FUN_143396ae0;
    }
    else {
      if (iVar4 != -0x5031cc8d) {
        return;
      }
      pcStack_150 = FUN_143396aa0;
    }
  }
  else if (iVar4 == -0x4ca5457d) {
    pcStack_150 = FUN_143396b20;
  }
  else {
    if (iVar4 != 0x3ec3bb37) {
      return;
    }
    pcStack_150 = FUN_143396a60;
  }
  pplStack_158 = &plStack_208;
  puStack_148 = &UNK_1401167b0;
  puStack_140 = &SUB_140004380;
  plStack_208 = plVar5;
  FUN_1402e5b80(0x13);
  return;
}

