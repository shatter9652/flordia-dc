// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140054200  size: 51 bytes
// Name:    FUN_140054200
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Possible PIC construction at 0x00014259f834: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00014259f839) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_140054200(undefined8 param_1,float param_2)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  bool bVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 extraout_var [56];
  undefined1 extraout_var_00 [56];
  undefined1 extraout_var_01 [56];
  undefined1 auVar16 [64];
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar35;
  undefined1 auVar36 [64];
  undefined1 auVar37 [64];
  undefined1 auVar38 [16];
  undefined1 auVar39 [64];
  float fVar40;
  undefined8 uVar41;
  undefined1 auVar42 [64];
  undefined1 extraout_var_02 [56];
  undefined1 auVar23 [32];
  
  fVar13 = (float)func_0x000144e78800();
  auVar22 = ZEXT416((uint)(param_2 - fVar13) & _DAT_145fc6f4c);
  if (lRam0000000149e53060 == 0) {
    return 0;
  }
  if (cRam0000000149e53070 != '\x04') {
    if ((bRam0000000149e53071 & 1) != 0) {
      auVar27 = vminss_avx(ZEXT416(uRam0000000149e5305c),auVar22);
      auVar22 = vcmpss_avx(auVar22,ZEXT416(uRam0000000149e53058),1);
      auVar22 = vblendvps_avx(auVar27,ZEXT416(uRam0000000149e53058),auVar22);
    }
    fVar13 = auVar22._0_4_;
    if (cRam0000000149e53070 == '\x11') {
      uVar6 = 0;
      if ((lRam0000000149e53060 != 0) &&
         (uVar7 = *(uint *)(lRam0000000149e53060 + 0x10), uVar7 != 0)) {
        fVar24 = *(float *)(lRam0000000149e53060 + 0x14);
        if (fVar13 <= fVar24) {
          uVar6 = (ulonglong)*(uint *)(lRam0000000149e53060 + 0x18);
        }
        else {
          lVar1 = lRam0000000149e53060 + 0x14;
          fVar40 = *(float *)(lVar1 + (ulonglong)(uVar7 - 1) * 8);
          if (fVar40 <= fVar13) {
            uVar6 = (ulonglong)*(uint *)(lRam0000000149e53060 + 0x18 + (ulonglong)(uVar7 - 1) * 8);
          }
          else {
            uVar6 = (ulonglong)uVar7;
            if ((uVar7 == 1) || (0.0 <= fVar13 - fVar40)) {
              auVar33._0_12_ = ZEXT812(0);
              auVar33._12_4_ = 0;
              auVar27 = vcmpss_avx(auVar33,ZEXT416((uint)(fVar13 - fVar40)),6);
              auVar22 = vblendvps_avx(ZEXT416((uint)fVar40),auVar22,auVar27);
              auVar27 = vcmpss_avx(auVar33,ZEXT416((uint)(fVar24 - auVar22._0_4_)),2);
              auVar22 = vblendvps_avx(auVar22,ZEXT416((uint)fVar24),auVar27);
              fVar24 = auVar22._0_4_;
              if (uVar7 == 1) {
                uVar7 = 1;
              }
              else {
                lVar11 = 0;
                uVar8 = 1;
                do {
                  fVar13 = *(float *)(lRam0000000149e53060 + 0x1c + lVar11 * 8);
                  uVar7 = (uint)(lVar11 + 1);
                  if (fVar13 < fVar24) {
                    uVar7 = uVar8;
                  }
                } while ((fVar13 <= fVar24) &&
                        (bVar12 = uVar6 - 2 != lVar11, lVar11 = lVar11 + 1, uVar8 = uVar7, bVar12));
              }
            }
            else {
              if (fVar24 - fVar13 < 0.0) {
                fVar24 = fVar13;
              }
              uVar7 = 1;
              lVar11 = 0;
              do {
                fVar13 = *(float *)(lRam0000000149e53060 + 0x1c + lVar11 * 8);
                uVar8 = (uint)(lVar11 + 1);
                if (fVar13 < fVar24) {
                  uVar8 = uVar7;
                }
                uVar7 = uVar8;
              } while ((fVar13 <= fVar24) &&
                      (bVar12 = uVar6 - 2 != lVar11, lVar11 = lVar11 + 1, bVar12));
            }
            uVar4 = (ulonglong)uVar7;
            uVar10 = (ulonglong)(uVar7 - 1);
            fVar13 = *(float *)(lVar1 + uVar4 * 8);
            fVar40 = *(float *)(lVar1 + uVar10 * 8);
            if ((fVar13 != fVar40) || (NAN(fVar13) || NAN(fVar40))) {
              lVar1 = lRam0000000149e53060 + 0x18 + uVar6 * 8;
              fVar18 = _DAT_145fc6f00;
              if (_DAT_145fc6f00 <= fVar13 - fVar40) {
                fVar18 = fVar13 - fVar40;
              }
              fVar35 = *(float *)(lVar1 + uVar10 * 8);
              fVar31 = *(float *)(lRam0000000149e53060 + 0x18 + uVar10 * 8);
              fVar18 = (fVar24 - fVar40) / fVar18;
              fVar17 = *(float *)(lVar1 + 4 + uVar10 * 8);
              fVar40 = fVar18 * (fVar35 - fVar40) + fVar40;
              fVar13 = (fVar18 * (fVar13 - fVar35) + fVar35) - fVar40;
              fVar35 = _DAT_145fc6f00;
              if (_DAT_145fc6f00 <= fVar13) {
                fVar35 = fVar13;
              }
              fVar35 = (fVar24 - fVar40) / fVar35;
              fVar13 = _DAT_145fc6ed8;
              if (fVar35 <= _DAT_145fc6ed8) {
                fVar13 = fVar35;
              }
              fVar31 = fVar18 * (fVar17 - fVar31) + fVar31;
              fVar24 = 0.0;
              if (0.0 <= fVar35) {
                fVar24 = fVar13;
              }
              uVar6 = (ulonglong)
                      (uint)(fVar24 * ((fVar18 * (*(float *)(lRam0000000149e53060 + 0x18 + uVar4 * 8
                                                            ) - fVar17) + fVar17) - fVar31) + fVar31
                            );
            }
            else {
              if (fVar24 < fVar13) {
                uVar4 = uVar10;
              }
              uVar6 = (ulonglong)*(uint *)(lRam0000000149e53060 + 0x18 + uVar4 * 8);
            }
          }
        }
      }
      return uVar6;
    }
    switch(cRam0000000149e53070) {
    case '\x01':
      return (ulonglong)(uint)fRam0000000149e53040;
    case '\x02':
      break;
    case '\x03':
      break;
    default:
      return 0;
    case '\x05':
      auVar36 = ZEXT464((uint)_DAT_145fc6ed8);
      auVar37 = ZEXT464((uint)fRam0000000149e53044);
      auVar27 = vcmpss_avx(ZEXT816(0),ZEXT416((uint)fRam0000000149e53040),2);
      auVar22 = vblendvps_avx(ZEXT416((uint)(_DAT_145fc6ed8 - fVar13)),auVar22,auVar27);
      fVar13 = auVar22._0_4_;
      uVar6 = (ulonglong)(uint)(fVar13 * _DAT_146159bdc);
      if ((_DAT_145fc6ed8 < fVar13) || (fVar13 < 0.0)) {
        auVar34._4_4_ = _DAT_146159bdc;
        auVar34._0_4_ = _DAT_146159bdc;
        auVar34._8_4_ = _DAT_146159bdc;
        auVar34._12_4_ = _DAT_146159bdc;
        auVar27 = vcmpss_avx(ZEXT416((uint)_DAT_145fc6ed8),auVar22,5);
        auVar20 = vcmpss_avx(auVar22,ZEXT816(0),5);
        auVar22 = vblendvps_avx(auVar34,ZEXT416((uint)(fVar13 * _DAT_146159bdc)),auVar27);
        uVar6 = CONCAT44(auVar20._4_4_ & auVar22._4_4_,auVar20._0_4_ & auVar22._0_4_);
      }
      auVar16._0_8_ = func_0x000145f407b0(uVar6);
      auVar16._8_56_ = extraout_var_02;
      auVar29._0_12_ = ZEXT812(0);
      auVar29._12_4_ = 0;
      auVar22 = vcmpss_avx(auVar29,auVar37._0_16_,2);
      auVar22 = vblendvps_avx(ZEXT416((uint)(auVar36._0_4_ - (float)auVar16._0_8_)),auVar16._0_16_,
                              auVar22);
      return auVar22._0_8_;
    case '\x06':
      auVar22 = vroundss_avx(auVar22,auVar22,9);
      iVar3 = (int)auVar22._0_4_;
      iVar5 = *(ushort *)(lRam0000000149e53060 + 0x10) - 1;
      if (iVar3 < iVar5) {
        iVar5 = iVar3;
      }
      iVar9 = 0;
      if (-1 < iVar3) {
        iVar9 = iVar5;
      }
      return (ulonglong)*(uint *)(lRam0000000149e53060 + 0x14 + (longlong)iVar9 * 4);
    case '\a':
      auVar38._0_12_ = ZEXT812(0);
      auVar38._12_4_ = 0;
      auVar37 = ZEXT1664(auVar38);
      auVar27 = vcmpss_avx(auVar38,ZEXT416((uint)fRam0000000149e53040),2);
      auVar22 = vblendvps_avx(ZEXT416((uint)(_DAT_145fc6ed8 - fVar13)),auVar22,auVar27);
      fVar13 = _DAT_145fc6ed8;
      auVar42._0_8_ = func_0x000145f408b0(auVar22._0_8_,fRam0000000149e53048);
      auVar42._8_56_ = extraout_var;
      auVar22 = vcmpss_avx(auVar37._0_16_,ZEXT416((uint)fRam0000000149e53044),2);
      auVar22 = vblendvps_avx(ZEXT416((uint)(fVar13 - (float)auVar42._0_8_)),auVar42._0_16_,auVar22)
      ;
      return auVar22._0_8_;
    case '\b':
      auVar37 = ZEXT1664(auVar22);
      uVar41 = CONCAT44(_DAT_145fc6f10,(uint)fRam0000000149e53040 ^ _DAT_145fc6f10);
      auVar36 = ZEXT1664(CONCAT412(_DAT_145fc6f10,CONCAT48(_DAT_145fc6f10,uVar41)));
      fVar13 = fRam0000000149e53044;
      fVar24 = (float)func_0x000145f40780(uVar41);
      uVar6 = func_0x000145f40780(auVar36._0_4_ * auVar37._0_4_);
      if (fVar13 < 0.0) {
        auVar15._0_4_ = ((float)uVar6 - fVar24) / (_DAT_145fc6ed8 - fVar24);
        auVar15._4_12_ = SUB6012((undefined1  [60])0x0,0);
        uVar6 = auVar15._0_8_;
      }
      return uVar6;
    case '\t':
      fVar13 = fRam0000000149e53040 * fVar13;
      auVar37 = ZEXT1664(auVar22);
      auVar36 = ZEXT464((uint)fRam0000000149e53044);
      fVar24 = fRam0000000149e53040;
      fVar40 = (float)func_0x000145f40780(fRam0000000149e53040 *
                                          (float)((uint)fRam0000000149e53040 ^ _DAT_145fc6f10),
                                          fRam0000000149e53044);
      auVar42 = ZEXT1264(ZEXT812(0));
      auVar39._0_8_ = func_0x000145f40780(fVar13 * (-(fVar24 * auVar37._0_4_) - 0.0));
      auVar39._8_56_ = extraout_var_00;
      auVar19._0_4_ = ((float)auVar39._0_8_ - fVar40) / (_DAT_145fc6ed8 - fVar40);
      auVar19._4_12_ = SUB6012((undefined1  [60])0x0,0);
      auVar22 = vcmpss_avx(auVar42._0_16_,auVar36._0_16_,2);
      auVar22 = vblendvps_avx(auVar19,auVar39._0_16_,auVar22);
      return auVar22._0_8_;
    case '\n':
      auVar37 = ZEXT464((uint)fRam0000000149e53040);
      fVar24 = fRam0000000149e53050;
      if (0.0 <= fRam0000000149e53048) {
        fVar24 = fRam0000000149e53048 - fRam0000000149e53044;
      }
      fVar40 = fRam0000000149e5304c;
      fVar13 = (float)func_0x000145f407b0((fVar24 * fVar13 + fRam0000000149e53044) * _DAT_146159b38)
      ;
      auVar36._4_60_ = auVar37._4_60_;
      auVar36._0_4_ = fVar13 * auVar37._0_4_ + fVar40;
      uVar6 = (ulonglong)(uint)_DAT_145fc6ed8;
      if (auVar36._0_4_ <= _DAT_145fc6ed8) {
        uVar6 = auVar36._0_8_;
      }
      uVar4 = 0;
      if (0.0 <= auVar36._0_4_) {
        uVar4 = uVar6;
      }
      uVar6 = auVar36._0_8_;
      if (fRam0000000149e53054 < 0.0) {
        uVar6 = uVar4;
      }
      return uVar6;
    case '\v':
      auVar22 = vinsertps_avx(ZEXT416((uint)(fRam0000000149e53040 * fVar13)),
                              ZEXT416((uint)fRam0000000149e53040),0x10);
      auVar25._4_4_ = _DAT_145fc6ed8;
      auVar25._0_4_ = _DAT_145fc6ed8;
      auVar25._8_4_ = _DAT_145fc6ed8;
      auVar25._12_4_ = _DAT_145fc6ed8;
      auVar14._0_4_ = auVar22._0_4_ + _DAT_145fc6ed8;
      auVar14._4_4_ = auVar22._4_4_ + _DAT_145fc6ed8;
      auVar14._8_4_ = auVar22._8_4_ + _DAT_145fc6ed8;
      auVar14._12_4_ = auVar22._12_4_ + _DAT_145fc6ed8;
      auVar27 = vdivps_avx(auVar25,auVar14);
      auVar22 = vhsubps_avx(auVar27,auVar27);
      auVar20 = vmovshdup_avx(auVar27);
      auVar26._0_4_ = auVar22._0_4_ / (_DAT_145fc6ed8 - auVar20._0_4_);
      auVar26._4_12_ = auVar22._4_12_;
      auVar22 = vcmpss_avx(ZEXT816(0) << 0x20,ZEXT416((uint)fRam0000000149e53044),2);
      auVar22 = vblendvps_avx(auVar26,auVar27,auVar22);
      return auVar22._0_8_;
    case '\f':
      fVar24 = fRam0000000149e53040 * fVar13 + _DAT_145fc6ed8;
      fVar13 = _DAT_145fc6ed8 / (fRam0000000149e53040 + _DAT_145fc6ed8);
      fVar24 = _DAT_145fc6ed8 / (fVar24 * fVar24);
      fVar13 = fVar13 * fVar13;
      auVar27._0_4_ = (fVar24 - fVar13) / (_DAT_145fc6ed8 - fVar13);
      auVar27._4_12_ = SUB6012((undefined1  [60])0x0,0);
      auVar22 = vcmpss_avx(ZEXT816(0),ZEXT416((uint)fRam0000000149e53044),2);
      auVar22 = vblendvps_avx(auVar27,ZEXT416((uint)fVar24),auVar22);
      return auVar22._0_8_;
    case '\r':
      fVar17 = fVar13 * _UNK_14615eb80 + _UNK_14615eb84;
      fVar24 = fVar17 * fVar17 * fVar17;
      fVar40 = fVar24 * fVar17;
      fVar18 = fVar40 * fVar17;
      fVar35 = fVar18 * fVar17;
      fVar31 = fVar35 * fVar17;
      auVar22 = vinsertps_avx(ZEXT416((uint)fVar17),ZEXT416((uint)(fVar17 * fVar17)),0x10);
      auVar27 = vinsertps_avx(ZEXT416((uint)fVar18),ZEXT416((uint)fVar35),0x10);
      auVar22 = vinsertps_avx(auVar22,ZEXT416((uint)fVar24),0x20);
      auVar27 = vinsertps_avx(auVar27,ZEXT416((uint)fVar31),0x20);
      auVar32._0_12_ = ZEXT812(0);
      auVar32._12_4_ = 0;
      auVar22 = vinsertps_avx(auVar22,ZEXT416((uint)fVar40),0x30);
      auVar27 = vinsertps_avx(auVar27,ZEXT416((uint)(fVar31 * fVar17)),0x30);
      auVar20._0_4_ = auVar22._0_4_ * _UNK_14615eba0;
      auVar20._4_4_ = auVar22._4_4_ * _UNK_14615eba4;
      auVar20._8_4_ = auVar22._8_4_ * _UNK_14615eba8;
      auVar20._12_4_ = auVar22._12_4_ * _UNK_14615ebac;
      auVar23._16_4_ = auVar27._0_4_ * _UNK_14615ebb0;
      auVar23._0_16_ = auVar20;
      auVar23._20_4_ = auVar27._4_4_ * _UNK_14615ebb4;
      auVar23._24_4_ = auVar27._8_4_ * _UNK_14615ebb8;
      auVar23._28_4_ = auVar27._12_4_ * _UNK_14615ebbc;
      auVar22 = vhaddps_avx(auVar23._16_16_,auVar20);
      auVar20 = vhaddps_avx(auVar22,auVar22);
      auVar22 = vcmpss_avx(auVar32,ZEXT416((uint)(fVar13 + _UNK_14615ebc4)),2);
      auVar27 = vcmpss_avx(auVar32,ZEXT416((uint)(fVar13 + _UNK_14615da00)),2);
      auVar20 = vhaddps_avx(auVar20,auVar20);
      auVar28._4_4_ = _DAT_14615af00;
      auVar28._0_4_ = _DAT_14615af00;
      auVar28._8_4_ = _DAT_14615af00;
      auVar28._12_4_ = _DAT_14615af00;
      auVar22 = vblendvps_avx(ZEXT416(auVar22._0_4_ & (uint)(auVar20._0_4_ + _UNK_14615ebc0)),
                              auVar28,auVar27);
      return auVar22._0_8_;
    case '\x0e':
      auVar39 = ZEXT464((uint)fRam0000000149e53040);
      auVar36 = ZEXT464((uint)fRam0000000149e53044);
      auVar37._0_8_ = FUN_14259fa00(auVar22._0_8_,fRam0000000149e53044);
      auVar37._8_56_ = extraout_var_01;
      auVar22._0_12_ = ZEXT812(0);
      auVar22._12_4_ = 0;
      auVar27 = vminss_avx(auVar37._0_16_,auVar39._0_16_);
      auVar22 = vcmpss_avx(auVar36._0_16_,auVar22,4);
      auVar22 = vblendvps_avx(auVar27,ZEXT416((uint)(auVar27._0_4_ - auVar39._0_4_)),auVar22);
      return auVar22._0_8_;
    }
    auVar27 = vminss_avx(ZEXT416((uint)fRam0000000149e5304c),auVar22);
    auVar22 = vcmpss_avx(auVar22,ZEXT416((uint)fRam0000000149e53048),1);
    auVar22 = vblendvps_avx(auVar27,ZEXT416((uint)fRam0000000149e53048),auVar22);
    auVar2._4_12_ = auVar22._4_12_;
    auVar2._0_4_ = fRam0000000149e53040 * auVar22._0_4_ + fRam0000000149e53044;
    return auVar2._0_8_;
  }
  if (*(int *)(lRam0000000149e53060 + 0x10) == 3) {
    auVar27 = vminss_avx(ZEXT416(uRam0000000149e5305c),auVar22);
    auVar22 = vcmpss_avx(auVar22,ZEXT416(uRam0000000149e53058),1);
    auVar22 = vblendvps_avx(auVar27,ZEXT416(uRam0000000149e53058),auVar22);
    fVar13 = auVar22._0_4_;
    auVar22 = vcmpss_avx(ZEXT816(0),ZEXT416((uint)(fVar13 - fRam0000000149e53048)),2);
    auVar22 = vblendvps_avx(ZEXT416((uint)(fVar13 * fRam0000000149e53040 + fRam0000000149e53044)),
                            ZEXT416((uint)(fVar13 * fRam0000000149e5304c + fRam0000000149e53050)),
                            auVar22);
    return auVar22._0_8_;
  }
  if ((bRam0000000149e53071 & 1) != 0) {
    auVar27 = vminss_avx(ZEXT416(uRam0000000149e5305c),auVar22);
    auVar22 = vcmpss_avx(auVar22,ZEXT416(uRam0000000149e53058),1);
    auVar22 = vblendvps_avx(auVar27,ZEXT416(uRam0000000149e53058),auVar22);
  }
  uVar7 = *(uint *)(lRam0000000149e53060 + 0x10);
  fVar13 = *(float *)(lRam0000000149e53060 + 0x14 + (ulonglong)(uVar7 - 1) * 8);
  auVar27 = vcmpss_avx(ZEXT816(0),ZEXT416((uint)(auVar22._0_4_ - fVar13)),2);
  auVar22 = vblendvps_avx(auVar22,ZEXT416((uint)fVar13),auVar27);
  auVar27 = vcmpss_avx(ZEXT816(0),
                       ZEXT416((uint)(*(float *)(lRam0000000149e53060 + 0x14) - auVar22._0_4_)),2);
  auVar22 = vblendvps_avx(auVar22,ZEXT416((uint)*(float *)(lRam0000000149e53060 + 0x14)),auVar27);
  if ((ulonglong)uVar7 < 2) {
    uVar7 = 1;
  }
  else {
    uVar6 = 1;
    do {
      if (auVar22._0_4_ <= *(float *)(lRam0000000149e53060 + 0x14 + uVar6 * 8)) {
        uVar7 = (uint)uVar6;
        break;
      }
      uVar6 = uVar6 + 1;
    } while (uVar7 != uVar6);
  }
  uVar6 = *(ulonglong *)(lRam0000000149e53060 + 0x14 + (ulonglong)(uVar7 - 1) * 8);
  auVar21._8_8_ = 0;
  auVar21._0_8_ = uVar6;
  auVar30._8_8_ = 0;
  auVar30._0_8_ = *(ulonglong *)(lRam0000000149e53060 + 0x14 + (ulonglong)uVar7 * 8);
  auVar28 = vsubps_avx(auVar30,auVar21);
  auVar27 = vmovshdup_avx(auVar21);
  auVar20 = vmovshdup_avx(auVar28);
  return (ulonglong)
         (uint)((auVar20._0_4_ * (auVar22._0_4_ - (float)uVar6)) / auVar28._0_4_ + auVar27._0_4_);
}

