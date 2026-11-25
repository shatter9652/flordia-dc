// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400b1400  size: 888 bytes
// Name:    FUN_1400b1400
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f82240, FUN_14013e470, FUN_1400f9df0, FUN_1453bc3d0, FUN_144d9fa40, FUN_140473180
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400b1400(longlong param_1)

{
  byte bVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  longlong lVar4;
  undefined8 *puVar5;
  uint *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 auVar9 [16];
  float fVar10;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar11 [16];
  undefined1 auVar15 [16];
  float fVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined8 in_stack_ffffffffffffff60;
  undefined4 uVar26;
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  
  uVar26 = (undefined4)((ulonglong)in_stack_ffffffffffffff60 >> 0x20);
  func_0x000144f3a9e0(auStack_78);
  func_0x00014505b690(auStack_78,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x10));
  if (*(longlong *)(param_1 + 0x20) != 0) {
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x340);
    puVar5 = (undefined8 *)FUN_1453bc3d0(lVar7);
    if (puVar5 != (undefined8 *)0x0) {
      puVar6 = (uint *)func_0x0001403744e0(uStack_70);
      uVar2 = puVar6[1];
      if (uVar2 == 3) {
        FUN_1400f9df0(*puVar5,*(undefined8 *)puVar5[1],*(undefined4 *)((undefined8 *)puVar5[1] + 6),
                      0x2deefadd,*puVar6,CONCAT44(uVar26,*(undefined4 *)(param_1 + 0x2c)));
      }
      else if (uVar2 == 2) {
        uVar26 = *(undefined4 *)(param_1 + 0x2c);
        auStack_98._4_4_ = uVar26;
        auStack_98._0_4_ = uVar26;
        auStack_98._8_4_ = uVar26;
        auStack_98._12_4_ = uVar26;
        FUN_14013e470(*puVar5,*(undefined8 *)puVar5[1],*(undefined4 *)((undefined8 *)puVar5[1] + 6),
                      0x7aaa9f60,*puVar6,auStack_98);
      }
      else if (uVar2 == 1) {
        fVar16 = *(float *)(param_1 + 0x2c);
        auVar17._4_4_ = _DAT_145fc6edc;
        auVar17._0_4_ = _DAT_145fc6edc;
        auVar17._8_4_ = _DAT_145fc6edc;
        auVar17._12_4_ = _DAT_145fc6edc;
        fVar10 = fVar16 * (float)puVar6[4] * _DAT_146159b48;
        fVar12 = fVar16 * (float)puVar6[5] * _DAT_146159b48;
        fVar13 = fVar16 * (float)puVar6[6] * _DAT_146159b48;
        fVar14 = fVar16 * (float)puVar6[7] * _DAT_146159b48;
        auVar15._0_4_ = (uint)fVar10 & _DAT_145fc6f10;
        auVar15._4_4_ = (uint)fVar12 & _DAT_145fc6f10;
        auVar15._8_4_ = (uint)fVar13 & _DAT_145fc6f10;
        auVar15._12_4_ = (uint)fVar14 & _DAT_145fc6f10;
        auVar15 = auVar15 | auVar17;
        auVar18._4_4_ = _DAT_145f43778;
        auVar18._0_4_ = _DAT_145f43778;
        auVar18._8_4_ = _DAT_145f43778;
        auVar18._12_4_ = _DAT_145f43778;
        auVar17 = vpcmpeqd_avx(auVar15,auVar15);
        auVar11._0_4_ = (int)(fVar10 + auVar15._0_4_);
        auVar11._4_4_ = (int)(fVar12 + auVar15._4_4_);
        auVar11._8_4_ = (int)(fVar13 + auVar15._8_4_);
        auVar11._12_4_ = (int)(fVar14 + auVar15._12_4_);
        auVar15 = vcvtdq2ps_avx(auVar11);
        auVar3 = vpsubd_avx(auVar11,auVar17);
        fVar10 = auVar15._0_4_ * _DAT_146159b50 +
                 auVar15._0_4_ * _DAT_146159b4c + fVar16 * (float)puVar6[4] * _DAT_145fc6edc;
        fVar12 = auVar15._4_4_ * _DAT_146159b50 +
                 auVar15._4_4_ * _DAT_146159b4c + fVar16 * (float)puVar6[5] * _DAT_145fc6edc;
        fVar13 = auVar15._8_4_ * _DAT_146159b50 +
                 auVar15._8_4_ * _DAT_146159b4c + fVar16 * (float)puVar6[6] * _DAT_145fc6edc;
        fVar16 = auVar15._12_4_ * _DAT_146159b50 +
                 auVar15._12_4_ * _DAT_146159b4c + fVar16 * (float)puVar6[7] * _DAT_145fc6edc;
        fVar14 = fVar10 * fVar10;
        fVar20 = fVar12 * fVar12;
        fVar21 = fVar13 * fVar13;
        fVar22 = fVar16 * fVar16;
        auVar24._0_4_ =
             fVar14 * fVar10 *
             (fVar14 * (fVar14 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68) + fVar10;
        auVar24._4_4_ =
             fVar20 * fVar12 *
             (fVar20 * (fVar20 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68) + fVar12;
        auVar24._8_4_ =
             fVar21 * fVar13 *
             (fVar21 * (fVar21 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68) + fVar13;
        auVar24._12_4_ =
             fVar22 * fVar16 *
             (fVar22 * (fVar22 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68) + fVar16;
        auVar15 = vpand_avx(auVar11,auVar18);
        auVar25._0_4_ =
             fVar14 * (fVar14 * (fVar14 * _DAT_146159b58 + _DAT_146159b54) + _DAT_146159b64) +
             _DAT_145fc6ed8;
        auVar25._4_4_ =
             fVar20 * (fVar20 * (fVar20 * _DAT_146159b58 + _DAT_146159b54) + _DAT_146159b64) +
             _DAT_145fc6ed8;
        auVar25._8_4_ =
             fVar21 * (fVar21 * (fVar21 * _DAT_146159b58 + _DAT_146159b54) + _DAT_146159b64) +
             _DAT_145fc6ed8;
        auVar25._12_4_ =
             fVar22 * (fVar22 * (fVar22 * _DAT_146159b58 + _DAT_146159b54) + _DAT_146159b64) +
             _DAT_145fc6ed8;
        auVar23._4_4_ = _DAT_145f43774;
        auVar23._0_4_ = _DAT_145f43774;
        auVar23._8_4_ = _DAT_145f43774;
        auVar23._12_4_ = _DAT_145f43774;
        auVar17 = vpcmpeqd_avx(auVar15,(undefined1  [16])0x0);
        auVar18 = vpsubd_avx((undefined1  [16])0x0,auVar15);
        auVar15 = vblendvps_avx(auVar25,auVar24,auVar17);
        auVar17 = vblendvps_avx(auVar25,auVar24,auVar18);
        auVar18 = vpand_avx(auVar11,auVar23);
        auVar3 = vpand_avx(auVar3,auVar23);
        auVar18 = vpcmpeqd_avx(auVar18,(undefined1  [16])0x0);
        auVar3 = vpcmpeqd_avx(auVar3,(undefined1  [16])0x0);
        auVar19._0_4_ = auVar15._0_4_ ^ _DAT_145fc6f10;
        auVar19._4_4_ = auVar15._4_4_ ^ _DAT_145fc6f10;
        auVar19._8_4_ = auVar15._8_4_ ^ _DAT_145fc6f10;
        auVar19._12_4_ = auVar15._12_4_ ^ _DAT_145fc6f10;
        auVar9._0_4_ = auVar17._0_4_ ^ _DAT_145fc6f10;
        auVar9._4_4_ = auVar17._4_4_ ^ _DAT_145fc6f10;
        auVar9._8_4_ = auVar17._8_4_ ^ _DAT_145fc6f10;
        auVar9._12_4_ = auVar17._12_4_ ^ _DAT_145fc6f10;
        auVar17 = vblendvps_avx(auVar9,auVar17,auVar3);
        auVar15 = vblendvps_avx(auVar19,auVar15,auVar18);
        fVar16 = auVar17._0_4_;
        auVar18 = vshufps_avx(auVar15,auVar17,0x55);
        fVar10 = auVar15._0_4_;
        auVar3 = vshufps_avx(auVar17,auVar15,0x55);
        auVar9 = vshufps_avx(auVar15,auVar17,0xaa);
        auVar15 = vshufps_avx(auVar17,auVar15,0xaa);
        auVar15 = vshufps_avx(auVar15,auVar15,0xd8);
        auVar17 = vshufps_avx(auVar9,auVar9,0xd8);
        auStack_88._0_4_ =
             (float)((uint)(auVar18._0_4_ * fVar16 * auVar17._0_4_) ^ _DAT_146159b70) +
             (float)((uint)(fVar10 * auVar3._0_4_ * auVar15._0_4_) ^ _DAT_14615dd60);
        auStack_88._4_4_ =
             (float)((uint)(auVar18._4_4_ * fVar16 * auVar17._4_4_) ^ _UNK_146159b74) +
             (float)((uint)(fVar10 * auVar3._4_4_ * auVar15._4_4_) ^ _UNK_14615dd64);
        auStack_88._8_4_ =
             (float)((uint)(auVar18._8_4_ * fVar16 * auVar17._8_4_) ^ _UNK_146159b78) +
             (float)((uint)(fVar10 * auVar3._8_4_ * auVar15._8_4_) ^ _UNK_14615dd68);
        auStack_88._12_4_ =
             (float)((uint)(auVar18._12_4_ * fVar16 * auVar17._12_4_) ^ _UNK_146159b7c) +
             (float)((uint)(fVar10 * auVar3._12_4_ * auVar15._12_4_) ^ _UNK_14615dd6c);
        FUN_140473180(*puVar5,*(undefined8 *)puVar5[1],*(undefined4 *)((undefined8 *)puVar5[1] + 6),
                      0x98e1750c,*puVar6,auStack_88);
      }
      else if (((uVar2 == 0) && (lVar7 != 0)) &&
              (lVar7 = FUN_144d9fa40(*(undefined4 *)(lVar7 + 0x9c)), lVar7 != 0)) {
        lVar4 = (ulonglong)((uint)DAT_14abc3b18 * 2) * 3;
        bVar1 = *(byte *)(lVar7 + 0x18 + lVar4);
        uVar8 = (ulonglong)bVar1;
        if ((((bVar1 == 0x1e) &&
             (bVar1 = *(byte *)(lVar7 + 0x19 + lVar4), uVar8 = (ulonglong)bVar1, bVar1 == 0x1e)) &&
            ((bVar1 = *(byte *)(lVar7 + 0x1a + lVar4), uVar8 = (ulonglong)bVar1, bVar1 == 0x1e &&
             ((bVar1 = *(byte *)(lVar7 + 0x1b + lVar4), uVar8 = (ulonglong)bVar1, bVar1 == 0x1e &&
              (bVar1 = *(byte *)(lVar7 + 0x1c + lVar4), uVar8 = (ulonglong)bVar1, bVar1 == 0x1e)))))
            ) && (bVar1 = *(byte *)(lVar7 + 0x1d + lVar4), uVar8 = (ulonglong)bVar1, bVar1 == 0x1e))
        {
          return;
        }
        lVar7 = *(longlong *)(lVar7 + 0xa0 + uVar8 * 8);
        if (lVar7 != 0) {
          FUN_144f82240(lVar7 + 0xa8,(ulonglong)*puVar6 | 0x2deefadd00000000,
                        *(undefined4 *)(param_1 + 0x2c),2);
        }
      }
    }
  }
  return;
}

