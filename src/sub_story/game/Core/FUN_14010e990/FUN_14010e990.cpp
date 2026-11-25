// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14010e990  size: 2221 bytes
// Name:    FUN_14010e990
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1455cf9a0, FUN_14476a2c0, FUN_144f264e0, FUN_14522fbe0, FUN_14476a960
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14010e990(longlong *param_1,float *param_2,longlong param_3,char param_4,undefined1 param_5
                  )

{
  undefined1 (*pauVar1) [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  byte bVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auVar26 [16];
  float fVar27;
  char cVar28;
  ushort uVar29;
  short sVar30;
  uint uVar31;
  int iVar32;
  undefined4 uVar33;
  ulonglong uVar34;
  longlong lVar35;
  undefined8 *puVar36;
  longlong lVar37;
  ulonglong uVar38;
  longlong *plVar39;
  longlong lVar40;
  longlong lVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [64];
  undefined1 auVar52 [64];
  undefined1 auVar53 [64];
  undefined1 auVar54 [64];
  undefined1 auVar55 [64];
  undefined1 auVar56 [64];
  undefined1 auVar57 [64];
  undefined1 auVar58 [64];
  undefined1 auVar59 [64];
  undefined1 auVar60 [64];
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  longlong lStack_2d8;
  longlong lStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined1 auStack_2b8 [16];
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [16];
  undefined1 auStack_288 [16];
  undefined1 auStack_278 [16];
  undefined1 auStack_268 [16];
  undefined1 auStack_258 [16];
  undefined1 auStack_248 [16];
  undefined1 auStack_238 [16];
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined1 auStack_218 [16];
  undefined1 auStack_208 [16];
  undefined1 auStack_1f8 [16];
  undefined1 auStack_1e8 [16];
  undefined1 auStack_1d8 [16];
  undefined1 auStack_1c8 [16];
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined1 auStack_198 [16];
  undefined1 auStack_188 [16];
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined4 uStack_160;
  float fStack_15c;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined4 uStack_140;
  byte bStack_13c;
  byte bStack_13b;
  undefined2 uStack_13a;
  undefined1 auStack_138 [16];
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined1 auStack_118 [16];
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 auStack_f8 [184];
  
  fVar27 = _DAT_145fc6f48;
  if (param_4 != '\0') {
    fVar27 = *(float *)(*(longlong *)(param_2 + 0x34) + 0x2c);
  }
  if ((ulonglong)(uint)param_2[0x22] != 0) {
    fVar2 = param_2[0x1c];
    auVar50._0_12_ = ZEXT812(0);
    auVar50._12_4_ = 0;
    fVar3 = param_2[0x10];
    fVar4 = param_2[0x14];
    fVar5 = param_2[0x15];
    fVar6 = param_2[0x18];
    auVar56 = ZEXT1664(CONCAT412(fVar6,CONCAT48(fVar6,CONCAT44(fVar6,fVar6))));
    fVar7 = param_2[0x19];
    lStack_2d0 = *(longlong *)(param_2 + 0x20);
    lVar41 = (ulonglong)(uint)param_2[0x22] << 5;
    lVar40 = 0;
    auVar45 = vunpcklps_avx(*(undefined1 (*) [16])(param_2 + 0x14),auVar50);
    auVar42 = vunpckhps_avx(*(undefined1 (*) [16])(param_2 + 0x14),auVar50);
    fVar8 = param_2[0x1d];
    auVar50 = vunpcklps_avx(*(undefined1 (*) [16])(param_2 + 0x10),
                            *(undefined1 (*) [16])(param_2 + 0x18));
    auVar46 = vunpckhps_avx(*(undefined1 (*) [16])(param_2 + 0x10),
                            *(undefined1 (*) [16])(param_2 + 0x18));
    auVar43 = vunpcklps_avx(auVar50,auVar45);
    auVar46 = vunpcklps_avx(auVar46,auVar42);
    auVar42 = vunpckhps_avx(auVar50,auVar45);
    fVar9 = param_2[0x12];
    fVar14 = param_2[4];
    fVar15 = param_2[5];
    fVar16 = param_2[6];
    fVar17 = param_2[7];
    fVar10 = param_2[0x1e];
    auVar45._0_4_ = -(auVar46._0_4_ * fVar10) - (auVar42._0_4_ * fVar8 + fVar2 * auVar43._0_4_);
    auVar45._4_4_ = -(auVar46._4_4_ * fVar10) - (auVar42._4_4_ * fVar8 + fVar2 * auVar43._4_4_);
    auVar45._8_4_ = -(auVar46._8_4_ * fVar10) - (auVar42._8_4_ * fVar8 + fVar2 * auVar43._8_4_);
    auVar45._12_4_ = -(auVar46._12_4_ * fVar10) - (auVar42._12_4_ * fVar8 + fVar2 * auVar43._12_4_);
    fVar18 = *param_2;
    fVar19 = param_2[1];
    fVar20 = param_2[2];
    fVar21 = param_2[3];
    fVar2 = param_2[0x11];
    fVar8 = param_2[0x16];
    fVar22 = param_2[8];
    fVar23 = param_2[9];
    fVar24 = param_2[10];
    fVar25 = param_2[0xb];
    fVar10 = param_2[0x1a];
    auVar42 = vshufps_avx(auVar45,auVar45,0x55);
    auVar46 = vshufps_avx(auVar45,auVar45,0xaa);
    fVar11 = param_2[0x38];
    auVar55 = ZEXT1664(CONCAT412(fVar11,CONCAT48(fVar11,CONCAT44(fVar11,fVar11))));
    auVar52 = ZEXT1664(CONCAT412(fVar25 * fVar6 + fVar17 * fVar4 + fVar21 * fVar3,
                                 CONCAT48(fVar24 * fVar6 + fVar16 * fVar4 + fVar20 * fVar3,
                                          CONCAT44(fVar23 * fVar6 + fVar15 * fVar4 + fVar19 * fVar3,
                                                   fVar22 * fVar6 + fVar14 * fVar4 + fVar18 * fVar3)
                                         )));
    auVar53 = ZEXT1664(CONCAT412(fVar25 * fVar7 + fVar17 * fVar5 + fVar21 * fVar2,
                                 CONCAT48(fVar24 * fVar7 + fVar16 * fVar5 + fVar20 * fVar2,
                                          CONCAT44(fVar23 * fVar7 + fVar15 * fVar5 + fVar19 * fVar2,
                                                   fVar22 * fVar7 + fVar14 * fVar5 + fVar18 * fVar2)
                                         )));
    auVar54 = ZEXT1664(CONCAT412(fVar25 * fVar10 + fVar17 * fVar8 + fVar21 * fVar9,
                                 CONCAT48(fVar24 * fVar10 + fVar16 * fVar8 + fVar20 * fVar9,
                                          CONCAT44(fVar23 * fVar10 + fVar15 * fVar8 + fVar19 * fVar9
                                                   ,fVar22 * fVar10 +
                                                    fVar14 * fVar8 + fVar18 * fVar9))));
    auVar51 = ZEXT1664(CONCAT412(fVar25 * auVar46._12_4_ +
                                 fVar17 * auVar42._12_4_ + fVar21 * auVar45._0_4_ + param_2[0xf],
                                 CONCAT48(fVar24 * auVar46._8_4_ +
                                          fVar16 * auVar42._8_4_ +
                                          fVar20 * auVar45._0_4_ + param_2[0xe],
                                          CONCAT44(fVar23 * auVar46._4_4_ +
                                                   fVar15 * auVar42._4_4_ +
                                                   fVar19 * auVar45._0_4_ + param_2[0xd],
                                                   fVar22 * auVar46._0_4_ +
                                                   fVar14 * auVar42._0_4_ +
                                                   fVar18 * auVar45._0_4_ + param_2[0xc]))));
    auVar46._4_4_ = _DAT_145fc6ed8;
    auVar46._0_4_ = _DAT_145fc6ed8;
    auVar46._8_4_ = _DAT_145fc6ed8;
    auVar46._12_4_ = _DAT_145fc6ed8;
    auVar42._4_4_ = _DAT_145fc6f98;
    auVar42._0_4_ = _DAT_145fc6f98;
    auVar42._8_4_ = _DAT_145fc6f98;
    auVar42._12_4_ = _DAT_145fc6f98;
    auStack_2b8 = vminps_avx(auVar42,auVar46);
    lStack_2d8 = lVar41;
    do {
      lVar35 = param_1[2];
      bVar12 = *(byte *)(lStack_2d0 + 0xc + lVar40);
      uVar38 = (ulonglong)bVar12;
      uVar31 = bVar12 + 1 & 0xff;
      lVar37 = (ulonglong)bVar12 * 0x20;
      auStack_1c8 = *(undefined1 (*) [16])(lVar35 + lVar37);
      auVar58 = ZEXT1664(auStack_1c8);
      fVar2 = *(float *)(lVar35 + 0x10 + lVar37);
      fVar3 = *(float *)(lVar35 + 0x14 + lVar37);
      fVar4 = *(float *)(lVar35 + 0x18 + lVar37);
      uVar34 = (ulonglong)(uVar31 << 5);
      auStack_1d8 = *(undefined1 (*) [16])(lVar35 + uVar34);
      auVar59 = ZEXT1664(auStack_1d8);
      fVar5 = *(float *)(lVar35 + 0x10 + uVar34);
      fVar6 = *(float *)(lVar35 + 0x14 + uVar34);
      fVar7 = *(float *)(lVar35 + 0x18 + uVar34);
      lVar35 = *(longlong *)(param_2 + 0x34);
      if (param_4 != '\0') {
        auVar42 = vpcmpeqd_avx(auVar56._0_16_,auVar56._0_16_);
        auVar56 = ZEXT1664(auVar42);
        if (auVar42 == (undefined1  [16])0x0) {
          *(undefined4 *)(lVar35 + 0x2c) = 0x3d23d70a;
        }
        else {
          auVar42 = vmaxss_avx(ZEXT416((uint)((*(float *)(*(longlong *)(param_1[1] + 0x10) + 4 +
                                                         (ulonglong)uVar31 * 8) +
                                              *(float *)(*(longlong *)(param_1[1] + 0x10) + 4 +
                                                        uVar38 * 8)) * _DAT_145fc6f08 + fVar27)),
                               ZEXT416(_DAT_14615b49c));
          auVar56 = ZEXT1664(auVar42);
          *(int *)(lVar35 + 0x2c) = auVar42._0_4_;
          lVar35 = *(longlong *)(param_2 + 0x34);
        }
      }
      auStack_138 = auVar55._0_16_;
      auStack_1e8._0_4_ =
           auVar54._0_4_ * fVar4 + auVar53._0_4_ * fVar3 + auVar52._0_4_ * fVar2 + auVar51._0_4_;
      auStack_1e8._4_4_ =
           auVar54._4_4_ * fVar4 + auVar53._4_4_ * fVar3 + auVar52._4_4_ * fVar2 + auVar51._4_4_;
      auStack_1e8._8_4_ =
           auVar54._8_4_ * fVar4 + auVar53._8_4_ * fVar3 + auVar52._8_4_ * fVar2 + auVar51._8_4_;
      auStack_1e8._12_4_ =
           auVar54._12_4_ * fVar4 + auVar53._12_4_ * fVar3 + auVar52._12_4_ * fVar2 + auVar51._12_4_
      ;
      auStack_1f8._0_4_ =
           auVar54._0_4_ * fVar7 + auVar53._0_4_ * fVar6 + auVar52._0_4_ * fVar5 + auVar51._0_4_;
      auStack_1f8._4_4_ =
           auVar54._4_4_ * fVar7 + auVar53._4_4_ * fVar6 + auVar52._4_4_ * fVar5 + auVar51._4_4_;
      auStack_1f8._8_4_ =
           auVar54._8_4_ * fVar7 + auVar53._8_4_ * fVar6 + auVar52._8_4_ * fVar5 + auVar51._8_4_;
      auStack_1f8._12_4_ =
           auVar54._12_4_ * fVar7 + auVar53._12_4_ * fVar6 + auVar52._12_4_ * fVar5 + auVar51._12_4_
      ;
      cVar28 = FUN_144f264e0(lVar35,auStack_138,param_2,auStack_1c8,auStack_1d8,auStack_1e8,
                             auStack_1f8,&uStack_2e8,&uStack_2f8,auStack_f8,param_5);
      if (cVar28 != '\0') {
        if ((*(char *)(*(longlong *)param_1[1] + 0xd + (ulonglong)bVar12 * 0x10) != '\x01') ||
           (cVar28 = FUN_14476a2c0(*(longlong *)param_1[1] + (ulonglong)bVar12 * 0x10,
                                   *(undefined8 *)(param_2 + 0x36)), cVar28 != '\0')) {
          if (param_3 == 0) {
            auVar56 = ZEXT1664(CONCAT88(uStack_2f0,uStack_2f8));
            auVar57 = ZEXT1664(CONCAT88(uStack_2e0,uStack_2e8));
          }
          else {
            auVar56 = ZEXT1664(CONCAT88(uStack_2f0,uStack_2f8));
            auVar57 = ZEXT1664(CONCAT88(uStack_2e0,uStack_2e8));
            if (((*(byte *)(param_3 + 3) & 7) == 0) &&
               (cVar28 = FUN_14522fbe0(param_3,*(undefined8 *)(param_2 + 0x34),param_2,auStack_208,
                                       auStack_218), cVar28 != '\0')) goto LAB_14010f17d;
          }
          auVar45 = auVar58._0_16_;
          auVar42 = auVar56._0_16_;
          auVar50 = auVar59._0_16_;
          auVar46 = auVar57._0_16_;
          uVar34 = (ulonglong)(((uint)param_2[0x36] & 0xffff) << 4);
          if ((*(short *)(*(longlong *)(_DAT_14abbf348 + 0x28) + 8 + uVar34) ==
               (short)((uint)param_2[0x36] >> 0x10)) &&
             ((lVar41 = *(longlong *)(*(longlong *)(_DAT_14abbf348 + 0x28) + uVar34), lVar41 != 0 &&
              (plVar39 = *(longlong **)(*(longlong *)(lVar41 + 8) + 0x20),
              plVar39 != (longlong *)0x0)))) {
            if (((char)plVar39[2] == '\x06') && (*(short *)(param_2 + 0x37) != -2)) {
              uVar29 = func_0x0001403dc2f0();
              auVar45 = auVar58._0_16_;
              auVar42 = auVar56._0_16_;
              auVar50 = auVar59._0_16_;
              auVar46 = auVar57._0_16_;
              if (((uVar29 == 0xffff) || (*(ushort *)((longlong)plVar39 + 0x9a) <= uVar29)) ||
                 (plVar39 = *(longlong **)(plVar39[0xe] + (ulonglong)uVar29 * 8),
                 plVar39 == (longlong *)0x0)) goto LAB_14010edf6;
            }
            sVar30 = *(short *)((longlong)param_2 + 0xde);
            if (*(short *)((longlong)param_2 + 0xde) == -1) {
              sVar30 = 0;
            }
            (**(code **)(*plVar39 + 0x48))(plVar39,sVar30);
            auVar45 = auVar58._0_16_;
            auVar42 = auVar56._0_16_;
            auVar50 = auVar59._0_16_;
            auVar46 = auVar57._0_16_;
          }
LAB_14010edf6:
          auVar50 = vsubps_avx(auVar46,auVar50);
          auVar46 = vsubps_avx(auVar46,auVar45);
          auVar49._0_12_ = ZEXT812(0);
          auVar49._12_4_ = 0;
          auVar43._0_4_ = auVar42._0_4_ * auVar50._0_4_;
          auVar43._4_4_ = auVar42._4_4_ * auVar50._4_4_;
          auVar43._8_4_ = auVar42._8_4_ * auVar50._8_4_;
          auVar43._12_4_ = auVar42._12_4_ * auVar50._12_4_;
          auVar47._0_4_ = auVar42._0_4_ * auVar46._0_4_;
          auVar47._4_4_ = auVar42._4_4_ * auVar46._4_4_;
          auVar47._8_4_ = auVar42._8_4_ * auVar46._8_4_;
          auVar47._12_4_ = auVar42._12_4_ * auVar46._12_4_;
          auStack_188 = auVar55._0_16_;
          auVar42 = vblendps_avx(auVar43,auVar49,8);
          auVar46 = vblendps_avx(auVar47,auVar49,8);
          auVar42 = vhaddps_avx(auVar42,auVar42);
          auVar46 = vhaddps_avx(auVar46,auVar46);
          auVar42 = vhaddps_avx(auVar42,auVar42);
          auVar46 = vhaddps_avx(auVar46,auVar46);
          uStack_1b8 = uStack_2e8;
          uStack_1b0 = uStack_2e0;
          auStack_198 = vmaxps_avx(auVar46,auVar42);
          uStack_1a8 = uStack_2f8;
          uStack_1a0 = uStack_2f0;
          uStack_228 = auStack_2b8._0_8_;
          uStack_220 = auStack_2b8._8_8_;
          FUN_14476a960(&uStack_178,*(undefined8 *)(param_2 + 0x36),&uStack_1b8,&uStack_1a8,
                        auStack_198,&uStack_228,auStack_188,bVar12,
                        *(undefined1 *)(param_1[1] + 0x20));
          auVar43 = auVar55._0_16_;
          auVar50 = auVar54._0_16_;
          auVar45 = auVar53._0_16_;
          auVar46 = auVar52._0_16_;
          auVar42 = auVar51._0_16_;
          if ((char)param_1[6] == '\0') {
            lVar41 = *param_1;
            bVar12 = *(byte *)(*(longlong *)(lVar41 + 0x38) + 7 + uVar38 * 8);
            if (bVar12 == 0xff) {
              *(undefined1 *)(*(longlong *)(lVar41 + 0x38) + 7 + uVar38 * 8) =
                   *(undefined1 *)(lVar41 + 0x164);
              lVar41 = *param_1;
              uVar31 = *(uint *)(lVar41 + 0x164);
              if (uVar31 == *(uint *)(lVar41 + 0x160)) {
                uVar13 = uVar31 >> 1;
                if (uVar31 < 2) {
                  uVar13 = 1;
                }
                lVar35 = func_0x000144d9c140(0x10,(ulonglong)(uVar13 + uVar31) << 6);
                if ((ulonglong)*(uint *)(lVar41 + 0x164) != 0) {
                  func_0x000145f40560(lVar35,*(undefined8 *)(lVar41 + 0x168),
                                      (ulonglong)*(uint *)(lVar41 + 0x164) << 6);
                }
                auVar43 = auVar55._0_16_;
                auVar50 = auVar54._0_16_;
                auVar45 = auVar53._0_16_;
                auVar46 = auVar52._0_16_;
                auVar42 = auVar51._0_16_;
                if (*(longlong *)(lVar41 + 0x168) != 0) {
                  func_0x000144d9c130();
                  auVar43 = auVar55._0_16_;
                  auVar50 = auVar54._0_16_;
                  auVar45 = auVar53._0_16_;
                  auVar46 = auVar52._0_16_;
                  auVar42 = auVar51._0_16_;
                }
                *(longlong *)(lVar41 + 0x168) = lVar35;
                *(uint *)(lVar41 + 0x160) = uVar13 + uVar31;
                uVar31 = *(uint *)(lVar41 + 0x164);
              }
              else {
                lVar35 = *(longlong *)(lVar41 + 0x168);
              }
              *(uint *)(lVar41 + 0x164) = uVar31 + 1;
              puVar36 = (undefined8 *)((ulonglong)uVar31 * 0x40 + lVar35);
            }
            else {
              lVar35 = (ulonglong)bVar12 * 0x40;
              puVar36 = (undefined8 *)(*(longlong *)(lVar41 + 0x168) + lVar35);
              if ((bStack_13b <= *(byte *)(*(longlong *)(lVar41 + 0x168) + 0x3d + lVar35)) &&
                 (fStack_15c <= *(float *)((longlong)puVar36 + 0x1c))) goto LAB_14010efe5;
            }
            puVar36[4] = uStack_158;
            puVar36[5] = uStack_150;
            puVar36[6] = uStack_148;
            puVar36[7] = CONCAT26(uStack_13a,CONCAT15(bStack_13b,CONCAT14(bStack_13c,uStack_140)));
            *puVar36 = uStack_178;
            puVar36[1] = uStack_170;
            puVar36[2] = uStack_168;
            puVar36[3] = CONCAT44(fStack_15c,uStack_160);
          }
LAB_14010efe5:
          lVar35 = param_1[2];
          auStack_268._4_4_ = _DAT_145fc6ed8;
          auStack_268._0_4_ = _DAT_145fc6ed8;
          auStack_268._8_4_ = _DAT_145fc6ed8;
          auStack_268._12_4_ = _DAT_145fc6ed8;
          lVar41 = (ulonglong)bStack_13c * 0x20;
          uStack_108 = *(undefined8 *)(lVar35 + lVar41);
          uStack_100 = ((undefined8 *)(lVar35 + lVar41))[1];
          pauVar1 = (undefined1 (*) [16])(lVar35 + lVar41);
          uVar38 = (ulonglong)((bStack_13c + 1 & 0xff) << 5);
          auStack_238 = *(undefined1 (*) [16])(lVar35 + 0x10 + lVar41);
          auVar58 = ZEXT1664(auStack_268);
          auVar51 = ZEXT1664(auVar42);
          auVar52 = ZEXT1664(auVar46);
          auVar53 = ZEXT1664(auVar45);
          auVar54 = ZEXT1664(auVar50);
          auVar55 = ZEXT1664(auVar43);
          auVar56 = ZEXT1664(CONCAT88(uStack_170,uStack_178));
          auVar59 = ZEXT1664(CONCAT412(fStack_15c,CONCAT48(uStack_160,uStack_168)));
          auVar60 = ZEXT1664(auStack_238);
          FUN_1455cf9a0(&uStack_2c8,auStack_238,&uStack_108,auStack_248,auStack_258,auStack_268);
          uStack_128 = *(undefined8 *)(lVar35 + uVar38);
          uStack_120 = ((undefined8 *)(lVar35 + uVar38))[1];
          auStack_278 = *(undefined1 (*) [16])(lVar35 + 0x10 + uVar38);
          auVar57 = ZEXT1664(auStack_278);
          auStack_288 = auVar59._0_16_;
          auStack_298 = auVar56._0_16_;
          auStack_2a8 = auVar58._0_16_;
          FUN_1455cf9a0(auStack_118,auStack_278,&uStack_128,auStack_288,auStack_298,auStack_2a8);
          iVar32 = vextractps_avx(auVar60._0_16_,3);
          lVar41 = lStack_2d8;
          if (iVar32 != 0) {
            auVar26._8_8_ = uStack_2c0;
            auVar26._0_8_ = uStack_2c8;
            auVar42 = vcmpps_avx(*pauVar1,auVar26,0);
            uVar33 = vmovmskps_avx(auVar42);
            if ((~(byte)uVar33 & 7) != 0) goto LAB_14010f17d;
          }
          iVar32 = vextractps_avx(auVar57._0_16_,3);
          if (iVar32 != 0) {
            auVar42 = vcmpps_avx(auStack_118,*(undefined1 (*) [16])(lVar35 + uVar38),0);
            uVar33 = vmovmskps_avx(auVar42);
            if ((~(byte)uVar33 & 7) != 0) goto LAB_14010f17d;
          }
          *(undefined8 *)*pauVar1 = uStack_2c8;
          *(undefined8 *)(*pauVar1 + 8) = uStack_2c0;
          *(undefined1 (*) [16])(lVar35 + uVar38) = auStack_118;
        }
      }
LAB_14010f17d:
      lVar40 = lVar40 + 0x20;
    } while (lVar41 != lVar40);
  }
  if (param_4 != '\0') {
    auVar44._4_4_ = fVar27;
    auVar44._0_4_ = fVar27;
    auVar44._8_4_ = fVar27;
    auVar44._12_4_ = fVar27;
    auVar48._0_12_ = ZEXT812(0);
    auVar48._12_4_ = 0;
    lVar41 = *(longlong *)(param_2 + 0x34);
    auVar42 = vcmpps_avx(auVar48,auVar44,2);
    if (auVar42 == (undefined1  [16])0x0) {
      *(undefined4 *)(lVar41 + 0x2c) = 0x3d23d70a;
    }
    else {
      auVar42 = vblendps_avx(auVar44,*(undefined1 (*) [16])(lVar41 + 0x20),7);
      *(undefined1 (*) [16])(lVar41 + 0x20) = auVar42;
    }
  }
  return;
}

