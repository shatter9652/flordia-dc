// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14005f3d0  size: 1304 bytes
// Name:    FUN_14005f3d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e9bd40
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_14005f3d0(longlong param_1,ulonglong *param_2,ulonglong *param_3,undefined1 (*param_4) [16])

{
  ushort uVar1;
  longlong lVar2;
  float *pfVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  char cVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  ulonglong uVar20;
  int iVar21;
  longlong lVar22;
  int iVar23;
  ulonglong uVar24;
  longlong lVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  ulonglong uVar30;
  undefined8 *puVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined1 auVar44 [64];
  ulonglong uVar45;
  ulonglong uVar46;
  int iStack_250;
  ulonglong uStack_1f8;
  ulonglong uStack_1f0;
  ulonglong uStack_1e8;
  ulonglong uStack_1e0;
  undefined1 auStack_1d8 [16];
  undefined1 auStack_1c8 [16];
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined1 auStack_1a8 [16];
  undefined1 aauStack_198 [2] [16];
  undefined8 auStack_178 [39];
  
  uVar17 = *(uint *)(param_1 + 0xc4);
  auVar9 = vmaxss_avx(ZEXT416((uint)param_3[1]),ZEXT416((uint)param_2[1]));
  auVar10 = vminss_avx(ZEXT416((uint)param_2[1]),ZEXT416((uint)param_3[1]));
  fVar6 = auVar10._0_4_ + _DAT_145fc6f48;
  fVar7 = auVar9._0_4_ + _DAT_145fc6ed8;
  auVar9 = vroundss_avx(ZEXT416((uint)fVar6),ZEXT416((uint)fVar6),10);
  auVar10 = vroundss_avx(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7),10);
  if (uVar17 == 0) {
    iStack_250 = 0xffff;
  }
  else {
    auVar33._8_8_ = 0;
    auVar33._0_8_ = *param_2;
    auVar36._8_8_ = 0;
    auVar36._0_8_ = *param_3;
    auVar44 = ZEXT1664(_DAT_14615d060);
    uVar30 = 0;
    iStack_250 = 0xffff;
    auVar8 = vmaxps_avx(auVar36,auVar33);
    auVar33 = vminps_avx(auVar33,auVar36);
    auVar38._0_4_ = auVar8._0_4_ + _DAT_145fc6ed8;
    auVar38._4_4_ = auVar8._4_4_ + _DAT_145fc6ed8;
    auVar38._8_4_ = auVar8._8_4_ + _DAT_145fc6ed8;
    auVar38._12_4_ = auVar8._12_4_ + _DAT_145fc6ed8;
    auVar8 = vroundps_avx(auVar38,10);
    auVar32._0_4_ = (int)auVar8._0_4_;
    auVar32._4_4_ = (int)auVar8._4_4_;
    auVar32._8_4_ = (int)auVar8._8_4_;
    auVar32._12_4_ = (int)auVar8._12_4_;
    auVar34._0_4_ = auVar33._0_4_ + _DAT_145fc6f48;
    auVar34._4_4_ = auVar33._4_4_ + _DAT_145fc6f48;
    auVar34._8_4_ = auVar33._8_4_ + _DAT_145fc6f48;
    auVar34._12_4_ = auVar33._12_4_ + _DAT_145fc6f48;
    auVar33 = vpackssdw_avx(auVar32,auVar32);
    auVar8 = vroundps_avx(auVar34,10);
    auVar37._0_4_ = (int)auVar8._0_4_;
    auVar37._4_4_ = (int)auVar8._4_4_;
    auVar37._8_4_ = (int)auVar8._8_4_;
    auVar37._12_4_ = (int)auVar8._12_4_;
    auVar8 = vpackssdw_avx(auVar37,auVar37);
    auVar8 = vpmovsxwd_avx(auVar8);
    auVar8 = vcvtdq2ps_avx(auVar8);
    auVar8 = vcmpps_avx(auVar34,auVar8,1);
    auVar8 = vshufps_avx(auVar8,auVar8,0x50);
    uVar26 = vmovmskpd_avx(auVar8);
    auVar8 = vpmovsxwd_avx(auVar33);
    auVar8 = vcvtdq2ps_avx(auVar8);
    auVar8 = vcmpps_avx(auVar8,auVar38,1);
    auVar8 = vshufps_avx(auVar8,auVar8,0x50);
    uVar27 = vmovmskpd_avx(auVar8);
    fVar39 = _DAT_145fc6f54;
    fVar40 = _DAT_14615ca94;
    fVar41 = _DAT_14615ca94;
    fVar42 = _DAT_14615ca94;
    fVar43 = _DAT_14615ca94;
    do {
      iVar23 = (int)uVar30;
      iVar21 = (int)(uVar30 / 0x174);
      lVar25 = *(longlong *)
                (*(longlong *)(*(longlong *)(param_1 + 0x98) + 0x10) +
                (ulonglong)(uint)(iVar21 << 4));
      lVar22 = (ulonglong)(uint)(iVar21 * -0x174 + iVar23) * 0x2c;
      uVar19 = *(uint *)(lVar25 + 8 + lVar22);
      if (((((-1 < (short)uVar19) &&
            (lVar25 = lVar25 + lVar22,
            (uVar19 & 0x10000) == 0 && (*(uint *)(lVar25 + 0x18) & 0x800) == 0)) &&
           ((short)((short)auVar37._0_4_ - ((ushort)uVar26 & 1)) < *(short *)(lVar25 + 0xe))) &&
          (((short)((short)auVar37._4_4_ - ((ushort)(uVar26 >> 1) & 0x7f)) <
            *(short *)(lVar25 + 0x12) &&
           ((short)((short)(int)auVar9._0_4_ - (ushort)(fVar6 < auVar9._0_4_)) <
            *(short *)(lVar25 + 0x16))))) &&
         ((*(short *)(lVar25 + 0xc) < (short)((short)auVar32._0_4_ + ((ushort)uVar27 & 1)) &&
          ((*(short *)(lVar25 + 0x10) <
            (short)((short)auVar32._4_4_ + ((ushort)(uVar27 >> 1) & 0x7f)) &&
           (*(short *)(lVar25 + 0x14) <
            (short)((ushort)(auVar10._0_4_ < fVar7) + (short)(int)auVar10._0_4_))))))) {
        uVar19 = *(uint *)(lVar25 + 4);
        uVar18 = uVar19 & 0xf;
        if (uVar18 != 0) {
          lVar22 = *(longlong *)(param_1 + 0x78);
          uVar28 = uVar19 >> 4 & 0xfffff;
          lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x10);
          if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
            uVar30 = 0;
            do {
              puVar31 = (undefined8 *)
                        (lVar22 + (ulonglong)
                                  *(ushort *)
                                   (*(longlong *)(lVar2 + (ulonglong)((uVar28 >> 0xd) << 4)) +
                                   (ulonglong)(uVar28 & 0x1fff) * 2) * 0x10);
              uVar15 = puVar31[1];
              *(undefined8 *)(aauStack_198[0] + uVar30) = *puVar31;
              *(undefined8 *)(aauStack_198[0] + uVar30 + 8) = uVar15;
              uVar30 = uVar30 + 0x10;
              uVar28 = uVar28 + 1;
            } while (uVar18 << 4 != uVar30);
          }
          else {
            fVar11 = *(float *)(param_1 + 0x60);
            fVar12 = *(float *)(param_1 + 100);
            fVar13 = *(float *)(param_1 + 0x68);
            fVar14 = *(float *)(param_1 + 0x6c);
            pfVar3 = *(float **)(param_1 + 0xe0);
            uVar30 = 0;
            lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x70) + 0x10);
            do {
              uVar1 = *(ushort *)
                       (*(longlong *)(lVar2 + (ulonglong)((uVar28 >> 0xd) << 4)) +
                       (ulonglong)(uVar28 & 0x1fff) * 2);
              uVar29 = (uVar1 >> 1) / 0x555;
              lVar5 = *(longlong *)(lVar4 + (ulonglong)(uVar29 << 4));
              if (lVar5 == 0) {
                *(undefined1 (*) [16])(aauStack_198[0] + uVar30) =
                     *(undefined1 (*) [16])(lVar22 + (ulonglong)uVar1 * 0x10);
              }
              else {
                uVar20 = (ulonglong)((uint)uVar1 + uVar29 * -0xaaa);
                auVar8 = vpinsrw_avx(ZEXT416(*(uint *)(lVar5 + uVar20 * 6)),
                                     (uint)*(ushort *)(lVar5 + 4 + uVar20 * 6),2);
                auVar8 = vpshufb_avx(auVar8,auVar44._0_16_);
                auVar8 = vcvtdq2ps_avx(auVar8);
                auVar35._0_4_ = fVar40 * fVar11 * auVar8._0_4_ + *pfVar3;
                auVar35._4_4_ = fVar41 * fVar12 * auVar8._4_4_ + pfVar3[1];
                auVar35._8_4_ = fVar42 * fVar13 * auVar8._8_4_ + pfVar3[2];
                auVar35._12_4_ = fVar43 * fVar14 * auVar8._12_4_ + pfVar3[3];
                *(undefined1 (*) [16])(aauStack_198[0] + uVar30) = auVar35;
              }
              uVar30 = uVar30 + 0x10;
              uVar28 = uVar28 + 1;
            } while (uVar18 << 4 != uVar30);
          }
          auStack_1c8 = aauStack_198[0];
          if (2 < uVar18) {
            uVar24 = 2;
            puVar31 = auStack_178;
            uVar30 = *param_3;
            uVar20 = param_3[1];
            uVar45 = *param_2;
            uVar46 = param_2[1];
            do {
              uStack_1b8 = *puVar31;
              uStack_1b0 = puVar31[1];
              auStack_1a8 = *(undefined1 (*) [16])(puVar31 + -2);
              uStack_1f8 = uVar30;
              uStack_1f0 = uVar20;
              uStack_1e8 = uVar45;
              uStack_1e0 = uVar46;
              cVar16 = FUN_144e9bd40(&uStack_1e8,&uStack_1f8,auStack_1c8,auStack_1d8);
              if ((cVar16 != '\0') && (fVar39 < *(float *)(*param_4 + 8))) {
                *param_4 = auStack_1d8;
                uVar45 = *param_2;
                uVar46 = param_2[1];
                fVar39 = *(float *)(*param_4 + 8);
                uVar30 = *param_3;
                uVar20 = param_3[1];
                uVar19 = *(uint *)(lVar25 + 4);
                iStack_250 = iVar23;
              }
              uVar24 = uVar24 + 1;
              puVar31 = puVar31 + 2;
            } while (uVar24 < (uVar19 & 0xf));
            uVar17 = *(uint *)(param_1 + 0xc4);
          }
        }
      }
      uVar30 = (ulonglong)(iVar23 + 1U);
    } while (iVar23 + 1U < uVar17);
  }
  return iStack_250;
}

