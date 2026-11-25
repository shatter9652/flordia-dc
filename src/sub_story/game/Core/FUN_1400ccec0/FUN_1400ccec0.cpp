// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400ccec0  size: 807 bytes
// Name:    FUN_1400ccec0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144daa460
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400ccec0(longlong param_1,longlong param_2,longlong param_3)

{
  float fVar1;
  char cVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar20;
  float fVar23;
  float fVar24;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  
  *(byte *)(param_2 + 0x141) = *(byte *)(param_2 + 0x141) & 0xfd;
  *(byte *)(param_2 + 0x140) = *(byte *)(param_2 + 0x140) & 0xef;
  cVar2 = func_0x0001400cd1f0(param_2);
  *(byte *)(param_2 + 0x140) = *(byte *)(param_2 + 0x140) & 0x77 | cVar2 << 3;
  *(undefined4 *)(param_2 + 0x144) = 0;
  if ((param_3 != 0) && (*(char *)(param_1 + 0x38c) == '\0')) {
    FUN_144daa460(param_3,&fStack_88,*(undefined4 *)(param_1 + 0x178));
    auVar17._4_4_ = _DAT_145fc6ed8;
    auVar17._0_4_ = _DAT_145fc6ed8;
    auVar17._8_4_ = _DAT_145fc6ed8;
    auVar17._12_4_ = _DAT_145fc6ed8;
    auVar12._0_4_ = _DAT_14615be50 * fStack_88;
    auVar12._4_4_ = _DAT_14615be50 * fStack_84;
    auVar12._8_4_ = _DAT_14615be50 * fStack_80;
    auVar12._12_4_ = _DAT_14615be50 * fStack_7c;
    auVar9 = vshufps_avx(auVar12,auVar12,0x5a);
    auVar11 = vshufps_avx(auVar12,auVar12,1);
    auVar3._0_4_ = auVar12._0_4_ * auVar12._0_4_;
    auVar3._4_4_ = auVar12._4_4_ * auVar12._4_4_;
    auVar3._8_4_ = auVar12._8_4_ * auVar12._8_4_;
    auVar3._12_4_ = auVar12._12_4_ * auVar12._12_4_;
    auVar7 = vshufps_avx(auVar12,auVar12,0xff);
    auVar5 = vshufps_avx(auVar3,auVar3,0x55);
    auVar4._0_4_ = auVar3._0_4_ + auVar5._0_4_;
    auVar4._4_4_ = auVar3._4_4_ + auVar5._4_4_;
    auVar4._8_4_ = auVar3._8_4_ + auVar5._8_4_;
    auVar4._12_4_ = auVar3._12_4_ + auVar5._12_4_;
    auVar5 = vsubps_avx(auVar17,auVar4);
    auVar16._0_4_ =
         auVar12._0_4_ * auVar7._0_4_ +
         (float)((uint)(auVar11._0_4_ * auVar9._0_4_) ^ _DAT_145fc11f0);
    auVar16._4_4_ =
         auVar12._4_4_ * auVar7._4_4_ +
         (float)((uint)(auVar11._4_4_ * auVar9._4_4_) ^ _UNK_145fc11f4);
    auVar16._8_4_ =
         auVar12._8_4_ * auVar7._8_4_ +
         (float)((uint)(auVar11._8_4_ * auVar9._8_4_) ^ _UNK_145fc11f8);
    auVar16._12_4_ =
         auVar12._12_4_ * auVar7._12_4_ +
         (float)((uint)(auVar11._12_4_ * auVar9._12_4_) ^ _UNK_145fc11fc);
    auVar13._4_4_ = auVar12._0_4_;
    auVar13._0_4_ = auVar12._0_4_;
    auVar13._8_4_ = auVar12._0_4_;
    auVar13._12_4_ = auVar12._0_4_;
    auVar9._0_4_ = auVar16._0_4_ * auVar16._0_4_;
    auVar9._4_4_ = auVar16._4_4_ * auVar16._4_4_;
    auVar9._8_4_ = auVar16._8_4_ * auVar16._8_4_;
    auVar9._12_4_ = auVar16._12_4_ * auVar16._12_4_;
    auVar9 = vminps_avx(auVar17,auVar9);
    auVar11 = vsubps_avx(auVar17,auVar9);
    auVar9 = vrsqrtps_avx(auVar11);
    fVar1 = auVar9._0_4_;
    fVar26 = auVar9._4_4_;
    fVar8 = auVar9._8_4_;
    fVar27 = auVar9._12_4_;
    auVar21._4_4_ = _DAT_146159bfc;
    auVar21._0_4_ = _DAT_146159bfc;
    auVar21._8_4_ = _DAT_146159bfc;
    auVar21._12_4_ = _DAT_146159bfc;
    auVar9 = vcmpps_avx(auVar21,auVar11,2);
    auVar6._0_4_ = auVar9._0_4_ &
                   (uint)(((fVar1 * fVar1 * auVar11._0_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar1
                          + fVar1) * auVar11._0_4_);
    auVar6._4_4_ = auVar9._4_4_ &
                   (uint)(((fVar26 * fVar26 * auVar11._4_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) *
                           fVar26 + fVar26) * auVar11._4_4_);
    auVar6._8_4_ = auVar9._8_4_ &
                   (uint)(((fVar8 * fVar8 * auVar11._8_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar8
                          + fVar8) * auVar11._8_4_);
    auVar6._12_4_ =
         auVar9._12_4_ &
         (uint)(((fVar27 * fVar27 * auVar11._12_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar27 +
                fVar27) * auVar11._12_4_);
    auVar9 = vblendps_avx(auVar5,auVar6,2);
    auVar10._4_4_ = _DAT_145fc6f0c;
    auVar10._0_4_ = _DAT_145fc6f0c;
    auVar10._8_4_ = _DAT_145fc6f0c;
    auVar10._12_4_ = _DAT_145fc6f0c;
    auVar11 = vshufps_avx(auVar16,auVar16,0x55);
    auVar5._0_4_ = auVar11._0_4_ & _DAT_145fc6f4c;
    auVar5._4_4_ = auVar11._4_4_ & _DAT_145fc6f4c;
    auVar5._8_4_ = auVar11._8_4_ & _DAT_145fc6f4c;
    auVar5._12_4_ = auVar11._12_4_ & _DAT_145fc6f4c;
    auVar5 = vcmpps_avx(auVar10,auVar5,1);
    auVar6 = ZEXT416(0) << 0x20;
    auVar11 = vblendps_avx(auVar6,auVar5,1);
    auVar5 = vblendvps_avx(ZEXT416((uint)_DAT_145fc6ed8),ZEXT416(_DAT_146159bd4),auVar5);
    auVar9 = vblendvps_avx(auVar9,auVar7,auVar11);
    auVar11 = vblendvps_avx(auVar16,auVar13,auVar11);
    auVar7 = vrcpps_avx(auVar9);
    fVar26 = auVar7._0_4_;
    fVar8 = auVar7._4_4_;
    fVar27 = auVar7._8_4_;
    fVar1 = auVar7._12_4_;
    auVar14._0_4_ = _DAT_145fc6f10 ^ (uint)auVar9._0_4_;
    auVar14._4_4_ = _DAT_145fc6f10 ^ (uint)auVar9._4_4_;
    auVar14._8_4_ = _DAT_145fc6f10 ^ (uint)auVar9._8_4_;
    auVar14._12_4_ = _DAT_145fc6f10 ^ (uint)auVar9._12_4_;
    auVar19._0_4_ = (-((auVar9._0_4_ * fVar26 - _DAT_145fc6ed8) * fVar26) + fVar26) * auVar11._0_4_;
    auVar19._4_4_ = (-((auVar9._4_4_ * fVar8 - _DAT_145fc6ed8) * fVar8) + fVar8) * auVar11._4_4_;
    auVar19._8_4_ = (-((auVar9._8_4_ * fVar27 - _DAT_145fc6ed8) * fVar27) + fVar27) * auVar11._8_4_;
    auVar19._12_4_ = (-((auVar9._12_4_ * fVar1 - _DAT_145fc6ed8) * fVar1) + fVar1) * auVar11._12_4_;
    auVar7 = vrcpps_avx(auVar19);
    auVar22._0_4_ = (uint)auVar19._0_4_ & _DAT_145fc6f4c;
    auVar22._4_4_ = (uint)auVar19._4_4_ & _DAT_145fc6f4c;
    auVar22._8_4_ = (uint)auVar19._8_4_ & _DAT_145fc6f4c;
    auVar22._12_4_ = (uint)auVar19._12_4_ & _DAT_145fc6f4c;
    fVar26 = auVar7._0_4_;
    fVar8 = auVar7._4_4_;
    fVar27 = auVar7._8_4_;
    fVar1 = auVar7._12_4_;
    auVar3 = vcmpps_avx(auVar17,auVar22,1);
    auVar28._0_4_ = (auVar19._0_4_ * fVar26 - _DAT_145fc6ed8) * fVar26 - fVar26;
    auVar28._4_4_ = (auVar19._4_4_ * fVar8 - _DAT_145fc6ed8) * fVar8 - fVar8;
    auVar28._8_4_ = (auVar19._8_4_ * fVar27 - _DAT_145fc6ed8) * fVar27 - fVar27;
    auVar28._12_4_ = (auVar19._12_4_ * fVar1 - _DAT_145fc6ed8) * fVar1 - fVar1;
    auVar7 = vblendvps_avx(auVar19,auVar28,auVar3);
    fVar1 = auVar7._0_4_;
    fVar26 = auVar7._4_4_;
    fVar8 = auVar7._8_4_;
    fVar27 = auVar7._12_4_;
    fVar20 = fVar1 * fVar1;
    fVar23 = fVar26 * fVar26;
    fVar24 = fVar8 * fVar8;
    fVar25 = fVar27 * fVar27;
    auVar29._0_4_ =
         fVar20 * fVar20 * fVar20 * fVar20 * fVar1 *
         (fVar20 * (fVar20 * (fVar20 * (fVar20 * _DAT_14615a184 + _DAT_14615a180) + _DAT_14615a188)
                   + _DAT_14615a18c) + _DAT_14615a190) +
         fVar20 * fVar1 * (fVar20 * (fVar20 * _DAT_14615a198 + _DAT_14615a194) + _DAT_14615a19c) +
         (float)(auVar3._0_4_ & (_DAT_145fc6f10 & (uint)auVar19._0_4_ | _DAT_146159bdc)) + fVar1;
    auVar29._4_4_ =
         fVar23 * fVar23 * fVar23 * fVar23 * fVar26 *
         (fVar23 * (fVar23 * (fVar23 * (fVar23 * _DAT_14615a184 + _DAT_14615a180) + _DAT_14615a188)
                   + _DAT_14615a18c) + _DAT_14615a190) +
         fVar23 * fVar26 * (fVar23 * (fVar23 * _DAT_14615a198 + _DAT_14615a194) + _DAT_14615a19c) +
         (float)(auVar3._4_4_ & (_DAT_145fc6f10 & (uint)auVar19._4_4_ | _DAT_146159bdc)) + fVar26;
    auVar29._8_4_ =
         fVar24 * fVar24 * fVar24 * fVar24 * fVar8 *
         (fVar24 * (fVar24 * (fVar24 * (fVar24 * _DAT_14615a184 + _DAT_14615a180) + _DAT_14615a188)
                   + _DAT_14615a18c) + _DAT_14615a190) +
         fVar24 * fVar8 * (fVar24 * (fVar24 * _DAT_14615a198 + _DAT_14615a194) + _DAT_14615a19c) +
         (float)(auVar3._8_4_ & (_DAT_145fc6f10 & (uint)auVar19._8_4_ | _DAT_146159bdc)) + fVar8;
    auVar29._12_4_ =
         fVar25 * fVar25 * fVar25 * fVar25 * fVar27 *
         (fVar25 * (fVar25 * (fVar25 * (fVar25 * _DAT_14615a184 + _DAT_14615a180) + _DAT_14615a188)
                   + _DAT_14615a18c) + _DAT_14615a190) +
         fVar25 * fVar27 * (fVar25 * (fVar25 * _DAT_14615a198 + _DAT_14615a194) + _DAT_14615a19c) +
         (float)(auVar3._12_4_ & (_DAT_145fc6f10 & (uint)auVar19._12_4_ | _DAT_146159bdc)) + fVar27;
    auVar7 = vcmpps_avx(auVar11,auVar6,1);
    auVar3 = vcmpps_avx(auVar6,auVar11,1);
    auVar11 = vblendvps_avx(ZEXT416(_DAT_145fc6f80),ZEXT416(_DAT_146159be0),auVar7);
    auVar7 = vcmpps_avx(auVar9,auVar14,1);
    auVar4 = vcmpps_avx(auVar9,auVar14,0);
    auVar18._0_4_ = auVar29._0_4_ + auVar11._0_4_;
    auVar18._4_4_ = auVar29._4_4_ + auVar11._4_4_;
    auVar18._8_4_ = auVar29._8_4_ + auVar11._8_4_;
    auVar18._12_4_ = auVar29._12_4_ + auVar11._12_4_;
    auVar9 = vblendvps_avx(auVar29,auVar18,auVar7);
    auVar11 = vblendvps_avx(ZEXT416(_DAT_14615a1a0),ZEXT416(_DAT_146159bdc),auVar3);
    auVar9 = vblendvps_avx(auVar9,auVar11,auVar4);
    fVar8 = auVar9._0_4_ * auVar5._0_4_;
    fVar1 = fVar8 + _DAT_14615d120;
    fVar26 = fVar8 + _DAT_145fc6f78;
    auVar11._4_4_ = fVar1;
    auVar11._0_4_ = fVar1;
    auVar11._8_4_ = fVar1;
    auVar11._12_4_ = fVar1;
    auVar15._4_4_ = fVar26;
    auVar15._0_4_ = fVar26;
    auVar15._8_4_ = fVar26;
    auVar15._12_4_ = fVar26;
    auVar9 = vcmpps_avx(auVar11,auVar6,2);
    auVar11 = vcmpps_avx(auVar6,auVar15,2);
    auVar7._0_4_ = auVar9._0_4_ & auVar11._0_4_;
    auVar7._4_4_ = auVar9._4_4_ & auVar11._4_4_;
    auVar7._8_4_ = auVar9._8_4_ & auVar11._8_4_;
    auVar7._12_4_ = auVar9._12_4_ & auVar11._12_4_;
    auVar9 = vpcmpeqd_avx(auVar9,auVar9);
    if ((auVar9 & ~auVar7) != (undefined1  [16])0x0) {
      *(float *)(param_2 + 0x144) = fVar8;
      *(byte *)(param_2 + 0x140) = *(byte *)(param_2 + 0x140) | 0x80;
    }
  }
  return;
}

