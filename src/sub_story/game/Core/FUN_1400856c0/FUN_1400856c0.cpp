// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400856c0  size: 1830 bytes
// Name:    FUN_1400856c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140083970, FUN_14037d510, FUN_140085df0, FUN_140493a30, FUN_1401331f0, FUN_140085ec0, FUN_144ef3e20, FUN_140085ef0, FUN_1402eb220, FUN_144ef4620, FUN_140086020, FUN_1400834e0, FUN_140085e10, FUN_14399cc10, FUN_1402096b0, FUN_140086070
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_1400856c0(ulonglong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  byte bVar3;
  char cVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  bool bVar14;
  bool bVar15;
  float fVar16;
  float fVar17;
  ulonglong uVar18;
  ulonglong extraout_XMM0_Qa;
  ulonglong extraout_XMM0_Qa_00;
  ulonglong extraout_XMM0_Qa_01;
  ulonglong extraout_XMM0_Qa_02;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 extraout_var [56];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar26;
  float fVar27;
  undefined1 auVar28 [16];
  float fVar29;
  float fVar30;
  undefined1 auVar31 [64];
  undefined1 auVar32 [64];
  undefined1 auVar33 [64];
  float fVar34;
  undefined1 auVar35 [64];
  float fVar36;
  undefined1 auVar37 [64];
  int iStack_140;
  int iStack_13c;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined1 auStack_118 [16];
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined1 auStack_f8 [12];
  undefined4 uStack_ec;
  undefined1 auStack_e8 [12];
  int iStack_dc;
  undefined8 uStack_d8;
  byte bStack_c8;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  
  fVar36 = 0.0;
  param_1 = param_1 & 0xfffffffffffffff0;
  fVar17 = _DAT_145fc6ed8;
  if ((param_1 == 0) || (fVar36 = 0.0, lVar9 = (**(code **)(*param_2 + 0x10))(param_2), lVar9 == 0))
  goto LAB_140085912;
  lVar10 = FUN_144ef4620(param_2);
  lVar11 = FUN_144ef3e20(param_2);
  if ((lVar10 == 0) && (lVar11 != 0)) {
    lVar10 = FUN_1402096b0(lVar11,0,0);
    bVar14 = lVar10 != 0;
  }
  else {
    bVar14 = lVar10 != 0;
    if (bVar14 && lVar11 == 0) {
      lVar11 = FUN_14399cc10(param_1,lVar10);
      bVar14 = true;
    }
  }
  uVar18 = FUN_1401331f0(&iStack_13c,param_1);
  if (iStack_13c == 0) {
    auVar31 = ZEXT464((uint)_DAT_146159d50);
    bVar15 = lVar11 != 0;
    bVar3 = 0;
    fVar36 = _DAT_14615a1b0;
  }
  else {
    bVar3 = FUN_1402eb220(iStack_13c,0,1);
    auVar31 = ZEXT464((uint)_DAT_146159d50);
    bVar15 = lVar11 != 0;
    uVar18 = extraout_XMM0_Qa;
    fVar36 = _DAT_14615a1b0;
    if ((bVar15) && (bVar3 != 0)) {
      cVar4 = FUN_140085ef0(lVar11,iStack_13c);
      bVar3 = 1;
      uVar18 = extraout_XMM0_Qa_00;
      if (cVar4 == '\0') {
        uVar5 = FUN_140085e10(lVar11,iStack_13c);
        if (uVar5 == 0) {
          lVar12 = func_0x000144f68b80(*(undefined4 *)(lVar11 + 0x9c));
          uVar18 = extraout_XMM0_Qa_01;
          if (lVar12 != 0) {
            uVar6 = FUN_140085df0(lVar12,0);
            uVar7 = func_0x000144fd53c0();
            uVar5 = func_0x000144dc06d0(uVar6,uVar7);
            auVar32._8_56_ = extraout_var;
            auVar32._0_8_ = extraout_XMM0_Qa_02;
            uVar18 = extraout_XMM0_Qa_02;
            if (uVar5 < 0x240c8400) {
              auVar21._0_4_ = (float)uVar5;
              auVar21._4_12_ = auVar32._4_12_;
              uVar18 = auVar21._0_8_;
              goto LAB_140085bb6;
            }
          }
        }
        else {
          fVar17 = (float)uVar5 * _DAT_146159e10;
          iVar8 = func_0x0001410344a0();
          uVar18 = (ulonglong)(uint)(fVar17 * (float)iVar8);
LAB_140085bb6:
          fVar17 = (float)uVar18;
          fVar36 = fVar17 * _DAT_146159ec4;
          if (_DAT_14615ae8c <= fVar36) {
            if (_DAT_14615a1b0 <= fVar36) goto LAB_14008581b;
            auVar25 = ZEXT416((uint)(fVar17 * _DAT_146175730 + _DAT_14614f804));
            auVar21 = vminss_avx(ZEXT416((uint)_DAT_145fc6ed8),auVar25);
            fVar27 = auVar21._0_4_ * _DAT_14615ba88 + _DAT_146159cb0;
            auVar21 = vcmpss_avx(auVar25,ZEXT816(0) << 0x20,1);
            auVar25._4_4_ = _DAT_146159cb0;
            auVar25._0_4_ = _DAT_146159cb0;
            auVar25._8_4_ = _DAT_146159cb0;
            auVar25._12_4_ = _DAT_146159cb0;
          }
          else {
            auVar21 = vminss_avx(ZEXT416((uint)_DAT_145fc6ed8),
                                 ZEXT416((uint)(fVar17 * _DAT_146175734)));
            fVar27 = auVar21._0_4_ * _DAT_14615db1c + _DAT_14615a2c4;
            auVar21 = vcmpss_avx(ZEXT416((uint)(fVar17 * _DAT_146175734)),ZEXT816(0) << 0x20,1);
            auVar25._4_4_ = _DAT_14615a2c4;
            auVar25._0_4_ = _DAT_14615a2c4;
            auVar25._8_4_ = _DAT_14615a2c4;
            auVar25._12_4_ = _DAT_14615a2c4;
          }
          uVar18 = auVar21._0_8_;
          auVar21 = vblendvps_avx(ZEXT416((uint)fVar27),auVar25,auVar21);
          auVar31 = ZEXT1664(auVar21);
        }
      }
LAB_14008581b:
      bVar15 = true;
    }
  }
  if (bVar14) {
    cVar4 = FUN_140086020(lVar10);
    if (cVar4 == '\0') {
LAB_140085aa2:
      auVar32 = ZEXT464((uint)_DAT_145fc6ed8);
    }
    else {
      FUN_1401331f0(&iStack_140,param_1);
      uStack_108 = 0;
      uStack_100 = 0x17;
      uStack_fc = 0;
      auStack_f8._8_4_ = 0;
      auStack_f8._0_8_ = SUB128(ZEXT812(0),4);
      uStack_ec = 0x1ffff;
      FUN_14037d510(auStack_e8);
      iStack_dc = func_0x000144fd53c0();
      iStack_dc = iStack_dc + -0x240c8401;
      uStack_d8 = 0;
      bStack_c8 = bStack_c8 & 0xf8;
      FUN_140085ec0(&uStack_108,lVar10,param_1);
      if ((bVar15 == false) ||
         (lVar11 = func_0x000144f68b80(*(undefined4 *)(lVar11 + 0x9c)), lVar11 == 0)) {
LAB_140085a64:
        auVar32 = ZEXT464((uint)_DAT_145fc6ed8);
        if ((iStack_140 == 0) || (lVar11 = FUN_1400834e0(iStack_140,lVar10,0,1), lVar11 == 0))
        goto LAB_14008584e;
        cVar4 = func_0x00014037d590(lVar11,&uStack_108);
        if (cVar4 == '\0') goto LAB_140085aa2;
      }
      else {
        lVar11 = FUN_140086070(lVar11,iStack_140,&uStack_108,0,1,1,1);
        if ((lVar11 == 0) || (cVar4 = func_0x00014037d590(lVar11,&uStack_108), cVar4 == '\0'))
        goto LAB_140085a64;
      }
      auVar32 = ZEXT464(_DAT_145fc6edc);
    }
  }
  else {
    auVar32 = ZEXT464((uint)_DAT_145fc6ed8);
    if ((((bVar3 & bVar15) == 1) && (lVar10 = FUN_140493a30(uVar18,iStack_13c,1), lVar10 != 0)) &&
       (iVar8 = *(int *)(lVar10 + 0x2c), 0 < iVar8)) {
      auVar33 = ZEXT464(_DAT_14615b36c);
      auVar37 = ZEXT464(_DAT_14615a7f8);
      uVar1 = *(undefined8 *)(lVar10 + 0x30);
      iVar13 = 0;
      auVar35 = ZEXT1264(ZEXT812(0));
      lVar10 = 0;
      do {
        lVar12 = func_0x0001409a68c0(iVar8,uVar1,iVar13);
        if ((lVar12 != 0) &&
           (lVar12 = func_0x000141637000(*(undefined4 *)(lVar12 + 0x10)), lVar12 != 0)) {
          uStack_128 = *(undefined8 *)(lVar12 + 0x70);
          uStack_120 = *(undefined8 *)(lVar12 + 0x78);
          func_0x000144dc3790(&uStack_128,&uStack_108);
          uStack_138 = *(undefined8 *)(lVar11 + 0x70);
          uStack_130 = *(undefined8 *)(lVar11 + 0x78);
          func_0x000144dc3790(&uStack_138,auStack_118);
          auVar2._8_4_ = uStack_100;
          auVar2._0_8_ = uStack_108;
          auVar2._12_4_ = uStack_fc;
          auVar21 = vsubps_avx(auVar2,auStack_118);
          auVar22._0_4_ = auVar21._0_4_ * auVar21._0_4_;
          auVar22._4_4_ = auVar21._4_4_ * auVar21._4_4_;
          auVar22._8_4_ = auVar21._8_4_ * auVar21._8_4_;
          auVar22._12_4_ = auVar21._12_4_ * auVar21._12_4_;
          auVar21 = vblendps_avx(auVar22,auVar35._0_16_,8);
          auVar21 = vhaddps_avx(auVar21,auVar21);
          auVar2 = vhaddps_avx(auVar21,auVar21);
          auVar21 = vcmpps_avx(auVar2,auVar33._0_16_,1);
          auVar25 = vcmpps_avx(auVar2,auVar37._0_16_,1);
          if ((auVar25._0_4_ & auVar21._0_4_ & 1) != 0) {
            auVar33 = ZEXT1664(auVar2);
            lVar10 = lVar12;
          }
        }
        iVar13 = iVar13 + 1;
      } while (iVar8 != iVar13);
      if (lVar10 != 0) {
        auVar32 = ZEXT464((uint)_DAT_145fc6ed8);
        auVar21 = vminss_avx(ZEXT416((uint)_DAT_145fc6ed8),
                             ZEXT416((uint)(SQRT(auVar33._0_4_) * _DAT_146159f8c)));
        auVar21 = vminss_avx(auVar31._0_16_,ZEXT416((uint)(auVar21._0_4_ * _DAT_14614f808)));
        auVar31 = ZEXT1664(auVar21);
      }
    }
  }
LAB_14008584e:
  uStack_b8 = *(undefined8 *)(lVar9 + 0x70);
  uStack_b0 = *(undefined8 *)(lVar9 + 0x78);
  fVar16 = (float)FUN_140083970(param_1,&uStack_b8,0);
  fVar17 = auVar32._0_4_;
  auVar24._0_12_ = ZEXT812(0);
  auVar24._12_4_ = 0;
  fVar27 = _DAT_146159b90;
  fVar34 = _DAT_146159cb0;
  fVar30 = _DAT_14615a6b4;
  fVar29 = _DAT_146159d50;
  if (fVar36 < _DAT_14615a1b0) {
    if (fVar36 <= _DAT_14615ae8c) {
      auVar21 = ZEXT416((uint)_DAT_146159cb0);
      fVar36 = _DAT_14615ba84;
      fVar26 = _DAT_146159bd4;
    }
    else {
      auVar28._0_12_ = ZEXT812(0);
      auVar28._12_4_ = 0;
      auVar21 = ZEXT416((uint)(fVar36 * _DAT_146159e10 + _DAT_14614f804));
      auVar25 = vminss_avx(ZEXT416((uint)_DAT_145fc6ed8),auVar21);
      auVar21 = vcmpss_avx(auVar21,auVar28,1);
      fVar36 = (float)(~auVar21._0_4_ & auVar25._0_4_);
      fVar29 = fVar36 * 0.0;
      auVar24 = ZEXT416((uint)fVar29);
      fVar26 = fVar36 * _DAT_14614f808 + _DAT_146159bd4;
      auVar21 = ZEXT416((uint)(fVar36 * _DAT_14615ba88 + _DAT_146159cb0));
      fVar36 = fVar36 * _DAT_14615a6b4 + _DAT_14615ba84;
      fVar27 = fVar29 + _DAT_146159b90;
      fVar34 = fVar29 + _DAT_146159cb0;
      fVar30 = fVar29 + _DAT_14615a6b4;
      fVar29 = fVar29 + _DAT_146159d50;
    }
  }
  else {
    auVar21 = ZEXT416((uint)_DAT_146159d50);
    fVar36 = _DAT_146159ce0;
    fVar26 = _DAT_14615a2c4;
  }
  if (fVar16 <= fVar27 * fVar27) {
    if (fVar29 * fVar29 < fVar16) {
      auVar23._0_4_ = (SQRT(fVar16) - fVar29) / (fVar27 - fVar29);
      auVar23._4_12_ = SUB6012((undefined1  [60])0x0,0);
      auVar2 = vminss_avx(ZEXT416((uint)_DAT_145fc6ed8),auVar23);
      auVar25 = vcmpss_avx(auVar23,ZEXT816(0) << 0x20,1);
      auVar21 = ZEXT416((uint)((float)(~auVar25._0_4_ & auVar2._0_4_) * (auVar21._0_4_ - fVar36) +
                              fVar36));
    }
    else if (fVar16 <= fVar34 * fVar34) {
      auVar21 = auVar24;
      if (fVar30 * fVar30 < fVar16) {
        auVar20._0_4_ = (SQRT(fVar16) - fVar30) / (fVar34 - fVar30);
        auVar20._4_12_ = SUB6012((undefined1  [60])0x0,0);
        auVar25 = vminss_avx(ZEXT416((uint)_DAT_145fc6ed8),auVar20);
        auVar21 = vcmpss_avx(auVar20,ZEXT416(0) << 0x20,1);
        auVar21 = ZEXT416((uint)((float)(~auVar21._0_4_ & auVar25._0_4_) * (fVar26 - auVar24._0_4_)
                                + auVar24._0_4_));
      }
    }
    else {
      auVar19._0_4_ = (SQRT(fVar16) - fVar34) / (fVar29 - fVar34);
      auVar19._4_12_ = SUB6012((undefined1  [60])0x0,0);
      auVar25 = vminss_avx(ZEXT416((uint)_DAT_145fc6ed8),auVar19);
      auVar21 = vcmpss_avx(auVar19,ZEXT416(0) << 0x20,1);
      auVar21 = ZEXT416((uint)((float)(~auVar21._0_4_ & auVar25._0_4_) * (fVar36 - fVar26) + fVar26)
                       );
    }
  }
  auVar21 = vminss_avx(auVar31._0_16_,auVar21);
  fVar36 = auVar21._0_4_;
LAB_140085912:
  return fVar17 * fVar36;
}

