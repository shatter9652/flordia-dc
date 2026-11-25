// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140166520  size: 622 bytes
// Name:    FUN_140166520
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1402c59f0, FUN_140347fd0, FUN_140167c10
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140166520(longlong param_1,float param_2)

{
  int *piVar1;
  int iVar2;
  float fVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auVar7 [16];
  undefined8 uVar8;
  float fVar9;
  longlong lVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auVar13 [16];
  float fVar14;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar15 [16];
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar23 [16];
  float fVar25;
  float fVar26;
  undefined1 auVar24 [64];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 in_ZMM9 [64];
  undefined1 in_ZMM10 [64];
  undefined1 in_ZMM11 [64];
  undefined8 auStack_70 [7];
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [16];
  undefined1 auStack_18 [16];
  
  auStack_18 = in_ZMM11._0_16_;
  auStack_28 = in_ZMM10._0_16_;
  auStack_38 = in_ZMM9._0_16_;
  auVar24 = ZEXT1664(*(undefined1 (*) [16])(*(longlong *)(param_1 + 0x100) + 0xa0));
  FUN_140347fd0(auStack_70);
  lVar10 = _DAT_149fe6500;
  fVar9 = _DAT_146161678;
  uVar8 = _DAT_146159c90;
  lVar11 = *(longlong *)(param_1 + 0x450);
  if (lVar11 != 0) {
    auVar13 = vshufps_avx(auVar24._0_16_,auVar24._0_16_,0xff);
    bVar12 = false;
    fVar3 = *(float *)(*(longlong *)(param_1 + 0x100) + 0x78);
    fVar14 = auVar13._0_4_ * _DAT_146159bd4 + _DAT_145fc6ed8;
    fVar16 = auVar13._4_4_ * _DAT_146159bd4 + _DAT_145fc6ed8;
    fVar17 = auVar13._8_4_ * _DAT_146159bd4 + _DAT_145fc6ed8;
    fVar18 = auVar13._12_4_ * _DAT_146159bd4 + _DAT_145fc6ed8;
    fVar19 = auVar13._0_4_ * _DAT_14615a6b4 + _DAT_145fc6ed8;
    fVar20 = auVar13._4_4_ * _DAT_14615a6b4 + _DAT_145fc6ed8;
    fVar21 = auVar13._8_4_ * _DAT_14615a6b4 + _DAT_145fc6ed8;
    fVar22 = auVar13._12_4_ * _DAT_14615a6b4 + _DAT_145fc6ed8;
    auVar13._0_4_ = fVar19 * fVar19;
    auVar13._4_4_ = fVar20 * fVar20;
    auVar13._8_4_ = fVar21 * fVar21;
    auVar13._12_4_ = fVar22 * fVar22;
    auVar15._0_4_ = fVar14 * fVar14;
    auVar15._4_4_ = fVar16 * fVar16;
    auVar15._8_4_ = fVar17 * fVar17;
    auVar15._12_4_ = fVar18 * fVar18;
    do {
      fVar14 = _DAT_14614f808;
      if (*(char *)(lVar11 + 0x51c) < '\0') {
        LOCK();
        piVar1 = (int *)(*(longlong *)(lVar10 + 0x198) + 0x14);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + 1;
        UNLOCK();
        if (1 < iVar2 + 1U) goto LAB_1401666dd;
LAB_140166751:
        *(byte *)(lVar11 + 0x51a) = *(byte *)(lVar11 + 0x51a) | 0x20;
        bVar12 = true;
      }
      else {
        lVar4 = *(longlong *)(lVar11 + 0x100);
        lVar5 = *(longlong *)(param_1 + 0x100);
        auVar23 = *(undefined1 (*) [16])(lVar4 + 0x80);
        lVar6 = *(longlong *)(*(longlong *)(lVar4 + 8) + 0x20);
        auVar27 = vpunpckhwd_avx(auVar23,auVar23);
        fVar16 = *(float *)(lVar6 + 0x44);
        fVar17 = *(float *)(lVar6 + 0x48);
        auVar27 = vpsrad_avx(auVar27,0x10);
        auVar27 = vcvtdq2ps_avx(auVar27);
        auVar7 = vshufpd_avx(auVar27,auVar27,3);
        fVar22 = (float)uVar8;
        fVar25 = (float)((ulonglong)uVar8 >> 0x20);
        fVar18 = *(float *)(lVar6 + 0x40);
        auVar27 = *(undefined1 (*) [16])(lVar5 + 0x80);
        lVar6 = *(longlong *)(*(longlong *)(lVar5 + 8) + 0x20);
        fVar19 = *(float *)(lVar6 + 0x48);
        auVar28 = vpunpckhwd_avx(auVar27,auVar27);
        auVar28 = vpsrad_avx(auVar28,0x10);
        auVar28 = vcvtdq2ps_avx(auVar28);
        fVar20 = *(float *)(lVar6 + 0x44);
        auVar28 = vshufpd_avx(auVar28,auVar28,3);
        fVar21 = *(float *)(lVar6 + 0x40);
        fVar22 = fVar19 * *(float *)(lVar5 + 0x70) +
                 fVar20 * *(float *)(lVar5 + 0x60) +
                 fVar21 * *(float *)(lVar5 + 0x50) + fVar22 * auVar28._0_4_ + auVar27._0_4_ +
                 (-(fVar17 * *(float *)(lVar4 + 0x70)) -
                 (fVar16 * *(float *)(lVar4 + 0x60) +
                 fVar18 * *(float *)(lVar4 + 0x50) + fVar22 * auVar7._0_4_ + auVar23._0_4_));
        fVar25 = fVar19 * *(float *)(lVar5 + 0x74) +
                 fVar20 * *(float *)(lVar5 + 100) +
                 fVar21 * *(float *)(lVar5 + 0x54) + fVar25 * auVar28._4_4_ + auVar27._4_4_ +
                 (-(fVar17 * *(float *)(lVar4 + 0x74)) -
                 (fVar16 * *(float *)(lVar4 + 100) +
                 fVar18 * *(float *)(lVar4 + 0x54) + fVar25 * auVar7._4_4_ + auVar23._4_4_));
        fVar26 = fVar19 * *(float *)(lVar5 + 0x78) +
                 fVar20 * *(float *)(lVar5 + 0x68) +
                 fVar21 * *(float *)(lVar5 + 0x58) + auVar28._8_4_ * 0.0 + auVar27._8_4_ +
                 (-(fVar17 * *(float *)(lVar4 + 0x78)) -
                 (fVar16 * *(float *)(lVar4 + 0x68) +
                 fVar18 * *(float *)(lVar4 + 0x58) + auVar7._8_4_ * 0.0 + auVar23._8_4_));
        fVar16 = fVar19 * *(float *)(lVar5 + 0x7c) +
                 fVar20 * *(float *)(lVar5 + 0x6c) +
                 fVar21 * *(float *)(lVar5 + 0x5c) + auVar28._12_4_ * 0.0 + auVar27._12_4_ +
                 (-(fVar17 * *(float *)(lVar4 + 0x7c)) -
                 (fVar16 * *(float *)(lVar4 + 0x6c) +
                 fVar18 * *(float *)(lVar4 + 0x5c) + auVar7._12_4_ * 0.0 + auVar23._12_4_));
        auVar23._0_4_ = fVar22 * fVar22;
        auVar23._4_4_ = fVar25 * fVar25;
        auVar23._8_4_ = fVar26 * fVar26;
        auVar23._12_4_ = fVar16 * fVar16;
        auVar23 = vblendps_avx(auVar23,ZEXT416(0) << 0x20,8);
        auVar23 = vhaddps_avx(auVar23,auVar23);
        auVar27 = vhaddps_avx(auVar23,auVar23);
        auVar23 = vcmpps_avx(auVar13,auVar27,1);
        if ((auVar23 != (undefined1  [16])0x0) ||
           ((fVar3 < fVar9 && ((*(byte *)(lVar11 + 0x519) & 0x40) != 0)))) goto LAB_140166751;
        auVar23 = vcmpps_avx(auVar15,auVar27,1);
        if (auVar23 == (undefined1  [16])0x0) {
          *(undefined4 *)(lVar11 + 0x470) = 0;
        }
        else {
          fVar16 = param_2 + *(float *)(lVar11 + 0x470);
          *(float *)(lVar11 + 0x470) = fVar16;
          if (fVar14 < fVar16) goto LAB_140166751;
        }
      }
LAB_1401666dd:
      lVar11 = *(longlong *)(lVar11 + 0x438);
    } while (lVar11 != 0);
    if (bVar12) {
      FUN_140167c10(*(undefined8 *)(lVar10 + 0x198),param_1);
    }
  }
  FUN_1402c59f0(auStack_70[0]);
  return;
}

