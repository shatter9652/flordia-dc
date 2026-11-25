// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140176410  size: 479 bytes
// Name:    FUN_140176410
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14525a2b0, FUN_143d69780, FUN_143d68700, FUN_1412467f0, FUN_14525a3b0, FUN_144f84b90, FUN_14558e560, FUN_144fc6bc0, FUN_145407590, FUN_143d697d0, FUN_140d50010, FUN_145369370, FUN_1452307c0, FUN_1452007c0, FUN_140cd7670
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140176410(longlong param_1,ushort param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  char cVar5;
  ushort uVar6;
  uint uVar7;
  undefined4 *puVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 uVar12;
  uint *puVar13;
  longlong *plVar14;
  longlong lVar15;
  ushort uVar16;
  int iVar17;
  longlong *plVar18;
  uint uVar19;
  byte bVar20;
  uint uVar21;
  ulonglong uVar22;
  bool bVar23;
  undefined4 uVar24;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_04;
  undefined8 extraout_XMM0_Qa_05;
  undefined8 extraout_XMM0_Qa_06;
  undefined8 extraout_XMM0_Qa_07;
  undefined8 extraout_XMM0_Qa_08;
  undefined1 auVar25 [16];
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined1 auVar26 [16];
  undefined1 auVar27 [64];
  undefined1 extraout_var [56];
  undefined1 extraout_var_00 [56];
  undefined1 extraout_var_01 [56];
  undefined1 extraout_var_02 [56];
  undefined1 extraout_var_03 [56];
  undefined1 extraout_var_04 [56];
  undefined1 extraout_var_05 [56];
  undefined1 extraout_var_06 [56];
  undefined1 extraout_var_07 [56];
  undefined1 extraout_var_08 [56];
  undefined1 extraout_var_09 [56];
  undefined1 extraout_var_10 [56];
  undefined1 extraout_var_11 [56];
  undefined1 extraout_var_12 [56];
  undefined1 extraout_var_13 [56];
  undefined1 extraout_var_14 [56];
  float fVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [64];
  float fVar31;
  undefined1 auVar32 [64];
  undefined1 in_ZMM8 [64];
  undefined1 auVar33 [64];
  undefined4 uVar34;
  undefined1 in_ZMM10 [64];
  undefined1 auVar36 [64];
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined1 auVar42 [64];
  undefined8 *in_stack_fffffffffffffde8;
  int iStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  undefined1 auStack_1d8 [8];
  undefined8 uStack_1d0;
  longlong lStack_1c0;
  undefined8 uStack_1b8;
  longlong lStack_1b0;
  uint uStack_1a8;
  int iStack_1a4;
  undefined8 uStack_1a0;
  longlong lStack_198;
  int iStack_190;
  longlong *plStack_188;
  int iStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  uint uStack_14c;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined1 auStack_138 [16];
  undefined1 auStack_128 [16];
  undefined8 uStack_118;
  undefined8 uStack_110;
  longlong lStack_108;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  undefined1 auStack_c8 [16];
  undefined1 auStack_a8 [16];
  undefined8 uStack_60;
  undefined1 auVar35 [64];
  
  *(byte *)(param_1 + 0x250) = *(byte *)(param_1 + 0x250) & 0xdf;
  plVar18 = (longlong *)(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffff0);
  uStack_60 = 0x14017643a;
  puVar8 = (undefined4 *)FUN_14525a3b0(plVar18);
  if ((param_2 & 2) != 0) {
    uStack_60 = 0x14017644f;
    FUN_143d68700(param_1);
  }
  if ((param_2 & 8) != 0) {
    uStack_60 = 0x14017645e;
    FUN_14558e560(*(undefined8 *)(param_1 + 8));
  }
  if (puVar8 == (undefined4 *)0x0) {
    return;
  }
  uStack_60 = 0x140176472;
  lVar9 = func_0x000144e2a320(*(undefined4 *)((longlong)plVar18 + 0x9c));
  if (lVar9 == 0) {
    bVar20 = 1;
  }
  else {
    bVar20 = (*(byte *)(lVar9 + 0x1e4) & 8) >> 3;
  }
  cVar4 = *(char *)((longlong)plVar18 + 0xfa);
  if (cVar4 == '\x01') {
    uStack_60 = 0x1401764a0;
    FUN_143d69780(plVar18,puVar8);
  }
  else if (((param_2 & 2) == 0) || ((byte)(cVar4 - 7U) < 0xfe)) {
    if (bVar20 == 1 && (byte)(cVar4 - 0xcU) < 3) {
      uStack_60 = 0x1401764d9;
      FUN_1412467f0(plVar18,puVar8[0xe]);
    }
  }
  else {
    uStack_60 = 0x1401764bb;
    FUN_140cd7670(plVar18,puVar8[0xc]);
  }
  if ((byte)(*(char *)((longlong)plVar18 + 0xfa) - 9U) < 3) {
    if ((param_2 & 8) != 0) {
      uVar24 = puVar8[0xb];
LAB_140176508:
      uStack_60 = 0x140176516;
      FUN_140d50010(param_1,plVar18,uVar24);
    }
  }
  else {
    uVar24 = puVar8[0xb];
    uStack_60 = 0x1401764fd;
    lVar9 = func_0x00014526f730(uVar24);
    if (((param_2 & 8) != 0) && (lVar9 != 0)) goto LAB_140176508;
  }
  if (bVar20 == 0) {
LAB_14017658f:
    if ((param_2 & 4) == 0) goto LAB_14017659f;
  }
  else {
    if ((param_2 & 1) != 0) {
      uStack_60 = 0x14017652f;
      FUN_1452307c0(param_1,plVar18,*puVar8);
    }
    if ((param_2 & 2) != 0) {
      uStack_60 = 0x140176544;
      FUN_14525a2b0(param_1,plVar18,puVar8[1]);
    }
    if ((param_2 & 4) != 0) {
      uStack_60 = 0x140176558;
      func_0x0001452acb30(plVar18,puVar8);
    }
    if ((param_2 & 0x10) != 0) {
      uStack_60 = 0x140176569;
      FUN_144fc6bc0(plVar18,puVar8[9]);
    }
    if (param_2 != 0xff) goto LAB_14017658f;
    uStack_60 = 0x14017657b;
    FUN_143d697d0(plVar18,puVar8);
    uStack_60 = 0x140176586;
    FUN_145369370(plVar18,puVar8[2]);
  }
  uStack_60 = 0x14017659f;
  FUN_144f84b90(param_1,plVar18);
LAB_14017659f:
  if ((param_2 & 8) != 0) {
    uStack_60 = 0x1401765b3;
    FUN_145407590(param_1,plVar18,puVar8);
    uStack_60 = 0x1401765c1;
    FUN_1452007c0(param_1,plVar18,puVar8);
  }
  if ((param_2 & 2) == 0) {
    return;
  }
  plVar14 = (longlong *)func_0x000144fca3b0(puVar8[4]);
  if (plVar14 == (longlong *)0x0) {
    return;
  }
  auStack_a8 = in_ZMM10._0_16_;
  auStack_c8 = in_ZMM8._0_16_;
  uVar24 = *(undefined4 *)((longlong)plVar18 + 0x9c);
  lVar9 = func_0x000144db7b80(uVar24);
  lVar10 = func_0x000144db7a10(uVar24);
  lStack_1c0 = func_0x00014502b780(uVar24);
  if (lStack_1c0 != 0 && (lVar9 != 0 && plVar14 != (longlong *)0x0)) {
    if (lVar10 == 0) {
      fStack_f8 = 0.0;
      fStack_f4 = 0.0;
      fStack_f0 = 0.0;
      fStack_ec = 0.0;
    }
    else {
      FUN_144e40a00(lVar10,&fStack_f8);
    }
    uVar16 = *(ushort *)(plVar14 + 1);
    if (uVar16 != 0) {
      auVar25._0_4_ = fStack_f8 * fStack_f8;
      auVar25._4_4_ = fStack_f4 * fStack_f4;
      auVar25._8_4_ = fStack_f0 * fStack_f0;
      auVar25._12_4_ = fStack_ec * fStack_ec;
      auVar29._0_12_ = ZEXT812(0);
      auVar29._12_4_ = 0;
      auVar36 = ZEXT1664(auVar29);
      fVar40 = 0.0;
      fVar41 = 0.0;
      lVar10 = 0x48;
      uVar22 = 0;
      fVar37 = 0.0;
      auVar25 = vblendps_avx(auVar25,auVar29,8);
      auVar25 = vhaddps_avx(auVar25,auVar25);
      auVar29 = vhaddps_avx(auVar25,auVar25);
      auVar25 = vrsqrtss_avx(auVar29,auVar29);
      fVar28 = auVar25._0_4_;
      auVar25 = vcmpss_avx(ZEXT416(_DAT_146159bfc),auVar29,2);
      auVar27 = ZEXT1664(auVar25);
      auVar30 = ZEXT464(auVar25._0_4_ &
                        (uint)(((fVar28 * fVar28 * auVar29._0_4_ * _DAT_145fc6f08 + _DAT_145fc6edc)
                                * fVar28 + fVar28) * auVar29._0_4_));
      fVar28 = _DAT_14615af54;
      fVar38 = _DAT_146159c90;
      fVar39 = _UNK_146159c94;
      do {
        lVar2 = *plVar14;
        plVar11 = (longlong *)
                  func_0x0001414498f0(auVar27._0_8_,*(undefined8 *)(lVar9 + 0x150),
                                      *(undefined4 *)(lVar2 + -0x44 + lVar10));
        auVar27._8_56_ = extraout_var;
        auVar27._0_8_ = extraout_XMM0_Qa;
        if (plVar11 != (longlong *)0x0) {
          puVar13 = (uint *)plVar11[1];
          lVar15 = *(longlong *)(*plVar11 + 8);
          if (puVar13 == (uint *)0x0) {
            lVar3 = *(longlong *)(*plVar11 + 0x10);
            if (*(int *)(*(longlong *)(lVar15 + 0x30) + (ulonglong)*(uint *)(lVar3 + 0xc) * 0x18) !=
                -0x39b84f20) {
              puVar13 = (uint *)(lVar3 + 8);
              goto code_r0x00014131e03c;
            }
          }
          else if (*(int *)(*(longlong *)(lVar15 + 0x30) + (ulonglong)puVar13[1] * 0x18) !=
                   -0x39b84f20) {
code_r0x00014131e03c:
            bVar23 = false;
            auVar32 = ZEXT464(*(uint *)(plVar11 + 2));
            auVar42 = ZEXT464(*puVar13);
            fStack_1dc = 0.0;
            fStack_1e0 = 0.0;
            uVar21 = (uint)uVar22;
            in_stack_fffffffffffffde8 =
                 (undefined8 *)
                 CONCAT44((int)((ulonglong)in_stack_fffffffffffffde8 >> 0x20),
                          *(undefined4 *)(lVar2 + -0x24 + lVar10));
            func_0x0001454b6000(&fStack_1dc,&fStack_1e0,plVar18,
                                *(undefined4 *)(lVar2 + -0x28 + lVar10),in_stack_fffffffffffffde8,
                                *(undefined4 *)(lVar2 + -0x20 + lVar10),
                                *(undefined4 *)(lVar2 + -0x1c + lVar10),uVar21);
            fVar31 = auVar32._0_4_;
            if ((*(char *)(lVar2 + -0x38 + lVar10) == '\x01') && (fVar31 <= fStack_1e0)) {
              bVar23 = (*(byte *)(lVar9 + 0x10) & 1) == 0;
            }
            auVar25 = vminss_avx(ZEXT416((uint)fStack_1e0),auVar42._0_16_);
            auVar27 = ZEXT1664(auVar25);
            if ((!(bool)(auVar25._0_4_ <= fVar31 & (bVar23 ^ 1U))) && (fStack_1dc < fVar31)) {
              _auStack_1d8 = auVar36._0_16_;
              iStack_1e4 = -1;
              uStack_148 = _DAT_145fc6ee0;
              uStack_140 = _UNK_145fc6ee8;
              iVar17 = *(int *)(lVar2 + -0x40 + lVar10);
              if (iVar17 == 0) {
code_r0x00014131e13a:
                uVar24 = *(undefined4 *)(lVar2 + -0x3c + lVar10);
                cVar4 = (**(code **)(*plVar18 + 0x288))();
                auVar27._8_56_ = extraout_var_00;
                auVar27._0_8_ = extraout_XMM0_Qa_00;
                if (cVar4 != '\0') {
                  uVar12 = (**(code **)(*plVar18 + 0xa8))();
                  auVar27._0_8_ = FUN_14006e840(uVar12,&uStack_1a8,uVar24);
                  iVar17 = iStack_1a4;
                  auVar27._8_56_ = extraout_var_01;
                  if (((char)uStack_1a8 != '\0') && (iStack_1a4 != -1)) {
                    cVar4 = FUN_145026160(plVar18);
                    auVar27._8_56_ = extraout_var_02;
                    auVar27._0_8_ = extraout_XMM0_Qa_01;
                    if (cVar4 == '\0') goto code_r0x00014131e1a8;
                  }
                }
              }
              else {
                in_stack_fffffffffffffde8 = &uStack_148;
                FUN_143390450(plVar18,iVar17,&iStack_1e4,auStack_1d8,in_stack_fffffffffffffde8);
                iVar17 = iStack_1e4;
                if ((iStack_1e4 == -1) || (cVar4 = FUN_145026160(plVar18), cVar4 != '\0'))
                goto code_r0x00014131e13a;
code_r0x00014131e1a8:
                uVar19 = *(int *)(lVar2 + lVar10) - 1;
                uVar24 = func_0x000144e8f130(auVar32._0_8_,*(undefined4 *)(lVar2 + -0x18 + lVar10),
                                             *(undefined4 *)(lVar2 + -0x14 + lVar10));
                auVar27._0_8_ =
                     func_0x000144e8f130(auVar30._0_8_,*(undefined4 *)(lVar2 + -0x10 + lVar10),
                                         *(undefined4 *)(lVar2 + -0xc + lVar10));
                auVar27._8_56_ = extraout_var_03;
                auVar35 = ZEXT1664(auVar27._0_16_);
                uVar34 = (undefined4)auVar27._0_8_;
                auVar33 = ZEXT1264(ZEXT812(0));
                if (uVar19 < 5) {
                  lVar15 = plVar11[1];
                  if (lVar15 == 0) {
                    lVar15 = *(longlong *)(*plVar11 + 0x10) + 8;
                  }
                  if (*(int *)(*(longlong *)(*(longlong *)(*plVar11 + 8) + 0x30) +
                              (ulonglong)*(uint *)(lVar15 + 4) * 0x18) == 0x1a5b72cc) {
                    lVar15 = FUN_14006e7f0(*(undefined4 *)((longlong)plVar18 + 0x9c),0xd95d39a4);
                    auVar27._8_56_ = extraout_var_04;
                    auVar27._0_8_ = extraout_XMM0_Qa_02;
                    if (lVar15 != 0) {
                      lStack_1b0 = lVar15;
                      cVar4 = FUN_140691060(lVar15);
                      uStack_1b8 = *(undefined8 *)(*plVar11 + 0x10);
                      uVar12 = FUN_144f7c6c0(lVar9);
                      puVar13 = (uint *)func_0x000145250ed0(uRam0000000149e48a80,uVar12,uStack_1b8);
                      auVar33 = ZEXT464(*puVar13);
                      cVar5 = FUN_140691000(*(undefined8 *)(*(longlong *)(lStack_1b0 + 0x10) + 8));
                      auVar27._8_56_ = extraout_var_05;
                      auVar27._0_8_ = extraout_XMM0_Qa_03;
                      if ((cVar4 != '\0') || (cVar5 != '\0')) {
                        if ((auVar33._0_4_ < auVar32._0_4_) && (fVar37 < auVar42._0_4_)) {
                          auVar26._0_4_ = (auVar32._0_4_ - auVar33._0_4_) / auVar42._0_4_;
                          auVar26._4_12_ = SUB6012((undefined1  [60])0x0,0);
                          auVar27._0_8_ =
                               func_0x000144e8f130(auVar26._0_8_,
                                                   *(undefined4 *)(lVar2 + -8 + lVar10),
                                                   *(undefined4 *)(lVar2 + -4 + lVar10));
                          uVar34 = auVar35._0_4_;
                          auVar27._8_56_ = extraout_var_06;
                          if (((float)auVar27._0_8_ != fVar37) ||
                             (NAN((float)auVar27._0_8_) || NAN(fVar37))) {
                            auVar33 = ZEXT1664(auVar27._0_16_);
                            goto code_r0x00014131e2f6;
                          }
                        }
                      }
                    }
                  }
                }
                else {
code_r0x00014131e2f6:
                  lVar15 = lStack_1c0;
                  iVar1 = *(int *)(lVar2 + -0x48 + lVar10);
                  if (iVar1 != 0) {
                    lStack_198 = uVar22 + 0x20;
                    plVar11 = *(longlong **)((ulonglong)*(byte *)(plVar18 + 6) * 8 + 0x14abbe7c0);
                    uVar7 = (uint)((ulonglong)((longlong)plVar18 - *plVar11) /
                                  (ulonglong)*(uint *)(plVar11 + 1)) & 0x1ffff;
                    uStack_1a8 = (*(byte *)(plVar18 + 6) & 0x1f) << 0x11 | uVar7 |
                                 (*(uint *)(plVar11[5] + (ulonglong)uVar7 * 4) & 0x7fe0000) << 5;
                    iStack_1a4 = 0;
                    uStack_1a0 = 0;
                    uStack_178 = auStack_1d8;
                    uStack_170 = uStack_1d0;
                    uStack_168 = uStack_148;
                    uStack_160 = uStack_140;
                    uStack_150 = auVar33._0_4_;
                    uStack_14c = *(uint *)(lVar2 + -0x2c + lVar10);
                    auVar27 = ZEXT464(uStack_14c);
                    iStack_190 = iVar1;
                    plStack_188 = plVar18;
                    iStack_180 = iVar17;
                    uStack_158 = uVar24;
                    uStack_154 = uVar34;
                    if (*(char *)(lVar2 + -0x38 + lVar10) == '\x01') {
                      if ((*(uint *)(lStack_1c0 + 0x140 + (uVar22 >> 5) * 4) >> (uVar21 & 0x1f) & 1)
                          == 0) {
                        _DAT_14ab4e7c0 =
                             (_DAT_14ab4e7c0 & 0xffffffff) * 0x5cdcfaa7 + (_DAT_14ab4e7c0 >> 0x20);
                        fVar31 = fVar28 * (float)((uint)_DAT_14ab4e7c0 & 0x7fffff);
                        auVar27 = ZEXT464((uint)fVar31);
                        if (fVar31 < *(float *)(lVar2 + -0x34 + lVar10)) {
                          auVar27._0_8_ = FUN_143391130(&uStack_1a8);
                          auVar27._8_56_ = extraout_var_07;
                          goto code_r0x00014131e473;
                        }
                      }
                    }
                    else {
                      auVar27._0_8_ = FUN_143391020(&uStack_1a8);
                      auVar27._8_56_ = extraout_var_08;
                      lVar15 = lStack_1c0;
code_r0x00014131e473:
                      *(uint *)(lVar15 + 0x140) = *(uint *)(lVar15 + 0x140) | 1 << (uVar21 & 0x1f);
                      if (uVar19 < 5) {
                        uStack_118 = CONCAT44(iStack_1a4,uStack_1a8);
                        lStack_108 = lStack_198;
                        uStack_110 = uStack_1a0;
                        lVar15 = FUN_1452327e0(&uStack_118);
                        auVar27._8_56_ = extraout_var_09;
                        auVar27._0_8_ = extraout_XMM0_Qa_04;
                        if (lVar15 != 0) {
                          lVar15 = FUN_144e40400(*(undefined4 *)(lVar15 + 0x18));
                          auVar27._8_56_ = extraout_var_10;
                          auVar27._0_8_ = extraout_XMM0_Qa_05;
                          if (lVar15 != 0) {
                            lVar15 = func_0x00014506c3d0(*(undefined4 *)((longlong)plVar18 + 0x9c));
                            auVar27._8_56_ = extraout_var_11;
                            auVar27._0_8_ = extraout_XMM0_Qa_06;
                            if (lVar15 != 0) {
                              lVar15 = FUN_1403649f0(lVar15);
                              auVar27._8_56_ = extraout_var_12;
                              auVar27._0_8_ = extraout_XMM0_Qa_07;
                              if (lVar15 != 0) {
                                auVar25 = *(undefined1 (*) [16])(plVar18 + 0xe);
                                auVar29 = vpunpckhwd_avx(auVar25,auVar25);
                                auVar29 = vpsrad_avx(auVar29,0x10);
                                auVar29 = vcvtdq2ps_avx(auVar29);
                                auVar29 = vshufpd_avx(auVar29,auVar29,3);
                                auStack_138._0_4_ =
                                     (float)uStack_1d0 * *(float *)(plVar18 + 0xc) +
                                     (float)auStack_1d8._4_4_ * *(float *)(plVar18 + 10) +
                                     (float)auStack_1d8._0_4_ * *(float *)(plVar18 + 8) +
                                     auVar29._0_4_ * fVar38 + auVar25._0_4_;
                                auStack_138._4_4_ =
                                     (float)uStack_1d0 * *(float *)((longlong)plVar18 + 100) +
                                     (float)auStack_1d8._4_4_ * *(float *)((longlong)plVar18 + 0x54)
                                     + (float)auStack_1d8._0_4_ *
                                       *(float *)((longlong)plVar18 + 0x44) +
                                       auVar29._4_4_ * fVar39 + auVar25._4_4_;
                                auStack_138._8_4_ =
                                     (float)uStack_1d0 * *(float *)(plVar18 + 0xd) +
                                     (float)auStack_1d8._4_4_ * *(float *)(plVar18 + 0xb) +
                                     (float)auStack_1d8._0_4_ * *(float *)(plVar18 + 9) +
                                     auVar29._8_4_ * fVar40 + auVar25._8_4_;
                                auStack_138._12_4_ =
                                     (float)uStack_1d0 * *(float *)((longlong)plVar18 + 0x6c) +
                                     (float)auStack_1d8._4_4_ * *(float *)((longlong)plVar18 + 0x5c)
                                     + (float)auStack_1d8._0_4_ *
                                       *(float *)((longlong)plVar18 + 0x4c) +
                                       auVar29._12_4_ * fVar41 + auVar25._12_4_;
                                auVar32 = ZEXT1664(auStack_138);
                                cVar4 = FUN_1410cd200(plVar18,auStack_138);
                                uVar24 = (undefined4)((ulonglong)in_stack_fffffffffffffde8 >> 0x20);
                                auVar27._8_56_ = extraout_var_13;
                                auVar27._0_8_ = extraout_XMM0_Qa_08;
                                if (cVar4 != '\0') {
                                  uVar34 = *(undefined4 *)(lVar2 + lVar10);
                                  auStack_128 = auVar32._0_16_;
                                  uVar12 = func_0x000145232960(&uStack_1a8,0x18);
                                  in_stack_fffffffffffffde8 =
                                       (undefined8 *)CONCAT44(uVar24,auVar33._0_4_);
                                  auVar27._0_8_ =
                                       FUN_144552500(plVar18,iVar17,uVar12,auStack_128,
                                                     in_stack_fffffffffffffde8,uVar34,0);
                                  auVar27._8_56_ = extraout_var_14;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              uVar16 = *(ushort *)(plVar14 + 1);
            }
          }
        }
        uVar22 = uVar22 + 1;
        uVar6 = 0x20;
        if (uVar16 < 0x20) {
          uVar6 = uVar16;
        }
        lVar10 = lVar10 + 0x4c;
      } while (uVar22 < uVar6);
    }
  }
  return;
}

