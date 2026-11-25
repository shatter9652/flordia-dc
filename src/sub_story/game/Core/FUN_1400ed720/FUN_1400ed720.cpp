// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400ed720  size: 632 bytes
// Name:    FUN_1400ed720
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1447dd0e0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1400ed720(uint param_1,longlong param_2,int param_3,longlong param_4,longlong param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  float fVar3;
  byte bVar6;
  float fVar7;
  float fVar8;
  byte bVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  longlong lVar12;
  float *pfVar13;
  longlong lVar14;
  undefined1 (*pauVar15) [16];
  ulonglong unaff_RBP;
  longlong lVar16;
  undefined1 (*pauVar17) [16];
  int iVar18;
  longlong lVar19;
  longlong lVar20;
  int iVar21;
  longlong lVar22;
  int *piVar23;
  ulonglong uVar24;
  undefined1 auVar25 [16];
  float fVar26;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 auVar27 [16];
  float fVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  int iStack_6c;
  float fVar4;
  float fVar5;
  
  fVar8 = _DAT_146159ec4;
  uVar10 = 0;
  if ((0 < param_3) && (0 < (int)param_1)) {
    iVar18 = 0;
    auVar25._0_12_ = ZEXT812(0);
    auVar25._12_4_ = 0;
    iVar21 = 0;
    do {
      uVar24 = 0;
      iStack_6c = 0;
      lVar20 = param_2;
      do {
        bVar9 = *(byte *)(param_5 + uVar24 * 0x80);
        unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),bVar9);
        if ((bVar9 & 1) == 0) {
          piVar23 = (int *)&UNK_14667bfb8;
          lVar19 = 0;
          lVar22 = uVar24 * 0x2c + param_2;
          do {
            fVar7 = _DAT_146159ca4;
            lVar12 = (ulonglong)*(ushort *)(lVar20 + lVar19 * 2) * 0x10;
            uVar10 = (ulonglong)*(ushort *)(lVar22 + (longlong)piVar23[-2] * 2) * 0x10;
            lVar14 = (ulonglong)*(ushort *)(lVar22 + (longlong)piVar23[-1] * 2) * 0x10;
            auVar1 = *(undefined1 (*) [16])(param_4 + uVar10);
            lVar16 = (ulonglong)*(ushort *)(lVar22 + (longlong)*piVar23 * 2) * 0x10;
            auVar32 = vsubps_avx(*(undefined1 (*) [16])(param_4 + lVar14),auVar1);
            auVar27 = vshufps_avx(auVar32,auVar32,0xc9);
            auVar32 = vshufps_avx(auVar32,auVar32,0xd2);
            auVar2 = vsubps_avx(*(undefined1 (*) [16])(param_4 + lVar16),auVar1);
            auVar33 = vshufps_avx(auVar2,auVar2,0xd2);
            auVar2 = vshufps_avx(auVar2,auVar2,0xc9);
            fVar26 = -(auVar32._0_4_ * auVar2._0_4_) + auVar27._0_4_ * auVar33._0_4_;
            fVar28 = -(auVar32._4_4_ * auVar2._4_4_) + auVar27._4_4_ * auVar33._4_4_;
            fVar29 = -(auVar32._8_4_ * auVar2._8_4_) + auVar27._8_4_ * auVar33._8_4_;
            fVar30 = -(auVar32._12_4_ * auVar2._12_4_) + auVar27._12_4_ * auVar33._12_4_;
            auVar27 = *(undefined1 (*) [16])(param_4 + lVar12);
            auVar1 = vsubps_avx(auVar27,auVar1);
            auVar32._0_4_ = fVar26 * auVar1._0_4_;
            auVar32._4_4_ = fVar28 * auVar1._4_4_;
            auVar32._8_4_ = fVar29 * auVar1._8_4_;
            auVar32._12_4_ = fVar30 * auVar1._12_4_;
            auVar1 = vblendps_avx(auVar32,auVar25,8);
            auVar1 = vhaddps_avx(auVar1,auVar1);
            auVar1 = vhaddps_avx(auVar1,auVar1);
            if (auVar1._0_4_ < fVar8) {
              auVar33._0_4_ = fVar26 * fVar26;
              auVar33._4_4_ = fVar28 * fVar28;
              auVar33._8_4_ = fVar29 * fVar29;
              auVar33._12_4_ = fVar30 * fVar30;
              pfVar13 = (float *)(lVar12 + param_4);
              pauVar15 = (undefined1 (*) [16])(lVar14 + param_4);
              pauVar17 = (undefined1 (*) [16])(lVar16 + param_4);
              iStack_6c = iStack_6c + 1;
              auVar32 = vblendps_avx(auVar33,ZEXT816(0) << 0x20,8);
              auVar32 = vhaddps_avx(auVar32,auVar32);
              auVar32 = vhaddps_avx(auVar32,auVar32);
              auVar32 = vmaxss_avx(auVar32,ZEXT416(_DAT_14615a034));
              fVar31 = (fVar8 - auVar1._0_4_) / auVar32._0_4_;
              fVar3 = fVar31 * fVar28 * _DAT_146159cc4;
              fVar4 = fVar31 * fVar29 * _DAT_146159cc4;
              fVar5 = fVar31 * fVar30 * _DAT_146159cc4;
              *pfVar13 = fVar31 * fVar26 * _DAT_146159cc4 + auVar27._0_4_;
              pfVar13[1] = fVar3 + auVar27._4_4_;
              pfVar13[2] = fVar4 + auVar27._8_4_;
              pfVar13[3] = fVar5 + auVar27._12_4_;
              auVar27._0_4_ = fVar31 * fVar26 * fVar7;
              auVar27._4_4_ = fVar31 * fVar28 * fVar7;
              auVar27._8_4_ = fVar31 * fVar29 * fVar7;
              auVar27._12_4_ = fVar31 * fVar30 * fVar7;
              auVar1 = vsubps_avx(*(undefined1 (*) [16])(uVar10 + param_4),auVar27);
              *(undefined1 (*) [16])(uVar10 + param_4) = auVar1;
              uVar10 = CONCAT71((int7)((unaff_RBP & 0xffffffff) >> 8),
                                ~(byte)(unaff_RBP & 0xffffffff) << 2) & 0xffffffffffffff10;
              uVar10 = CONCAT71((int7)(uVar10 >> 8),(byte)uVar10 | (byte)unaff_RBP) | 4;
              auVar1 = vsubps_avx(*pauVar15,auVar27);
              *pauVar15 = auVar1;
              auVar1 = vsubps_avx(*pauVar17,auVar27);
              *pauVar17 = auVar1;
              *(char *)(uVar24 * 0x80 + param_5) = (char)uVar10;
              unaff_RBP = uVar10;
            }
            lVar19 = lVar19 + 1;
            piVar23 = piVar23 + 3;
          } while (lVar19 != 8);
        }
        uVar24 = uVar24 + 1;
        lVar20 = lVar20 + 0x2c;
      } while (uVar24 != param_1);
      iVar18 = iVar18 + 1;
      iVar21 = iVar21 + iStack_6c;
      uVar10 = CONCAT71((int7)(uVar10 >> 8),iVar18 < param_3);
    } while (iVar18 < param_3 && 0 < iStack_6c);
    lVar20 = 0;
    do {
      bVar9 = *(byte *)(param_5 + lVar20);
      if ((bVar9 & 4) != 0) {
        uVar11 = FUN_1447dd0e0(param_2,param_4);
        bVar6 = bVar9 | 0x10;
        if ((char)uVar11 != '\0') {
          bVar6 = bVar9;
        }
        bVar9 = (char)uVar11 << 2;
        uVar10 = CONCAT71((int7)((ulonglong)uVar11 >> 8),bVar9);
        *(byte *)(param_5 + lVar20) = bVar6 & 0xfb | bVar9;
      }
      lVar20 = lVar20 + 0x80;
      param_2 = param_2 + 0x2c;
    } while ((ulonglong)param_1 << 7 != lVar20);
    uVar10 = CONCAT71((int7)(uVar10 >> 8),iVar21 != 0);
  }
  return uVar10;
}

