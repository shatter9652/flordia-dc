// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401a5f20  size: 2224 bytes
// Name:    FUN_1401a5f20
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14049c1f0, FUN_145058cd0, FUN_144de6230, FUN_1453f8460, FUN_144d9fa40, FUN_14556f950, FUN_1452ae3f0, FUN_144eb75a0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401a5f20(longlong *param_1,undefined1 (*param_2) [16],ulonglong param_3,undefined4 param_4
                  ,byte param_5)

{
  uint uVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  byte bVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  undefined1 uVar9;
  undefined8 *puVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar13;
  float fVar19;
  float fVar20;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar21;
  undefined1 auVar18 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float fVar30;
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
  undefined1 auVar41 [64];
  undefined1 auVar42 [64];
  float fVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  float fVar47;
  float fVar48;
  float fVar49;
  undefined1 auVar46 [64];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [64];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined8 uStack_148;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  longlong lStack_118;
  longlong lStack_110;
  undefined1 auStack_108 [16];
  undefined1 aauStack_f8 [11] [16];
  
  puVar10 = (undefined8 *)(param_3 & 0xffffffff);
  if ((*(byte *)((longlong)param_1 + 0xee) & 0x40) != 0 && (param_5 ^ 1) == 0) {
    auVar15 = param_2[3];
    auVar14 = vpunpckhwd_avx(auVar15,auVar15);
    auVar14 = vpsrad_avx(auVar14,0x10);
    auVar14 = vcvtdq2ps_avx(auVar14);
    auVar14 = vshufpd_avx(auVar14,auVar14,3);
    auVar41 = ZEXT1664(CONCAT412(auVar14._12_4_ * _UNK_146159c9c + auVar15._12_4_,
                                 CONCAT48(auVar14._8_4_ * _UNK_146159c98 + auVar15._8_4_,
                                          CONCAT44(auVar14._4_4_ * _UNK_146159c94 + auVar15._4_4_,
                                                   auVar14._0_4_ * _DAT_146159c90 + auVar15._0_4_)))
                      );
    lStack_118 = param_1[0xe];
    lStack_110 = param_1[0xf];
    func_0x000144dc3790(&lStack_118,auStack_108);
    auVar15 = vsubps_avx(auVar41._0_16_,auStack_108);
    auVar14._0_4_ = auVar15._0_4_ * auVar15._0_4_;
    auVar14._4_4_ = auVar15._4_4_ * auVar15._4_4_;
    auVar14._8_4_ = auVar15._8_4_ * auVar15._8_4_;
    auVar14._12_4_ = auVar15._12_4_ * auVar15._12_4_;
    auVar15 = vhaddps_avx(auVar14,auVar14);
    if (_DAT_145fc6ed8 < auVar15._0_4_) {
      lVar4 = func_0x0001424e2930(*(undefined4 *)((longlong)param_1 + 0x9c));
      if (*(longlong *)(lVar4 + 0x120) == 0) {
        (**(code **)(*param_1 + 0x330))(param_1,1);
      }
    }
  }
  if (param_5 == 0) {
    auVar41 = ZEXT1664(*(undefined1 (*) [16])(param_1 + 8));
    auVar42 = ZEXT1664(*(undefined1 (*) [16])(param_1 + 10));
    auVar46 = ZEXT1664(*(undefined1 (*) [16])(param_1 + 0xc));
    auVar53 = ZEXT1664(*(undefined1 (*) [16])(param_1 + 0xe));
  }
  else {
    uVar8 = *(undefined4 *)((longlong)param_1 + 0x9c);
    cVar3 = func_0x00014501d380(uVar8);
    if (cVar3 != '\0') {
      FUN_14049c1f0(param_1);
      uVar8 = *(undefined4 *)((longlong)param_1 + 0x9c);
    }
    auVar41 = ZEXT1664(*(undefined1 (*) [16])(param_1 + 8));
    auVar42 = ZEXT1664(*(undefined1 (*) [16])(param_1 + 10));
    auVar46 = ZEXT1664(*(undefined1 (*) [16])(param_1 + 0xc));
    auVar53 = ZEXT1664(*(undefined1 (*) [16])(param_1 + 0xe));
    lVar4 = FUN_144d9fa40(uVar8);
    if (lVar4 != 0) {
      uVar9 = SUB81(puVar10,0);
      *(undefined4 *)(lVar4 + 0x42c) = _DAT_14abbef44;
      fStack_140 = (float)CONCAT31(fStack_140._1_3_,2);
      uStack_148 = (ulonglong)(*(int *)(lVar4 + 0x430) != _DAT_14ab5d014);
      uVar1 = *(uint *)(lVar4 + 400);
      if ((ulonglong)uVar1 != 0) {
        uVar7 = 0;
        puVar10 = &uStack_148;
        do {
          if ((*(byte *)(lVar4 + 0x1be + uVar7 * 4) & 1) != 0) {
            func_0x000144e74b90(*(undefined8 *)(lVar4 + 0xa0 + uVar7 * 8),0x10,0xff,puVar10);
          }
          uVar7 = uVar7 + 1;
        } while (uVar1 != uVar7);
      }
      puVar10 = (undefined8 *)CONCAT71((int7)((ulonglong)puVar10 >> 8),uVar9);
    }
  }
  func_0x00014011d0a0(param_1,param_2,0,0,0);
  if ((char)param_1[6] != '\x04') goto LAB_1401a61ed;
  uVar8 = *(undefined4 *)((longlong)param_1 + 0x9c);
  lVar4 = FUN_144de6230(uVar8);
  if ((lVar4 == 0) || (*(char *)(lVar4 + 0x30) != '\x03')) {
    if ((*(byte *)((longlong)param_1 + 0x102) & 1) != 0) {
      fVar43 = *(float *)(param_1 + 0xc);
      fVar47 = *(float *)((longlong)param_1 + 100);
      fVar48 = *(float *)(param_1 + 0xd);
      fVar49 = *(float *)((longlong)param_1 + 0x6c);
      auVar22._0_12_ = ZEXT812(0);
      auVar22._12_4_ = 0;
      uVar5 = 1;
      auVar15._0_4_ = fVar43 * fVar43;
      auVar15._4_4_ = fVar47 * fVar47;
      auVar15._8_4_ = fVar48 * fVar48;
      auVar15._12_4_ = fVar49 * fVar49;
      auVar15 = vblendps_avx(auVar15,auVar22,8);
      auVar15 = vhaddps_avx(auVar15,auVar15);
      auVar15 = vhaddps_avx(auVar15,auVar15);
      auVar14 = vrsqrtps_avx(auVar15);
      fVar21 = auVar14._0_4_;
      fVar13 = auVar14._4_4_;
      fVar19 = auVar14._8_4_;
      fVar20 = auVar14._12_4_;
      auVar11._0_4_ =
           fVar43 * _DAT_14614f7f0 *
           ((fVar21 * fVar21 * auVar15._0_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar21 + fVar21);
      auVar11._4_4_ =
           fVar47 * _UNK_14614f7f4 *
           ((fVar13 * fVar13 * auVar15._4_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar13 + fVar13);
      auVar11._8_4_ =
           fVar48 * _UNK_14614f7f8 *
           ((fVar19 * fVar19 * auVar15._8_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar19 + fVar19);
      auVar11._12_4_ =
           fVar49 * _UNK_14614f7fc *
           ((fVar20 * fVar20 * auVar15._12_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar20 + fVar20);
      auVar15 = vblendps_avx(auVar11,auVar22,8);
      auVar15 = vhaddps_avx(auVar15,auVar15);
      auVar15 = vhaddps_avx(auVar15,auVar15);
      if (auVar15._0_4_ < _DAT_145fc7020) goto LAB_1401a61b9;
    }
  }
  else {
    uVar5 = 0;
LAB_1401a61b9:
    FUN_14556f950(uVar8,uVar5);
  }
  plVar2 = (longlong *)param_1[0x10];
  if ((plVar2 != (longlong *)0x0) && ((*(byte *)((longlong)plVar2 + 0x96) & 0x80) != 0)) {
    (**(code **)(*plVar2 + 0x170))(plVar2,param_2,(ulonglong)puVar10 & 0xffffffff,param_4,param_5);
  }
LAB_1401a61ed:
  FUN_144eb75a0(*(undefined4 *)((longlong)param_1 + 0x9c));
  if ((byte)param_4 != 0) {
    (**(code **)(*param_1 + 0x1c0))(param_1,param_5,1);
  }
  if ((char)puVar10 != '\0') {
    (**(code **)(*param_1 + 0x1a0))(param_1);
  }
  FUN_1452ae3f0(*(undefined4 *)((longlong)param_1 + 0x9c));
  bVar6 = (byte)param_4 ^ 1;
  if ((param_5 == 0 && bVar6 == 0) && (*(byte *)((longlong)param_1 + 0xee) & 0x40) != 0) {
    lVar4 = func_0x0001424e2930(*(undefined4 *)((longlong)param_1 + 0x9c));
    fVar21 = _DAT_145fc6edc;
    if ((lVar4 != 0) && (*(char *)(lVar4 + 0x11d) == '\0')) {
      auVar15 = param_2[3];
      auVar27 = auVar41._0_16_;
      auVar25 = auVar42._0_16_;
      auVar16 = vblendps_avx(auVar27,auVar25,3);
      auVar14 = *param_2;
      auVar11 = param_2[1];
      auVar22 = param_2[2];
      auVar26 = auVar46._0_16_;
      auVar16 = vblendps_avx(auVar16,auVar26,2);
      auVar24 = vshufps_avx(auVar16,auVar16,9);
      auVar16 = vpunpckhwd_avx(auVar15,auVar15);
      auVar16 = vpsrad_avx(auVar16,0x10);
      auVar16 = vcvtdq2ps_avx(auVar16);
      auVar18 = vshufpd_avx(auVar16,auVar16,3);
      auVar16 = vpunpckhwd_avx(auVar53._0_16_,auVar53._0_16_);
      auVar16 = vpsrad_avx(auVar16,0x10);
      auVar16 = vcvtdq2ps_avx(auVar16);
      auVar23 = vshufpd_avx(auVar16,auVar16,3);
      auVar16 = vblendps_avx(auVar27,auVar25,2);
      auVar12._0_4_ =
           _DAT_146159c90 * auVar18._0_4_ + auVar15._0_4_ +
           (-(_DAT_146159c90 * auVar23._0_4_) - auVar53._0_4_) + *(float *)(lVar4 + 0x90);
      auVar12._4_4_ =
           _UNK_146159c94 * auVar18._4_4_ + auVar15._4_4_ +
           (-(_UNK_146159c94 * auVar23._4_4_) - auVar53._4_4_) + *(float *)(lVar4 + 0x94);
      auVar12._8_4_ =
           auVar18._8_4_ * 0.0 + auVar15._8_4_ + (-(auVar23._8_4_ * 0.0) - auVar53._8_4_) +
           *(float *)(lVar4 + 0x98);
      auVar12._12_4_ =
           auVar18._12_4_ * 0.0 + auVar15._12_4_ + (-(auVar23._12_4_ * 0.0) - auVar53._12_4_) +
           *(float *)(lVar4 + 0x9c);
      auVar15 = vblendps_avx(auVar26,auVar16,3);
      auVar16 = vshufps_avx(auVar15,auVar15,0x49);
      auVar18 = vshufps_avx(auVar15,auVar15,0x92);
      auVar23 = vshufps_avx(auVar15,auVar15,0x24);
      auVar54._0_4_ = auVar18._0_4_ + auVar16._0_4_;
      auVar54._4_4_ = auVar18._4_4_ + auVar16._4_4_;
      auVar54._8_4_ = auVar18._8_4_ + auVar16._8_4_;
      auVar54._12_4_ = auVar18._12_4_ + auVar16._12_4_;
      auVar50._0_4_ = auVar54._0_4_ + auVar23._0_4_;
      auVar50._4_4_ = auVar54._4_4_ + auVar23._4_4_;
      auVar50._8_4_ = auVar54._8_4_ + auVar23._8_4_;
      auVar50._12_4_ = auVar54._12_4_ + auVar23._12_4_;
      auVar15 = vsubps_avx(auVar15,auVar54);
      auVar15 = vblendps_avx(auVar15,auVar50,8);
      auVar17._4_4_ = _DAT_145fc6ed8;
      auVar17._0_4_ = _DAT_145fc6ed8;
      auVar17._8_4_ = _DAT_145fc6ed8;
      auVar17._12_4_ = _DAT_145fc6ed8;
      auVar55._0_4_ = auVar15._0_4_ + _DAT_145fc6ed8;
      auVar55._4_4_ = auVar15._4_4_ + _DAT_145fc6ed8;
      auVar55._8_4_ = auVar15._8_4_ + _DAT_145fc6ed8;
      auVar55._12_4_ = auVar15._12_4_ + _DAT_145fc6ed8;
      auVar15 = vrsqrtps_avx(auVar55);
      fVar13 = auVar15._0_4_;
      fVar19 = auVar15._4_4_;
      fVar20 = auVar15._8_4_;
      fVar43 = auVar15._12_4_;
      auVar15 = vblendps_avx(auVar25,auVar26,3);
      auVar25 = vshufps_avx(auVar25,auVar25,0x55);
      auVar26 = vshufps_avx(auVar26,auVar26,0xaa);
      auVar15 = vshufps_avx(auVar15,auVar27,0x12);
      auVar37._0_4_ = auVar41._0_4_;
      auVar37._4_4_ = auVar37._0_4_;
      auVar37._8_4_ = auVar37._0_4_;
      auVar37._12_4_ = auVar37._0_4_;
      auVar63._0_4_ = auVar15._0_4_ + auVar24._0_4_;
      auVar63._4_4_ = auVar15._4_4_ + auVar24._4_4_;
      auVar63._8_4_ = auVar15._8_4_ + auVar24._8_4_;
      auVar63._12_4_ = auVar15._12_4_ + auVar24._12_4_;
      auVar27 = vsubps_avx(auVar15,auVar24);
      auVar60._0_4_ =
           ((-(_DAT_145fc6edc * auVar55._0_4_ * fVar13 * fVar13) + _DAT_145fc6edc) * fVar13 + fVar13
           ) * _DAT_145fc6edc;
      auVar60._4_4_ =
           ((-(_DAT_145fc6edc * auVar55._4_4_ * fVar19 * fVar19) + _DAT_145fc6edc) * fVar19 + fVar19
           ) * _DAT_145fc6edc;
      auVar60._8_4_ =
           ((-(_DAT_145fc6edc * auVar55._8_4_ * fVar20 * fVar20) + _DAT_145fc6edc) * fVar20 + fVar20
           ) * _DAT_145fc6edc;
      auVar60._12_4_ =
           ((-(_DAT_145fc6edc * auVar55._12_4_ * fVar43 * fVar43) + _DAT_145fc6edc) * fVar43 +
           fVar43) * _DAT_145fc6edc;
      auVar15 = vblendps_avx(auVar63,auVar27,1);
      auVar16 = vblendps_avx(auVar63,auVar27,2);
      auVar23 = vshufps_avx(auVar63,auVar27,0xa1);
      auVar24 = vshufps_avx(auVar15,auVar15,0x18);
      auVar18 = vshufpd_avx(auVar16,auVar16,1);
      auVar15 = vblendps_avx(auVar23,auVar55,4);
      auVar16 = vblendps_avx(auVar24,auVar55,1);
      auVar18 = vblendps_avx(auVar18,auVar55,2);
      auVar23 = vblendps_avx(auVar27,auVar55,8);
      auVar59._0_4_ = auVar60._0_4_ * auVar16._0_4_;
      auVar59._4_4_ = auVar60._0_4_ * auVar16._4_4_;
      auVar59._8_4_ = auVar60._0_4_ * auVar16._8_4_;
      auVar59._12_4_ = auVar60._0_4_ * auVar16._12_4_;
      auVar16 = vshufps_avx(auVar60,auVar60,0x55);
      auVar62._0_4_ = auVar16._0_4_ * auVar18._0_4_;
      auVar62._4_4_ = auVar16._4_4_ * auVar18._4_4_;
      auVar62._8_4_ = auVar16._8_4_ * auVar18._8_4_;
      auVar62._12_4_ = auVar16._12_4_ * auVar18._12_4_;
      auVar16 = vshufps_avx(auVar60,auVar60,0xaa);
      auVar18 = vshufps_avx(auVar60,auVar60,0xff);
      auVar64._0_4_ = auVar16._0_4_ * auVar15._0_4_;
      auVar64._4_4_ = auVar16._4_4_ * auVar15._4_4_;
      auVar64._8_4_ = auVar16._8_4_ * auVar15._8_4_;
      auVar64._12_4_ = auVar16._12_4_ * auVar15._12_4_;
      auVar56._0_4_ = auVar18._0_4_ * auVar23._0_4_;
      auVar56._4_4_ = auVar18._4_4_ * auVar23._4_4_;
      auVar56._8_4_ = auVar18._8_4_ * auVar23._8_4_;
      auVar56._12_4_ = auVar18._12_4_ * auVar23._12_4_;
      auVar15 = vcmpps_avx(auVar37,auVar25,1);
      auVar16 = vcmpps_avx(auVar25,auVar26,1);
      auVar18 = vcmpps_avx(auVar37,auVar26,1);
      auVar38._0_4_ = auVar18._0_4_ & auVar16._0_4_;
      auVar38._4_4_ = auVar18._4_4_ & auVar16._4_4_;
      auVar38._8_4_ = auVar18._8_4_ & auVar16._8_4_;
      auVar38._12_4_ = auVar18._12_4_ & auVar16._12_4_;
      auVar15 = vblendvps_avx(auVar59,auVar62,auVar15);
      auVar15 = vblendvps_avx(auVar15,auVar64,auVar38);
      auVar35 = ZEXT416(0) << 0x20;
      uVar8 = *(undefined4 *)(param_2[1] + 4);
      auVar65._4_4_ = uVar8;
      auVar65._0_4_ = uVar8;
      auVar65._8_4_ = uVar8;
      auVar65._12_4_ = uVar8;
      auVar16 = vcmpps_avx(auVar35,auVar50,1);
      auVar44._0_4_ = auVar16._0_4_;
      auVar44._4_4_ = auVar44._0_4_;
      auVar44._8_4_ = auVar44._0_4_;
      auVar44._12_4_ = auVar44._0_4_;
      auVar16 = vblendvps_avx(auVar15,auVar56,auVar44);
      auVar15 = vblendps_avx(auVar14,auVar11,2);
      auVar15 = vblendps_avx(auVar22,auVar15,3);
      auVar18 = vshufps_avx(auVar15,auVar15,0x49);
      auVar23 = vshufps_avx(auVar15,auVar15,0x92);
      auVar24 = vshufps_avx(auVar15,auVar15,0x24);
      auVar57._0_4_ = auVar23._0_4_ + auVar18._0_4_;
      auVar57._4_4_ = auVar23._4_4_ + auVar18._4_4_;
      auVar57._8_4_ = auVar23._8_4_ + auVar18._8_4_;
      auVar57._12_4_ = auVar23._12_4_ + auVar18._12_4_;
      auVar45._0_4_ = auVar57._0_4_ + auVar24._0_4_;
      auVar45._4_4_ = auVar57._4_4_ + auVar24._4_4_;
      auVar45._8_4_ = auVar57._8_4_ + auVar24._8_4_;
      auVar45._12_4_ = auVar57._12_4_ + auVar24._12_4_;
      auVar15 = vsubps_avx(auVar15,auVar57);
      auVar15 = vblendps_avx(auVar15,auVar45,8);
      auVar51._0_4_ = auVar15._0_4_ + _DAT_145fc6ed8;
      auVar51._4_4_ = auVar15._4_4_ + _DAT_145fc6ed8;
      auVar51._8_4_ = auVar15._8_4_ + _DAT_145fc6ed8;
      auVar51._12_4_ = auVar15._12_4_ + _DAT_145fc6ed8;
      auVar15 = vrsqrtps_avx(auVar51);
      fVar13 = auVar15._0_4_;
      fVar19 = auVar15._4_4_;
      fVar20 = auVar15._8_4_;
      fVar43 = auVar15._12_4_;
      auVar15 = vblendps_avx(auVar11,auVar22,3);
      auVar18 = vshufps_avx(auVar15,auVar14,0x12);
      auVar15 = vblendps_avx(auVar14,auVar11,3);
      auVar15 = vblendps_avx(auVar15,auVar22,2);
      auVar15 = vshufps_avx(auVar15,auVar15,9);
      auVar26._0_4_ = auVar18._0_4_ + auVar15._0_4_;
      auVar26._4_4_ = auVar18._4_4_ + auVar15._4_4_;
      auVar26._8_4_ = auVar18._8_4_ + auVar15._8_4_;
      auVar26._12_4_ = auVar18._12_4_ + auVar15._12_4_;
      auVar11 = vsubps_avx(auVar18,auVar15);
      auVar31._0_4_ =
           ((-(_DAT_145fc6edc * fVar13 * fVar13 * auVar51._0_4_) + _DAT_145fc6edc) * fVar13 + fVar13
           ) * _DAT_145fc6edc;
      auVar31._4_4_ =
           ((-(_DAT_145fc6edc * fVar19 * fVar19 * auVar51._4_4_) + _DAT_145fc6edc) * fVar19 + fVar19
           ) * _DAT_145fc6edc;
      auVar31._8_4_ =
           ((-(_DAT_145fc6edc * fVar20 * fVar20 * auVar51._8_4_) + _DAT_145fc6edc) * fVar20 + fVar20
           ) * _DAT_145fc6edc;
      auVar31._12_4_ =
           ((-(_DAT_145fc6edc * fVar43 * fVar43 * auVar51._12_4_) + _DAT_145fc6edc) * fVar43 +
           fVar43) * _DAT_145fc6edc;
      auVar15 = vblendps_avx(auVar26,auVar11,1);
      auVar14 = vblendps_avx(auVar26,auVar11,2);
      auVar18 = vshufps_avx(auVar26,auVar11,0xa1);
      auVar11 = vblendps_avx(auVar11,auVar51,8);
      auVar23 = vshufps_avx(auVar15,auVar15,0x18);
      auVar22 = vshufpd_avx(auVar14,auVar14,1);
      auVar15 = vblendps_avx(auVar18,auVar51,4);
      auVar18 = vshufps_avx(auVar31,auVar31,0xaa);
      auVar14 = vblendps_avx(auVar23,auVar51,1);
      auVar22 = vblendps_avx(auVar22,auVar51,2);
      auVar27._0_4_ = auVar18._0_4_ * auVar15._0_4_;
      auVar27._4_4_ = auVar18._4_4_ * auVar15._4_4_;
      auVar27._8_4_ = auVar18._8_4_ * auVar15._8_4_;
      auVar27._12_4_ = auVar18._12_4_ * auVar15._12_4_;
      uVar8 = *(undefined4 *)(param_2[2] + 8);
      auVar61._4_4_ = uVar8;
      auVar61._0_4_ = uVar8;
      auVar61._8_4_ = uVar8;
      auVar61._12_4_ = uVar8;
      auVar52._0_4_ = auVar31._0_4_ * auVar14._0_4_;
      auVar52._4_4_ = auVar31._0_4_ * auVar14._4_4_;
      auVar52._8_4_ = auVar31._0_4_ * auVar14._8_4_;
      auVar52._12_4_ = auVar31._0_4_ * auVar14._12_4_;
      auVar15 = vshufps_avx(auVar31,auVar31,0x55);
      auVar14 = vshufps_avx(auVar31,auVar31,0xff);
      auVar24._0_4_ = auVar14._0_4_ * auVar11._0_4_;
      auVar24._4_4_ = auVar14._4_4_ * auVar11._4_4_;
      auVar24._8_4_ = auVar14._8_4_ * auVar11._8_4_;
      auVar24._12_4_ = auVar14._12_4_ * auVar11._12_4_;
      uVar8 = *(undefined4 *)*param_2;
      auVar32._4_4_ = uVar8;
      auVar32._0_4_ = uVar8;
      auVar32._8_4_ = uVar8;
      auVar32._12_4_ = uVar8;
      auVar58._0_4_ = auVar15._0_4_ * auVar22._0_4_;
      auVar58._4_4_ = auVar15._4_4_ * auVar22._4_4_;
      auVar58._8_4_ = auVar15._8_4_ * auVar22._8_4_;
      auVar58._12_4_ = auVar15._12_4_ * auVar22._12_4_;
      *(undefined1 (*) [16])(lVar4 + 0x90) = auVar12;
      auVar15 = vcmpps_avx(auVar32,auVar65,1);
      auVar14 = vcmpps_avx(auVar32,auVar61,1);
      auVar15 = vblendvps_avx(auVar52,auVar58,auVar15);
      auVar11 = vcmpps_avx(auVar65,auVar61,1);
      auVar33._0_4_ = auVar11._0_4_ & auVar14._0_4_;
      auVar33._4_4_ = auVar11._4_4_ & auVar14._4_4_;
      auVar33._8_4_ = auVar11._8_4_ & auVar14._8_4_;
      auVar33._12_4_ = auVar11._12_4_ & auVar14._12_4_;
      auVar15 = vblendvps_avx(auVar15,auVar27,auVar33);
      auVar14 = vcmpps_avx(auVar35,auVar45,1);
      auVar34._0_4_ = auVar14._0_4_;
      auVar34._4_4_ = auVar34._0_4_;
      auVar34._8_4_ = auVar34._0_4_;
      auVar34._12_4_ = auVar34._0_4_;
      auVar15 = vblendvps_avx(auVar15,auVar24,auVar34);
      auVar11 = vshufps_avx(auVar15,auVar15,0xff);
      fVar13 = auVar15._0_4_;
      auVar22 = vshufps_avx(auVar15,auVar15,0x55);
      auVar18 = vshufps_avx(auVar15,auVar15,0xaa);
      auVar28._0_4_ = (uint)auVar16._0_4_ ^ _DAT_145fc6f10;
      auVar28._4_4_ = (uint)auVar16._4_4_ ^ _DAT_145fc6f10;
      auVar28._8_4_ = (uint)auVar16._8_4_ ^ _DAT_145fc6f10;
      auVar28._12_4_ = (uint)auVar16._12_4_ ^ _DAT_145fc6f10;
      auVar15 = vblendps_avx(auVar28,auVar16,10);
      auVar23 = vshufps_avx(auVar15,auVar15,0x1b);
      auVar14 = vshufpd_avx(auVar16,auVar28,1);
      auVar15 = vblendps_avx(auVar28,auVar16,9);
      auVar15 = vshufps_avx(auVar15,auVar15,0xb1);
      auVar29._0_4_ =
           -(auVar18._0_4_ * auVar15._0_4_) -
           (auVar22._0_4_ * auVar14._0_4_ + (fVar13 * auVar23._0_4_ - auVar11._0_4_ * auVar16._0_4_)
           );
      auVar29._4_4_ =
           -(auVar18._4_4_ * auVar15._4_4_) -
           (auVar22._4_4_ * auVar14._4_4_ + (fVar13 * auVar23._4_4_ - auVar11._4_4_ * auVar16._4_4_)
           );
      auVar29._8_4_ =
           -(auVar18._8_4_ * auVar15._8_4_) -
           (auVar22._8_4_ * auVar14._8_4_ + (fVar13 * auVar23._8_4_ - auVar11._8_4_ * auVar16._8_4_)
           );
      auVar29._12_4_ =
           -(auVar18._12_4_ * auVar15._12_4_) -
           (auVar22._12_4_ * auVar14._12_4_ +
           (fVar13 * auVar23._12_4_ - auVar11._12_4_ * auVar16._12_4_));
      auVar25._0_4_ = auVar29._0_4_ * auVar29._0_4_;
      auVar25._4_4_ = auVar29._4_4_ * auVar29._4_4_;
      auVar25._8_4_ = auVar29._8_4_ * auVar29._8_4_;
      auVar25._12_4_ = auVar29._12_4_ * auVar29._12_4_;
      auVar15 = vblendps_avx(auVar25,auVar35,8);
      auVar15 = vhaddps_avx(auVar15,auVar15);
      auVar14 = vhaddps_avx(auVar15,auVar15);
      auVar15 = vrsqrtps_avx(auVar14);
      fVar13 = auVar15._0_4_;
      fVar19 = auVar15._4_4_;
      fVar20 = auVar15._8_4_;
      fVar43 = auVar15._12_4_;
      auVar39._4_4_ = _DAT_14615a034;
      auVar39._0_4_ = _DAT_14615a034;
      auVar39._8_4_ = _DAT_14615a034;
      auVar39._12_4_ = _DAT_14615a034;
      auVar11 = vshufps_avx(auVar29,auVar29,0xff);
      auVar15 = vcmpps_avx(auVar39,auVar14,1);
      aauStack_f8[0]._0_4_ =
           auVar15._0_4_ &
           (uint)(auVar29._0_4_ *
                 ((-(fVar21 * fVar13 * fVar13 * auVar14._0_4_) + fVar21) * fVar13 + fVar13));
      aauStack_f8[0]._4_4_ =
           auVar15._4_4_ &
           (uint)(auVar29._4_4_ *
                 ((-(fVar21 * fVar19 * fVar19 * auVar14._4_4_) + fVar21) * fVar19 + fVar19));
      aauStack_f8[0]._8_4_ =
           auVar15._8_4_ &
           (uint)(auVar29._8_4_ *
                 ((-(fVar21 * fVar20 * fVar20 * auVar14._8_4_) + fVar21) * fVar20 + fVar20));
      aauStack_f8[0]._12_4_ =
           auVar15._12_4_ &
           (uint)(auVar29._12_4_ *
                 ((-(fVar21 * fVar43 * fVar43 * auVar14._12_4_) + fVar21) * fVar43 + fVar43));
      auVar35._4_4_ = _DAT_145fc6f48;
      auVar35._0_4_ = _DAT_145fc6f48;
      auVar35._8_4_ = _DAT_145fc6f48;
      auVar35._12_4_ = _DAT_145fc6f48;
      auVar15 = vmaxps_avx(auVar11,auVar35);
      auVar14 = vminps_avx(auVar15,auVar17);
      fVar47 = auVar14._0_4_;
      auVar36._0_4_ = (float)((uint)fVar47 & _DAT_145fc6f4c);
      fVar48 = auVar14._4_4_;
      auVar36._4_4_ = (float)((uint)fVar48 & _DAT_145fc6f4c);
      fVar49 = auVar14._8_4_;
      auVar36._8_4_ = (float)((uint)fVar49 & _DAT_145fc6f4c);
      fVar30 = auVar14._12_4_;
      auVar36._12_4_ = (float)((uint)fVar30 & _DAT_145fc6f4c);
      auVar11 = vsubps_avx(auVar17,auVar36);
      auVar15 = vrsqrtps_avx(auVar11);
      fVar13 = auVar15._0_4_;
      fVar19 = auVar15._4_4_;
      fVar20 = auVar15._8_4_;
      fVar43 = auVar15._12_4_;
      auVar40._4_4_ = _DAT_146159bfc;
      auVar40._0_4_ = _DAT_146159bfc;
      auVar40._8_4_ = _DAT_146159bfc;
      auVar40._12_4_ = _DAT_146159bfc;
      auVar15 = vcmpps_avx(auVar40,auVar11,2);
      fVar13 = (float)(auVar15._0_4_ &
                      (uint)(((-(fVar21 * fVar13 * fVar13 * auVar11._0_4_) + fVar21) * fVar13 +
                             fVar13) * auVar11._0_4_));
      fVar19 = (float)(auVar15._4_4_ &
                      (uint)(((-(fVar21 * fVar19 * fVar19 * auVar11._4_4_) + fVar21) * fVar19 +
                             fVar19) * auVar11._4_4_));
      fVar20 = (float)(auVar15._8_4_ &
                      (uint)(((-(fVar21 * fVar20 * fVar20 * auVar11._8_4_) + fVar21) * fVar20 +
                             fVar20) * auVar11._8_4_));
      fVar21 = (float)(auVar15._12_4_ &
                      (uint)(((-(fVar21 * fVar43 * fVar43 * auVar11._12_4_) + fVar21) * fVar43 +
                             fVar43) * auVar11._12_4_));
      fVar43 = fVar47 * fVar47 * fVar47 * fVar47 *
               (auVar36._0_4_ *
                (auVar36._0_4_ * (auVar36._0_4_ * _DAT_146159c04 + _DAT_146159c00) + _DAT_146159c08)
               + _DAT_146159c0c) +
               auVar36._0_4_ *
               (auVar36._0_4_ * (auVar36._0_4_ * _DAT_146159c14 + _DAT_146159c10) + _DAT_146159c18)
               + _DAT_146159c1c;
      fVar47 = fVar48 * fVar48 * fVar48 * fVar48 *
               (auVar36._4_4_ *
                (auVar36._4_4_ * (auVar36._4_4_ * _DAT_146159c04 + _DAT_146159c00) + _DAT_146159c08)
               + _DAT_146159c0c) +
               auVar36._4_4_ *
               (auVar36._4_4_ * (auVar36._4_4_ * _DAT_146159c14 + _DAT_146159c10) + _DAT_146159c18)
               + _DAT_146159c1c;
      fVar48 = fVar49 * fVar49 * fVar49 * fVar49 *
               (auVar36._8_4_ *
                (auVar36._8_4_ * (auVar36._8_4_ * _DAT_146159c04 + _DAT_146159c00) + _DAT_146159c08)
               + _DAT_146159c0c) +
               auVar36._8_4_ *
               (auVar36._8_4_ * (auVar36._8_4_ * _DAT_146159c14 + _DAT_146159c10) + _DAT_146159c18)
               + _DAT_146159c1c;
      fVar49 = fVar30 * fVar30 * fVar30 * fVar30 *
               (auVar36._12_4_ *
                (auVar36._12_4_ * (auVar36._12_4_ * _DAT_146159c04 + _DAT_146159c00) +
                _DAT_146159c08) + _DAT_146159c0c) +
               auVar36._12_4_ *
               (auVar36._12_4_ * (auVar36._12_4_ * _DAT_146159c14 + _DAT_146159c10) + _DAT_146159c18
               ) + _DAT_146159c1c;
      auVar23._0_4_ = -(fVar43 * fVar13) + _DAT_145fc6f80;
      auVar23._4_4_ = -(fVar47 * fVar19) + _DAT_145fc6f80;
      auVar23._8_4_ = -(fVar48 * fVar20) + _DAT_145fc6f80;
      auVar23._12_4_ = -(fVar49 * fVar21) + _DAT_145fc6f80;
      auVar18._0_4_ = fVar43 * fVar13;
      auVar18._4_4_ = fVar47 * fVar19;
      auVar18._8_4_ = fVar48 * fVar20;
      auVar18._12_4_ = fVar49 * fVar21;
      auVar15 = vblendvps_avx(auVar18,auVar23,auVar14);
      FUN_145058cd0(&uStack_148,aauStack_f8,auVar15._0_4_ + auVar15._0_4_);
      fVar21 = *(float *)(lVar4 + 0x60);
      fVar13 = *(float *)(lVar4 + 100);
      fVar19 = *(float *)(lVar4 + 0x68);
      fVar20 = *(float *)(lVar4 + 0x84);
      fVar43 = *(float *)(lVar4 + 0x78);
      fVar47 = *(float *)(lVar4 + 0x88);
      fVar48 = *(float *)(lVar4 + 0x70);
      auVar16._0_4_ = fStack_128 * fVar19 + fStack_138 * fVar13 + fVar21 * (float)uStack_148;
      auVar16._4_4_ = fStack_124 * fVar19 + fStack_134 * fVar13 + fVar21 * uStack_148._4_4_;
      auVar16._8_4_ = fStack_120 * fVar19 + fStack_130 * fVar13 + fVar21 * fStack_140;
      auVar16._12_4_ = fStack_11c * fVar19 + fStack_12c * fVar13 + fVar21 * fStack_13c;
      fVar21 = *(float *)(lVar4 + 0x74);
      fVar13 = *(float *)(lVar4 + 0x80);
      *(undefined1 (*) [16])(lVar4 + 0x60) = auVar16;
      *(float *)(lVar4 + 0x70) =
           fStack_128 * fVar43 + fStack_138 * fVar21 + fVar48 * (float)uStack_148;
      *(float *)(lVar4 + 0x74) =
           fStack_124 * fVar43 + fStack_134 * fVar21 + fVar48 * uStack_148._4_4_;
      *(float *)(lVar4 + 0x78) = fStack_120 * fVar43 + fStack_130 * fVar21 + fVar48 * fStack_140;
      *(float *)(lVar4 + 0x7c) = fStack_11c * fVar43 + fStack_12c * fVar21 + fVar48 * fStack_13c;
      *(float *)(lVar4 + 0x80) =
           fStack_128 * fVar47 + fStack_138 * fVar20 + fVar13 * (float)uStack_148;
      *(float *)(lVar4 + 0x84) =
           fStack_124 * fVar47 + fStack_134 * fVar20 + fVar13 * uStack_148._4_4_;
      *(float *)(lVar4 + 0x88) = fStack_120 * fVar47 + fStack_130 * fVar20 + fVar13 * fStack_140;
      *(float *)(lVar4 + 0x8c) = fStack_11c * fVar47 + fStack_12c * fVar20 + fVar13 * fStack_13c;
    }
  }
  if ((bVar6 == 0 && (param_5 ^ 1) == 0) && (param_1[4] != 0)) {
    lVar4 = func_0x000144dd1230(*(undefined4 *)((longlong)param_1 + 0x9c));
    if (lVar4 != 0) {
      FUN_1453f8460(lVar4);
      if ((char)param_1[6] == '\x03') {
        lVar4 = func_0x000144e63d10(*(undefined4 *)((longlong)param_1 + 0x9c));
        if (lVar4 != 0) {
          *(byte *)(lVar4 + 0x23a) = *(byte *)(lVar4 + 0x23a) | 2;
        }
      }
    }
  }
  return;
}

