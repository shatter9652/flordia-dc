// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140002ac0  size: 107 bytes
// Name:    FUN_140002ac0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_143cc4590, FUN_144d99320, FUN_140002b30
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140002ac0(longlong param_1)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  char cVar9;
  longlong lVar10;
  ulonglong uVar11;
  float *pfVar12;
  ulonglong uVar13;
  longlong *plVar14;
  ulonglong uVar15;
  bool bVar16;
  undefined1 auVar17 [16];
  float fVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined1 auStack_d8 [16];
  undefined1 auStack_c8 [16];
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_50;
  undefined8 uStack_40;
  undefined *puStack_30;
  longlong lStack_20;
  undefined1 auVar22 [64];
  
  uVar13 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffff0;
  if (uVar13 != 0) {
    uStack_40 = 0x140002adc;
    cVar9 = FUN_140002b30(uVar13);
    if (cVar9 != '\0') {
      uStack_40 = 0x140002afe;
      cVar9 = func_0x000143620390(param_1 + 0x3198);
      if (cVar9 != '\0') {
        uStack_40 = 0x140002b0d;
        cVar9 = FUN_143cc4590(param_1,uVar13);
        if (cVar9 == '\0') {
          uStack_40 = 0x140002b19;
          FUN_144d99320(param_1);
        }
      }
      FUN_143620b00(uVar13,param_1 + 0x3290,param_1 + 0x32b8);
      cVar9 = func_0x0001436203e0(param_1 + 0x3198);
      if (cVar9 != '\0') {
        cVar9 = func_0x000144da28f0(*(undefined4 *)(uVar13 + 0x9c));
        uStack_a8 = *(undefined8 *)(uVar13 + 0x70);
        uStack_a0 = *(undefined8 *)(uVar13 + 0x78);
        func_0x000144dc3790(&uStack_a8,&fStack_b8);
        if (*(int *)(param_1 + 0x319c) != 0) {
          fVar27 = *(float *)(uVar13 + 0x50);
          fVar28 = *(float *)(uVar13 + 0x54);
          fVar29 = *(float *)(uVar13 + 0x58);
          fVar30 = *(float *)(uVar13 + 0x5c);
          auVar21._0_12_ = ZEXT812(0);
          auVar21._12_4_ = 0;
          auVar22 = ZEXT1664(auVar21);
          fVar31 = *(float *)(uVar13 + 0x60);
          fVar32 = *(float *)(uVar13 + 100);
          fVar33 = *(float *)(uVar13 + 0x68);
          fVar34 = *(float *)(uVar13 + 0x6c);
          pfVar12 = (float *)0x1492deed4;
          lVar10 = param_1 + 0x31a0;
          if (cVar9 != '\0') {
            pfVar12 = (float *)0x1492deeb8;
          }
          uVar15 = 0;
          fVar35 = *pfVar12;
          auVar19._0_4_ = fVar27 * fVar27;
          auVar19._4_4_ = fVar28 * fVar28;
          auVar19._8_4_ = fVar29 * fVar29;
          auVar19._12_4_ = fVar30 * fVar30;
          auVar17 = vblendps_avx(auVar19,auVar21,8);
          auVar17 = vhaddps_avx(auVar17,auVar17);
          auVar17 = vhaddps_avx(auVar17,auVar17);
          auVar19 = vrsqrtps_avx(auVar17);
          fVar23 = auVar19._0_4_;
          fVar24 = auVar19._4_4_;
          fVar25 = auVar19._8_4_;
          fVar26 = auVar19._12_4_;
          fVar27 = ((_DAT_145fc6f08 * fVar23 * fVar23 * auVar17._0_4_ - _DAT_145fc6f08) * fVar23 +
                   fVar23) * fVar27;
          fVar28 = ((_DAT_145fc6f08 * fVar24 * fVar24 * auVar17._4_4_ - _DAT_145fc6f08) * fVar24 +
                   fVar24) * fVar28;
          fVar29 = ((_DAT_145fc6f08 * fVar25 * fVar25 * auVar17._8_4_ - _DAT_145fc6f08) * fVar25 +
                   fVar25) * fVar29;
          fVar30 = ((_DAT_145fc6f08 * fVar26 * fVar26 * auVar17._12_4_ - _DAT_145fc6f08) * fVar26 +
                   fVar26) * fVar30;
          auVar17._0_4_ = fVar31 * fVar31;
          auVar17._4_4_ = fVar32 * fVar32;
          auVar17._8_4_ = fVar33 * fVar33;
          auVar17._12_4_ = fVar34 * fVar34;
          auVar21 = vblendps_avx(auVar17,auVar21,8);
          auVar21 = vhaddps_avx(auVar21,auVar21);
          auVar21 = vhaddps_avx(auVar21,auVar21);
          auVar17 = vrsqrtps_avx(auVar21);
          fVar23 = auVar17._0_4_;
          fVar24 = auVar17._4_4_;
          fVar25 = auVar17._8_4_;
          fVar26 = auVar17._12_4_;
          fVar31 = ((_DAT_145fc6f08 * fVar23 * fVar23 * auVar21._0_4_ - _DAT_145fc6f08) * fVar23 +
                   fVar23) * fVar31;
          fVar32 = ((_DAT_145fc6f08 * fVar24 * fVar24 * auVar21._4_4_ - _DAT_145fc6f08) * fVar24 +
                   fVar24) * fVar32;
          fVar33 = ((_DAT_145fc6f08 * fVar25 * fVar25 * auVar21._8_4_ - _DAT_145fc6f08) * fVar25 +
                   fVar25) * fVar33;
          fVar34 = ((_DAT_145fc6f08 * fVar26 * fVar26 * auVar21._12_4_ - _DAT_145fc6f08) * fVar26 +
                   fVar26) * fVar34;
          fVar23 = _DAT_145fc6f08;
          fVar24 = _DAT_145fc6f08;
          fVar25 = _DAT_145fc6f08;
          fVar26 = _DAT_145fc6f08;
          fVar36 = fVar35;
          fVar37 = fVar35;
          fVar38 = fVar35;
          do {
            fVar18 = -(fRam00000001492deec4 * (float)(int)uVar15) + fRam00000001492deec0;
            auStack_d8._0_4_ = fVar31 * fVar18 + fVar27 * fRam00000001492deebc + fStack_b8;
            auStack_d8._4_4_ = fVar32 * fVar18 + fVar28 * fRam00000001492deebc + fStack_b4;
            auStack_d8._8_4_ = fVar33 * fVar18 + fVar29 * fRam00000001492deebc + fStack_b0;
            auStack_d8._12_4_ = fVar34 * fVar18 + fVar30 * fRam00000001492deebc + fStack_ac;
            fVar5 = *(float *)(uVar13 + 0x50);
            fVar6 = *(float *)(uVar13 + 0x54);
            fVar7 = *(float *)(uVar13 + 0x58);
            fVar8 = *(float *)(uVar13 + 0x5c);
            auVar20._0_4_ = fVar5 * fVar5;
            auVar20._4_4_ = fVar6 * fVar6;
            auVar20._8_4_ = fVar7 * fVar7;
            auVar20._12_4_ = fVar8 * fVar8;
            auVar21 = vblendps_avx(auVar20,auVar22._0_16_,8);
            auVar21 = vhaddps_avx(auVar21,auVar21);
            auVar21 = vhaddps_avx(auVar21,auVar21);
            auVar17 = vrsqrtps_avx(auVar21);
            fVar18 = auVar17._0_4_;
            fVar2 = auVar17._4_4_;
            fVar3 = auVar17._8_4_;
            fVar4 = auVar17._12_4_;
            auStack_c8._0_4_ =
                 ((fVar23 * fVar18 * fVar18 * auVar21._0_4_ - fVar23) * fVar18 + fVar18) *
                 fVar35 * fVar5 + auStack_d8._0_4_;
            auStack_c8._4_4_ =
                 ((fVar24 * fVar2 * fVar2 * auVar21._4_4_ - fVar24) * fVar2 + fVar2) *
                 fVar36 * fVar6 + auStack_d8._4_4_;
            auStack_c8._8_4_ =
                 ((fVar25 * fVar3 * fVar3 * auVar21._8_4_ - fVar25) * fVar3 + fVar3) *
                 fVar37 * fVar7 + auStack_d8._8_4_;
            auStack_c8._12_4_ =
                 ((fVar26 * fVar4 * fVar4 * auVar21._12_4_ - fVar26) * fVar4 + fVar4) *
                 fVar38 * fVar8 + auStack_d8._12_4_;
            FUN_1436214e0(uVar13,lVar10,auStack_d8,auStack_c8,uRam00000001492deeb4,1);
            uVar15 = uVar15 + 1;
            lVar10 = lVar10 + 0x28;
          } while (uVar15 < *(uint *)(param_1 + 0x319c));
        }
      }
      return;
    }
  }
  puStack_30 = &UNK_144d99334;
  FUN_144d99420(param_1 + 0x3198);
  puStack_30 = &UNK_144d9933f;
  func_0x000144e71130(*(undefined4 *)(param_1 + 0x32f8));
  *(undefined2 *)(param_1 + 0x32fe) = 0;
  *(undefined4 *)(param_1 + 0x3300) = 0;
  if (*(longlong *)(param_1 + 0x32e0) != 0) {
    puStack_30 = &UNK_144d99371;
    func_0x000145f40580(*(longlong *)(param_1 + 0x32e0),0,
                        (ulonglong)*(ushort *)(param_1 + 0x32fc) << 6);
    if (*(short *)(param_1 + 0x32fc) != 0) {
      lVar10 = 0x2a;
      uVar13 = 0;
      do {
        lVar1 = *(longlong *)(param_1 + 0x32e0);
        uVar13 = uVar13 + 1;
        *(undefined8 *)(lVar1 + -10 + lVar10) = 0xffffffff00000000;
        *(undefined1 *)(lVar1 + lVar10) = 0;
        *(undefined2 *)(lVar1 + -2 + lVar10) = 0xffff;
        lVar10 = lVar10 + 0x40;
      } while (uVar13 < *(ushort *)(param_1 + 0x32fc));
    }
  }
  *(undefined4 *)(param_1 + 0x3160) = 0;
  *(undefined1 *)(param_1 + 0x3164) = 0;
  if (*(longlong *)(param_1 + 0x3168) != 0) {
    plVar14 = (longlong *)(param_1 + 0x3168);
    puStack_30 = &UNK_144d993ed;
    FUN_140004b40(0x14abbf350);
    if (*plVar14 != 0) {
      puStack_30 = &UNK_144d99415;
      FUN_1452dfd90(*plVar14,plVar14);
    }
    *plVar14 = 0;
    iRam000000014abbf360 = iRam000000014abbf360 + -1;
    uVar13 = uRam000000014abbf350;
    if (iRam000000014abbf360 == 0) {
      do {
        uVar11 = uVar13;
        LOCK();
        uVar13 = uVar11;
        uVar15 = (ulonglong)((int)uVar11 - 1) | 0xffffffff00000000;
        if (uVar11 != uRam000000014abbf350) {
          uVar13 = uRam000000014abbf350;
          uVar15 = uRam000000014abbf350;
        }
        uRam000000014abbf350 = uVar15;
        UNLOCK();
      } while (uVar11 != uVar13);
      if ((uVar11 & 0xfffffffe) != 0) {
        lStack_20 = lRam000000014abbf358;
        iRam000000014abbf360 = 0;
        do {
          while (lStack_20 < 0) {
            uStack_50 = 0x140019c89;
            cVar9 = FUN_1400062d0(0x14abbf358,1,&lStack_20);
            if (cVar9 != '\0') {
              return;
            }
          }
          LOCK();
          lVar10 = lStack_20;
          lVar1 = lStack_20 + 0x100000000;
          if (lStack_20 != lRam000000014abbf358) {
            lVar10 = lRam000000014abbf358;
            lVar1 = lRam000000014abbf358;
          }
          lRam000000014abbf358 = lVar1;
          UNLOCK();
          bVar16 = lStack_20 != lVar10;
          lStack_20 = lVar10;
        } while (bVar16);
        return;
      }
    }
    return;
  }
  return;
}

