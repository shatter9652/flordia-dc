// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140196530  size: 1221 bytes
// Name:    FUN_140196530
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140196a10
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140196530(longlong *param_1,float *param_2)

{
  int iVar1;
  undefined4 uVar2;
  float fVar9;
  float fVar10;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  float fVar11;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar12;
  float fVar16;
  float fVar18;
  float fVar19;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar17;
  undefined1 auVar15 [16];
  float fVar20;
  float fVar21;
  float fVar27;
  float fVar29;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar31;
  undefined1 auVar24 [16];
  float fVar28;
  float fVar30;
  float fVar32;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  uint uVar44;
  uint uVar47;
  uint uVar48;
  undefined1 auVar45 [16];
  uint uVar49;
  float fVar50;
  float fVar52;
  float fVar53;
  undefined1 auVar51 [16];
  float fVar54;
  float fVar56;
  float fVar57;
  float fVar58;
  undefined1 auVar55 [16];
  float fVar59;
  undefined1 auVar60 [64];
  undefined1 auVar61 [16];
  uint uVar63;
  uint uVar64;
  uint uVar65;
  uint uVar66;
  undefined1 auVar67 [64];
  undefined1 auVar68 [64];
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  undefined1 auStack_e8 [16];
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  undefined1 aauStack_c8 [11] [16];
  undefined1 auVar46 [64];
  undefined1 auVar62 [64];
  
  iVar1 = FUN_140196a10(param_1[2],(int)param_1[9]);
  if (iVar1 != -1) {
    (**(code **)(*(longlong *)param_1[2] + 0xe8))((longlong *)param_1[2],iVar1,param_2);
    (**(code **)(*param_1 + 0x108))(param_1,aauStack_c8);
    auVar45._0_12_ = ZEXT812(0);
    auVar45._12_4_ = 0;
    auVar46 = ZEXT1664(auVar45);
    auVar45 = vcmpps_avx(auVar45,aauStack_c8[0],0);
    uVar2 = vmovmskps_avx(auVar45);
    if ((~(byte)uVar2 & 7) != 0) {
      (**(code **)(*param_1 + 0x108))(param_1,&fStack_d8);
      auVar3._0_4_ = param_2[0xc] + fStack_d8;
      auVar3._4_4_ = param_2[0xd] + fStack_d4;
      auVar3._8_4_ = param_2[0xe] + fStack_d0;
      auVar3._12_4_ = param_2[0xf] + fStack_cc;
      *(undefined1 (*) [16])(param_2 + 0xc) = auVar3;
    }
    (**(code **)(*param_1 + 0x118))(param_1,auStack_e8);
    auVar45 = vcmpps_avx(auVar46._0_16_,auStack_e8,0);
    uVar2 = vmovmskps_avx(auVar45);
    if ((~(byte)uVar2 & 7) != 0) {
      (**(code **)(*param_1 + 0x118))(param_1,&fStack_f8);
      fVar59 = _DAT_146159b64;
      fVar54 = _DAT_146159b60;
      fVar50 = _DAT_146159b58;
      fVar17 = _DAT_146159b4c;
      uVar44 = _DAT_145fc6f10;
      uVar63 = _DAT_145f43778;
      auVar23._4_4_ = _DAT_145fc6edc;
      auVar23._0_4_ = _DAT_145fc6edc;
      auVar23._8_4_ = _DAT_145fc6edc;
      auVar23._12_4_ = _DAT_145fc6edc;
      auVar60 = ZEXT1664(auVar23);
      auVar68 = ZEXT1664(CONCAT412(_DAT_145fc6ed8,
                                   CONCAT48(_DAT_145fc6ed8,CONCAT44(_DAT_145fc6ed8,_DAT_145fc6ed8)))
                        );
      auVar61._4_4_ = _DAT_145f43774;
      auVar61._0_4_ = _DAT_145f43774;
      auVar61._8_4_ = _DAT_145f43774;
      auVar61._12_4_ = _DAT_145f43774;
      auVar62 = ZEXT1664(auVar61);
      auVar67 = ZEXT1664((undefined1  [16])0x0);
      fVar12 = _DAT_146159c48 * fStack_f8;
      auVar22._0_4_ = (uint)fVar12 & _DAT_145fc6f10;
      auVar22._4_4_ = (uint)fVar12 & _DAT_145fc6f10;
      auVar22._8_4_ = (uint)fVar12 & _DAT_145fc6f10;
      auVar22._12_4_ = (uint)fVar12 & _DAT_145fc6f10;
      auVar23 = auVar23 | auVar22;
      auVar4._0_4_ = (uint)(fVar12 + auVar23._0_4_);
      auVar4._4_4_ = (uint)(fVar12 + auVar23._4_4_);
      auVar4._8_4_ = (uint)(fVar12 + auVar23._8_4_);
      auVar4._12_4_ = (uint)(fVar12 + auVar23._12_4_);
      auVar45 = vcvtdq2ps_avx(auVar4);
      fVar12 = _DAT_146159b50 * auVar45._0_4_ + auVar45._0_4_ * _DAT_146159b4c + fStack_f8;
      fVar16 = _DAT_146159b50 * auVar45._4_4_ + auVar45._4_4_ * _DAT_146159b4c + fStack_f8;
      fVar18 = _DAT_146159b50 * auVar45._8_4_ + auVar45._8_4_ * _DAT_146159b4c + fStack_f8;
      fVar19 = _DAT_146159b50 * auVar45._12_4_ + auVar45._12_4_ * _DAT_146159b4c + fStack_f8;
      fVar20 = fVar12 * fVar12;
      fVar27 = fVar16 * fVar16;
      fVar29 = fVar18 * fVar18;
      fVar31 = fVar19 * fVar19;
      auVar43._0_4_ =
           fVar20 * fVar12 * (fVar20 * (fVar20 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68)
           + fVar12;
      auVar43._4_4_ =
           fVar27 * fVar16 * (fVar27 * (fVar27 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68)
           + fVar16;
      auVar43._8_4_ =
           fVar29 * fVar18 * (fVar29 * (fVar29 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68)
           + fVar18;
      auVar43._12_4_ =
           fVar31 * fVar19 * (fVar31 * (fVar31 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68)
           + fVar19;
      auVar13._0_4_ = _DAT_145f43778 & auVar4._0_4_;
      auVar13._4_4_ = _DAT_145f43778 & auVar4._4_4_;
      auVar13._8_4_ = _DAT_145f43778 & auVar4._8_4_;
      auVar13._12_4_ = _DAT_145f43778 & auVar4._12_4_;
      auVar33._0_4_ = _DAT_145f43774 & auVar4._0_4_;
      auVar33._4_4_ = _DAT_145f43774 & auVar4._4_4_;
      auVar33._8_4_ = _DAT_145f43774 & auVar4._8_4_;
      auVar33._12_4_ = _DAT_145f43774 & auVar4._12_4_;
      auVar5 = vpcmpeqd_avx((undefined1  [16])0x0,auVar33);
      auVar38._0_4_ =
           fVar20 * (fVar20 * (fVar20 * _DAT_146159b58 + _DAT_146159b54) + _DAT_146159b64) +
           _DAT_145fc6ed8;
      auVar38._4_4_ =
           fVar27 * (fVar27 * (fVar27 * _DAT_146159b58 + _DAT_146159b54) + _DAT_146159b64) +
           _DAT_145fc6ed8;
      auVar38._8_4_ =
           fVar29 * (fVar29 * (fVar29 * _DAT_146159b58 + _DAT_146159b54) + _DAT_146159b64) +
           _DAT_145fc6ed8;
      auVar38._12_4_ =
           fVar31 * (fVar31 * (fVar31 * _DAT_146159b58 + _DAT_146159b54) + _DAT_146159b64) +
           _DAT_145fc6ed8;
      auVar45 = vpcmpeqd_avx((undefined1  [16])0x0,auVar13);
      auVar3 = vpsubd_avx((undefined1  [16])0x0,auVar13);
      auVar45 = vblendvps_avx(auVar38,auVar43,auVar45);
      auVar3 = vblendvps_avx(auVar38,auVar43,auVar3);
      auVar39._0_4_ = auVar45._0_4_ ^ _DAT_145fc6f10;
      auVar39._4_4_ = auVar45._4_4_ ^ _DAT_145fc6f10;
      auVar39._8_4_ = auVar45._8_4_ ^ _DAT_145fc6f10;
      auVar39._12_4_ = auVar45._12_4_ ^ _DAT_145fc6f10;
      auVar6 = vblendvps_avx(auVar39,auVar45,auVar5);
      auVar45 = vpcmpeqd_avx(auVar5,auVar5);
      auVar45 = vpsubd_avx(auVar4,auVar45);
      auVar34._0_4_ = auVar3._0_4_ ^ _DAT_145fc6f10;
      auVar34._4_4_ = auVar3._4_4_ ^ _DAT_145fc6f10;
      auVar34._8_4_ = auVar3._8_4_ ^ _DAT_145fc6f10;
      auVar34._12_4_ = auVar3._12_4_ ^ _DAT_145fc6f10;
      auVar45 = vpand_avx(auVar61,auVar45);
      auVar45 = vpcmpeqd_avx((undefined1  [16])0x0,auVar45);
      auVar3 = vblendvps_avx(auVar34,auVar3,auVar45);
      auVar45 = *(undefined1 (*) [16])(param_2 + 8);
      auVar5._0_4_ = -(param_2[4] * auVar6._0_4_) + auVar3._0_4_ * auVar45._0_4_;
      auVar5._4_4_ = -(param_2[5] * auVar6._4_4_) + auVar3._4_4_ * auVar45._4_4_;
      auVar5._8_4_ = -(param_2[6] * auVar6._8_4_) + auVar3._8_4_ * auVar45._8_4_;
      auVar5._12_4_ = -(param_2[7] * auVar6._12_4_) + auVar3._12_4_ * auVar45._12_4_;
      param_2[4] = auVar45._0_4_ * auVar6._0_4_ + auVar3._0_4_ * param_2[4];
      param_2[5] = auVar45._4_4_ * auVar6._4_4_ + auVar3._4_4_ * param_2[5];
      param_2[6] = auVar45._8_4_ * auVar6._8_4_ + auVar3._8_4_ * param_2[6];
      param_2[7] = auVar45._12_4_ * auVar6._12_4_ + auVar3._12_4_ * param_2[7];
      *(undefined1 (*) [16])(param_2 + 8) = auVar5;
      uVar47 = uVar44;
      uVar48 = uVar44;
      uVar49 = uVar44;
      fVar20 = fVar17;
      fVar27 = fVar17;
      fVar29 = fVar17;
      fVar31 = fVar50;
      fVar52 = fVar50;
      fVar53 = fVar50;
      fVar56 = fVar54;
      fVar57 = fVar54;
      fVar58 = fVar54;
      fVar16 = fVar59;
      fVar18 = fVar59;
      fVar19 = fVar59;
      uVar64 = uVar63;
      uVar65 = uVar63;
      uVar66 = uVar63;
      (**(code **)(*param_1 + 0x118))(param_1,&fStack_f8);
      fVar12 = fStack_f4 * _DAT_146159c48;
      auVar24._0_4_ = (uint)fVar12 & uVar44;
      auVar24._4_4_ = (uint)fVar12 & uVar47;
      auVar24._8_4_ = (uint)fVar12 & uVar48;
      auVar24._12_4_ = (uint)fVar12 & uVar49;
      auVar24 = auVar60._0_16_ | auVar24;
      auVar14._0_4_ = (uint)(fVar12 + auVar24._0_4_);
      auVar14._4_4_ = (uint)(fVar12 + auVar24._4_4_);
      auVar14._8_4_ = (uint)(fVar12 + auVar24._8_4_);
      auVar14._12_4_ = (uint)(fVar12 + auVar24._12_4_);
      auVar45 = vcvtdq2ps_avx(auVar14);
      fVar12 = _DAT_146159b50 * auVar45._0_4_ + auVar45._0_4_ * fVar17 + fStack_f4;
      fVar9 = _DAT_146159b50 * auVar45._4_4_ + auVar45._4_4_ * fVar20 + fStack_f4;
      fVar10 = _DAT_146159b50 * auVar45._8_4_ + auVar45._8_4_ * fVar27 + fStack_f4;
      fVar11 = _DAT_146159b50 * auVar45._12_4_ + auVar45._12_4_ * fVar29 + fStack_f4;
      fVar21 = fVar12 * fVar12;
      fVar28 = fVar9 * fVar9;
      fVar30 = fVar10 * fVar10;
      fVar32 = fVar11 * fVar11;
      auVar45 = auVar68._0_16_;
      auVar46 = ZEXT1664(auVar45);
      auVar35._0_4_ =
           fVar21 * (fVar21 * (fVar21 * fVar50 + _DAT_146159b54) + fVar59) + auVar68._0_4_;
      auVar35._4_4_ =
           fVar28 * (fVar28 * (fVar28 * fVar31 + _DAT_146159b54) + fVar16) + auVar68._4_4_;
      auVar35._8_4_ =
           fVar30 * (fVar30 * (fVar30 * fVar52 + _DAT_146159b54) + fVar18) + auVar68._8_4_;
      auVar35._12_4_ =
           fVar32 * (fVar32 * (fVar32 * fVar53 + _DAT_146159b54) + fVar19) + auVar68._12_4_;
      auVar45 = vpcmpeqd_avx(auVar45,auVar45);
      auVar68 = ZEXT1664(auVar45);
      auVar40._0_4_ =
           fVar21 * fVar12 * (fVar21 * (fVar21 * fVar54 + _DAT_146159b5c) + _DAT_146159b68) + fVar12
      ;
      auVar40._4_4_ =
           fVar28 * fVar9 * (fVar28 * (fVar28 * fVar56 + _DAT_146159b5c) + _DAT_146159b68) + fVar9;
      auVar40._8_4_ =
           fVar30 * fVar10 * (fVar30 * (fVar30 * fVar57 + _DAT_146159b5c) + _DAT_146159b68) + fVar10
      ;
      auVar40._12_4_ =
           fVar32 * fVar11 * (fVar32 * (fVar32 * fVar58 + _DAT_146159b5c) + _DAT_146159b68) + fVar11
      ;
      auVar6._0_4_ = uVar63 & auVar14._0_4_;
      auVar6._4_4_ = uVar64 & auVar14._4_4_;
      auVar6._8_4_ = uVar65 & auVar14._8_4_;
      auVar6._12_4_ = uVar66 & auVar14._12_4_;
      auVar4 = auVar67._0_16_;
      auVar45 = vpcmpeqd_avx(auVar4,auVar6);
      auVar3 = vpsubd_avx(auVar4,auVar6);
      auVar45 = vblendvps_avx(auVar35,auVar40,auVar45);
      auVar3 = vblendvps_avx(auVar35,auVar40,auVar3);
      auVar5 = vpsubd_avx(auVar14,_DAT_145f41010);
      auVar6 = vpand_avx(auVar62._0_16_,auVar14);
      auVar6 = vpcmpeqd_avx(auVar4,auVar6);
      auVar41._0_4_ = auVar45._0_4_ ^ uVar44;
      auVar41._4_4_ = auVar45._4_4_ ^ uVar47;
      auVar41._8_4_ = auVar45._8_4_ ^ uVar48;
      auVar41._12_4_ = auVar45._12_4_ ^ uVar49;
      auVar6 = vblendvps_avx(auVar41,auVar45,auVar6);
      auVar25._0_4_ = auVar3._0_4_ ^ uVar44;
      auVar25._4_4_ = auVar3._4_4_ ^ uVar47;
      auVar25._8_4_ = auVar3._8_4_ ^ uVar48;
      auVar25._12_4_ = auVar3._12_4_ ^ uVar49;
      auVar45 = vpand_avx(auVar62._0_16_,auVar5);
      auVar45 = vpcmpeqd_avx(auVar4,auVar45);
      auVar3 = vblendvps_avx(auVar25,auVar3,auVar45);
      auVar45 = *(undefined1 (*) [16])(param_2 + 8);
      auVar7._0_4_ = *param_2 * auVar6._0_4_ + auVar3._0_4_ * auVar45._0_4_;
      auVar7._4_4_ = param_2[1] * auVar6._4_4_ + auVar3._4_4_ * auVar45._4_4_;
      auVar7._8_4_ = param_2[2] * auVar6._8_4_ + auVar3._8_4_ * auVar45._8_4_;
      auVar7._12_4_ = param_2[3] * auVar6._12_4_ + auVar3._12_4_ * auVar45._12_4_;
      *param_2 = -(auVar45._0_4_ * auVar6._0_4_) + auVar3._0_4_ * *param_2;
      param_2[1] = -(auVar45._4_4_ * auVar6._4_4_) + auVar3._4_4_ * param_2[1];
      param_2[2] = -(auVar45._8_4_ * auVar6._8_4_) + auVar3._8_4_ * param_2[2];
      param_2[3] = -(auVar45._12_4_ * auVar6._12_4_) + auVar3._12_4_ * param_2[3];
      *(undefined1 (*) [16])(param_2 + 8) = auVar7;
      (**(code **)(*param_1 + 0x118))(param_1,&fStack_f8);
      fVar59 = *param_2;
      fVar16 = param_2[1];
      fVar18 = param_2[2];
      fVar19 = param_2[3];
      fVar12 = fStack_f0 * _DAT_146159c48;
      auVar26._0_4_ = (uint)fVar12 & uVar44;
      auVar26._4_4_ = (uint)fVar12 & uVar47;
      auVar26._8_4_ = (uint)fVar12 & uVar48;
      auVar26._12_4_ = (uint)fVar12 & uVar49;
      auVar26 = auVar60._0_16_ | auVar26;
      auVar8._0_4_ = (uint)(fVar12 + auVar26._0_4_);
      auVar8._4_4_ = (uint)(fVar12 + auVar26._4_4_);
      auVar8._8_4_ = (uint)(fVar12 + auVar26._8_4_);
      auVar8._12_4_ = (uint)(fVar12 + auVar26._12_4_);
      auVar45 = vcvtdq2ps_avx(auVar8);
      auVar36._0_4_ = auVar62._0_4_ & auVar8._0_4_;
      auVar36._4_4_ = auVar62._4_4_ & auVar8._4_4_;
      auVar36._8_4_ = auVar62._8_4_ & auVar8._8_4_;
      auVar36._12_4_ = auVar62._12_4_ & auVar8._12_4_;
      auVar5 = auVar67._0_16_;
      auVar6 = vpcmpeqd_avx(auVar5,auVar36);
      fVar9 = auVar45._0_4_ * _DAT_146159b50 + auVar45._0_4_ * fVar17 + fStack_f0;
      fVar10 = auVar45._4_4_ * _DAT_146159b50 + auVar45._4_4_ * fVar20 + fStack_f0;
      fVar11 = auVar45._8_4_ * _DAT_146159b50 + auVar45._8_4_ * fVar27 + fStack_f0;
      fVar29 = auVar45._12_4_ * _DAT_146159b50 + auVar45._12_4_ * fVar29 + fStack_f0;
      fVar12 = fVar9 * fVar9;
      fVar17 = fVar10 * fVar10;
      fVar20 = fVar11 * fVar11;
      fVar27 = fVar29 * fVar29;
      auVar51._0_4_ =
           fVar12 * (fVar12 * (fVar12 * fVar50 + _DAT_146159b54) + _DAT_146159b64) + auVar46._0_4_;
      auVar51._4_4_ =
           fVar17 * (fVar17 * (fVar17 * fVar31 + _DAT_146159b54) + _DAT_146159b64) + auVar46._4_4_;
      auVar51._8_4_ =
           fVar20 * (fVar20 * (fVar20 * fVar52 + _DAT_146159b54) + _DAT_146159b64) + auVar46._8_4_;
      auVar51._12_4_ =
           fVar27 * (fVar27 * (fVar27 * fVar53 + _DAT_146159b54) + _DAT_146159b64) + auVar46._12_4_;
      auVar55._0_4_ =
           fVar12 * fVar9 * (fVar12 * (fVar12 * fVar54 + _DAT_146159b5c) + _DAT_146159b68) + fVar9;
      auVar55._4_4_ =
           fVar17 * fVar10 * (fVar17 * (fVar17 * fVar56 + _DAT_146159b5c) + _DAT_146159b68) + fVar10
      ;
      auVar55._8_4_ =
           fVar20 * fVar11 * (fVar20 * (fVar20 * fVar57 + _DAT_146159b5c) + _DAT_146159b68) + fVar11
      ;
      auVar55._12_4_ =
           fVar27 * fVar29 * (fVar27 * (fVar27 * fVar58 + _DAT_146159b5c) + _DAT_146159b68) + fVar29
      ;
      auVar15._0_4_ = uVar63 & auVar8._0_4_;
      auVar15._4_4_ = uVar64 & auVar8._4_4_;
      auVar15._8_4_ = uVar65 & auVar8._8_4_;
      auVar15._12_4_ = uVar66 & auVar8._12_4_;
      auVar45 = vpsubd_avx(auVar8,auVar68._0_16_);
      auVar3 = vpcmpeqd_avx(auVar5,auVar15);
      auVar4 = vpsubd_avx(auVar5,auVar15);
      auVar45 = vpand_avx(auVar62._0_16_,auVar45);
      auVar5 = vpcmpeqd_avx(auVar5,auVar45);
      auVar45 = vblendvps_avx(auVar51,auVar55,auVar3);
      auVar3 = vblendvps_avx(auVar51,auVar55,auVar4);
      auVar42._0_4_ = auVar45._0_4_ ^ uVar44;
      auVar42._4_4_ = auVar45._4_4_ ^ uVar47;
      auVar42._8_4_ = auVar45._8_4_ ^ uVar48;
      auVar42._12_4_ = auVar45._12_4_ ^ uVar49;
      auVar45 = vblendvps_avx(auVar42,auVar45,auVar6);
      auVar37._0_4_ = auVar3._0_4_ ^ uVar44;
      auVar37._4_4_ = auVar3._4_4_ ^ uVar47;
      auVar37._8_4_ = auVar3._8_4_ ^ uVar48;
      auVar37._12_4_ = auVar3._12_4_ ^ uVar49;
      auVar3 = vblendvps_avx(auVar37,auVar3,auVar5);
      *param_2 = param_2[4] * auVar45._0_4_ + auVar3._0_4_ * fVar59;
      param_2[1] = param_2[5] * auVar45._4_4_ + auVar3._4_4_ * fVar16;
      param_2[2] = param_2[6] * auVar45._8_4_ + auVar3._8_4_ * fVar18;
      param_2[3] = param_2[7] * auVar45._12_4_ + auVar3._12_4_ * fVar19;
      param_2[4] = -(fVar59 * auVar45._0_4_) + auVar3._0_4_ * param_2[4];
      param_2[5] = -(fVar16 * auVar45._4_4_) + auVar3._4_4_ * param_2[5];
      param_2[6] = -(fVar18 * auVar45._8_4_) + auVar3._8_4_ * param_2[6];
      param_2[7] = -(fVar19 * auVar45._12_4_) + auVar3._12_4_ * param_2[7];
    }
  }
  return;
}

