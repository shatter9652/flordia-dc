// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400d6490  size: 2340 bytes
// Name:    FUN_1400d6490
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145146ef0, FUN_1434051d0, FUN_144f62f00, FUN_14171b0b0, FUN_145146220
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400d6490(longlong param_1,longlong *param_2,int param_3,longlong param_4,longlong param_5)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  float fVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  char cVar18;
  byte bVar19;
  longlong lVar20;
  byte bVar21;
  byte bVar22;
  undefined1 auVar23 [16];
  undefined4 uVar24;
  uint uVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float fVar40;
  undefined1 auVar41 [64];
  float fVar42;
  float fVar43;
  undefined1 auVar44 [64];
  
  lVar20 = *(longlong *)(param_1 + 0x28);
  fVar40 = *(float *)((longlong)param_2 + 0xec);
  bVar2 = *(byte *)(*(longlong *)(lVar20 + 0x58) + 0x20);
  if ((((*(byte *)((longlong)param_2 + 0x141) & 2) == 0) || (*(char *)(param_1 + 0x388) != '\0')) ||
     ((*(byte *)(param_2 + 0x1e) & 1) != 0)) {
    auVar23._0_12_ = ZEXT812(0);
    auVar23._12_4_ = 0;
    auVar23 = vmaxss_avx(ZEXT416((uint)(fVar40 * _DAT_14615bdb0 + *(float *)(param_1 + 0x274))),
                         auVar23);
    *(int *)(param_1 + 0x274) = auVar23._0_4_;
  }
  else {
    *(undefined4 *)(param_1 + 0x274) = 0x3f800000;
  }
  bVar19 = *(byte *)((longlong)param_2 + 0xe1);
  lVar10 = *(longlong *)(param_1 + 0x188);
  auVar41 = ZEXT464((uint)_DAT_145fc6ed8);
  lVar11 = *(longlong *)(param_1 + 0x198);
  auVar34._0_12_ = ZEXT812(0);
  auVar34._12_4_ = 0;
  bVar21 = (bVar19 & 2) >> 1;
  auVar23 = vcmpss_avx(auVar34,ZEXT416((uint)*(float *)(param_1 + 0x8c)),1);
  bVar22 = *(byte *)(param_1 + 0xb0);
  bVar3 = *(byte *)(lVar10 + 0x354);
  bVar4 = *(byte *)(param_1 + 0xb8);
  bVar5 = *(byte *)(lVar10 + 0x1a4);
  auVar23 = vblendvps_avx(ZEXT416(*(uint *)(&UNK_14617a8a0 +
                                           (ulonglong)((char)param_2[0x1c] == '\x01' | bVar21) * 4))
                          ,ZEXT416((uint)(_DAT_145fc6ed8 / *(float *)(param_1 + 0x8c))),auVar23);
  auVar44 = ZEXT1664(auVar23);
  bVar6 = *(byte *)(param_1 + 200);
  bVar7 = *(byte *)(param_1 + 0xd8);
  bVar8 = *(byte *)(lVar11 + 0xa8);
  bVar9 = *(byte *)(lVar11 + 0x158);
  bVar14 = func_0x0001455be7b0(param_5,1);
  bVar15 = func_0x0001455be7b0(param_5 + 0xd0,1);
  bVar16 = func_0x0001455be7b0(param_5,0);
  bVar17 = func_0x0001455be7b0(param_5 + 0xd0,0);
  if ((((param_3 == 0 & bVar21 & ((bVar3 & 2) == 0 || (bVar5 & 2) == 0)) == 1) &&
      ((bVar19 & 1) != 0)) && ((*(byte *)(param_1 + 0xa8) & 1) == 0)) {
    auVar44 = ZEXT464(_DAT_14abbd84c);
  }
  fVar43 = _DAT_146159c28;
  fVar42 = _DAT_146159c28;
  if ((((*(byte *)(param_1 + 0x91) & 4) == 0) &&
      (cVar18 = FUN_145146220(*(undefined8 *)(param_1 + 0x2f8),0), fVar42 = fVar43, cVar18 != '\0'))
     && (fVar43 = auVar44._0_4_ * fVar40, fVar42 = fVar43, (bVar19 & 2) != 0)) {
    fVar42 = fVar43 * _DAT_14abbd818;
    if ((*param_2 != 0) && ((*(byte *)(*param_2 + 0x10) & 6) != 0)) {
      fVar43 = fVar43 * _DAT_14abbd820;
      fVar42 = fVar42 * _DAT_14abbd81c;
    }
  }
  lVar20 = FUN_144f62f00(*(undefined8 *)(*(longlong *)(lVar20 + 0x38) + 0x98));
  if (lVar20 == 0) {
    bVar19 = 0;
  }
  else {
    lVar12 = (ulonglong)((uint)DAT_14ab83ab0 * 2) * 3;
    bVar19 = *(byte *)(lVar20 + 0x18 + lVar12);
    if ((((bVar19 == 0x1e) && (bVar19 = *(byte *)(lVar20 + 0x19 + lVar12), bVar19 == 0x1e)) &&
        (bVar19 = *(byte *)(lVar20 + 0x1a + lVar12), bVar19 == 0x1e)) &&
       (((bVar19 = *(byte *)(lVar20 + 0x1b + lVar12), bVar19 == 0x1e &&
         (bVar19 = *(byte *)(lVar20 + 0x1c + lVar12), bVar19 == 0x1e)) &&
        (bVar19 = *(byte *)(lVar20 + 0x1d + lVar12), bVar19 == 0x1e)))) {
      bVar19 = 0;
      lVar20 = FUN_145146ef0(lVar20,0xd56454b0,0,1);
      if (lVar20 != 0) {
LAB_1400d6791:
        bVar19 = FUN_14171b0b0(lVar20);
        bVar19 = bVar19 ^ 1;
      }
    }
    else {
      lVar12 = *(longlong *)(lVar20 + 0xa0 + (ulonglong)bVar19 * 8);
      lVar20 = FUN_145146ef0(lVar20,0xd56454b0,0,1);
      if (lVar20 != 0) goto LAB_1400d6791;
      if (lVar12 == 0) {
        bVar19 = 0;
      }
      else {
        bVar19 = *(byte *)(lVar12 + 0x5a8) >> 3;
      }
    }
  }
  if (((bVar2 == 0) && ((bVar5 & 2) != 0)) && (((bVar22 & 1) != 0 && ((bVar19 & 1) == 0)))) {
    auVar23 = vminss_avx(ZEXT416((uint)(fVar43 + *(float *)(lVar10 + 0x174))),
                         ZEXT416((uint)_DAT_145fc6ed8));
  }
  else {
    auVar26._0_12_ = ZEXT812(0);
    auVar26._12_4_ = 0;
    auVar23 = vmaxss_avx(ZEXT416((uint)(*(float *)(lVar10 + 0x174) - fVar43)),auVar26);
  }
  *(int *)(lVar10 + 0x174) = auVar23._0_4_;
  if ((((bVar2 == 0) && ((bVar3 & 2) != 0)) && ((bVar4 & 1) != 0)) && ((bVar19 & 1) == 0)) {
    auVar34 = vminss_avx(ZEXT416((uint)(fVar43 + *(float *)(lVar10 + 0x324))),
                         ZEXT416((uint)_DAT_145fc6ed8));
  }
  else {
    auVar30._0_12_ = ZEXT812(0);
    auVar30._12_4_ = 0;
    auVar34 = vmaxss_avx(ZEXT416((uint)(*(float *)(lVar10 + 0x324) - fVar43)),auVar30);
  }
  *(int *)(lVar10 + 0x324) = auVar34._0_4_;
  auVar35._4_4_ = fVar43;
  auVar35._0_4_ = fVar43;
  auVar35._8_4_ = fVar43;
  auVar35._12_4_ = fVar43;
  auVar26 = vinsertps_avx(ZEXT416(*(uint *)(lVar10 + 0x178)),ZEXT416(*(uint *)(lVar10 + 0x328)),0x10
                         );
  if ((*(byte *)(param_2 + 0x24) & 1) == 0) {
    auVar31._0_4_ = auVar26._0_4_ + fVar43;
    auVar31._4_4_ = auVar26._4_4_ + fVar43;
    auVar31._8_4_ = auVar26._8_4_ + fVar43;
    auVar31._12_4_ = auVar26._12_4_ + fVar43;
    auVar23 = vinsertps_avx(auVar23,auVar34,0x10);
    auVar23 = vminps_avx(auVar31,auVar23);
  }
  else {
    auVar23 = vsubps_avx(auVar26,auVar35);
    auVar23 = vmaxps_avx(auVar23,ZEXT816(0) << 0x20);
  }
  auVar34 = vmovshdup_avx(auVar23);
  *(int *)(lVar10 + 0x178) = auVar23._0_4_;
  *(int *)(lVar10 + 0x328) = auVar34._0_4_;
  if (((*(byte *)(lVar10 + 0x1a5) & 1) != 0) ||
     (auVar36._0_12_ = ZEXT812(0), auVar36._12_4_ = 0, *(float *)(lVar10 + 0x18c) < 0.0)) {
    auVar23 = vminss_avx(ZEXT416((uint)(fVar43 + *(float *)(lVar10 + 0x17c))),auVar23);
    uVar24 = auVar23._0_4_;
  }
  else {
    auVar23 = vmaxss_avx(ZEXT416((uint)(*(float *)(lVar10 + 0x17c) - fVar43)),auVar36);
    uVar24 = auVar23._0_4_;
  }
  *(undefined4 *)(lVar10 + 0x17c) = uVar24;
  if (((*(byte *)(lVar10 + 0x355) & 1) != 0) ||
     (auVar32._0_12_ = ZEXT812(0), auVar32._12_4_ = 0, *(float *)(lVar10 + 0x33c) < 0.0)) {
    auVar23 = vminss_avx(ZEXT416((uint)(fVar43 + *(float *)(lVar10 + 0x32c))),auVar34);
    uVar24 = auVar23._0_4_;
  }
  else {
    auVar23 = vmaxss_avx(ZEXT416((uint)(*(float *)(lVar10 + 0x32c) - fVar43)),auVar32);
    uVar24 = auVar23._0_4_;
  }
  *(undefined4 *)(lVar10 + 0x32c) = uVar24;
  bVar22 = bVar8 ^ 1 | bVar2;
  if ((((~bVar6 | ~(bVar16 | bVar14) | bVar22) & 1) == 0) && ((bVar19 & 1) == 0)) {
    auVar23 = vminss_avx(ZEXT416((uint)(fVar43 + *(float *)(lVar11 + 0x90))),
                         ZEXT416((uint)_DAT_145fc6ed8));
  }
  else {
    auVar27._0_12_ = ZEXT812(0);
    auVar27._12_4_ = 0;
    auVar23 = vmaxss_avx(ZEXT416((uint)(*(float *)(lVar11 + 0x90) - fVar43)),auVar27);
  }
  *(int *)(lVar11 + 0x90) = auVar23._0_4_;
  if ((((bVar22 | ~bVar14 | (bVar6 & 2) == 0) & 1) == 0) && ((bVar19 & 1) == 0)) {
    auVar23 = vminss_avx(ZEXT416((uint)(fVar43 + *(float *)(lVar11 + 0x94))),auVar23);
    uVar24 = auVar23._0_4_;
  }
  else {
    auVar23 = vmaxss_avx(ZEXT416((uint)(*(float *)(lVar11 + 0x94) - fVar43)),ZEXT816(0) << 0x20);
    uVar24 = auVar23._0_4_;
  }
  *(undefined4 *)(lVar11 + 0x94) = uVar24;
  bVar22 = bVar9 ^ 1 | bVar2;
  if ((((~bVar7 | ~(bVar17 | bVar15) | bVar22) & 1) == 0) && ((bVar19 & 1) == 0)) {
    auVar23 = vminss_avx(ZEXT416((uint)(fVar43 + *(float *)(lVar11 + 0x140))),
                         ZEXT416((uint)_DAT_145fc6ed8));
  }
  else {
    auVar23 = vmaxss_avx(ZEXT416((uint)(*(float *)(lVar11 + 0x140) - fVar43)),ZEXT816(0) << 0x20);
  }
  *(int *)(lVar11 + 0x140) = auVar23._0_4_;
  if ((((bVar22 | ~bVar15 | (bVar7 & 2) == 0) & 1) == 0) && ((bVar19 & 1) == 0)) {
    auVar23 = vminss_avx(ZEXT416((uint)(fVar43 + *(float *)(lVar11 + 0x144))),auVar23);
    uVar24 = auVar23._0_4_;
  }
  else {
    auVar23 = vmaxss_avx(ZEXT416((uint)(*(float *)(lVar11 + 0x144) - fVar43)),ZEXT816(0) << 0x20);
    uVar24 = auVar23._0_4_;
  }
  *(undefined4 *)(lVar11 + 0x144) = uVar24;
  if ((((bVar2 == 0) &&
       ((((bVar5 | bVar3) & 2) == 0 & (*(byte *)((longlong)param_2 + 0x14c) & 4) >> 2) == 0)) &&
      ((*(byte *)(param_1 + 0xa8) & 1) != 0)) && ((bVar19 & 1) == 0)) {
    auVar23 = vminss_avx(ZEXT416((uint)(fVar42 + *(float *)(param_1 + 0x278))),
                         ZEXT416((uint)_DAT_145fc6ed8));
  }
  else {
    auVar23 = vmaxss_avx(ZEXT416((uint)(*(float *)(param_1 + 0x278) - fVar42)),ZEXT816(0) << 0x20);
  }
  *(float *)(param_1 + 0x278) = auVar23._0_4_;
  if ((*(char *)(param_1 + 0x60) == '\x02') && ((*(byte *)(param_2 + 0x24) & 1) != 0)) {
    auVar23 = vmaxss_avx(ZEXT416((uint)(*(float *)(param_1 + 0x27c) - fVar42)),ZEXT416(0) << 0x20);
    uVar24 = auVar23._0_4_;
  }
  else {
    fVar43 = *(float *)(param_1 + 0x27c);
    if (fVar43 <= auVar23._0_4_) {
      auVar23 = vminss_avx(ZEXT416((uint)(fVar42 + fVar43)),auVar23);
      uVar24 = auVar23._0_4_;
    }
    else {
      auVar23 = vmaxss_avx(ZEXT416((uint)(fVar43 - fVar42)),auVar23);
      uVar24 = auVar23._0_4_;
    }
  }
  *(undefined4 *)(param_1 + 0x27c) = uVar24;
  fVar42 = fVar40 * _DAT_14614f808;
  fVar43 = *(float *)(param_1 + 0x36c);
  if ((*(char *)(param_4 + 0x110) < '\0') && (*(char *)(param_4 + 0x230) < '\0')) {
    if ((fVar43 == _DAT_145fc6f48) &&
       (fVar29 = _DAT_145fc6edc, !NAN(fVar43) && !NAN(_DAT_145fc6f48))) goto LAB_1400d6c2b;
    if (_DAT_145fc6edc <= fVar43) {
      auVar38._4_4_ = _DAT_145fc6edc;
      auVar38._0_4_ = _DAT_145fc6edc;
      auVar38._8_4_ = _DAT_145fc6edc;
      auVar38._12_4_ = _DAT_145fc6edc;
      auVar34 = vminss_avx(auVar41._0_16_,ZEXT416((uint)(fVar43 - fVar42)));
      auVar23 = vcmpss_avx(ZEXT416((uint)(fVar43 - fVar42)),ZEXT416((uint)_DAT_145fc6edc),1);
      auVar23 = vblendvps_avx(auVar34,auVar38,auVar23);
      fVar29 = auVar23._0_4_;
      goto LAB_1400d6c2b;
    }
    fVar43 = fVar43 + fVar42;
    fVar13 = _DAT_145fc6edc;
  }
  else {
    fVar13 = _DAT_145fc6ed8;
    if (*(char *)(param_4 + 0x110) < '\0') {
      fVar29 = 0.0;
      if ((fVar43 == _DAT_145fc6f48) && (!NAN(fVar43) && !NAN(_DAT_145fc6f48))) goto LAB_1400d6c2b;
      fVar43 = fVar43 - fVar42;
    }
    else {
      if ((fVar43 == _DAT_145fc6f48) &&
         (fVar29 = _DAT_145fc6ed8, !NAN(fVar43) && !NAN(_DAT_145fc6f48))) goto LAB_1400d6c2b;
      fVar43 = fVar43 + fVar42;
    }
  }
  auVar37._0_12_ = ZEXT812(0);
  auVar37._12_4_ = 0;
  auVar34 = vminss_avx(ZEXT416((uint)fVar13),ZEXT416((uint)fVar43));
  auVar23 = vcmpss_avx(ZEXT416((uint)fVar43),auVar37,1);
  fVar29 = (float)(~auVar23._0_4_ & auVar34._0_4_);
