// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140034860  size: 1102 bytes
// Name:    FUN_140034860
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e34f50, FUN_145647140, FUN_142685050
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140034860(longlong param_1,undefined8 param_2,longlong *param_3,longlong param_4,
                  longlong *param_5)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  undefined2 uVar4;
  ushort uVar5;
  ushort uVar6;
  int iVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  char *pcVar12;
  char *pcVar13;
  longlong lVar14;
  uint uVar15;
  ulonglong uVar16;
  byte bVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar26;
  float fVar27;
  undefined1 auVar25 [16];
  float fVar28;
  undefined1 auVar29 [16];
  float fVar30;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 auVar31 [16];
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  undefined1 in_ZMM9 [64];
  undefined8 auStack_180 [4];
  undefined8 uStack_160;
  undefined1 *puStack_158;
  undefined2 uStack_150;
  undefined2 uStack_14e;
  undefined1 auStack_148 [48];
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  undefined1 **ppuStack_108;
  undefined8 uStack_100;
  undefined1 auStack_f8 [16];
  char *pcStack_e8;
  float *pfStack_e0;
  undefined8 uStack_d8;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  char acStack_9a [50];
  undefined1 auStack_68 [16];
  
  auStack_68 = in_ZMM9._0_16_;
  acStack_9a[0] = (char)param_2;
  acStack_9a[1] = 0;
  fVar35 = _DAT_145fc6ed8;
  fVar36 = _DAT_145fc6ed8;
  fVar37 = _DAT_145fc6ed8;
  fVar38 = _DAT_145fc6ed8;
  if (acStack_9a[0] != '\0') {
    auVar10 = vpermilps_avx(*(undefined1 (*) [16])(*(longlong *)(param_1 + 0x100) + 0x60),0xff);
    fVar35 = auVar10._0_4_ + _DAT_145fc6ed8;
    fVar36 = auVar10._4_4_ + _DAT_145fc6ed8;
    fVar37 = auVar10._8_4_ + _DAT_145fc6ed8;
    fVar38 = auVar10._12_4_ + _DAT_145fc6ed8;
  }
  fStack_118 = fVar35;
  fStack_114 = fVar36;
  fStack_110 = fVar37;
  fStack_10c = fVar38;
  if (param_4 == 0) {
    uVar5 = *(ushort *)(param_1 + 0x1d4);
    if (uVar5 != 0) {
      lVar20 = 0x20;
      lVar14 = 0;
      uVar15 = _DAT_145fc6f10;
      uVar39 = _DAT_145fc6f10;
      uVar40 = _DAT_145fc6f10;
      uVar41 = _DAT_145fc6f10;
      do {
        lVar18 = *(longlong *)(param_1 + 0x1d8);
        auStack_180[0] = 0x140034a67;
        FUN_144e34f50(param_1,&uStack_d8,0,lVar18 + lVar14);
        lVar19 = *param_3;
        uVar6 = *(ushort *)(lVar18 + 4 + lVar14);
        if (uVar6 == 0xffff) {
          fVar21 = fVar35 * fStack_c8;
          fVar22 = fVar36 * fStack_c4;
          fVar23 = fVar37 * (float)uStack_c0;
          fVar24 = fVar38 * uStack_c0._4_4_;
          fVar34 = (float)uStack_d8;
          fVar26 = uStack_d8._4_4_;
          fVar27 = fStack_d0;
          fVar28 = fStack_cc;
          fVar3 = fVar35;
          fVar30 = fVar36;
          fVar32 = fVar37;
          fVar33 = fVar38;
        }
        else {
          uVar16 = (ulonglong)((uint)uVar6 * 0x30);
          pfVar1 = (float *)(lVar19 + 0x20 + uVar16);
          auVar10 = *(undefined1 (*) [16])(lVar19 + uVar16);
          fVar3 = *(float *)(lVar19 + 8 + uVar16);
          auVar25._0_4_ = *pfVar1 * fStack_c8;
          auVar25._4_4_ = pfVar1[1] * fStack_c4;
          auVar25._8_4_ = pfVar1[2] * (float)uStack_c0;
          auVar25._12_4_ = pfVar1[3] * uStack_c0._4_4_;
          auVar8 = vshufps_avx(auVar10,auVar10,0xc9);
          auVar10 = vshufps_avx(auVar10,auVar10,0xd2);
          auVar9 = vshufps_avx(auVar25,auVar25,0xd2);
          auVar29 = vshufps_avx(auVar25,auVar25,0xc9);
          fVar30 = -(auVar10._0_4_ * auVar29._0_4_) + auVar8._0_4_ * auVar9._0_4_;
          fVar32 = -(auVar10._4_4_ * auVar29._4_4_) + auVar8._4_4_ * auVar9._4_4_;
          fVar33 = -(auVar10._8_4_ * auVar29._8_4_) + auVar8._8_4_ * auVar9._8_4_;
          fVar34 = -(auVar10._12_4_ * auVar29._12_4_) + auVar8._12_4_ * auVar9._12_4_;
          auVar31._0_4_ = fVar30 + fVar30;
          auVar31._4_4_ = fVar32 + fVar32;
          auVar31._8_4_ = fVar33 + fVar33;
          auVar31._12_4_ = fVar34 + fVar34;
          auVar9 = vshufps_avx(auVar31,auVar31,0xd2);
          auVar29 = vshufps_avx(auVar31,auVar31,0xc9);
          fVar30 = *(float *)(lVar19 + 0xc + uVar16);
          pfVar2 = (float *)(lVar19 + 0x10 + uVar16);
          auVar11._4_4_ = uStack_d8._4_4_;
          auVar11._0_4_ = (float)uStack_d8;
          auVar11._8_4_ = fStack_d0;
          auVar11._12_4_ = fStack_cc;
          fVar32 = *(float *)(lVar19 + 4 + uVar16);
          fVar33 = *(float *)(lVar19 + uVar16);
          fVar21 = fVar30 * auVar31._0_4_ + auVar25._0_4_ + *pfVar2 +
                   -(auVar10._0_4_ * auVar29._0_4_) + auVar9._0_4_ * auVar8._0_4_;
          fVar22 = fVar30 * auVar31._4_4_ + auVar25._4_4_ + pfVar2[1] +
                   -(auVar10._4_4_ * auVar29._4_4_) + auVar9._4_4_ * auVar8._4_4_;
          fVar23 = fVar30 * auVar31._8_4_ + auVar25._8_4_ + pfVar2[2] +
                   -(auVar10._8_4_ * auVar29._8_4_) + auVar9._8_4_ * auVar8._8_4_;
          fVar24 = fVar30 * auVar31._12_4_ + auVar25._12_4_ + pfVar2[3] +
                   -(auVar10._12_4_ * auVar29._12_4_) + auVar9._12_4_ * auVar8._12_4_;
          auVar29._0_4_ = (uint)(float)uStack_d8 ^ uVar15;
          auVar29._4_4_ = (uint)uStack_d8._4_4_ ^ uVar39;
          auVar29._8_4_ = (uint)fStack_d0 ^ uVar40;
          auVar29._12_4_ = (uint)fStack_cc ^ uVar41;
          auVar10 = vblendps_avx(auVar29,auVar11,10);
          auVar9 = vshufps_avx(auVar10,auVar10,0x1b);
          auVar8 = vshufpd_avx(auVar11,auVar29,1);
          auVar10 = vblendps_avx(auVar29,auVar11,9);
          auVar10 = vshufps_avx(auVar10,auVar10,0xb1);
          fVar34 = fVar3 * auVar10._0_4_ +
                   fVar32 * auVar8._0_4_ + fVar33 * auVar9._0_4_ + (float)uStack_d8 * fVar30;
          fVar26 = fVar3 * auVar10._4_4_ +
                   fVar32 * auVar8._4_4_ + fVar33 * auVar9._4_4_ + uStack_d8._4_4_ * fVar30;
          fVar27 = fVar3 * auVar10._8_4_ +
                   fVar32 * auVar8._8_4_ + fVar33 * auVar9._8_4_ + fStack_d0 * fVar30;
          fVar28 = fVar3 * auVar10._12_4_ +
                   fVar32 * auVar8._12_4_ + fVar33 * auVar9._12_4_ + fStack_cc * fVar30;
          fVar3 = *pfVar1;
          fVar30 = pfVar1[1];
          fVar32 = pfVar1[2];
          fVar33 = pfVar1[3];
        }
        pfVar1 = (float *)(lVar19 + -0x20 + lVar20);
        *pfVar1 = fVar34;
        pfVar1[1] = fVar26;
        pfVar1[2] = fVar27;
        pfVar1[3] = fVar28;
        pfVar1 = (float *)(lVar19 + -0x10 + lVar20);
        *pfVar1 = fVar21;
        pfVar1[1] = fVar22;
        pfVar1[2] = fVar23;
        pfVar1[3] = fVar24;
        pfVar1 = (float *)(lVar19 + lVar20);
        *pfVar1 = fVar3 * (float)uStack_b8;
        pfVar1[1] = fVar30 * uStack_b8._4_4_;
        pfVar1[2] = fVar32 * (float)uStack_b0;
        pfVar1[3] = fVar33 * uStack_b0._4_4_;
        lVar14 = lVar14 + 10;
        lVar20 = lVar20 + 0x30;
      } while ((ulonglong)((uint)uVar5 * 2) * 5 != lVar14);
    }
  }
  else {
    iVar7 = (int)param_3[1];
    uStack_160 = 0x140034901;
    lVar14 = FUN_145647140(param_1,param_2,(iVar7 - 1U >> 5) * 4 + 4);
    lVar14 = -lVar14;
    bVar17 = 0;
    *(undefined8 *)((longlong)auStack_180 + lVar14) = 0x140034918;
    func_0x000145f40580((longlong)&puStack_158 + lVar14,0);
    ppuStack_108 = &puStack_158;
    uStack_c0 = acStack_9a + 1;
    uStack_b8 = acStack_9a;
    uStack_14e = (undefined2)iVar7;
    fStack_d0 = SUB84(param_3,0);
    fStack_cc = (float)((ulonglong)param_3 >> 0x20);
    fStack_c8 = (float)param_1;
    fStack_c4 = (float)((ulonglong)param_1 >> 0x20);
    uStack_b0 = &fStack_118;
    uStack_150 = (undefined2)(iVar7 + 0x1fU >> 5);
    if (*(char *)(*(longlong *)(param_4 + 0x100) + 0x155) == '\x03') {
      bVar17 = *(byte *)(*(longlong *)(param_4 + 0x100) + 0x1bc) >> 7;
    }
    uVar16 = (ulonglong)*(uint *)(param_4 + 0x154);
    if (uVar16 != 0) {
      lVar20 = *(longlong *)(param_4 + 0x158);
      if (param_5 == (longlong *)0x0) {
        if (bVar17 == 0) {
          lVar18 = 0;
          puStack_158 = (undefined1 *)((longlong)&puStack_158 + lVar14);
          do {
            uStack_100 = CONCAT44(fStack_cc,fStack_d0);
            auStack_f8._4_4_ = fStack_c4;
            auStack_f8._0_4_ = fStack_c8;
            uVar4 = *(undefined2 *)(lVar20 + 0x12 + lVar18);
            auStack_f8._8_8_ = uStack_c0;
            pcStack_e8 = uStack_b8;
            pfStack_e0 = uStack_b0;
            uStack_d8 = ppuStack_108;
            *(undefined8 *)((longlong)auStack_180 + lVar14) = 0x140034c71;
            FUN_142685050(&uStack_d8,uVar4,auStack_148,&ppuStack_108);
            lVar18 = lVar18 + 0x18;
            ppuStack_108 = uStack_d8;
          } while (uVar16 * 0x18 != lVar18);
        }
        else {
          lVar18 = 0;
          puStack_158 = (undefined1 *)((longlong)&puStack_158 + lVar14);
          do {
            uStack_100 = CONCAT44(fStack_cc,fStack_d0);
            auStack_f8._4_4_ = fStack_c4;
            auStack_f8._0_4_ = fStack_c8;
            uVar4 = *(undefined2 *)(lVar20 + 0x12 + lVar18);
            auStack_f8._8_8_ = uStack_c0;
            pcStack_e8 = uStack_b8;
            pfStack_e0 = uStack_b0;
            uStack_d8 = ppuStack_108;
            *(undefined8 *)((longlong)auStack_180 + lVar14) = 0x140034bbc;
            FUN_142685050(&uStack_d8,uVar4,auStack_148,&ppuStack_108);
            lVar18 = lVar18 + 0x18;
            ppuStack_108 = uStack_d8;
          } while (uVar16 * 0x18 != lVar18);
        }
      }
      else {
        lVar18 = *param_5;
        if (bVar17 == 0) {
          lVar19 = 0;
          puStack_158 = (undefined1 *)((longlong)&puStack_158 + lVar14);
          pcVar12 = uStack_c0;
          pcVar13 = uStack_b8;
          pfVar1 = uStack_b0;
          do {
            uStack_b0._4_4_ = (float)((ulonglong)pfVar1 >> 0x20);
            uStack_b0._0_4_ = SUB84(pfVar1,0);
            uStack_b8._4_4_ = (float)((ulonglong)pcVar13 >> 0x20);
            uStack_b8._0_4_ = SUB84(pcVar13,0);
            uStack_c0._4_4_ = (float)((ulonglong)pcVar12 >> 0x20);
            uStack_c0._0_4_ = SUB84(pcVar12,0);
            uVar15 = (uint)*(short *)(lVar20 + 0xe + lVar19);
            if ((*(uint *)(lVar18 + (ulonglong)(uVar15 >> 5) * 4) >> (uVar15 & 0x1f) & 1) != 0) {
              uStack_100 = CONCAT44(fStack_cc,fStack_d0);
              auStack_f8._4_4_ = fStack_c4;
              auStack_f8._0_4_ = fStack_c8;
              auStack_f8._8_4_ = (float)uStack_c0;
              auStack_f8._12_4_ = uStack_c0._4_4_;
              unique0x10000c2e = (float)uStack_b8;
              unique0x10000c32 = uStack_b8._4_4_;
              unique0x10000c36 = (float)uStack_b0;
              unique0x10000c3a = uStack_b0._4_4_;
              uVar4 = *(undefined2 *)(lVar20 + 0x12 + lVar19);
              uStack_d8 = ppuStack_108;
              uStack_c0 = pcVar12;
              uStack_b8 = pcVar13;
              uStack_b0 = pfVar1;
              *(undefined8 *)((longlong)auStack_180 + lVar14) = 0x140034c22;
              FUN_142685050(&uStack_d8,uVar4,auStack_148,&ppuStack_108);
              lVar18 = *param_5;
              ppuStack_108 = uStack_d8;
              pcVar12 = uStack_c0;
              pcVar13 = uStack_b8;
              pfVar1 = uStack_b0;
            }
            lVar19 = lVar19 + 0x18;
          } while (uVar16 * 0x18 != lVar19);
        }
        else {
          lVar19 = 0;
          puStack_158 = (undefined1 *)((longlong)&puStack_158 + lVar14);
          pcVar12 = uStack_c0;
          pcVar13 = uStack_b8;
          pfVar1 = uStack_b0;
          do {
            uStack_b0._4_4_ = (float)((ulonglong)pfVar1 >> 0x20);
            uStack_b0._0_4_ = SUB84(pfVar1,0);
            uStack_b8._4_4_ = (float)((ulonglong)pcVar13 >> 0x20);
            uStack_b8._0_4_ = SUB84(pcVar13,0);
            uStack_c0._4_4_ = (float)((ulonglong)pcVar12 >> 0x20);
            uStack_c0._0_4_ = SUB84(pcVar12,0);
            if ((*(short *)(lVar20 + 8 + lVar19) == 0) ||
               (uVar15 = (uint)*(short *)(lVar20 + 0xe + lVar19),
               (1 << (uVar15 & 0x1f) & *(uint *)(lVar18 + (ulonglong)(uVar15 >> 5) * 4)) != 0)) {
              uStack_100 = CONCAT44(fStack_cc,fStack_d0);
              auStack_f8._4_4_ = fStack_c4;
              auStack_f8._0_4_ = fStack_c8;
              auStack_f8._8_4_ = (float)uStack_c0;
              auStack_f8._12_4_ = uStack_c0._4_4_;
              unique0x10000ba2 = (float)uStack_b8;
              unique0x10000ba6 = uStack_b8._4_4_;
              unique0x10000baa = (float)uStack_b0;
              unique0x10000bae = uStack_b0._4_4_;
              uVar4 = *(undefined2 *)(lVar20 + 0x12 + lVar19);
              uStack_d8 = ppuStack_108;
              uStack_c0 = pcVar12;
              uStack_b8 = pcVar13;
              uStack_b0 = pfVar1;
              *(undefined8 *)((longlong)auStack_180 + lVar14) = 0x140034a09;
              FUN_142685050(&uStack_d8,uVar4,auStack_148,&ppuStack_108);
              lVar18 = *param_5;
              ppuStack_108 = uStack_d8;
              pcVar12 = uStack_c0;
              pcVar13 = uStack_b8;
              pfVar1 = uStack_b0;
            }
            lVar19 = lVar19 + 0x18;
          } while (uVar16 * 0x18 != lVar19);
        }
      }
    }
  }
  return;
}

