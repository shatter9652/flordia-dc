// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140068c00  size: 1779 bytes
// Name:    FUN_140068c00
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144fbb820, FUN_1404fa330, FUN_144ed4740, FUN_1451f9740
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140068c00(longlong *param_1,uint param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong lVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  byte bVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  longlong lVar23;
  uint uVar24;
  longlong lVar25;
  undefined4 uVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [64];
  undefined4 uVar31;
  undefined1 auVar32 [64];
  undefined1 auVar33 [64];
  undefined1 auVar34 [64];
  undefined1 auStack_e8 [16];
  undefined1 auStack_d8 [16];
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [16];
  
  if ((param_1 != (longlong *)0x0) &&
     (uVar19 = *(uint *)((longlong)param_1 + 0xa4), (~uVar19 & 0x7ffe) != 0)) {
    uVar22 = uVar19 >> 1 & 0x3fff;
    plVar13 = _DAT_1498e6408;
    if ((uVar19 & 1) == 0) {
      plVar13 = _DAT_1498e6400;
    }
    if (((1 << ((byte)(uVar19 >> 1) & 7) & (uint)*(byte *)(plVar13[5] + (ulonglong)(uVar22 >> 3)))
         != 0) && (lVar23 = (ulonglong)(uVar22 * (int)plVar13[1]) + *plVar13, lVar23 != 0)) {
      bVar18 = *(byte *)(param_1 + 6);
      lVar15 = param_1[0x10];
      bVar11 = bVar18;
      if ((bVar18 & 0xfe) == 0xc) {
        lVar25 = param_1[0x1c];
        lVar14 = func_0x000144ef3620(*(undefined4 *)((longlong)param_1 + 0xec));
        uVar31 = _DAT_14615f154;
        if (((lVar14 != 0) && (*(short *)(lVar14 + 0x2e) != -1)) &&
           (*(char *)(lVar14 + 0x24) != '\0')) {
          uVar31 = *(undefined4 *)(lVar14 + 0x30);
        }
        if (bVar18 == 0xc) {
          bVar10 = (*(byte *)((longlong)param_1 + 0x15e) & 0x10) >> 4;
          bVar11 = 0xc;
        }
        else {
          bVar10 = 0;
        }
      }
      else {
        uVar31 = 0;
        bVar10 = 0;
        lVar25 = 0;
      }
      if (((lVar15 != 0) && (*(short *)((longlong)param_1 + 0x92) != -1)) &&
         ((*(byte *)(lVar15 + 0x94) & 1) != 0)) {
        FUN_144fbb820(param_1);
        bVar11 = *(byte *)(param_1 + 6);
        bVar18 = bVar11;
      }
      uVar26 = *(undefined4 *)((longlong)param_1 + 0x9c);
      if (bVar11 == 3) {
        lVar15 = func_0x000144dd7540(uVar26);
      }
      else {
        lVar15 = 0;
      }
      lVar14 = func_0x0001455b0540(uVar26);
      uVar22 = *(uint *)(param_1 + 0x16);
      bVar11 = func_0x00014530d6e0();
      uVar4 = *(uint *)((longlong)param_1 + 0x34);
      uVar19 = (uint)bVar11 * 2;
      if (((uVar4 >> 0xd & 1) != 0) || ((0x1cU >> (bVar18 & 0x1f) & 1) != 0)) {
        uVar19 = uVar19 | 4;
      }
      if ((bVar18 == 4) && ((*(byte *)(param_1 + 0x20) & 7) != 0)) {
        uVar19 = uVar19 | 8;
      }
      uVar19 = uVar19 + (uVar4 & 2) * 8;
      if ((lVar15 != 0) && ((*(byte *)(lVar15 + 0x10) & 0x20) != 0)) {
        uVar19 = uVar19 | 0x20;
      }
      uVar19 = (uint)(bVar18 == 1 || *(int *)((longlong)param_1 + 0xb4) < 0) << 7 |
               uVar19 + (*(uint *)(param_1[4] + 0x98) & 0x10) * 4;
      if (((bVar18 == 0xd) && (param_1[0x22] != 0)) && (*(char *)(param_1[0x22] + 0x150) == '\x01'))
      {
        uVar19 = uVar19 | 0x100;
      }
      if ((lVar14 != 0) && ((*(uint *)(lVar14 + 0x2c) & 3) == 1)) {
        uVar19 = uVar19 | 0x200;
      }
      uVar1 = *(ushort *)((longlong)param_1 + 0x96);
      uVar2 = *(ushort *)((longlong)param_1 + 0x32);
      bVar11 = *(byte *)((longlong)param_1 + 0x94);
      uVar24 = 0x40000000;
      uVar3 = *(ushort *)(param_1 + 0x11);
      if (bVar18 != 9) {
        uVar24 = uVar1 & 0xf;
        uVar24 = ((1 << uVar24 & 0xffffffdeU) >> (uint)(uVar24 == 6) & 0x7f) << 0x18 |
                 ((uint)((uVar1 & 0xf) == 0 || uVar24 == 5) <<
                 ((byte)(*(char *)(*(longlong *)(lVar23 + 0x20) + 0x30) - 3U) < 0xfe)) << 0x17;
      }
      uVar21 = 0x1000 << (*(byte *)((longlong)param_1 + 0x9a) & 0x1f) & 0x7fff000U |
               *(ushort *)(param_1 + 0x13) & 0xfff;
      uVar20 = 0;
      if ((bVar18 != 0xb) && (uVar21 = uVar21 | uVar4 << 0x1f, uVar20 = 0, bVar18 == 4)) {
        bVar12 = func_0x0001451f9a70(*(undefined8 *)(param_1[4] + 0x50));
        uVar20 = (uint)bVar12 << 0x1e;
      }
      uVar21 = uVar21 | uVar20;
      switch((ushort)((uVar1 & 0x70) - 0x10) >> 4) {
      case 0:
        uVar21 = uVar21 | 0x8000000;
        break;
      case 1:
        uVar21 = uVar21 | 0x10000000;
        break;
      case 2:
        uVar21 = uVar21 | 0x18000000;
        break;
      case 3:
        uVar21 = uVar21 | 0x20000000;
        break;
      case 4:
        uVar21 = uVar21 | 0x28000000;
        break;
      default:
        if ((uVar1 & 0x70) == 0x60) {
          uVar21 = uVar21 | 0x30000000;
        }
      }
      auStack_c8._4_4_ = _DAT_145fc6f50;
      auStack_c8._0_4_ = _DAT_145fc6f50;
      auStack_c8._8_4_ = _DAT_145fc6f50;
      auStack_c8._12_4_ = _DAT_145fc6f50;
      auStack_b8._4_4_ = _DAT_145fc6f54;
      auStack_b8._0_4_ = _DAT_145fc6f54;
      auStack_b8._8_4_ = _DAT_145fc6f54;
      auStack_b8._12_4_ = _DAT_145fc6f54;
      auStack_e8._0_12_ = ZEXT812(0);
      auStack_e8._12_4_ = 0;
      auVar30 = ZEXT1664(auStack_e8);
      FUN_144ed4740(auStack_c8,auStack_e8,param_1);
      auVar29 = vsubps_avx(auStack_b8,auStack_c8);
      auVar32 = ZEXT1664(CONCAT412((auStack_b8._12_4_ + auStack_c8._12_4_) * _DAT_145fc6edc,
                                   CONCAT48((auStack_b8._8_4_ + auStack_c8._8_4_) * _DAT_145fc6edc,
                                            CONCAT44((auStack_b8._4_4_ + auStack_c8._4_4_) *
                                                     _DAT_145fc6edc,
                                                     (auStack_b8._0_4_ + auStack_c8._0_4_) *
                                                     _DAT_145fc6edc))));
      plVar13 = param_1;
      if ((0x3600U >> (*(uint *)(param_1 + 6) & 0x1f) & 1) == 0) {
        if (*(short *)((longlong)param_1 + 0x92) == -1) {
          plVar13 = (longlong *)param_1[0x10];
        }
        else {
          plVar13 = (longlong *)0x0;
        }
        if (plVar13 == (longlong *)0x0) {
          plVar13 = param_1;
        }
      }
      uVar22 = (bVar11 & 3) << 0xc |
               (uVar4 >> 6 & 0x400 | uVar4 >> 8 & 1 | uVar19) + (uVar2 & 0x100) * 8 |
               uVar22 >> 0xb & 0x4000;
      uVar19 = uVar24 + ((uVar1 & 7) << 0x14 | (bVar18 & 0xf) << 0x10 | (uint)uVar3) |
               (uint)bVar10 << 0x1f;
      auVar34 = ZEXT1664(CONCAT412(auVar29._12_4_ * _DAT_145fc6edc,
                                   CONCAT48(auVar29._8_4_ * _DAT_145fc6edc,
                                            CONCAT44(auVar29._4_4_ * _DAT_145fc6edc,
                                                     auVar29._0_4_ * _DAT_145fc6edc))));
      (**(code **)(*plVar13 + 400))(CONCAT44(_DAT_145fc6edc,_DAT_145fc6edc),auStack_d8);
      auVar29 = vsubps_avx(auVar32._0_16_,auStack_e8);
      auVar28 = vsubps_avx(auStack_d8,auVar32._0_16_);
      auVar33 = ZEXT1664(auVar28);
      auVar28._0_4_ = auVar29._0_4_ * auVar29._0_4_;
      auVar28._4_4_ = auVar29._4_4_ * auVar29._4_4_;
      auVar28._8_4_ = auVar29._8_4_ * auVar29._8_4_;
      auVar28._12_4_ = auVar29._12_4_ * auVar29._12_4_;
      auVar29 = vblendps_avx(auVar28,auVar30._0_16_,8);
      auVar29 = vhaddps_avx(auVar29,auVar29);
      auVar28 = vhaddps_avx(auVar29,auVar29);
      auVar29 = vrsqrtps_avx(auVar28);
      fVar6 = auVar29._0_4_;
      fVar7 = auVar29._4_4_;
      fVar8 = auVar29._8_4_;
      fVar9 = auVar29._12_4_;
      auVar29._4_4_ = _DAT_146159bfc;
      auVar29._0_4_ = _DAT_146159bfc;
      auVar29._8_4_ = _DAT_146159bfc;
      auVar29._12_4_ = _DAT_146159bfc;
      auVar29 = vcmpps_avx(auVar29,auVar28,2);
      auVar30 = ZEXT1664(CONCAT412((float)(auVar29._12_4_ &
                                          (uint)(((fVar9 * fVar9 * auVar28._12_4_ * _DAT_145fc6f08 -
                                                  _DAT_145fc6f08) * fVar9 + fVar9) * auVar28._12_4_)
                                          ) + (float)auStack_e8._12_4_,
                                   CONCAT48((float)(auVar29._8_4_ &
                                                   (uint)(((fVar8 * fVar8 * auVar28._8_4_ *
                                                            _DAT_145fc6f08 - _DAT_145fc6f08) * fVar8
                                                          + fVar8) * auVar28._8_4_)) +
                                            (float)auStack_e8._12_4_,
                                            CONCAT44((float)(auVar29._4_4_ &
                                                            (uint)(((fVar7 * fVar7 * auVar28._4_4_ *
                                                                     _DAT_145fc6f08 - _DAT_145fc6f08
                                                                    ) * fVar7 + fVar7) *
                                                                  auVar28._4_4_)) +
                                                     (float)auStack_e8._12_4_,
                                                     (float)(auVar29._0_4_ &
                                                            (uint)(((fVar6 * fVar6 * auVar28._0_4_ *
                                                                     _DAT_145fc6f08 - _DAT_145fc6f08
                                                                    ) * fVar6 + fVar6) *
                                                                  auVar28._0_4_)) +
                                                     (float)auStack_e8._12_4_))));
      uVar26 = FUN_1451f9740(param_1);
      if ((*(byte *)(lVar23 + 0x28) & 1) == 0) {
        puVar16 = (undefined8 *)func_0x000144e67fd0(lVar23,param_2);
        auVar27._0_12_ = ZEXT812(0);
        auVar27._12_4_ = 0;
        *puVar16 = param_1;
        *(uint *)(puVar16 + 3) = uVar19;
        *(uint *)((longlong)puVar16 + 0x1c) = uVar21;
        auVar29 = vblendps_avx(auVar32._0_16_,auVar27,8);
        auVar28 = vblendps_avx(auVar33._0_16_,auVar27,8);
        *(undefined1 (*) [16])(puVar16 + 4) = auVar29;
        auVar29 = vinsertps_avx(auVar34._0_16_,auVar30._0_16_,0x30);
        *(undefined1 (*) [16])(puVar16 + 6) = auVar29;
        *(undefined1 (*) [16])(puVar16 + 8) = auVar28;
        *(uint *)((longlong)puVar16 + 0x4c) = uVar22;
        puVar16[1] = lVar25;
        *(undefined4 *)(puVar16 + 2) = uVar31;
        *(undefined4 *)((longlong)puVar16 + 0x2c) = uVar26;
        if ((char)param_1[6] == '\f') {
          *(float *)((longlong)puVar16 + 0x14) =
               *(float *)(param_1[4] + 0x2c) * *(float *)(param_1 + 0x2b);
        }
      }
      else {
        uVar17 = (ulonglong)param_2;
        *(longlong **)(*(longlong *)(lVar23 + 0x50) + uVar17 * 8) = param_1;
        *(uint *)(*(longlong *)(lVar23 + 0x80) + uVar17 * 4) = uVar22;
        *(uint *)(*(longlong *)(lVar23 + 0x70) + uVar17 * 4) = uVar19;
        *(uint *)(*(longlong *)(lVar23 + 0x78) + uVar17 * 4) = uVar21;
        *(int *)(*(longlong *)(lVar23 + 0x88) + uVar17 * 4) = auVar32._0_4_;
        uVar5 = vextractps_avx(auVar32._0_16_,1);
        *(undefined4 *)(*(longlong *)(lVar23 + 0x90) + uVar17 * 4) = uVar5;
        uVar5 = vextractps_avx(auVar32._0_16_,2);
        *(undefined4 *)(*(longlong *)(lVar23 + 0x98) + uVar17 * 4) = uVar5;
        *(int *)(*(longlong *)(lVar23 + 0xa0) + uVar17 * 4) = auVar34._0_4_;
        uVar5 = vextractps_avx(auVar34._0_16_,1);
        *(undefined4 *)(*(longlong *)(lVar23 + 0xa8) + uVar17 * 4) = uVar5;
        uVar5 = vextractps_avx(auVar34._0_16_,2);
        *(undefined4 *)(*(longlong *)(lVar23 + 0xb0) + uVar17 * 4) = uVar5;
        *(int *)(*(longlong *)(lVar23 + 0xb8) + uVar17 * 4) = auVar30._0_4_;
        *(int *)(*(longlong *)(lVar23 + 0xc0) + uVar17 * 4) = auVar33._0_4_;
        uVar5 = vextractps_avx(auVar33._0_16_,1);
        *(undefined4 *)(*(longlong *)(lVar23 + 200) + uVar17 * 4) = uVar5;
        uVar5 = vextractps_avx(auVar33._0_16_,2);
        *(undefined4 *)(*(longlong *)(lVar23 + 0xd0) + uVar17 * 4) = uVar5;
        *(undefined4 *)(*(longlong *)(lVar23 + 0xd8) + uVar17 * 4) = uVar26;
        if (*(longlong *)(lVar23 + 0x58) != 0) {
          *(longlong *)(*(longlong *)(lVar23 + 0x58) + uVar17 * 8) = lVar25;
          *(undefined4 *)(*(longlong *)(lVar23 + 0x60) + uVar17 * 4) = uVar31;
          if (*(longlong *)(lVar23 + 0x68) != 0) {
            *(float *)(*(longlong *)(lVar23 + 0x68) + uVar17 * 4) =
                 *(float *)(param_1[4] + 0x2c) * *(float *)(param_1 + 0x2b);
          }
        }
      }
    }
  }
  FUN_1404fa330(0x149a2eed0,0);
  return;
}