LAB_1400d6c2b:
  *(float *)(param_1 + 0x36c) = fVar29;
  if (*(char *)(param_1 + 0x393) == '\x01') {
    *(undefined1 *)(param_1 + 0x393) = 0;
    uVar24 = 0;
  }
  else {
    auVar23 = vminss_avx(ZEXT416((uint)(fVar42 + *(float *)(param_1 + 0x370))),
                         ZEXT416((uint)_DAT_145fc6ed8));
    uVar24 = auVar23._0_4_;
  }
  *(undefined4 *)(param_1 + 0x370) = uVar24;
  fVar40 = fVar40 * _DAT_14615a2c4;
  uVar25 = auVar41._0_4_;
  lVar20 = *(longlong *)(param_1 + 0x188);
  if ((*(byte *)(param_1 + 0xb0) & 8) == 0) {
    auVar39._0_12_ = ZEXT812(0);
    auVar39._12_4_ = 0;
    auVar23 = ZEXT416((uint)(*(float *)(lVar20 + 0x19c) - fVar40));
    auVar34 = vminss_avx(ZEXT416((uint)_DAT_145fc6ed8),auVar23);
    auVar23 = vcmpss_avx(auVar23,auVar39,1);
    uVar25 = ~auVar23._0_4_ & auVar34._0_4_;
  }
  *(uint *)(lVar20 + 0x19c) = uVar25;
  if ((*(byte *)(param_1 + 0xb8) & 8) == 0) {
    auVar33._0_12_ = ZEXT812(0);
    auVar33._12_4_ = 0;
    auVar23 = ZEXT416((uint)(*(float *)(lVar20 + 0x34c) - fVar40));
    auVar34 = vminss_avx(ZEXT416((uint)_DAT_145fc6ed8),auVar23);
    auVar23 = vcmpss_avx(auVar23,auVar33,1);
    auVar41 = ZEXT1664(CONCAT412(~auVar23._12_4_ & auVar34._12_4_,
                                 CONCAT48(~auVar23._8_4_ & auVar34._8_4_,
                                          (ulonglong)(~auVar23._0_4_ & auVar34._0_4_))));
  }
  *(int *)(lVar20 + 0x34c) = auVar41._0_4_;
  auVar23 = vinsertps_avx(ZEXT416(*(uint *)(lVar10 + 0x174)),ZEXT416(*(uint *)(lVar10 + 0x324)),0x10
                         );
  auVar28._0_12_ = ZEXT812(0);
  auVar28._12_4_ = 0;
  auVar23 = vinsertps_avx(auVar23,ZEXT416(*(uint *)(lVar11 + 0x90)),0x20);
  auVar23 = vinsertps_avx(auVar23,ZEXT416(*(uint *)(lVar11 + 0x140)),0x30);
  auVar23 = vcmpps_avx(auVar28,auVar23,1);
  if ((((((SUB161(auVar23 >> 0x1f,0) & 1) == 0 && (SUB161(auVar23 >> 0x3f,0) & 1) == 0) &&
        (SUB161(auVar23 >> 0x5f,0) & 1) == 0) && -1 < auVar23[0xf]) && (bVar2 != 0)) &&
     (*(float *)(param_1 + 0x278) <= 0.0)) {
    FUN_1434051d0(param_1);
    if (param_2[6] != 0) {
      pbVar1 = (byte *)(param_2[6] + 0x5a8);
      *pbVar1 = *pbVar1 & 0xe3;
    }
    *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x58) + 0x21) = 1;
  }
  *(undefined1 *)(param_1 + 0x389) = 0;
  return;
}

