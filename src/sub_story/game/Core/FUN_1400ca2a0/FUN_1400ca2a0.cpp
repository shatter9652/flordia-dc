// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400ca2a0  size: 675 bytes
// Name:    FUN_1400ca2a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1400ca2a0(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  byte bVar1;
  float fVar2;
  undefined1 auVar3 [16];
  float fVar4;
  float fVar6;
  float fVar7;
  undefined1 auVar5 [16];
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar14 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  
  if ((*(char *)(param_1 + 0x60) == '\x02') || ((*(byte *)(param_3 + 0x1a4) & 0x20) != 0)) {
    return (ulonglong)*(uint *)(param_4 + 0x40);
  }
  fVar2 = *(float *)(param_1 + 0x350);
  fVar17 = 0.0;
  if (((*(byte *)(param_2 + 0x140) & 8) == 0) &&
     ((*(longlong *)(param_2 + 8) == 0 ||
      (fVar17 = 0.0, (*(byte *)(*(longlong *)(param_2 + 8) + 0x236) & 4) == 0)))) {
    auVar5 = vsubps_avx(*(undefined1 (*) [16])(param_4 + 0xa0),
                        *(undefined1 (*) [16])(param_4 + 0x70));
    auVar11 = vpsubw_avx(*(undefined1 (*) [16])(param_4 + 0xa0),
                         *(undefined1 (*) [16])(param_4 + 0x70));
    auVar11 = vblendps_avx(auVar5,auVar11,8);
    auVar5 = vpunpckhwd_avx(auVar11,auVar11);
    fVar17 = *(float *)(param_3 + 0x188);
    auVar5 = vpsrad_avx(auVar5,0x10);
    auVar5 = vcvtdq2ps_avx(auVar5);
    auVar5 = vshufpd_avx(auVar5,auVar5,3);
    fVar4 = auVar5._0_4_ * _DAT_146159c90 + auVar11._0_4_;
    fVar6 = auVar5._4_4_ * _UNK_146159c94 + auVar11._4_4_;
    fVar7 = auVar5._8_4_ * _UNK_146159c98 + auVar11._8_4_;
    fVar8 = auVar5._12_4_ * _UNK_146159c9c + auVar11._12_4_;
    fVar9 = *(float *)(param_3 + 0x188) * _DAT_146159c48;
    auVar11._4_4_ = fVar9;
    auVar11._0_4_ = fVar9;
    auVar11._8_4_ = fVar9;
    auVar11._12_4_ = fVar9;
    auVar11 = vroundps_avx(auVar11,0);
    auVar5._0_4_ = fVar4 * fVar4;
    auVar5._4_4_ = fVar6 * fVar6;
    auVar5._8_4_ = fVar7 * fVar7;
    auVar5._12_4_ = fVar8 * fVar8;
    fVar8 = auVar11._0_4_ * _DAT_14615a1a0 + fVar17;
    fVar15 = auVar11._4_4_ * _DAT_14615a1a0 + fVar17;
    fVar16 = auVar11._8_4_ * _DAT_14615a1a0 + fVar17;
    fVar17 = auVar11._12_4_ * _DAT_14615a1a0 + fVar17;
    auVar3 = vhaddps_avx(auVar5,auVar5);
    fVar9 = fVar8 * fVar8;
    fVar4 = fVar15 * fVar15;
    fVar6 = fVar16 * fVar16;
    fVar7 = fVar17 * fVar17;
    auVar14._0_4_ = (fVar9 * _DAT_146167230 + _DAT_145fc6ed8) * fVar8;
    auVar14._4_4_ = (fVar4 * _DAT_146167230 + _DAT_145fc6ed8) * fVar15;
    auVar14._8_4_ = (fVar6 * _DAT_146167230 + _DAT_145fc6ed8) * fVar16;
    auVar14._12_4_ = (fVar7 * _DAT_146167230 + _DAT_145fc6ed8) * fVar17;
    auVar19._0_4_ = fVar9 * (fVar9 * _DAT_146167238 + _DAT_146167234) + _DAT_145fc6ed8;
    auVar19._4_4_ = fVar4 * (fVar4 * _DAT_146167238 + _DAT_146167234) + _DAT_145fc6ed8;
    auVar19._8_4_ = fVar6 * (fVar6 * _DAT_146167238 + _DAT_146167234) + _DAT_145fc6ed8;
    auVar19._12_4_ = fVar7 * (fVar7 * _DAT_146167238 + _DAT_146167234) + _DAT_145fc6ed8;
    auVar10._0_4_ = (int)auVar11._0_4_;
    auVar10._4_4_ = (int)auVar11._4_4_;
    auVar10._8_4_ = (int)auVar11._8_4_;
    auVar10._12_4_ = (int)auVar11._12_4_;
    auVar12._4_4_ = _DAT_145f43778;
    auVar12._0_4_ = _DAT_145f43778;
    auVar12._8_4_ = _DAT_145f43778;
    auVar12._12_4_ = _DAT_145f43778;
    auVar18._0_4_ = (uint)auVar19._0_4_ ^ _DAT_145fc6f10;
    auVar18._4_4_ = (uint)auVar19._4_4_ ^ _DAT_145fc6f10;
    auVar18._8_4_ = (uint)auVar19._8_4_ ^ _DAT_145fc6f10;
    auVar18._12_4_ = (uint)auVar19._12_4_ ^ _DAT_145fc6f10;
    auVar11 = vpand_avx(auVar10,auVar12);
    auVar5 = vpcmpeqd_avx(auVar11,(undefined1  [16])0x0);
    auVar11 = vblendvps_avx(auVar14,auVar19,auVar5);
    auVar5 = vblendvps_avx(auVar18,auVar14,auVar5);
    auVar10 = vrcpps_avx(auVar11);
    fVar9 = auVar10._0_4_;
    auVar13._0_12_ = ZEXT812(0);
    auVar13._12_4_ = 0;
    auVar10 = vcmpss_avx(ZEXT416((uint)*(float *)(param_3 + 0x188)),auVar13,0);
    auVar12 = vrsqrtss_avx(auVar3,auVar3);
    fVar17 = auVar12._0_4_;
    auVar12 = vcmpss_avx(ZEXT416(_DAT_146159bfc),auVar3,2);
    fVar17 = (float)(~auVar10._0_4_ &
                    (uint)((-((fVar9 * auVar11._0_4_ - _DAT_145fc6ed8) * fVar9) + fVar9) *
                          auVar5._0_4_)) *
             (float)(auVar12._0_4_ &
                    (uint)(((fVar17 * fVar17 * auVar3._0_4_ * _DAT_145fc6f08 + _DAT_145fc6edc) *
                            fVar17 + fVar17) * auVar3._0_4_));
  }
  fVar9 = *(float *)(param_4 + 0x78);
  bVar1 = *(byte *)(param_2 + 0x14c);
  fVar4 = fVar9 - *(float *)(param_2 + 0xb8);
  if ((bVar1 & 0x10) == 0 || (~bVar1 & 1) != 0) {
    if ((bVar1 & 0x20) == 0) goto LAB_1400ca478;
LAB_1400ca504:
    if ((*(byte *)(param_2 + 0xf0) & 8) == 0) goto LAB_1400ca478;
  }
  else {
    if ((bVar1 & 0x20) == 0) goto LAB_1400ca478;
    if ((bVar1 & 0xc) != 0) goto LAB_1400ca504;
  }
  if ((((*(byte *)(param_2 + 0x140) & 8) == 0) && ((*(byte *)(param_2 + 0xe1) & 0x40) == 0)) &&
     (*(longlong *)(param_2 + 8) != 0)) {
    auVar11 = vminss_avx(ZEXT416((uint)fVar4),ZEXT416(*(uint *)(param_4 + 0x40)));
    fVar4 = auVar11._0_4_;
  }
  else {
    auVar11 = vminss_avx(ZEXT416((uint)fVar4),ZEXT416((uint)(fVar9 - *(float *)(param_3 + 0xb8))));
    fVar4 = auVar11._0_4_;
  }
LAB_1400ca478:
  if (((*(float *)(param_2 + 0x144) != 0.0) || (NAN(*(float *)(param_2 + 0x144)))) ||
     ((float)((uint)fVar17 ^ _DAT_145fc6f10) <=
      (fVar9 + *(float *)(param_1 + 0x354)) - (fVar2 + *(float *)(param_4 + 0xa8)))) {
    fVar2 = (fVar9 + fVar17 + *(float *)(param_1 + 0x354)) - *(float *)(param_4 + 0xa8);
  }
  auVar11 = vmaxss_avx(ZEXT416((uint)fVar2),ZEXT416((uint)(fVar4 * _DAT_146159ca4)));
  return auVar11._0_8_;
}

