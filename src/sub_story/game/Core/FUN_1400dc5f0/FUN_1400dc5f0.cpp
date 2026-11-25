// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400dc5f0  size: 1703 bytes
// Name:    FUN_1400dc5f0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400dc5f0(longlong param_1,longlong *param_2,undefined8 *param_3,longlong param_4,
                  longlong param_5)

{
  undefined8 *puVar1;
  uint *puVar2;
  float *pfVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  bool bVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  longlong lVar15;
  undefined8 *puVar16;
  bool bVar17;
  longlong lVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [64];
  undefined1 auVar29 [16];
  undefined1 auVar30 [64];
  undefined1 auVar31 [64];
  undefined1 in_ZMM9 [64];
  undefined1 auVar32 [64];
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [16];
  undefined1 auStack_58 [16];
  
  auStack_58 = in_ZMM9._0_16_;
  puVar14 = *(undefined8 **)(param_1 + 0x308);
  if (puVar14 == (undefined8 *)0x0) {
    puVar14 = (undefined8 *)func_0x000144f97130(0x530);
    if (puVar14 != (undefined8 *)0x0) {
      func_0x000145f40580(puVar14,0,0x530);
      func_0x0001400c88d0(puVar14);
      func_0x000144f62e00(puVar14 + 0x2a);
      func_0x000144f62e00(puVar14 + 0x4e);
      func_0x000144f62d80(puVar14 + 0x72);
      func_0x000144f62d80(puVar14 + 0x8c);
    }
    *(undefined8 **)(param_1 + 0x308) = puVar14;
  }
  uVar5 = *param_3;
  uVar11 = param_3[1];
  uVar12 = param_3[2];
  uVar13 = param_3[3];
  *(undefined1 (*) [32])(puVar14 + 4) = *(undefined1 (*) [32])(param_3 + 4);
  *puVar14 = uVar5;
  puVar14[1] = uVar11;
  puVar14[2] = uVar12;
  puVar14[3] = uVar13;
  if (puVar14 != param_3) {
    *(undefined4 *)((longlong)puVar14 + 0x44) = 0;
    uVar4 = *(uint *)((longlong)param_3 + 0x44);
    if ((ulonglong)uVar4 != 0) {
      uVar5 = param_3[9];
      lVar18 = (ulonglong)uVar4 << 3;
      if (*(uint *)(puVar14 + 8) < uVar4) {
        puVar1 = puVar14 + 10;
        if ((undefined8 *)puVar14[9] != (undefined8 *)0x0 && puVar1 != (undefined8 *)puVar14[9]) {
          func_0x000144d9c130();
        }
        puVar14[9] = puVar1;
        *(undefined4 *)(puVar14 + 8) = 4;
        puVar16 = puVar1;
        if (4 < uVar4) {
          puVar16 = (undefined8 *)func_0x000144d9c140(8,lVar18);
          puVar14[9] = puVar16;
          if (puVar16 == (undefined8 *)0x0) {
            puVar14[9] = puVar1;
            puVar16 = puVar1;
          }
        }
        *(uint *)(puVar14 + 8) = uVar4;
      }
      else {
        puVar16 = (undefined8 *)puVar14[9];
      }
      func_0x000145f40560(puVar16,uVar5,lVar18);
      *(uint *)((longlong)puVar14 + 0x44) = uVar4;
    }
  }
  *(undefined4 *)(puVar14 + 0xf) = *(undefined4 *)(param_3 + 0xf);
  puVar14[0xe] = param_3[0xe];
  func_0x000145f40560(puVar14 + 0x10,param_3 + 0x10,0xce);
  if (*(char *)(param_1 + 0x38f) == '\x01') {
    if (((*(byte *)(param_1 + 0xa8) & 1) != 0) ||
       (fVar19 = _DAT_145fc6f50, fVar20 = _DAT_145fc6f50, fVar21 = _DAT_145fc6f50,
       fVar22 = _DAT_145fc6f50, 0.0 < *(float *)(param_1 + 0x278))) {
      auVar28 = ZEXT1664(*(undefined1 (*) [16])(param_3 + 0x12));
      (**(code **)(*param_2 + 0x88))(param_2,auStack_c8);
      auVar29._0_12_ = ZEXT812(0);
      auVar29._12_4_ = 0;
      auVar23 = vsubps_avx(auVar28._0_16_,auStack_98);
      auVar6 = vpsubw_avx(auVar28._0_16_,auStack_98);
      auVar6 = vblendps_avx(auVar23,auVar6,8);
      auVar23 = vpunpckhwd_avx(auVar6,auVar6);
      auVar23 = vpsrad_avx(auVar23,0x10);
      auVar23 = vcvtdq2ps_avx(auVar23);
      auVar23 = vshufpd_avx(auVar23,auVar23,3);
      auVar25._0_4_ = auVar23._0_4_ * _DAT_146159c90 + auVar6._0_4_;
      auVar25._4_4_ = auVar23._4_4_ * _UNK_146159c94 + auVar6._4_4_;
      auVar25._8_4_ = auVar23._8_4_ * _UNK_146159c98 + auVar6._8_4_;
      auVar25._12_4_ = auVar23._12_4_ * _UNK_146159c9c + auVar6._12_4_;
      auVar6 = vshufps_avx(auStack_a8,auStack_b8,0x33);
      auVar7 = vunpcklps_avx(auStack_b8,auVar29);
      auVar6 = vshufps_avx(auStack_b8,auVar6,0x8f);
      auVar23 = vunpckhps_avx(auStack_b8,auVar29);
      auVar27._0_4_ = auVar6._0_4_ + _DAT_145fc6ed8;
      auVar27._4_4_ = auVar6._4_4_ + _DAT_145fc6ed8;
      auVar27._8_4_ = auVar6._8_4_ + _DAT_145fc6ed8;
      auVar27._12_4_ = auVar6._12_4_ + _DAT_145fc6ed8;
      auVar29 = vunpcklps_avx(auStack_c8,auStack_a8);
      auVar6 = vunpckhps_avx(auStack_c8,auStack_a8);
      auVar8 = vunpcklps_avx(auVar6,auVar23);
      auVar9 = vunpcklps_avx(auVar29,auVar7);
      auVar29 = vunpckhps_avx(auVar29,auVar7);
      auVar23 = vshufps_avx(auVar25,auVar25,0x55);
      auVar7 = vshufps_avx(auVar25,auVar25,0xaa);
      auVar6 = vrcpps_avx(auVar27);
      fVar19 = auVar6._0_4_;
      fVar20 = auVar6._4_4_;
      fVar21 = auVar6._8_4_;
      fVar22 = auVar6._12_4_;
      fVar19 = (-(auVar8._0_4_ * auVar7._0_4_) -
               (auVar29._0_4_ * auVar23._0_4_ + auVar25._0_4_ * auVar9._0_4_)) *
               ((fVar19 * auVar27._0_4_ - _DAT_145fc6ed8) * fVar19 - fVar19);
      fVar20 = (-(auVar8._4_4_ * auVar7._4_4_) -
               (auVar29._4_4_ * auVar23._4_4_ + auVar25._0_4_ * auVar9._4_4_)) *
               ((fVar20 * auVar27._4_4_ - _DAT_145fc6ed8) * fVar20 - fVar20);
      fVar21 = (-(auVar8._8_4_ * auVar7._8_4_) -
               (auVar29._8_4_ * auVar23._8_4_ + auVar25._0_4_ * auVar9._8_4_)) *
               ((fVar21 * auVar27._8_4_ - _DAT_145fc6ed8) * fVar21 - fVar21);
      fVar22 = (-(auVar8._12_4_ * auVar7._12_4_) -
               (auVar29._12_4_ * auVar23._12_4_ + auVar25._0_4_ * auVar9._12_4_)) *
               ((fVar22 * auVar27._12_4_ - _DAT_145fc6ed8) * fVar22 - fVar22);
    }
    *(float *)(param_1 + 0x260) = fVar19;
    *(float *)(param_1 + 0x264) = fVar20;
    *(float *)(param_1 + 0x268) = fVar21;
    *(float *)(param_1 + 0x26c) = fVar22;
  }
  auVar28 = ZEXT864(CONCAT44(_UNK_146159c94,_DAT_146159c90));
  auVar30 = ZEXT1664(CONCAT412(_DAT_145fc6ed8,
                               CONCAT48(_DAT_145fc6ed8,CONCAT44(_DAT_145fc6ed8,_DAT_145fc6ed8))));
  bVar17 = true;
  lVar18 = 0;
  auVar31 = ZEXT1264(ZEXT812(0));
  do {
    lVar15 = param_4 + lVar18 * 0x120;
    puVar2 = (uint *)(*(longlong *)(param_1 + 0x308) + 0x150 + lVar18 * 0x120);
    if (*(longlong *)(param_1 + 0x308) + 0x150 != param_4) {
      puVar2[1] = 0;
      uVar4 = *(uint *)(lVar15 + 4);
      if ((ulonglong)uVar4 != 0) {
        if (*puVar2 < uVar4) {
          *puVar2 = uVar4;
        }
        auVar28 = ZEXT1664(auVar28._0_16_);
        auVar30 = ZEXT1664(auVar30._0_16_);
        auVar31 = ZEXT1664(auVar31._0_16_);
        func_0x000145f40560(puVar2 + 2,lVar15 + 8,(ulonglong)uVar4 << 4);
        puVar2[1] = uVar4;
      }
      puVar2[0xf] = 0;
      uVar4 = *(uint *)(lVar15 + 0x3c);
      if ((ulonglong)uVar4 != 0) {
        if (puVar2[0xe] < uVar4) {
          puVar2[0xe] = uVar4;
        }
        auVar28 = ZEXT1664(auVar28._0_16_);
        auVar30 = ZEXT1664(auVar30._0_16_);
        auVar31 = ZEXT1664(auVar31._0_16_);
        func_0x000145f40560(puVar2 + 0x10,lVar15 + 0x40,(ulonglong)uVar4 << 2);
        puVar2[0xf] = uVar4;
      }
      puVar2[0x15] = 0;
      uVar4 = *(uint *)(lVar15 + 0x54);
      if ((ulonglong)uVar4 != 0) {
        if (puVar2[0x14] < uVar4) {
          puVar2[0x14] = uVar4;
        }
        auVar28 = ZEXT1664(auVar28._0_16_);
        auVar30 = ZEXT1664(auVar30._0_16_);
        auVar31 = ZEXT1664(auVar31._0_16_);
        func_0x000145f40560(puVar2 + 0x18,lVar15 + 0x60,(ulonglong)uVar4 * 0x30);
        puVar2[0x15] = uVar4;
      }
    }
    *(undefined1 *)(puVar2 + 0x44) = *(undefined1 *)(lVar15 + 0x110);
    uVar5 = *(undefined8 *)(lVar15 + 0xf8);
    uVar11 = *(undefined8 *)(lVar15 + 0x100);
    uVar12 = *(undefined8 *)(lVar15 + 0x108);
    *(undefined8 *)(puVar2 + 0x3c) = *(undefined8 *)(lVar15 + 0xf0);
    *(undefined8 *)(puVar2 + 0x3e) = uVar5;
    *(undefined8 *)(puVar2 + 0x40) = uVar11;
    *(undefined8 *)(puVar2 + 0x42) = uVar12;
    fVar19 = _DAT_145fc6f50;
    if (*(char *)(param_1 + 0x38f) == '\x01') {
      if ((*(byte *)(param_1 + 0xb0 + lVar18 * 8) & 1) == 0) {
        if (*(float *)(*(longlong *)(param_1 + 0x188) + 0x174 + lVar18 * 0x1b0) <= 0.0) {
          lVar15 = *(longlong *)(param_1 + 0x188) + lVar18 * 0x1b0;
          *(float *)(lVar15 + 0x150) = _DAT_145fc6f50;
          *(float *)(lVar15 + 0x154) = fVar19;
          *(float *)(lVar15 + 0x158) = fVar19;
          *(float *)(lVar15 + 0x15c) = fVar19;
          goto LAB_1400dc835;
        }
      }
      auVar28 = ZEXT1664(auVar28._0_16_);
      auVar30 = ZEXT1664(auVar30._0_16_);
      auVar31 = ZEXT1664(auVar31._0_16_);
      auVar32 = ZEXT1664(*(undefined1 (*) [16])(lVar15 + 0x70));
      (**(code **)(*param_2 + 0x88))(param_2,auStack_c8);
      auVar23 = vsubps_avx(auVar32._0_16_,auStack_98);
      auVar6 = vpsubw_avx(auVar32._0_16_,auStack_98);
      auVar6 = vblendps_avx(auVar23,auVar6,8);
      auVar23 = vpunpckhwd_avx(auVar6,auVar6);
      auVar23 = vpsrad_avx(auVar23,0x10);
      auVar23 = vcvtdq2ps_avx(auVar23);
      auVar23 = vshufpd_avx(auVar23,auVar23,3);
      auVar24._0_4_ = auVar23._0_4_ * auVar28._0_4_ + auVar6._0_4_;
      auVar24._4_4_ = auVar23._4_4_ * auVar28._4_4_ + auVar6._4_4_;
      auVar24._8_4_ = auVar23._8_4_ * auVar28._8_4_ + auVar6._8_4_;
      auVar24._12_4_ = auVar23._12_4_ * auVar28._12_4_ + auVar6._12_4_;
      auVar6 = vshufps_avx(auStack_a8,auStack_b8,0x33);
      auVar7 = vunpcklps_avx(auStack_b8,auVar31._0_16_);
      auVar6 = vshufps_avx(auStack_b8,auVar6,0x8f);
      auVar23 = vunpckhps_avx(auStack_b8,auVar31._0_16_);
      auVar26._0_4_ = auVar6._0_4_ + auVar30._0_4_;
      auVar26._4_4_ = auVar6._4_4_ + auVar30._4_4_;
      auVar26._8_4_ = auVar6._8_4_ + auVar30._8_4_;
      auVar26._12_4_ = auVar6._12_4_ + auVar30._12_4_;
      auVar29 = vunpcklps_avx(auStack_c8,auStack_a8);
      auVar6 = vunpckhps_avx(auStack_c8,auStack_a8);
      auVar8 = vunpcklps_avx(auVar6,auVar23);
      auVar9 = vunpcklps_avx(auVar29,auVar7);
      auVar29 = vunpckhps_avx(auVar29,auVar7);
      auVar23 = vshufps_avx(auVar24,auVar24,0x55);
      auVar7 = vshufps_avx(auVar24,auVar24,0xaa);
      auVar6 = vrcpps_avx(auVar26);
      fVar19 = auVar6._0_4_;
      fVar20 = auVar6._4_4_;
      fVar21 = auVar6._8_4_;
      fVar22 = auVar6._12_4_;
      pfVar3 = (float *)(*(longlong *)(param_1 + 0x188) + 0x150 + lVar18 * 0x1b0);
      *pfVar3 = (-(auVar8._0_4_ * auVar7._0_4_) -
                (auVar29._0_4_ * auVar23._0_4_ + auVar24._0_4_ * auVar9._0_4_)) *
                ((fVar19 * auVar26._0_4_ - auVar30._0_4_) * fVar19 - fVar19);
      pfVar3[1] = (-(auVar8._4_4_ * auVar7._4_4_) -
                  (auVar29._4_4_ * auVar23._4_4_ + auVar24._0_4_ * auVar9._4_4_)) *
                  ((fVar20 * auVar26._4_4_ - auVar30._4_4_) * fVar20 - fVar20);
      pfVar3[2] = (-(auVar8._8_4_ * auVar7._8_4_) -
                  (auVar29._8_4_ * auVar23._8_4_ + auVar24._0_4_ * auVar9._8_4_)) *
                  ((fVar21 * auVar26._8_4_ - auVar30._8_4_) * fVar21 - fVar21);
      pfVar3[3] = (-(auVar8._12_4_ * auVar7._12_4_) -
                  (auVar29._12_4_ * auVar23._12_4_ + auVar24._0_4_ * auVar9._12_4_)) *
                  ((fVar22 * auVar26._12_4_ - auVar30._12_4_) * fVar22 - fVar22);
    }
LAB_1400dc835:
    puVar2 = (uint *)(*(longlong *)(param_1 + 0x308) + 0x390 + lVar18 * 0xd0);
    lVar15 = param_5 + lVar18 * 0xd0;
    if (*(longlong *)(param_1 + 0x308) + 0x390 != param_5) {
      puVar2[1] = 0;
      uVar4 = *(uint *)(lVar15 + 4);
      if ((ulonglong)uVar4 != 0) {
        if (*puVar2 < uVar4) {
          *puVar2 = uVar4;
        }
        if (uVar4 == 2) {
          uVar5 = *(undefined8 *)(lVar15 + 0x10);
          uVar11 = *(undefined8 *)(lVar15 + 0x18);
          uVar12 = *(undefined8 *)(lVar15 + 0x20);
          *(undefined8 *)(puVar2 + 2) = *(undefined8 *)(lVar15 + 8);
          *(undefined8 *)(puVar2 + 4) = uVar5;
          *(undefined8 *)(puVar2 + 6) = uVar11;
          *(undefined8 *)(puVar2 + 8) = uVar12;
        }
        else {
          auVar28 = ZEXT1664(auVar28._0_16_);
          auVar30 = ZEXT1664(auVar30._0_16_);
          auVar31 = ZEXT1664(auVar31._0_16_);
          func_0x000145f40560(puVar2 + 2,(undefined8 *)(lVar15 + 8),(ulonglong)uVar4 << 4);
        }
        puVar2[1] = uVar4;
      }
      puVar2[0xb] = 0;
      uVar4 = *(uint *)(lVar15 + 0x2c);
      if ((ulonglong)uVar4 != 0) {
        if (puVar2[10] < uVar4) {
          puVar2[10] = uVar4;
        }
        if (uVar4 == 2) {
          *(undefined8 *)(puVar2 + 0xc) = *(undefined8 *)(lVar15 + 0x30);
        }
        else {
          auVar28 = ZEXT1664(auVar28._0_16_);
          auVar30 = ZEXT1664(auVar30._0_16_);
          auVar31 = ZEXT1664(auVar31._0_16_);
          func_0x000145f40560(puVar2 + 0xc,(undefined8 *)(lVar15 + 0x30),(ulonglong)uVar4 << 2);
        }
        puVar2[0xb] = uVar4;
      }
      puVar2[0x11] = 0;
      uVar4 = *(uint *)(lVar15 + 0x44);
      if ((ulonglong)uVar4 != 0) {
        if (puVar2[0x10] < uVar4) {
          puVar2[0x10] = uVar4;
        }
        auVar28 = ZEXT1664(auVar28._0_16_);
        auVar30 = ZEXT1664(auVar30._0_16_);
        auVar31 = ZEXT1664(auVar31._0_16_);
        func_0x000145f40560(puVar2 + 0x14,lVar15 + 0x50,(ulonglong)uVar4 * 0x30);
        puVar2[0x11] = uVar4;
      }
    }
    uVar5 = *(undefined8 *)(lVar15 + 0xb8);
    uVar11 = *(undefined8 *)(lVar15 + 0xc0);
    uVar12 = *(undefined8 *)(lVar15 + 200);
    lVar18 = 1;
    *(undefined8 *)(puVar2 + 0x2c) = *(undefined8 *)(lVar15 + 0xb0);
    *(undefined8 *)(puVar2 + 0x2e) = uVar5;
    *(undefined8 *)(puVar2 + 0x30) = uVar11;
    *(undefined8 *)(puVar2 + 0x32) = uVar12;
    bVar10 = !bVar17;
    bVar17 = false;
    if (bVar10) {
      return;
    }
  } while( true );
}

