// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14005f8f0  size: 1457 bytes
// Name:    FUN_14005f8f0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e9cad0, FUN_142573630
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14005f8f0(longlong param_1,short *param_2,code *param_3,uint param_4,float *param_5,
                  longlong param_6,longlong param_7)

{
  undefined8 *puVar1;
  ushort uVar2;
  float fVar3;
  float *pfVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  char cVar8;
  uint uVar9;
  undefined1 (*pauVar10) [16];
  longlong lVar11;
  undefined1 (*pauVar12) [16];
  int iVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  uint uVar17;
  float fVar18;
  longlong lVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [64];
  undefined1 auVar32 [64];
  float fVar33;
  undefined1 auVar34 [64];
  float fVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [64];
  undefined1 in_ZMM12 [64];
  undefined1 auVar38 [64];
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined1 in_ZMM15 [64];
  undefined1 auVar44 [64];
  uint uStack_168;
  ulonglong uStack_140;
  undefined1 auStack_128 [16];
  undefined1 auStack_118 [16];
  undefined1 auStack_108 [16];
  undefined1 aauStack_f8 [7] [16];
  undefined1 auStack_88 [16];
  undefined1 auStack_58 [16];
  
  auStack_58 = in_ZMM15._0_16_;
  auStack_88 = in_ZMM12._0_16_;
  if ((param_6 == 0) && (*(int *)(param_1 + 0xc4) != 0)) {
    auVar31 = ZEXT1664(_DAT_14615d060);
    uVar14 = 0;
    auVar34 = ZEXT1264(ZEXT812(0));
    pauVar10 = (undefined1 (*) [16])(param_5 + 0x14);
    fVar35 = _DAT_146159ef0;
    fVar39 = _DAT_14615ca94;
    fVar40 = _DAT_14615ca94;
    fVar41 = _DAT_14615ca94;
    fVar42 = _DAT_14615ca94;
    do {
      fVar18 = (float)uVar14;
      iVar13 = (int)(uVar14 / 0x174);
      lVar19 = *(longlong *)
                (*(longlong *)(*(longlong *)(param_1 + 0x98) + 0x10) +
                (ulonglong)(uint)(iVar13 << 4));
      lVar11 = (ulonglong)(uint)(iVar13 * -0x174 + (int)fVar18) * 0x2c;
      if (((((((*(byte *)(lVar19 + 9 + lVar11) & 0x80) == 0) &&
             (lVar19 = lVar19 + lVar11, (*(byte *)(lVar19 + 0x19) & 8) == 0)) &&
            (*(short *)(lVar19 + 0xc) < param_2[1])) &&
           ((*(short *)(lVar19 + 0x10) < param_2[3] && (*(short *)(lVar19 + 0x14) < param_2[5]))))
          && ((*param_2 < *(short *)(lVar19 + 0xe) &&
              ((param_2[2] < *(short *)(lVar19 + 0x12) && (param_2[4] < *(short *)(lVar19 + 0x16))))
              ))) &&
         ((param_7 == 0 || (cVar8 = FUN_142573630(lVar19 + 0xc,param_7), cVar8 == '\0')))) {
        auVar30 = auVar31._0_16_;
        if (param_3 != (code *)0x0) {
          cVar8 = (*param_3)(param_1,lVar19,*(undefined8 *)(param_5 + 0x166));
          auVar30 = auVar31._0_16_;
          if (cVar8 == '\0') goto LAB_14005fe23;
        }
        uVar15 = *(uint *)(lVar19 + 4);
        uStack_168 = 0;
        if ((uVar15 & 0xf) == 0) {
          uVar9 = 0;
        }
        else {
          uVar14 = 0;
          pauVar12 = pauVar10;
          do {
            uVar15 = (uVar15 >> 4 & 0xfffff) + (int)uVar14;
            uVar2 = *(ushort *)
                     (*(longlong *)
                       (*(longlong *)(*(longlong *)(param_1 + 0x80) + 0x10) +
                       (ulonglong)((uVar15 >> 0xd) << 4)) + (ulonglong)(uVar15 & 0x1fff) * 2);
            if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
LAB_14005fb80:
              puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x78) + (ulonglong)uVar2 * 0x10);
              uVar5 = puVar1[1];
              *(undefined8 *)*pauVar12 = *puVar1;
              *(undefined8 *)(*pauVar12 + 8) = uVar5;
            }
            else {
              uVar15 = (uVar2 >> 1) / 0x555;
              lVar11 = *(longlong *)
                        (*(longlong *)(*(longlong *)(param_1 + 0x70) + 0x10) +
                        (ulonglong)(uVar15 << 4));
              if (lVar11 == 0) goto LAB_14005fb80;
              uVar16 = (ulonglong)((uint)uVar2 + uVar15 * -0xaaa);
              auVar29 = vpinsrw_avx(ZEXT416(*(uint *)(lVar11 + uVar16 * 6)),
                                    (uint)*(ushort *)(lVar11 + 4 + uVar16 * 6),2);
              auVar29 = vpshufb_avx(auVar29,auVar30);
              auVar29 = vcvtdq2ps_avx(auVar29);
              fVar20 = fVar39 * auVar29._0_4_;
              fVar26 = fVar40 * auVar29._4_4_;
              fVar27 = fVar41 * auVar29._8_4_;
              fVar28 = fVar42 * auVar29._12_4_;
              *(float *)*pauVar12 = fVar20;
              *(float *)(*pauVar12 + 4) = fVar26;
              *(float *)(*pauVar12 + 8) = fVar27;
              *(float *)(*pauVar12 + 0xc) = fVar28;
              fVar20 = fVar20 * *(float *)(param_1 + 0x60);
              fVar26 = fVar26 * *(float *)(param_1 + 100);
              fVar27 = fVar27 * *(float *)(param_1 + 0x68);
              fVar28 = fVar28 * *(float *)(param_1 + 0x6c);
              *(float *)*pauVar12 = fVar20;
              *(float *)(*pauVar12 + 4) = fVar26;
              *(float *)(*pauVar12 + 8) = fVar27;
              *(float *)(*pauVar12 + 0xc) = fVar28;
              pfVar4 = *(float **)(param_1 + 0xe0);
              fVar33 = pfVar4[1];
              fVar3 = pfVar4[2];
              fVar43 = pfVar4[3];
              *(float *)*pauVar12 = fVar20 + *pfVar4;
              *(float *)(*pauVar12 + 4) = fVar26 + fVar33;
              *(float *)(*pauVar12 + 8) = fVar27 + fVar3;
              *(float *)(*pauVar12 + 0xc) = fVar28 + fVar43;
            }
            uVar15 = *(uint *)(lVar19 + 4);
            uVar14 = uVar14 + 1;
            pauVar12 = pauVar12 + 1;
            uVar17 = uVar15 & 0xf;
          } while (uVar14 < uVar17);
          uVar9 = 0;
          if (uVar17 != 0) {
            fVar28 = (float)(uVar17 - 1);
            uStack_140 = 0;
            uStack_168 = 0;
            auVar31 = ZEXT464((uint)param_5[0xd]);
            auVar32 = ZEXT464((uint)param_5[0xc]);
            fVar43 = *param_5;
            fVar20 = param_5[1];
            fVar26 = param_5[2];
            fVar27 = param_5[3];
            auVar44 = ZEXT1664(*(undefined1 (*) [16])(param_5 + 0xc));
            fVar33 = param_5[0x15d];
            fVar3 = param_5[0x161];
            uVar5 = *(undefined8 *)(param_5 + 0x162);
            pauVar12 = pauVar10;
            do {
              uVar14 = (ulonglong)(uint)fVar28;
              fVar21 = (float)func_0x000144e9caa0(auVar32._0_8_,auVar31._0_8_,
                                                  *(undefined4 *)*pauVar12,
                                                  *(undefined4 *)(*pauVar12 + 4),
                                                  *(undefined4 *)pauVar10[uVar14],
                                                  param_5[uVar14 * 4 + 0x15]);
              fVar22 = 0.0;
              auVar30 = pauVar10[uVar14];
              auVar38 = ZEXT1664(auVar30);
              uStack_168 = (uStack_168 + 1) - (uint)(fVar21 < 0.0);
              auVar23 = vsubps_avx(*pauVar12,auVar30);
              auVar37 = ZEXT1664(auVar23);
              auVar29._0_4_ = auVar23._0_4_ * auVar23._0_4_;
              auVar29._4_4_ = auVar23._4_4_ * auVar23._4_4_;
              auVar29._8_4_ = auVar23._8_4_ * auVar23._8_4_;
              auVar29._12_4_ = auVar23._12_4_ * auVar23._12_4_;
              auVar29 = vblendps_avx(auVar29,auVar34._0_16_,8);
              auVar29 = vhaddps_avx(auVar29,auVar29);
              auVar29 = vhaddps_avx(auVar29,auVar29);
              if (0.0 < auVar29._0_4_) {
                auStack_118 = auVar44._0_16_;
                auStack_108 = auVar30;
                aauStack_f8[0] = auVar23;
                fVar22 = (float)FUN_144e9cad0(auStack_108,aauStack_f8,auStack_118);
                auVar23 = auVar37._0_16_;
                auVar30 = auVar38._0_16_;
              }
              auVar36._0_4_ = fVar22 * auVar23._0_4_ + auVar30._0_4_;
              auVar36._4_4_ = fVar22 * auVar23._4_4_ + auVar30._4_4_;
              auVar36._8_4_ = fVar22 * auVar23._8_4_ + auVar30._8_4_;
              auVar36._12_4_ = fVar22 * auVar23._12_4_ + auVar30._12_4_;
              auVar23 = vsubps_avx(auVar36,auVar44._0_16_);
              fVar21 = auVar23._0_4_;
              auVar30._0_4_ = fVar43 * fVar21;
              fVar22 = auVar23._4_4_;
              auVar30._4_4_ = fVar20 * fVar22;
              fVar6 = auVar23._8_4_;
              auVar30._8_4_ = fVar26 * fVar6;
              fVar7 = auVar23._12_4_;
              auVar30._12_4_ = fVar27 * fVar7;
              auVar30 = vblendps_avx(auVar30,auVar34._0_16_,8);
              auVar30 = vhaddps_avx(auVar30,auVar30);
              auVar30 = vhaddps_avx(auVar30,auVar30);
              if (auVar30._0_4_ < fVar35) {
                auVar23._0_4_ = fVar21 + fVar21;
                auVar23._4_4_ = fVar22 + fVar22;
                auVar23._8_4_ = fVar6 + fVar6;
                auVar23._12_4_ = fVar7 + fVar7;
              }
              if ((char)param_4 < '\0') {
                auVar30 = vshufpd_avx(auVar23,auVar23,1);
                auVar23 = vinsertps_avx(auVar23,ZEXT416((uint)(auVar30._0_4_ + auVar30._0_4_)),0x20)
                ;
              }
              auVar24 = auVar23;
              if (((param_4 >> 0x11 & 1) != 0) && ((*(byte *)(lVar19 + 0x19) & 4) != 0)) {
                auVar24._0_4_ = auVar23._0_4_ * _DAT_146159cc0;
                auVar24._4_4_ = auVar23._4_4_ * _DAT_146159cc0;
                auVar24._8_4_ = auVar23._8_4_ * _DAT_146159cc0;
                auVar24._12_4_ = auVar23._12_4_ * _DAT_146159cc0;
              }
              auVar25._0_4_ = auVar24._0_4_ * auVar24._0_4_;
              auVar25._4_4_ = auVar24._4_4_ * auVar24._4_4_;
              auVar25._8_4_ = auVar24._8_4_ * auVar24._8_4_;
              auVar25._12_4_ = auVar24._12_4_ * auVar24._12_4_;
              auVar30 = vblendps_avx(auVar25,auVar34._0_16_,8);
              auVar30 = vhaddps_avx(auVar30,auVar30);
              auVar30 = vhaddps_avx(auVar30,auVar30);
              auVar37 = ZEXT1664(auVar30);
              fVar21 = auVar30._0_4_;
              if ((fVar21 < fVar33) && (fVar21 < param_5[0x15c])) {
                if (fVar3 != 0.0) {
                  auStack_128 = auVar36;
                  cVar8 = func_0x0001425735b0(auStack_128,fVar3,uVar5);
                  fVar21 = auVar37._0_4_;
                  if (cVar8 == '\0') goto LAB_14005fda4;
                }
                param_5[0x15c] = fVar21;
                param_5[0x15e] = fVar18;
                param_5[0x160] = fVar28;
                uVar15 = *(uint *)(lVar19 + 4);
              }
LAB_14005fda4:
              pauVar12 = pauVar12 + 1;
              uVar14 = uStack_140 + 1;
              fVar28 = (float)uStack_140;
              uVar9 = uVar15 & 0xf;
              uStack_140 = uVar14;
            } while (uVar14 < uVar9);
          }
        }
        auVar31 = ZEXT1664(_DAT_14615d060);
        if (param_5[0x15e] == fVar18) {
          if (uStack_168 == uVar9) {
            param_5[0x15c] = _DAT_145fc6f48 + param_5[0x15c];
          }
          *(bool *)(param_5 + 0x164) = uStack_168 == uVar9;
        }
      }
LAB_14005fe23:
      uVar14 = (ulonglong)((int)fVar18 + 1U);
    } while ((int)fVar18 + 1U < *(uint *)(param_1 + 0xc4));
  }
  return;
}

