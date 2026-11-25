// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14005d3e0  size: 2056 bytes
// Name:    FUN_14005d3e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f0dea0, FUN_14005dbf0, FUN_144e9cbc0, FUN_14005f280, FUN_14005df20
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_14005d3e0(undefined1 (*param_1) [16],int *param_2,undefined1 (*param_3) [16],int param_4,
             longlong param_5)

{
  undefined8 *puVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  char cVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  longlong lVar19;
  longlong lVar20;
  undefined *puVar21;
  undefined1 (*pauVar22) [16];
  int iVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  longlong lVar27;
  ulonglong uVar28;
  undefined1 auVar29 [16];
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
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  undefined1 auVar46 [64];
  float fVar47;
  float fVar48;
  undefined1 auVar49 [64];
  float fVar50;
  undefined1 auVar51 [64];
  undefined1 auVar52 [64];
  float fVar53;
  undefined1 in_ZMM14 [64];
  undefined1 auVar54 [64];
  undefined1 auVar55 [16];
  uint uStack_26c;
  ulonglong uStack_248;
  undefined8 uStack_240;
  ulonglong uStack_238;
  undefined8 uStack_230;
  int aiStack_228 [8];
  ulonglong uStack_208;
  undefined8 uStack_200;
  ulonglong uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 auStack_1e8 [48];
  undefined1 auStack_68 [16];
  
  auStack_68 = in_ZMM14._0_16_;
  if (param_4 == -1) {
    uStack_1f8 = *(ulonglong *)*param_1;
    uStack_1f0 = *(undefined8 *)(*param_1 + 8);
    uVar16 = FUN_14005dbf0(&uStack_1f8,*(undefined4 *)(param_5 + 0x1c),aiStack_228);
    uVar28 = (ulonglong)uVar16;
  }
  else {
    aiStack_228[0] = param_4;
    uVar28 = 1;
  }
  fVar53 = _DAT_145fc6f50;
  fVar50 = *(float *)(param_5 + 0x1c);
  fVar47 = *(float *)(param_5 + 8);
  fVar48 = *(float *)(*param_1 + 8);
  auVar49 = ZEXT864(*(ulonglong *)*param_1);
  auVar52 = ZEXT1664(CONCAT412(_DAT_145fc6f10,
                               CONCAT48(_DAT_145fc6f10,CONCAT44(_DAT_145fc6f10,_DAT_145fc6f10))));
  uVar26 = 0;
  auVar51 = ZEXT1264(ZEXT812(0));
  auVar30 = vmaxss_avx(ZEXT416((uint)fVar50),ZEXT416(_DAT_145fc6f88));
  auVar46 = ZEXT1664(auVar30);
  param_2[0] = -1;
  param_2[1] = 0xffff;
  param_2[2] = 0;
  fVar50 = fVar50 * fVar50;
  do {
    iVar3 = aiStack_228[uVar26];
    lVar19 = func_0x000144f0eb80(iVar3,*(undefined4 *)(param_5 + 0x18));
    if (lVar19 != 0) {
      if ((*(byte *)(lVar19 + 0x10) & 4) == 0) {
        if (((*(char *)(param_5 + 0x2a) == '\0') && (*(char *)(param_5 + 0x2c) == '\0')) &&
           ((*(char *)(param_5 + 0x30) == '\0' &&
            ((*(char *)(param_5 + 0x2d) == '\0' && (*(int *)(param_5 + 0x34) == -1)))))) {
          puVar21 = (undefined *)0x0;
        }
        else {
          puVar21 = &UNK_145ef7690;
        }
        uStack_238 = *(ulonglong *)*param_1;
        uStack_230 = *(undefined8 *)(*param_1 + 8);
        uVar16 = 0x40000;
        if (*(char *)(param_5 + 0x32) != '\0') {
          uVar16 = 0x80;
        }
        lVar20 = FUN_14005df20(lVar19,&uStack_238,auVar46._0_8_,&uStack_248,puVar21,0,
                               uVar16 | (uint)*(byte *)(param_5 + 0x2b) << 0x11,0,0,
                               *(undefined8 *)(param_5 + 0x20),param_5,auVar51._0_16_);
        if (lVar20 != 0) {
          auVar14._8_8_ = uStack_240;
          auVar14._0_8_ = uStack_248;
          auVar39 = vsubps_avx(auVar14,*param_1);
          auVar29._0_4_ = auVar39._0_4_ * auVar39._0_4_;
          auVar29._4_4_ = auVar39._4_4_ * auVar39._4_4_;
          auVar29._8_4_ = auVar39._8_4_ * auVar39._8_4_;
          auVar29._12_4_ = auVar39._12_4_ * auVar39._12_4_;
          auVar30 = vhaddps_avx(auVar29,auVar29);
          if (auVar30._0_4_ < fVar50) {
            auVar39 = vshufpd_avx(auVar39,auVar39,1);
            auVar37._0_8_ = auVar52._0_8_ ^ auVar39._0_8_;
            auVar37._8_8_ = auVar52._8_8_ ^ auVar39._8_8_;
            auVar39 = vmaxss_avx(auVar37,auVar39);
            fVar45 = auVar39._0_4_ + auVar30._0_4_;
            if (fVar45 < fVar53) {
              *param_2 = iVar3;
              param_2[1] = (int)((ulonglong)
                                 (lVar20 - *(longlong *)
                                            (*(longlong *)(*(longlong *)(lVar19 + 0x98) + 0x10) +
                                            (ulonglong)*(byte *)(lVar20 + 0x24) * 0x10)) >> 2) *
                           -0x45d1745d +
                           *(int *)(*(longlong *)(*(longlong *)(lVar19 + 0x98) + 0x18) +
                                   (ulonglong)*(byte *)(lVar20 + 0x24) * 4);
              *(ulonglong *)*param_3 = uStack_248;
              *(undefined8 *)(*param_3 + 8) = uStack_240;
              fVar53 = fVar45;
            }
          }
        }
      }
      else {
        uVar16 = *(uint *)(lVar19 + 0xc4);
        if (uVar16 != 0) {
          auVar54 = ZEXT1664(CONCAT412(_DAT_145fc6ed8,
                                       CONCAT48(_DAT_145fc6ed8,
                                                CONCAT44(_DAT_145fc6ed8,_DAT_145fc6ed8))));
          uStack_26c = 0;
          do {
            lVar20 = *(longlong *)
                      (*(longlong *)(*(longlong *)(lVar19 + 0x98) + 0x10) +
                      (ulonglong)(uStack_26c / 0x174 << 4));
            lVar27 = (ulonglong)(uStack_26c % 0x174) * 0x2c;
            if (((*(byte *)(lVar20 + 9 + lVar27) & 0x80) == 0) &&
               (lVar20 = lVar20 + lVar27, (*(byte *)(lVar20 + 0x19) & 8) == 0)) {
              fVar45 = auVar46._0_4_;
              auVar30._4_4_ = fVar45;
              auVar30._0_4_ = fVar45;
              auVar30._8_4_ = fVar45;
              auVar30._12_4_ = fVar45;
              auVar31 = vsubps_avx(auVar49._0_16_,auVar30);
              auVar30 = vroundps_avx(auVar31,10);
              auVar38._0_4_ = (int)auVar30._0_4_;
              auVar38._4_4_ = (int)auVar30._4_4_;
              auVar38._8_4_ = (int)auVar30._8_4_;
              auVar38._12_4_ = (int)auVar30._12_4_;
              auVar39 = vpackssdw_avx(auVar38,auVar38);
              auVar30 = vpmovsxwd_avx(auVar39);
              auVar30 = vcvtdq2ps_avx(auVar30);
              if (((short)((short)auVar38._0_4_ - (ushort)(auVar31._0_4_ < auVar30._0_4_)) <
                   *(short *)(lVar20 + 0xe)) &&
                 ((auVar30 = vcmpps_avx(auVar31,auVar30,1),
                  (short)(auVar30._4_2_ + auVar39._2_2_) < *(short *)(lVar20 + 0x12) &&
                  (fVar11 = fVar48 - fVar47,
                  auVar30 = vroundss_avx(ZEXT416((uint)fVar11),ZEXT416((uint)fVar11),10),
                  (short)((short)(int)auVar30._0_4_ - (ushort)(fVar11 < auVar30._0_4_)) <
                  *(short *)(lVar20 + 0x16))))) {
                auVar31._0_4_ = auVar49._0_4_ + fVar45;
                auVar31._4_4_ = auVar49._4_4_ + fVar45;
                auVar31._8_4_ = auVar49._8_4_ + fVar45;
                auVar31._12_4_ = auVar49._12_4_ + fVar45;
                auVar30 = vroundps_avx(auVar31,10);
                auVar35._0_4_ = (int)auVar30._0_4_;
                auVar35._4_4_ = (int)auVar30._4_4_;
                auVar35._8_4_ = (int)auVar30._8_4_;
                auVar35._12_4_ = (int)auVar30._12_4_;
                auVar39 = vpackssdw_avx(auVar35,auVar35);
                auVar30 = vpmovsxwd_avx(auVar39);
                auVar30 = vcvtdq2ps_avx(auVar30);
                if ((*(short *)(lVar20 + 0xc) <
                     (short)((ushort)(auVar30._0_4_ < auVar31._0_4_) + (short)auVar35._0_4_)) &&
                   (((auVar30 = vcmpps_avx(auVar30,auVar31,1),
                     *(short *)(lVar20 + 0x10) < (short)(auVar39._2_2_ - auVar30._4_2_) &&
                     (fVar45 = fVar48 + fVar47,
                     auVar30 = vroundss_avx(ZEXT416((uint)fVar45),ZEXT416((uint)fVar45),10),
                     *(short *)(lVar20 + 0x14) <
                     (short)((ushort)(auVar30._0_4_ < fVar45) + (short)(int)auVar30._0_4_))) &&
                    (cVar15 = FUN_144e9cbc0(param_5,lVar20), cVar15 != '\0')))) {
                  uVar5 = *(uint *)(lVar20 + 4);
                  uVar17 = uVar5 & 0xf;
                  if (uVar17 != 0) {
                    uVar16 = uVar5 >> 4 & 0xfffff;
                    lVar27 = *(longlong *)(*(longlong *)(lVar19 + 0x80) + 0x10);
                    if ((*(byte *)(lVar19 + 0x10) & 1) == 0) {
                      lVar6 = *(longlong *)(lVar19 + 0x78);
                      uVar25 = 0;
                      do {
                        puVar1 = (undefined8 *)
                                 (lVar6 + (ulonglong)
                                          *(ushort *)
                                           (*(longlong *)
                                             (lVar27 + (ulonglong)((uVar16 >> 0xd) << 4)) +
                                           (ulonglong)(uVar16 & 0x1fff) * 2) * 0x10);
                        uVar13 = puVar1[1];
                        *(undefined8 *)((longlong)auStack_1e8 + uVar25) = *puVar1;
                        *(undefined8 *)((longlong)auStack_1e8 + uVar25 + 8) = uVar13;
                        uVar25 = uVar25 + 0x10;
                        uVar16 = uVar16 + 1;
                      } while (uVar17 << 4 != uVar25);
                    }
                    else {
                      uVar25 = 0;
                      lVar6 = *(longlong *)(*(longlong *)(lVar19 + 0x70) + 0x10);
                      do {
                        uVar2 = *(ushort *)
                                 (*(longlong *)(lVar27 + (ulonglong)((uVar16 >> 0xd) << 4)) +
                                 (ulonglong)(uVar16 & 0x1fff) * 2);
                        uVar18 = (uVar2 >> 1) / 0x555;
                        lVar7 = *(longlong *)(lVar6 + (ulonglong)(uVar18 << 4));
                        if (lVar7 == 0) {
                          puVar1 = (undefined8 *)
                                   (*(longlong *)(lVar19 + 0x78) + (ulonglong)uVar2 * 0x10);
                          uVar13 = puVar1[1];
                          *(undefined8 *)*(undefined1 (*) [16])((longlong)auStack_1e8 + uVar25) =
                               *puVar1;
                          *(undefined8 *)((longlong)auStack_1e8 + uVar25 + 8) = uVar13;
                        }
                        else {
                          uVar24 = (ulonglong)((uint)uVar2 + uVar18 * -0xaaa);
                          auVar30 = vpinsrw_avx(ZEXT416(*(uint *)(lVar7 + uVar24 * 6)),
                                                (uint)*(ushort *)(lVar7 + 4 + uVar24 * 6),2);
                          pfVar8 = *(float **)(lVar19 + 0xe0);
                          auVar30 = vpshufb_avx(auVar30,_DAT_14615d060);
                          auVar30 = vcvtdq2ps_avx(auVar30);
                          auVar39._0_4_ =
                               auVar30._0_4_ * _DAT_14615ca94 * *(float *)(lVar19 + 0x60) + *pfVar8;
                          auVar39._4_4_ =
                               auVar30._4_4_ * _DAT_14615ca94 * *(float *)(lVar19 + 100) + pfVar8[1]
                          ;
                          auVar39._8_4_ =
                               auVar30._8_4_ * _DAT_14615ca94 * *(float *)(lVar19 + 0x68) +
                               pfVar8[2];
                          auVar39._12_4_ =
                               auVar30._12_4_ * _DAT_14615ca94 * *(float *)(lVar19 + 0x6c) +
                               pfVar8[3];
                          *(undefined1 (*) [16])((longlong)auStack_1e8 + uVar25) = auVar39;
                        }
                        uVar25 = uVar25 + 0x10;
                        uVar16 = uVar16 + 1;
                      } while (uVar17 << 4 != uVar25);
                    }
                    pauVar22 = (undefined1 (*) [16])auStack_1e8;
                    iVar23 = uVar17 - 1;
                    uVar25 = 0;
                    do {
                      auVar30 = *(undefined1 (*) [16])(auStack_1e8 + (longlong)iVar23 * 2);
                      auVar39 = vsubps_avx(*pauVar22,auVar30);
                      auVar31 = vsubps_avx(*param_1,auVar30);
                      fVar45 = auVar39._0_4_;
                      auVar41._0_4_ = fVar45 * fVar45;
                      fVar11 = auVar39._4_4_;
                      auVar41._4_4_ = fVar11 * fVar11;
                      fVar9 = auVar39._8_4_;
                      auVar41._8_4_ = fVar9 * fVar9;
                      fVar10 = auVar39._12_4_;
                      auVar41._12_4_ = fVar10 * fVar10;
                      auVar32._0_4_ = fVar45 * auVar31._0_4_;
                      auVar32._4_4_ = fVar11 * auVar31._4_4_;
                      auVar32._8_4_ = fVar9 * auVar31._8_4_;
                      auVar32._12_4_ = fVar10 * auVar31._12_4_;
                      auVar35 = auVar51._0_16_;
                      auVar39 = vblendps_avx(auVar41,auVar35,8);
                      auVar31 = vblendps_avx(auVar32,auVar35,8);
                      auVar39 = vhaddps_avx(auVar39,auVar39);
                      auVar31 = vhaddps_avx(auVar31,auVar31);
                      auVar39 = vhaddps_avx(auVar39,auVar39);
                      auVar31 = vhaddps_avx(auVar31,auVar31);
                      auVar38 = vrcpps_avx(auVar39);
                      fVar42 = auVar38._0_4_;
                      fVar43 = auVar38._4_4_;
                      fVar44 = auVar38._8_4_;
                      fVar12 = auVar38._12_4_;
                      auVar55._4_4_ = _DAT_14615a034;
                      auVar55._0_4_ = _DAT_14615a034;
                      auVar55._8_4_ = _DAT_14615a034;
                      auVar55._12_4_ = _DAT_14615a034;
                      auVar33._0_4_ =
                           (-((auVar39._0_4_ * fVar42 - auVar54._0_4_) * fVar42) + fVar42) *
                           auVar31._0_4_;
                      auVar33._4_4_ =
                           (-((auVar39._4_4_ * fVar43 - auVar54._4_4_) * fVar43) + fVar43) *
                           auVar31._4_4_;
                      auVar33._8_4_ =
                           (-((auVar39._8_4_ * fVar44 - auVar54._8_4_) * fVar44) + fVar44) *
                           auVar31._8_4_;
                      auVar33._12_4_ =
                           (-((auVar39._12_4_ * fVar12 - auVar54._12_4_) * fVar12) + fVar12) *
                           auVar31._12_4_;
                      auVar31 = vmaxps_avx(auVar33,auVar35);
                      auVar39 = vcmpps_avx(auVar55,auVar39,1);
                      auVar31 = vminps_avx(auVar31,auVar54._0_16_);
                      auVar34._0_4_ =
                           fVar45 * (float)(auVar39._0_4_ & auVar31._0_4_) + auVar30._0_4_;
                      auVar34._4_4_ =
                           fVar11 * (float)(auVar39._4_4_ & auVar31._4_4_) + auVar30._4_4_;
                      auVar34._8_4_ = fVar9 * (float)(auVar39._8_4_ & auVar31._8_4_) + auVar30._8_4_
                      ;
                      auVar34._12_4_ =
                           fVar10 * (float)(auVar39._12_4_ & auVar31._12_4_) + auVar30._12_4_;
                      auVar39 = vsubps_avx(auVar34,*param_1);
                      auVar36._0_4_ = auVar39._0_4_ * auVar39._0_4_;
                      auVar36._4_4_ = auVar39._4_4_ * auVar39._4_4_;
                      auVar36._8_4_ = auVar39._8_4_ * auVar39._8_4_;
                      auVar36._12_4_ = auVar39._12_4_ * auVar39._12_4_;
                      auVar30 = vhaddps_avx(auVar36,auVar36);
                      if (auVar30._0_4_ < fVar50) {
                        auVar39 = vshufpd_avx(auVar39,auVar39,1);
                        auVar40._0_8_ = auVar52._0_8_ ^ auVar39._0_8_;
                        auVar40._8_8_ = auVar52._8_8_ ^ auVar39._8_8_;
                        auVar39 = vmaxss_avx(auVar40,auVar39);
                        fVar45 = auVar39._0_4_ + auVar30._0_4_;
                        if (fVar45 < fVar53) {
                          *param_2 = iVar3;
                          param_2[1] = (int)((ulonglong)
                                             (lVar20 - *(longlong *)
                                                        (*(longlong *)
                                                          (*(longlong *)(lVar19 + 0x98) + 0x10) +
                                                        (ulonglong)*(byte *)(lVar20 + 0x24) * 0x10))
                                            >> 2) * -0x45d1745d +
                                       *(int *)(*(longlong *)(*(longlong *)(lVar19 + 0x98) + 0x18) +
                                               (ulonglong)*(byte *)(lVar20 + 0x24) * 4);
                          *param_3 = auVar34;
                          uVar5 = *(uint *)(lVar20 + 4);
                          fVar53 = fVar45;
                        }
                      }
                      uVar24 = uVar25 + 1;
                      iVar23 = (int)uVar25;
                      pauVar22 = pauVar22 + 1;
                      uVar25 = uVar24;
                    } while (uVar24 < (uVar5 & 0xf));
                    uVar16 = *(uint *)(lVar19 + 0xc4);
                  }
                }
              }
            }
            uStack_26c = uStack_26c + 1;
          } while (uStack_26c < uVar16);
        }
      }
    }
    uVar26 = uVar26 + 1;
  } while (uVar26 != uVar28);
  iVar23 = param_2[1];
  iVar4 = *param_2;
  if (iVar4 != -1 && iVar23 != 0xffff) {
    lVar20 = func_0x000144f0eb80(iVar4,*(undefined4 *)(param_5 + 0x18));
    uStack_208 = *(ulonglong *)*param_1;
    uStack_200 = *(undefined8 *)(*param_1 + 8);
    lVar19 = *(longlong *)
              (*(longlong *)(*(longlong *)(lVar20 + 0x98) + 0x10) +
              (ulonglong)((uint)param_2[1] / 0x174 << 4));
    lVar27 = (ulonglong)((uint)param_2[1] % 0x174) * 0x2c;
    cVar15 = FUN_144f0dea0(lVar20,&uStack_208,*(undefined4 *)(lVar19 + 4 + lVar27),0);
    if (cVar15 != '\0') {
      uVar13 = *(undefined8 *)(*param_1 + 8);
      lVar19 = lVar19 + lVar27;
      *(undefined8 *)*param_3 = *(undefined8 *)*param_1;
      *(undefined8 *)(*param_3 + 8) = uVar13;
      FUN_14005f280(lVar20,param_3,*(undefined4 *)(lVar19 + 4),*(undefined4 *)(lVar19 + 0x24));
    }
  }
  return CONCAT31((int3)((uint)iVar3 >> 8),iVar4 != -1 && iVar23 != 0xffff);
}

