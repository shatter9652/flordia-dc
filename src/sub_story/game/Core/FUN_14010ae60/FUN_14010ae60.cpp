// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14010ae60  size: 308 bytes
// Name:    FUN_14010ae60
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_142bb3d70, FUN_144eb09b0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14010ae60(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 in_ZMM1 [64];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar28;
  undefined8 unaff_XMM6_Qa;
  float fVar30;
  float fVar31;
  undefined8 unaff_XMM6_Qb;
  undefined1 auVar29 [64];
  undefined8 unaff_XMM7_Qa;
  undefined1 auVar32 [16];
  uint uVar33;
  float fVar34;
  uint uVar37;
  float fVar38;
  uint uVar39;
  float fVar40;
  uint uVar41;
  float fVar42;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [64];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auStack_b8 [8];
  float fStack_b0;
  float fStack_ac;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_70;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  auVar29 = ZEXT1664(in_ZMM1._0_16_);
  iVar7 = -0x1000000;
  while (((uVar3 = (ulonglong)
                   *(byte *)(param_3 +
                            (longlong)(iVar7 >> 0x18) +
                            (ulonglong)((uint)DAT_14abbe8d0 * 2) * 3 + 0x19), uVar3 == 0x1e ||
          (lVar1 = *(longlong *)(param_3 + 0xa0 + uVar3 * 8), lVar1 == 0)) ||
         ((*(byte *)(lVar1 + 0x12) & 4) != 0))) {
    iVar7 = iVar7 + 0x1000000;
  }
  uVar3 = CONCAT71((int7)((ulonglong)lVar1 >> 8),*(undefined1 *)(lVar1 + 0x11a)) &
          0xffffffffffffff10;
  uStack_70 = 0x14010aef8;
  uStack_38 = unaff_XMM6_Qa;
  uStack_30 = unaff_XMM6_Qb;
  uStack_28 = unaff_XMM7_Qa;
  uStack_48 = *(undefined4 *)(param_1 + 0x14);
  uVar10 = func_0x000142bb3cb0(lVar1 + 0xf0,
                               CONCAT71((int7)(uVar3 >> 8),
                                        (byte)uVar3 >> 4 & (*(byte *)(lVar1 + 0xe8) & 9) != 0),
                               _DAT_14abbef44,*(undefined4 *)(param_1 + 0x10));
  _uStack_40 = CONCAT44(uStack_3c,*(undefined4 *)(param_1 + 0x24));
  _uStack_48 = CONCAT44(uStack_44,*(undefined4 *)(param_1 + 0x20));
  uStack_70 = 0x14010af23;
  fVar8 = (float)FUN_142bb3d70(auVar29._0_8_,uVar10,*(undefined4 *)(param_1 + 0x18),
                               *(undefined4 *)(param_1 + 0x1c));
  *(float *)(param_1 + 8) = fVar8;
  *(int *)(param_1 + 4) = auVar29._0_4_;
  uVar3 = (ulonglong)*(byte *)(param_3 + 0x19 + (ulonglong)DAT_149e40e88 * 6);
  if ((uVar3 == 0x1e) || (lVar1 = *(longlong *)(param_3 + 0xa0 + uVar3 * 8), lVar1 == 0)) {
    return;
  }
  uStack_70 = 0x14010af5c;
  lVar4 = FUN_144eb09b0(param_3);
  uStack_88 = uStack_28;
  uStack_98 = uStack_38;
  uStack_90 = uStack_30;
  plVar2 = *(longlong **)(lVar1 + 8);
  auVar29 = ZEXT1664(auVar29._0_16_);
  lVar5 = func_0x000144d9fa60(*(undefined4 *)(*plVar2 + 0x9c));
  if (lVar4 != 0) {
    fVar15 = auVar29._0_4_;
    fVar9 = (float)(_DAT_145fc6f10 ^ (uint)fVar15);
    if ((float)(_DAT_145fc6f10 ^ (uint)fVar15) <= fVar15) {
      fVar9 = fVar15;
    }
    if (_DAT_145fc6f00 <= fVar9) {
      uVar33 = _DAT_145fc6f10;
      uVar37 = _DAT_145fc6f10;
      uVar39 = _DAT_145fc6f10;
      uVar41 = _DAT_145fc6f10;
      lVar6 = func_0x000144db7870(plVar2);
      fVar28 = auVar29._0_4_;
      auVar43._4_4_ = fVar28;
      auVar43._0_4_ = fVar28;
      auVar43._8_4_ = fVar28;
      auVar43._12_4_ = fVar28;
      auVar29 = ZEXT1664(CONCAT412(_DAT_145fc6ed8,
                                   CONCAT48(_DAT_145fc6ed8,CONCAT44(_DAT_145fc6ed8,_DAT_145fc6ed8)))
                        );
      auVar43 = vrcpps_avx(auVar43);
      fVar9 = auVar43._0_4_;
      fVar15 = auVar43._4_4_;
      fVar16 = auVar43._8_4_;
      fVar17 = auVar43._12_4_;
      auVar46 = ZEXT1664(CONCAT412(-((fVar17 * fVar28 - _DAT_145fc6ed8) * fVar17) + fVar17,
                                   CONCAT48(-((fVar16 * fVar28 - _DAT_145fc6ed8) * fVar16) + fVar16,
                                            CONCAT44(-((fVar15 * fVar28 - _DAT_145fc6ed8) * fVar15)
                                                     + fVar15,-((fVar9 * fVar28 - _DAT_145fc6ed8) *
                                                               fVar9) + fVar9))));
      _auStack_b8 = ZEXT816(0) << 0x20;
      FUN_140069930(lVar1 + 0x18,lVar4,0x70977dd5,0,auStack_b8);
      auVar43 = auVar46._0_16_;
      if (*(longlong *)(lVar6 + 0x80) == 0) {
        fVar9 = (float)auStack_b8._0_4_;
        fVar15 = (float)auStack_b8._4_4_;
        fVar16 = fStack_b0;
        fVar17 = fStack_ac;
      }
      else {
        lVar6 = func_0x000144e32130();
        auVar43 = auVar46._0_16_;
        fVar17 = *(float *)(lVar6 + 0x1c) + _DAT_145fc6ed8;
        fVar9 = fVar17 * (float)auStack_b8._0_4_;
        fVar15 = fVar17 * (float)auStack_b8._4_4_;
        fVar16 = fVar17 * fStack_b0;
        fVar17 = fVar17 * fStack_ac;
      }
      uStack_a0 = _UNK_145fc6ee8;
      uStack_a8 = _DAT_145fc6ee0;
      fVar28 = auVar43._0_4_ * fVar8;
      fVar30 = auVar43._4_4_ * fVar8;
      fVar31 = auVar43._8_4_ * fVar8;
      fVar8 = auVar43._12_4_ * fVar8;
      auVar11._0_4_ = fVar28 * fVar9;
      auVar11._4_4_ = fVar30 * fVar15;
      auVar11._8_4_ = fVar31 * fVar16;
      auVar11._12_4_ = fVar8 * fVar17;
      *(undefined1 (*) [16])(lVar5 + 0x10) = auVar11;
      FUN_140069930(lVar1 + 0x28,lVar4,0x70d27729,0,&uStack_a8);
      auVar21._0_4_ = _DAT_14615be50 * (float)uStack_a8;
      auVar21._4_4_ = _DAT_14615be50 * uStack_a8._4_4_;
      auVar21._8_4_ = _DAT_14615be50 * (float)uStack_a0;
      auVar21._12_4_ = _DAT_14615be50 * uStack_a0._4_4_;
      auVar43 = vshufps_avx(auVar21,auVar21,0x5a);
      auVar11 = vshufps_avx(auVar21,auVar21,1);
      auVar12._0_4_ = auVar21._0_4_ * auVar21._0_4_;
      auVar12._4_4_ = auVar21._4_4_ * auVar21._4_4_;
      auVar12._8_4_ = auVar21._8_4_ * auVar21._8_4_;
      auVar12._12_4_ = auVar21._12_4_ * auVar21._12_4_;
      auVar47 = vshufps_avx(auVar21,auVar21,0xff);
      auVar14 = vshufps_avx(auVar12,auVar12,0x55);
      auVar13._0_4_ = auVar12._0_4_ + auVar14._0_4_;
      auVar13._4_4_ = auVar12._4_4_ + auVar14._4_4_;
      auVar13._8_4_ = auVar12._8_4_ + auVar14._8_4_;
      auVar13._12_4_ = auVar12._12_4_ + auVar14._12_4_;
      auVar12 = auVar29._0_16_;
      auVar14 = vsubps_avx(auVar12,auVar13);
      auVar24._0_4_ =
           auVar21._0_4_ * auVar47._0_4_ +
           (float)((uint)(auVar11._0_4_ * auVar43._0_4_) ^ _DAT_145fc11f0);
      auVar24._4_4_ =
           auVar21._4_4_ * auVar47._4_4_ +
           (float)((uint)(auVar11._4_4_ * auVar43._4_4_) ^ _UNK_145fc11f4);
      auVar24._8_4_ =
           auVar21._8_4_ * auVar47._8_4_ +
           (float)((uint)(auVar11._8_4_ * auVar43._8_4_) ^ _UNK_145fc11f8);
      auVar24._12_4_ =
           auVar21._12_4_ * auVar47._12_4_ +
           (float)((uint)(auVar11._12_4_ * auVar43._12_4_) ^ _UNK_145fc11fc);
      auVar22._4_4_ = auVar21._0_4_;
      auVar22._0_4_ = auVar21._0_4_;
      auVar22._8_4_ = auVar21._0_4_;
      auVar22._12_4_ = auVar21._0_4_;
      auVar18._0_4_ = auVar24._0_4_ * auVar24._0_4_;
      auVar18._4_4_ = auVar24._4_4_ * auVar24._4_4_;
      auVar18._8_4_ = auVar24._8_4_ * auVar24._8_4_;
      auVar18._12_4_ = auVar24._12_4_ * auVar24._12_4_;
      auVar43 = vminps_avx(auVar12,auVar18);
      auVar11 = vsubps_avx(auVar12,auVar43);
      auVar43 = vrsqrtps_avx(auVar11);
      fVar9 = auVar43._0_4_;
      fVar15 = auVar43._4_4_;
      fVar16 = auVar43._8_4_;
      fVar17 = auVar43._12_4_;
      auVar44._4_4_ = _DAT_146159bfc;
      auVar44._0_4_ = _DAT_146159bfc;
      auVar44._8_4_ = _DAT_146159bfc;
      auVar44._12_4_ = _DAT_146159bfc;
      auVar43 = vcmpps_avx(auVar44,auVar11,2);
      auVar19._0_4_ =
           auVar43._0_4_ &
           (uint)(((fVar9 * fVar9 * auVar11._0_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar9 + fVar9
                  ) * auVar11._0_4_);
      auVar19._4_4_ =
           auVar43._4_4_ &
           (uint)(((fVar15 * fVar15 * auVar11._4_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar15 +
                  fVar15) * auVar11._4_4_);
      auVar19._8_4_ =
           auVar43._8_4_ &
           (uint)(((fVar16 * fVar16 * auVar11._8_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar16 +
                  fVar16) * auVar11._8_4_);
      auVar19._12_4_ =
           auVar43._12_4_ &
           (uint)(((fVar17 * fVar17 * auVar11._12_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar17 +
                  fVar17) * auVar11._12_4_);
      auVar43 = vblendps_avx(auVar14,auVar19,2);
      auVar20._4_4_ = _DAT_145fc6f0c;
      auVar20._0_4_ = _DAT_145fc6f0c;
      auVar20._8_4_ = _DAT_145fc6f0c;
      auVar20._12_4_ = _DAT_145fc6f0c;
      auVar11 = vshufps_avx(auVar24,auVar24,0x55);
      auVar14._0_4_ = _DAT_145fc6f4c & auVar11._0_4_;
      auVar14._4_4_ = _DAT_145fc6f4c & auVar11._4_4_;
      auVar14._8_4_ = _DAT_145fc6f4c & auVar11._8_4_;
      auVar14._12_4_ = _DAT_145fc6f4c & auVar11._12_4_;
      auVar14 = vcmpps_avx(auVar20,auVar14,1);
      auVar13 = ZEXT416(0) << 0x20;
      auVar11 = vblendps_avx(auVar13,auVar14,1);
      auVar14 = vblendvps_avx(auVar12,_UNK_14615be60,auVar14);
      auVar43 = vblendvps_avx(auVar43,auVar47,auVar11);
      auVar11 = vblendvps_avx(auVar24,auVar22,auVar11);
      auVar47 = vrcpps_avx(auVar43);
      auVar23._0_4_ = uVar33 ^ (uint)auVar43._0_4_;
      auVar23._4_4_ = uVar37 ^ (uint)auVar43._4_4_;
      auVar23._8_4_ = uVar39 ^ (uint)auVar43._8_4_;
      auVar23._12_4_ = uVar41 ^ (uint)auVar43._12_4_;
      fVar15 = auVar47._0_4_;
      fVar16 = auVar47._4_4_;
      fVar17 = auVar47._8_4_;
      fVar9 = auVar47._12_4_;
      auVar26._0_4_ =
           (-((auVar43._0_4_ * fVar15 - auVar29._0_4_) * fVar15) + fVar15) * auVar11._0_4_;
      auVar26._4_4_ =
           (-((auVar43._4_4_ * fVar16 - auVar29._4_4_) * fVar16) + fVar16) * auVar11._4_4_;
      auVar26._8_4_ =
           (-((auVar43._8_4_ * fVar17 - auVar29._8_4_) * fVar17) + fVar17) * auVar11._8_4_;
      auVar26._12_4_ =
           (-((auVar43._12_4_ * fVar9 - auVar29._12_4_) * fVar9) + fVar9) * auVar11._12_4_;
      auVar47 = vrcpps_avx(auVar26);
      auVar45._0_4_ = _DAT_145fc6f4c & (uint)auVar26._0_4_;
      auVar45._4_4_ = _DAT_145fc6f4c & (uint)auVar26._4_4_;
      auVar45._8_4_ = _DAT_145fc6f4c & (uint)auVar26._8_4_;
      auVar45._12_4_ = _DAT_145fc6f4c & (uint)auVar26._12_4_;
      fVar15 = auVar47._0_4_;
      fVar16 = auVar47._4_4_;
      fVar17 = auVar47._8_4_;
      fVar9 = auVar47._12_4_;
      auVar12 = vcmpps_avx(auVar12,auVar45,1);
      auVar47._0_4_ = (auVar26._0_4_ * fVar15 - auVar29._0_4_) * fVar15 - fVar15;
      auVar47._4_4_ = (auVar26._4_4_ * fVar16 - auVar29._4_4_) * fVar16 - fVar16;
      auVar47._8_4_ = (auVar26._8_4_ * fVar17 - auVar29._8_4_) * fVar17 - fVar17;
      auVar47._12_4_ = (auVar26._12_4_ * fVar9 - auVar29._12_4_) * fVar9 - fVar9;
      auVar47 = vblendvps_avx(auVar26,auVar47,auVar12);
      fVar9 = auVar47._0_4_;
      fVar15 = auVar47._4_4_;
      fVar16 = auVar47._8_4_;
      fVar17 = auVar47._12_4_;
      fVar34 = fVar9 * fVar9;
      fVar38 = fVar15 * fVar15;
      fVar40 = fVar16 * fVar16;
      fVar42 = fVar17 * fVar17;
      auVar35._4_4_ = _DAT_145fc6f80;
      auVar35._0_4_ = _DAT_145fc6f80;
      auVar35._8_4_ = _DAT_145fc6f80;
      auVar35._12_4_ = _DAT_145fc6f80;
      auVar32._4_4_ = _DAT_146159be0;
      auVar32._0_4_ = _DAT_146159be0;
      auVar32._8_4_ = _DAT_146159be0;
      auVar32._12_4_ = _DAT_146159be0;
      auVar48._0_4_ =
           fVar34 * fVar34 * fVar34 * fVar34 * fVar9 *
           (fVar34 * (fVar34 * (fVar34 * (fVar34 * _DAT_14615a184 + _DAT_14615a180) + _DAT_14615a188
                               ) + _DAT_14615a18c) + _DAT_14615a190) +
           fVar34 * fVar9 * (fVar34 * (fVar34 * _DAT_14615a198 + _DAT_14615a194) + _DAT_14615a19c) +
           (float)((uVar33 & (uint)auVar26._0_4_ | _DAT_146159bdc) & auVar12._0_4_) + fVar9;
      auVar48._4_4_ =
           fVar38 * fVar38 * fVar38 * fVar38 * fVar15 *
           (fVar38 * (fVar38 * (fVar38 * (fVar38 * _DAT_14615a184 + _DAT_14615a180) + _DAT_14615a188
                               ) + _DAT_14615a18c) + _DAT_14615a190) +
           fVar38 * fVar15 * (fVar38 * (fVar38 * _DAT_14615a198 + _DAT_14615a194) + _DAT_14615a19c)
           + (float)((uVar37 & (uint)auVar26._4_4_ | _DAT_146159bdc) & auVar12._4_4_) + fVar15;
      auVar48._8_4_ =
           fVar40 * fVar40 * fVar40 * fVar40 * fVar16 *
           (fVar40 * (fVar40 * (fVar40 * (fVar40 * _DAT_14615a184 + _DAT_14615a180) + _DAT_14615a188
                               ) + _DAT_14615a18c) + _DAT_14615a190) +
           fVar40 * fVar16 * (fVar40 * (fVar40 * _DAT_14615a198 + _DAT_14615a194) + _DAT_14615a19c)
           + (float)((uVar39 & (uint)auVar26._8_4_ | _DAT_146159bdc) & auVar12._8_4_) + fVar16;
      auVar48._12_4_ =
           fVar42 * fVar42 * fVar42 * fVar42 * fVar17 *
           (fVar42 * (fVar42 * (fVar42 * (fVar42 * _DAT_14615a184 + _DAT_14615a180) + _DAT_14615a188
                               ) + _DAT_14615a18c) + _DAT_14615a190) +
           fVar42 * fVar17 * (fVar42 * (fVar42 * _DAT_14615a198 + _DAT_14615a194) + _DAT_14615a19c)
           + (float)((uVar41 & (uint)auVar26._12_4_ | _DAT_146159bdc) & auVar12._12_4_) + fVar17;
      auVar47 = vcmpps_avx(auVar11,auVar13,1);
      auVar12 = vcmpps_avx(auVar13,auVar11,1);
      auVar25._4_4_ = _DAT_146159bdc;
      auVar25._0_4_ = _DAT_146159bdc;
      auVar25._8_4_ = _DAT_146159bdc;
      auVar25._12_4_ = _DAT_146159bdc;
      auVar11 = vblendvps_avx(auVar35,auVar32,auVar47);
      auVar36._4_4_ = _DAT_14615a1a0;
      auVar36._0_4_ = _DAT_14615a1a0;
      auVar36._8_4_ = _DAT_14615a1a0;
      auVar36._12_4_ = _DAT_14615a1a0;
      auVar47 = vcmpps_avx(auVar43,auVar23,1);
      auVar13 = vcmpps_avx(auVar43,auVar23,0);
      auVar27._0_4_ = auVar48._0_4_ + auVar11._0_4_;
      auVar27._4_4_ = auVar48._4_4_ + auVar11._4_4_;
      auVar27._8_4_ = auVar48._8_4_ + auVar11._8_4_;
      auVar27._12_4_ = auVar48._12_4_ + auVar11._12_4_;
      auVar43 = vblendvps_avx(auVar48,auVar27,auVar47);
      auVar11 = vblendvps_avx(auVar36,auVar25,auVar12);
      auVar43 = vblendvps_avx(auVar43,auVar11,auVar13);
      *(float *)(lVar5 + 0x20) = fVar28 * auVar14._0_4_ * auVar43._0_4_;
      *(float *)(lVar5 + 0x24) = fVar30 * auVar14._4_4_ * auVar43._4_4_;
      *(float *)(lVar5 + 0x28) = fVar31 * auVar14._8_4_ * auVar43._8_4_;
      *(float *)(lVar5 + 0x2c) = fVar8 * auVar14._12_4_ * auVar43._12_4_;
      return;
    }
  }
  *(undefined1 (*) [32])(lVar5 + 0x10) = ZEXT1232(ZEXT812(0));
  return;
}

