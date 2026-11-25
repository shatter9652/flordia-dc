// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14001d300  size: 1932 bytes
// Name:    FUN_14001d300
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e21a40
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14001d300(int *param_1,longlong param_2,undefined1 (*param_3) [16],longlong *param_4)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined1 auVar5 [16];
  short sVar6;
  ulonglong uVar7;
  short sVar8;
  uint uVar9;
  longlong *plVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined8 uVar17;
  float fVar18;
  float fVar25;
  float fVar26;
  undefined1 auVar19 [16];
  float fVar27;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float fVar33;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [64];
  undefined1 auVar47 [64];
  float fVar48;
  float fVar50;
  float fVar51;
  float fVar52;
  undefined1 auVar49 [64];
  undefined1 auVar53 [16];
  undefined1 in_ZMM9 [64];
  undefined1 auVar54 [64];
  undefined1 auVar55 [16];
  undefined1 in_ZMM11 [64];
  undefined1 auVar56 [16];
  undefined1 in_ZMM12 [64];
  undefined1 in_ZMM13 [64];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 in_ZMM14 [64];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  undefined8 uStack_118;
  uint uStack_110;
  float fStack_10c;
  undefined8 uStack_108;
  undefined8 uStack_100;
  uint uStack_f8;
  uint uStack_f4;
  uint uStack_f0;
  uint uStack_ec;
  undefined1 auStack_b8 [16];
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  undefined1 auVar60 [64];
  undefined1 auVar64 [64];
  
  auStack_68 = in_ZMM14._0_16_;
  auStack_78 = in_ZMM13._0_16_;
  auStack_88 = in_ZMM12._0_16_;
  auStack_98 = in_ZMM11._0_16_;
  auStack_b8 = in_ZMM9._0_16_;
  uVar3 = *(uint *)(param_2 + 4);
  if ((ulonglong)uVar3 != 0) {
    auVar46 = ZEXT1664(*param_3);
    auVar49 = ZEXT1664(CONCAT412(_DAT_145fc6f08,
                                 CONCAT48(_DAT_145fc6f08,CONCAT44(_DAT_145fc6f08,_DAT_145fc6f08))));
    auVar54 = ZEXT1664(CONCAT412(_DAT_145fc6ed8,
                                 CONCAT48(_DAT_145fc6ed8,CONCAT44(_DAT_145fc6ed8,_DAT_145fc6ed8))));
    piVar1 = param_1 + 2;
    auVar47 = ZEXT1264(ZEXT812(0));
    plVar10 = (longlong *)(param_2 + 0x10);
    uStack_f8 = _DAT_145fc6f4c;
    uStack_f4 = _DAT_145fc6f4c;
    uStack_f0 = _DAT_145fc6f4c;
    uStack_ec = _DAT_145fc6f4c;
    do {
      auVar19 = auVar47._0_16_;
      auVar16 = vcmpps_avx(auVar19,*(undefined1 (*) [16])(*plVar10 + 0x10),4);
      if ((((SUB161(auVar16 >> 0x1f,0) & 1) != 0 || (SUB161(auVar16 >> 0x3f,0) & 1) != 0) ||
          (SUB161(auVar16 >> 0x5f,0) & 1) != 0) || auVar16[0xf] < '\0') {
        if (*param_4 == 0) {
          auVar46 = ZEXT1664(auVar46._0_16_);
          auVar47 = ZEXT1664(auVar19);
          auVar49 = ZEXT1664(auVar49._0_16_);
          auVar54 = ZEXT1664(auVar54._0_16_);
          (*(code *)param_4[1])(&fStack_128);
        }
        else {
          auVar46 = ZEXT1664(auVar46._0_16_);
          auVar47 = ZEXT1664(auVar19);
          auVar49 = ZEXT1664(auVar49._0_16_);
          auVar54 = ZEXT1664(auVar54._0_16_);
          (*(code *)param_4[1])();
        }
        auVar45 = auVar46._0_16_;
        auVar40._4_4_ = _DAT_145fc6f48;
        auVar40._0_4_ = _DAT_145fc6f48;
        auVar40._8_4_ = _DAT_145fc6f48;
        auVar40._12_4_ = _DAT_145fc6f48;
        auVar19._0_4_ = fStack_128 * fStack_128;
        auVar19._4_4_ = fStack_124 * fStack_124;
        auVar19._8_4_ = fStack_120 * fStack_120;
        auVar19._12_4_ = fStack_11c * fStack_11c;
        auVar16 = vhaddps_avx(auVar19,auVar19);
        auVar16 = vhaddps_avx(auVar16,auVar16);
        auVar19 = vrsqrtps_avx(auVar16);
        fVar18 = auVar19._0_4_;
        fVar25 = auVar19._4_4_;
        fVar26 = auVar19._8_4_;
        fVar27 = auVar19._12_4_;
        fVar48 = auVar49._0_4_;
        fVar50 = auVar49._4_4_;
        fVar51 = auVar49._8_4_;
        fVar52 = auVar49._12_4_;
        auVar57._0_4_ =
             ((fVar48 * fVar18 * fVar18 * auVar16._0_4_ - fVar48) * fVar18 + fVar18) * fStack_128;
        auVar57._4_4_ =
             ((fVar50 * fVar25 * fVar25 * auVar16._4_4_ - fVar50) * fVar25 + fVar25) * fStack_124;
        auVar57._8_4_ =
             ((fVar51 * fVar26 * fVar26 * auVar16._8_4_ - fVar51) * fVar26 + fVar26) * fStack_120;
        auVar57._12_4_ =
             ((fVar52 * fVar27 * fVar27 * auVar16._12_4_ - fVar52) * fVar27 + fVar27) * fStack_11c;
        auVar60 = ZEXT1664(auVar57);
        auVar16 = vshufps_avx(auVar57,auVar57,0xff);
        auVar16 = vmaxps_avx(auVar16,auVar40);
        auVar21 = auVar54._0_16_;
        auVar19 = vminps_avx(auVar16,auVar21);
        fVar18 = auVar19._0_4_;
        auVar28._0_4_ = (float)(uStack_f8 & (uint)fVar18);
        fVar25 = auVar19._4_4_;
        auVar28._4_4_ = (float)(uStack_f4 & (uint)fVar25);
        fVar26 = auVar19._8_4_;
        auVar28._8_4_ = (float)(uStack_f0 & (uint)fVar26);
        fVar27 = auVar19._12_4_;
        auVar28._12_4_ = (float)(uStack_ec & (uint)fVar27);
        auVar15 = vsubps_avx(auVar21,auVar28);
        fVar33 = fVar18 * fVar18 * fVar18 * fVar18 *
                 (auVar28._0_4_ *
                  (auVar28._0_4_ * (auVar28._0_4_ * _DAT_146159c04 + _DAT_146159c00) +
                  _DAT_146159c08) + _DAT_146159c0c) +
                 auVar28._0_4_ *
                 (auVar28._0_4_ * (auVar28._0_4_ * _DAT_146159c14 + _DAT_146159c10) + _DAT_146159c18
                 ) + _DAT_146159c1c;
        fVar37 = fVar25 * fVar25 * fVar25 * fVar25 *
                 (auVar28._4_4_ *
                  (auVar28._4_4_ * (auVar28._4_4_ * _DAT_146159c04 + _DAT_146159c00) +
                  _DAT_146159c08) + _DAT_146159c0c) +
                 auVar28._4_4_ *
                 (auVar28._4_4_ * (auVar28._4_4_ * _DAT_146159c14 + _DAT_146159c10) + _DAT_146159c18
                 ) + _DAT_146159c1c;
        fVar38 = fVar26 * fVar26 * fVar26 * fVar26 *
                 (auVar28._8_4_ *
                  (auVar28._8_4_ * (auVar28._8_4_ * _DAT_146159c04 + _DAT_146159c00) +
                  _DAT_146159c08) + _DAT_146159c0c) +
                 auVar28._8_4_ *
                 (auVar28._8_4_ * (auVar28._8_4_ * _DAT_146159c14 + _DAT_146159c10) + _DAT_146159c18
                 ) + _DAT_146159c1c;
        fVar39 = fVar27 * fVar27 * fVar27 * fVar27 *
                 (auVar28._12_4_ *
                  (auVar28._12_4_ * (auVar28._12_4_ * _DAT_146159c04 + _DAT_146159c00) +
                  _DAT_146159c08) + _DAT_146159c0c) +
                 auVar28._12_4_ *
                 (auVar28._12_4_ * (auVar28._12_4_ * _DAT_146159c14 + _DAT_146159c10) +
                 _DAT_146159c18) + _DAT_146159c1c;
        auVar16 = vrsqrtps_avx(auVar15);
        fVar18 = auVar16._0_4_;
        fVar25 = auVar16._4_4_;
        fVar26 = auVar16._8_4_;
        fVar27 = auVar16._12_4_;
        auVar31._4_4_ = _DAT_146159bfc;
        auVar31._0_4_ = _DAT_146159bfc;
        auVar31._8_4_ = _DAT_146159bfc;
        auVar31._12_4_ = _DAT_146159bfc;
        auVar16 = vcmpps_avx(auVar31,auVar15,2);
        auVar32._4_4_ = _DAT_145fc6f80;
        auVar32._0_4_ = _DAT_145fc6f80;
        auVar32._8_4_ = _DAT_145fc6f80;
        auVar32._12_4_ = _DAT_145fc6f80;
        fVar18 = (float)(auVar16._0_4_ &
                        (uint)(((fVar48 * fVar18 * fVar18 * auVar15._0_4_ - fVar48) * fVar18 +
                               fVar18) * auVar15._0_4_));
        fVar25 = (float)(auVar16._4_4_ &
                        (uint)(((fVar50 * fVar25 * fVar25 * auVar15._4_4_ - fVar50) * fVar25 +
                               fVar25) * auVar15._4_4_));
        fVar26 = (float)(auVar16._8_4_ &
                        (uint)(((fVar51 * fVar26 * fVar26 * auVar15._8_4_ - fVar51) * fVar26 +
                               fVar26) * auVar15._8_4_));
        fVar27 = (float)(auVar16._12_4_ &
                        (uint)(((fVar52 * fVar27 * fVar27 * auVar15._12_4_ - fVar52) * fVar27 +
                               fVar27) * auVar15._12_4_));
        auVar29._0_4_ = fVar18 * fVar33;
        auVar29._4_4_ = fVar25 * fVar37;
        auVar29._8_4_ = fVar26 * fVar38;
        auVar29._12_4_ = fVar27 * fVar39;
        auVar20._0_4_ = -(fVar33 * fVar18) + _DAT_145fc6f80;
        auVar20._4_4_ = -(fVar37 * fVar25) + _DAT_145fc6f80;
        auVar20._8_4_ = -(fVar38 * fVar26) + _DAT_145fc6f80;
        auVar20._12_4_ = -(fVar39 * fVar27) + _DAT_145fc6f80;
        auVar34._4_4_ = _DAT_146159be0;
        auVar34._0_4_ = _DAT_146159be0;
        auVar34._8_4_ = _DAT_146159be0;
        auVar34._12_4_ = _DAT_146159be0;
        auVar16 = vblendvps_avx(auVar29,auVar20,auVar19);
        auVar15._0_4_ = auVar16._0_4_ + auVar16._0_4_;
        auVar15._4_4_ = auVar16._4_4_ + auVar16._4_4_;
        auVar15._8_4_ = auVar16._8_4_ + auVar16._8_4_;
        auVar15._12_4_ = auVar16._12_4_ + auVar16._12_4_;
        auVar19 = vcmpps_avx(auVar15,auVar47._0_16_,1);
        auVar16 = vblendvps_avx(auVar21,auVar40,auVar19);
        auVar19 = vblendvps_avx(auVar32,auVar34,auVar19);
        auVar19 = vsubps_avx(auVar15,auVar19);
        auVar21._0_8_ =
             CONCAT44(_DAT_145fc6f94 * auVar19._4_4_ + auVar16._4_4_,
                      _DAT_145fc6f94 * auVar19._0_4_ + auVar16._0_4_);
        auVar21._8_4_ = _DAT_145fc6f94 * auVar19._8_4_ + auVar16._8_4_;
        auVar21._12_4_ = _DAT_145fc6f94 * auVar19._12_4_ + auVar16._12_4_;
        auVar30._4_4_ = _DAT_14615af54;
        auVar30._0_4_ = _DAT_14615af54;
        auVar30._8_4_ = _DAT_14615af54;
        auVar30._12_4_ = _DAT_14615af54;
        auVar16 = vroundps_avx(auVar21,3);
        auVar61._0_4_ = _DAT_14615a920 * auVar16._0_4_ + auVar15._0_4_;
        auVar61._4_4_ = _DAT_14615a920 * auVar16._4_4_ + auVar15._4_4_;
        auVar61._8_4_ = _DAT_14615a920 * auVar16._8_4_ + auVar15._8_4_;
        auVar61._12_4_ = _DAT_14615a920 * auVar16._12_4_ + auVar15._12_4_;
        auVar64 = ZEXT1664(auVar61);
        auVar16._0_4_ = (uint)auVar61._0_4_ & uStack_f8;
        auVar16._4_4_ = (uint)auVar61._4_4_ & uStack_f4;
        auVar16._8_4_ = (uint)auVar61._8_4_ & uStack_f0;
        auVar16._12_4_ = (uint)auVar61._12_4_ & uStack_ec;
        auVar16 = vcmpps_avx(auVar16,auVar30,1);
        if ((((SUB161(auVar16 >> 0x1f,0) & 1) != 0 || (SUB161(auVar16 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar16 >> 0x5f,0) & 1) != 0) || auVar16[0xf] < '\0') {
          return 1;
        }
        uVar13 = *(uint *)(plVar10 + 1);
        if (param_1[0x24d] == uVar13) {
          uStack_118 = *(undefined8 *)(param_1 + 0x144);
          uVar17 = *(undefined8 *)(param_1 + 0x146);
          uStack_108 = *(undefined8 *)(param_1 + 0x148);
          uStack_100 = *(undefined8 *)(param_1 + 0x14a);
LAB_14001d601:
          uStack_110 = (uint)uVar17;
          fStack_10c = (float)((ulonglong)uVar17 >> 0x20);
        }
        else {
          uVar12 = 0xffffffff;
          if (((short)uVar13 != 0) && (*param_1 != 0)) {
            uVar11 = *param_1 - 1;
            uVar9 = (uVar13 & 0xffff) * -0x7a143595;
            uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
            uVar7 = (ulonglong)((uVar9 >> 0x10 ^ uVar9) & uVar11);
            sVar8 = (short)piVar1[uVar7];
            while ((sVar8 != 0 && (sVar8 != (short)uVar13))) {
              uVar7 = (ulonglong)
                      ((uint)((longlong)param_1 + ((uVar7 * 4 + 0xc) - (longlong)piVar1) >> 2) &
                      uVar11);
              sVar8 = (short)piVar1[uVar7];
            }
            if (sVar8 != 0) {
              uVar12 = (uint)*(byte *)((longlong)param_1 + uVar7 * 4 + 10);
            }
          }
          if ((int)uVar12 < param_1[0x24c]) {
            piVar2 = param_1 + (longlong)(int)uVar12 * 8 + 0x14c;
            uStack_118 = *(undefined8 *)piVar2;
            uVar17 = *(undefined8 *)(piVar2 + 2);
            uStack_108 = *(undefined8 *)(piVar2 + 4);
            uStack_100 = *(undefined8 *)(piVar2 + 6);
            goto LAB_14001d601;
          }
          FUN_144e21a40(param_1,auVar21._0_8_,&uStack_118);
          auVar57 = auVar60._0_16_;
          auVar61 = auVar64._0_16_;
          auVar45 = auVar46._0_16_;
        }
        auVar5._8_4_ = uStack_110;
        auVar5._0_8_ = uStack_118;
        auVar5._12_4_ = fStack_10c;
        iVar4 = *param_1;
        auVar16 = *(undefined1 (*) [16])((uint *)*plVar10 + 4);
        uVar13 = *(uint *)*plVar10;
        uVar7 = 0xffffffffffffffff;
        uVar12 = uVar13 & 0xffff;
        sVar8 = (short)uVar13;
        if ((iVar4 != 0) && (sVar8 != 0)) {
          uVar13 = uVar12 * -0x7a143595;
          uVar13 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb;
          uVar14 = (ulonglong)((uVar13 >> 0x10 ^ uVar13) & iVar4 - 1U);
          sVar6 = (short)piVar1[uVar14];
          while ((sVar6 != 0 && (sVar6 != sVar8))) {
            uVar14 = (ulonglong)
                     ((uint)((longlong)param_1 + ((uVar14 * 4 + 0xc) - (longlong)piVar1) >> 2) &
                     iVar4 - 1U);
            sVar6 = (short)piVar1[uVar14];
          }
          if (sVar6 != 0) {
            uVar7 = (ulonglong)*(byte *)((longlong)param_1 + uVar14 * 4 + 10);
          }
        }
        auVar19 = *(undefined1 (*) [16])(param_1 + uVar7 * 8 + 0x44);
        uVar13 = 0xffffffff;
        if ((sVar8 != 0) && (iVar4 != 0)) {
          uVar12 = uVar12 * -0x7a143595;
          uVar12 = (uVar12 >> 0xd ^ uVar12) * -0x3d4d51cb;
          uVar7 = (ulonglong)((uVar12 >> 0x10 ^ uVar12) & iVar4 - 1U);
          sVar6 = (short)piVar1[uVar7];
          while ((sVar6 != 0 && (sVar6 != sVar8))) {
            uVar7 = (ulonglong)
                    ((uint)((longlong)param_1 + ((uVar7 * 4 + 0xc) - (longlong)piVar1) >> 2) &
                    iVar4 - 1U);
            sVar6 = (short)piVar1[uVar7];
          }
          if (sVar6 != 0) {
            uVar13 = (uint)*(byte *)((longlong)param_1 + uVar7 * 4 + 10);
          }
        }
        if (((uint)param_1[0x26f] >> (uVar13 & 0x1f) & 1) != 0) {
          fVar18 = auVar57._0_4_;
          auVar35._0_4_ = fVar18 * fVar18;
          fVar26 = auVar57._4_4_;
          auVar35._4_4_ = fVar26 * fVar26;
          fVar33 = auVar57._8_4_;
          auVar35._8_4_ = fVar33 * fVar33;
          fVar38 = auVar57._12_4_;
          auVar35._12_4_ = fVar38 * fVar38;
          auVar41._4_4_ = _DAT_14615a034;
          auVar41._0_4_ = _DAT_14615a034;
          auVar41._8_4_ = _DAT_14615a034;
          auVar41._12_4_ = _DAT_14615a034;
          auVar40 = auVar47._0_16_;
          auVar15 = vblendps_avx(auVar35,auVar40,8);
          auVar15 = vhaddps_avx(auVar15,auVar15);
          auVar20 = vhaddps_avx(auVar15,auVar15);
          auVar21 = vrsqrtps_avx(auVar20);
          auVar15 = vcmpps_avx(auVar41,auVar20,1);
          fVar25 = auVar21._0_4_;
          fVar27 = auVar21._4_4_;
          fVar37 = auVar21._8_4_;
          fVar39 = auVar21._12_4_;
          fVar48 = auVar49._0_4_;
          fVar50 = auVar49._4_4_;
          fVar51 = auVar49._8_4_;
          fVar52 = auVar49._12_4_;
          auVar42._0_4_ =
               (float)(auVar15._0_4_ &
                      (uint)(fVar18 * ((fVar48 * fVar25 * fVar25 * auVar20._0_4_ - fVar48) * fVar25
                                      + fVar25)));
          auVar42._4_4_ =
               (float)(auVar15._4_4_ &
                      (uint)(fVar26 * ((fVar50 * fVar27 * fVar27 * auVar20._4_4_ - fVar50) * fVar27
                                      + fVar27)));
          auVar42._8_4_ =
               (float)(auVar15._8_4_ &
                      (uint)(fVar33 * ((fVar51 * fVar37 * fVar37 * auVar20._8_4_ - fVar51) * fVar37
                                      + fVar37)));
          auVar42._12_4_ =
               (float)(auVar15._12_4_ &
                      (uint)(fVar38 * ((fVar52 * fVar39 * fVar39 * auVar20._12_4_ - fVar52) * fVar39
                                      + fVar39)));
          auVar20 = vshufps_avx(auVar42,auVar42,0xc9);
          auVar53._0_4_ = (uint)uStack_118 ^ _DAT_145fc6f10;
          auVar53._4_4_ = (uint)((ulonglong)uStack_118 >> 0x20) ^ _DAT_145fc6f10;
          auVar53._8_4_ = uStack_110 ^ _DAT_145fc6f10;
          auVar53._12_4_ = (uint)fStack_10c ^ _DAT_145fc6f10;
          auVar15 = vblendps_avx(auVar53,auVar5,8);
          auVar30 = vshufps_avx(auVar15,auVar15,0xc9);
          auVar31 = vshufps_avx(auVar15,auVar15,0xd2);
          auVar15 = vshufps_avx(auVar42,auVar42,0xd2);
          fVar18 = -(auVar31._0_4_ * auVar20._0_4_) + auVar30._0_4_ * auVar15._0_4_;
          fVar25 = -(auVar31._4_4_ * auVar20._4_4_) + auVar30._4_4_ * auVar15._4_4_;
          fVar26 = -(auVar31._8_4_ * auVar20._8_4_) + auVar30._8_4_ * auVar15._8_4_;
          fVar27 = -(auVar31._12_4_ * auVar20._12_4_) + auVar30._12_4_ * auVar15._12_4_;
          auVar58._0_4_ = fVar18 + fVar18;
          auVar58._4_4_ = fVar25 + fVar25;
          auVar58._8_4_ = fVar26 + fVar26;
          auVar58._12_4_ = fVar27 + fVar27;
          auVar32 = vshufps_avx(auVar58,auVar58,0xd2);
          auVar34 = vshufps_avx(auVar58,auVar58,0xc9);
          auVar15 = vrcpps_avx(auVar45);
          fVar25 = auVar15._0_4_;
          fVar26 = auVar15._4_4_;
          fVar27 = auVar15._8_4_;
          fVar18 = auVar15._12_4_;
          fVar25 = (-((auVar45._0_4_ * fVar25 - auVar54._0_4_) * fVar25) + fVar25) *
                   auVar61._0_4_ * auVar16._0_4_;
          fVar26 = (-((auVar45._4_4_ * fVar26 - auVar54._4_4_) * fVar26) + fVar26) *
                   auVar61._4_4_ * auVar16._4_4_;
          fVar33 = (-((auVar45._8_4_ * fVar27 - auVar54._8_4_) * fVar27) + fVar27) *
                   auVar61._8_4_ * auVar16._8_4_;
          fVar38 = (-((auVar45._12_4_ * fVar18 - auVar54._12_4_) * fVar18) + fVar18) *
                   auVar61._12_4_ * auVar16._12_4_;
          fVar18 = _DAT_146159b48 * fVar25;
          fVar27 = _DAT_146159b48 * fVar26;
          fVar37 = _DAT_146159b48 * fVar33;
          fVar39 = _DAT_146159b48 * fVar38;
          auVar56._4_4_ = _DAT_145f43778;
          auVar56._0_4_ = _DAT_145f43778;
          auVar56._8_4_ = _DAT_145f43778;
          auVar56._12_4_ = _DAT_145f43778;
          auVar43._0_4_ =
               (int)((float)((uint)fVar18 & _DAT_145fc6f10 | (uint)_DAT_145fc6edc) + fVar18);
          auVar43._4_4_ =
               (int)((float)((uint)fVar27 & _DAT_145fc6f10 | (uint)_DAT_145fc6edc) + fVar27);
          auVar43._8_4_ =
               (int)((float)((uint)fVar37 & _DAT_145fc6f10 | (uint)_DAT_145fc6edc) + fVar37);
          auVar43._12_4_ =
               (int)((float)((uint)fVar39 & _DAT_145fc6f10 | (uint)_DAT_145fc6edc) + fVar39);
          auVar21 = vpsubd_avx(auVar43,_DAT_145f41010);
          auVar15 = vcvtdq2ps_avx(auVar43);
          fVar18 = _DAT_146159b50 * auVar15._0_4_ +
                   auVar15._0_4_ * _DAT_146159b4c + _DAT_145fc6edc * fVar25;
          fVar25 = _DAT_146159b50 * auVar15._4_4_ +
                   auVar15._4_4_ * _DAT_146159b4c + _DAT_145fc6edc * fVar26;
          fVar26 = _DAT_146159b50 * auVar15._8_4_ +
                   auVar15._8_4_ * _DAT_146159b4c + _DAT_145fc6edc * fVar33;
          fVar27 = _DAT_146159b50 * auVar15._12_4_ +
                   auVar15._12_4_ * _DAT_146159b4c + _DAT_145fc6edc * fVar38;
          fVar33 = fVar18 * fVar18;
          fVar37 = fVar25 * fVar25;
          fVar38 = fVar26 * fVar26;
          fVar39 = fVar27 * fVar27;
          auVar49 = ZEXT1664(auVar49._0_16_);
          auVar59._0_4_ =
               fVar33 * (fVar33 * (fVar33 * _DAT_146159b58 + _DAT_146159b54) + _DAT_146159b64) +
               auVar54._0_4_;
          auVar59._4_4_ =
               fVar37 * (fVar37 * (fVar37 * _DAT_146159b58 + _DAT_146159b54) + _DAT_146159b64) +
               auVar54._4_4_;
          auVar59._8_4_ =
               fVar38 * (fVar38 * (fVar38 * _DAT_146159b58 + _DAT_146159b54) + _DAT_146159b64) +
               auVar54._8_4_;
          auVar59._12_4_ =
               fVar39 * (fVar39 * (fVar39 * _DAT_146159b58 + _DAT_146159b54) + _DAT_146159b64) +
               auVar54._12_4_;
          auVar55._4_4_ = _DAT_145f43774;
          auVar55._0_4_ = _DAT_145f43774;
          auVar55._8_4_ = _DAT_145f43774;
          auVar55._12_4_ = _DAT_145f43774;
          auVar62._0_4_ =
               fVar33 * fVar18 *
               (fVar33 * (fVar33 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68) + fVar18;
          auVar62._4_4_ =
               fVar37 * fVar25 *
               (fVar37 * (fVar37 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68) + fVar25;
          auVar62._8_4_ =
               fVar38 * fVar26 *
               (fVar38 * (fVar38 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68) + fVar26;
          auVar62._12_4_ =
               fVar39 * fVar27 *
               (fVar39 * (fVar39 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68) + fVar27;
          auVar15 = vpand_avx(auVar56,auVar43);
          auVar20 = vpcmpeqd_avx(auVar15,auVar40);
          auVar29 = vpsubd_avx(auVar40,auVar15);
          auVar15 = vpand_avx(auVar55,auVar21);
          auVar28 = vpcmpeqd_avx(auVar15,auVar40);
          auVar15 = vblendvps_avx(auVar59,auVar62,auVar20);
          auVar20 = vblendvps_avx(auVar59,auVar62,auVar29);
          auVar21 = vpand_avx(auVar55,auVar43);
          auVar44._0_4_ = auVar20._0_4_ ^ _DAT_145fc6f10;
          auVar44._4_4_ = auVar20._4_4_ ^ _DAT_145fc6f10;
          auVar44._8_4_ = auVar20._8_4_ ^ _DAT_145fc6f10;
          auVar44._12_4_ = auVar20._12_4_ ^ _DAT_145fc6f10;
          auVar63._0_4_ = auVar15._0_4_ ^ _DAT_145fc6f10;
          auVar63._4_4_ = auVar15._4_4_ ^ _DAT_145fc6f10;
          auVar63._8_4_ = auVar15._8_4_ ^ _DAT_145fc6f10;
          auVar63._12_4_ = auVar15._12_4_ ^ _DAT_145fc6f10;
          auVar21 = vpcmpeqd_avx(auVar21,auVar40);
          auVar36._0_4_ = (uint)auVar19._0_4_ ^ _DAT_145fc6f10;
          auVar36._4_4_ = (uint)auVar19._4_4_ ^ _DAT_145fc6f10;
          auVar36._8_4_ = (uint)auVar19._8_4_ ^ _DAT_145fc6f10;
          auVar36._12_4_ = (uint)auVar19._12_4_ ^ _DAT_145fc6f10;
          auVar20 = vblendvps_avx(auVar44,auVar20,auVar28);
          auVar21 = vblendvps_avx(auVar63,auVar15,auVar21);
          auVar15 = vblendps_avx(auVar36,auVar19,10);
          auVar28 = vshufps_avx(auVar20,auVar20,0xff);
          auVar22._0_4_ =
               auVar21._0_4_ *
               (auVar58._0_4_ * fStack_10c + auVar42._0_4_ +
               -(auVar31._0_4_ * auVar34._0_4_) + auVar30._0_4_ * auVar32._0_4_);
          auVar22._4_4_ =
               auVar21._4_4_ *
               (auVar58._4_4_ * fStack_10c + auVar42._4_4_ +
               -(auVar31._4_4_ * auVar34._4_4_) + auVar30._4_4_ * auVar32._4_4_);
          auVar22._8_4_ =
               auVar21._8_4_ *
               (auVar58._8_4_ * fStack_10c + auVar42._8_4_ +
               -(auVar31._8_4_ * auVar34._8_4_) + auVar30._8_4_ * auVar32._8_4_);
          auVar22._12_4_ =
               auVar21._12_4_ *
               (auVar58._12_4_ * fStack_10c + auVar42._12_4_ +
               -(auVar31._12_4_ * auVar34._12_4_) + auVar30._12_4_ * auVar32._12_4_);
          auVar21 = vshufps_avx(auVar15,auVar15,0x1b);
          auVar29 = vshufps_avx(auVar22,auVar22,0x55);
          auVar20 = vshufpd_avx(auVar19,auVar36,1);
          auVar30 = vshufps_avx(auVar22,auVar22,0xaa);
          auVar15 = vblendps_avx(auVar36,auVar19,9);
          auVar15 = vshufps_avx(auVar15,auVar15,0xb1);
          fVar33 = auVar30._0_4_ * auVar15._0_4_ +
                   auVar29._0_4_ * auVar20._0_4_ +
                   auVar22._0_4_ * auVar21._0_4_ + auVar19._0_4_ * auVar28._0_4_;
          fVar37 = auVar30._4_4_ * auVar15._4_4_ +
                   auVar29._4_4_ * auVar20._4_4_ +
                   auVar22._0_4_ * auVar21._4_4_ + auVar19._4_4_ * auVar28._4_4_;
          fVar38 = auVar30._8_4_ * auVar15._8_4_ +
                   auVar29._8_4_ * auVar20._8_4_ +
                   auVar22._0_4_ * auVar21._8_4_ + auVar19._8_4_ * auVar28._8_4_;
          fVar39 = auVar30._12_4_ * auVar15._12_4_ +
                   auVar29._12_4_ * auVar20._12_4_ +
                   auVar22._0_4_ * auVar21._12_4_ + auVar19._12_4_ * auVar28._12_4_;
          auVar23._0_4_ = fVar33 * fVar33;
          auVar23._4_4_ = fVar37 * fVar37;
          auVar23._8_4_ = fVar38 * fVar38;
          auVar23._12_4_ = fVar39 * fVar39;
          auVar19 = vhaddps_avx(auVar23,auVar23);
          auVar19 = vhaddps_avx(auVar19,auVar19);
          auVar15 = vrsqrtps_avx(auVar19);
          fVar18 = auVar15._0_4_;
          fVar25 = auVar15._4_4_;
          fVar26 = auVar15._8_4_;
          fVar27 = auVar15._12_4_;
          auVar24._0_4_ =
               ((fVar48 * fVar18 * fVar18 * auVar19._0_4_ - fVar48) * fVar18 + fVar18) * fVar33;
          auVar24._4_4_ =
               ((fVar50 * fVar25 * fVar25 * auVar19._4_4_ - fVar50) * fVar25 + fVar25) * fVar37;
          auVar24._8_4_ =
               ((fVar51 * fVar26 * fVar26 * auVar19._8_4_ - fVar51) * fVar26 + fVar26) * fVar38;
          auVar24._12_4_ =
               ((fVar52 * fVar27 * fVar27 * auVar19._12_4_ - fVar52) * fVar27 + fVar27) * fVar39;
          *(undefined1 (*) [16])(param_1 + (longlong)(int)uVar13 * 8 + 0x44) = auVar24;
          if ((uint)param_1[0x24c] < uVar13) {
            uVar13 = param_1[0x24c];
          }
          param_1[0x24c] = uVar13;
        }
        auVar16 = vsubps_avx(auVar45,auVar16);
        auVar46 = ZEXT1664(auVar16);
      }
      plVar10 = plVar10 + 6;
    } while (plVar10 != (longlong *)(param_2 + 0x10 + (ulonglong)uVar3 * 0x30));
  }
  return 0;
}

