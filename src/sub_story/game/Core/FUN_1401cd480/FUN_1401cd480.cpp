// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401cd480  size: 918 bytes
// Name:    FUN_1401cd480
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401cd820, FUN_144fbd980
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401cd480(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  byte bVar1;
  longlong lVar2;
  ushort uVar3;
  ushort uVar4;
  undefined1 auVar6 [16];
  uint uVar7;
  char cVar8;
  byte bVar9;
  longlong lVar10;
  uint uVar11;
  bool bVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 extraout_var [56];
  undefined1 extraout_var_00 [56];
  undefined1 extraout_var_01 [56];
  uint uVar16;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  uint uVar21;
  undefined1 auVar22 [64];
  undefined1 auVar23 [64];
  undefined1 auVar24 [64];
  ushort uVar5;
  
  auVar23._0_8_ = FUN_144fbd980(param_3);
  auVar23._8_56_ = extraout_var;
  lVar10 = *(longlong *)(param_3 + 0x50);
  bVar1 = *(byte *)(lVar10 + 2);
  fVar13 = (float)auVar23._0_8_;
  auVar14 = auVar23._0_16_;
  if (bVar1 != 0) {
    auVar23 = ZEXT464(_DAT_146159be0);
    auVar22 = ZEXT464(_DAT_145fc6f80);
    if (((*(char *)(param_3 + 0x80) != '\x01') && ((bVar1 & 0xfe) == 2)) &&
       (*(char *)(lVar10 + 10) == '\x01')) {
      fVar13 = fVar13 * _DAT_146159c20;
      auVar15 = vcmpps_avx(ZEXT416((uint)fVar13),ZEXT416(_DAT_14615ea14),1);
      auVar6 = vcmpps_avx(ZEXT416(_DAT_14615b980),ZEXT416((uint)fVar13),1);
      uVar16 = auVar6._0_4_ & auVar15._0_4_;
      auVar20 = ZEXT416((uint)fVar13);
      auVar15 = vcmpps_avx(ZEXT416(_DAT_146161f28),auVar20,1);
      auVar19._0_12_ = ZEXT812(0);
      auVar19._12_4_ = 0;
      auVar6 = vcmpps_avx(auVar19,auVar20,1);
      auVar18 = vcmpps_avx(auVar20,auVar19,1);
      uVar11 = auVar6._0_4_ & auVar15._0_4_ | uVar16;
      auVar15 = vcmpps_avx(auVar20,ZEXT416(_DAT_1461667c8),1);
      uVar21 = auVar18._0_4_ & auVar15._0_4_;
      auVar15 = vcmpps_avx(ZEXT416((uint)fVar13),ZEXT416(_DAT_14615cd54),5);
      auVar6 = vcmpps_avx(ZEXT416(_DAT_1461667cc),ZEXT416((uint)fVar13),5);
      bVar9 = auVar6[0] | auVar15[0];
      if (bVar1 == 2) {
        uVar7 = _DAT_146162588;
        if ((uVar16 & 1) == 0) {
          uVar7 = _DAT_145fc6f80;
        }
        auVar22 = ZEXT464(uVar7);
        if ((uVar11 & 1) == 0) {
          bVar12 = (uVar21 & 1) == 0;
          uVar11 = _DAT_1461667d0;
          if (bVar12) {
            uVar11 = _DAT_145fc6f80;
          }
          auVar22 = ZEXT464(uVar11);
          auVar23 = ZEXT1664(auVar14);
          if (bVar12) {
            auVar23 = ZEXT464(_DAT_146159be0);
          }
          if (((bVar9 | (byte)uVar21) & 1) != 0) goto LAB_1401cd6af;
          auVar22 = ZEXT464(0) << 0x20;
        }
        auVar23 = ZEXT1664(auVar14);
      }
      else {
        if ((uVar16 & 1) == 0) {
          auVar19 = ZEXT416(_DAT_146162588);
        }
        if ((uVar11 & 1) == 0) {
          auVar22 = ZEXT1664(auVar14);
          if ((uVar21 & 1) == 0) {
            auVar22 = ZEXT464(_DAT_145fc6f80);
          }
          if (((bVar9 | (byte)uVar21) & 1) == 0) {
            auVar23 = ZEXT464(_DAT_1461667d0);
            auVar22 = ZEXT1664(auVar14);
          }
        }
        else {
          auVar22 = ZEXT1664(auVar14);
          auVar23 = ZEXT1664(auVar19);
        }
      }
    }
LAB_1401cd6af:
    lVar10 = func_0x000145218f00(*(undefined8 *)(param_3 + 8),
                                 *(undefined1 *)(*(longlong *)(param_3 + 0x40) + 0x3c));
    if (lVar10 == 0) {
      return;
    }
    goto LAB_1401cd573;
  }
  auVar15 = vpinsrw_avx(auVar14,(uint)*(ushort *)(param_3 + 0x7c),0);
  auVar22 = ZEXT1664(auVar15);
  auVar6 = vpinsrw_avx(auVar14,(uint)*(ushort *)(param_3 + 0x78),0);
  uVar3 = auVar6._0_2_;
  auVar19 = vcvtph2ps_f16c(ZEXT216(uVar3));
  auVar20 = vcvtph2ps_f16c(ZEXT216(auVar15._0_2_));
  auVar6 = vpinsrw_avx(auVar14,(uint)*(ushort *)(param_3 + 0x7a),0);
  uVar17 = auVar6._0_8_;
  auVar18 = vpinsrw_avx(auVar14,(uint)*(ushort *)(param_3 + 0x76),0);
  uVar4 = auVar6._0_2_;
  uVar5 = auVar18._0_2_;
  if (auVar19._0_4_ < auVar20._0_4_) {
LAB_1401cd5bf:
    auVar6 = vcvtph2ps_f16c(ZEXT416((uint)uVar5));
    auVar18 = vcvtph2ps_f16c(ZEXT416((uint)uVar4));
    if ((fVar13 < 0.0 && auVar6._0_4_ < auVar18._0_4_) &&
       (auVar6 = vcvtph2ps_f16c(ZEXT416((uint)uVar4)),
       (float)(auVar6._0_4_ ^ _DAT_145fc6f10) < fVar13)) {
      auVar18._0_4_ = (uint)fVar13 ^ _DAT_145fc6f10;
      auVar18._4_4_ = (uint)((ulonglong)auVar23._0_8_ >> 0x20) ^ _DAT_145fc6f10;
      auVar18._8_4_ = extraout_var._0_4_ ^ _DAT_145fc6f10;
      auVar18._12_4_ = extraout_var._4_4_ ^ _DAT_145fc6f10;
      auVar6 = vcvtph2ps_f16c(ZEXT416((uint)uVar5));
      auVar6 = vmaxss_avx(auVar18,auVar6);
      auVar18 = vcvtps2ph_f16c(auVar6,3);
      auVar6 = vpinsrw_avx(auVar14,auVar18._0_4_,0);
      uVar17 = auVar6._0_8_;
      *(short *)(param_3 + 0x7a) = auVar18._0_2_;
    }
    auVar6 = vcvtph2ps_f16c(ZEXT416((uint)uVar3));
    auVar15 = vcvtph2ps_f16c(ZEXT216(auVar15._0_2_));
    if (((auVar6._0_4_ < auVar15._0_4_) && (0.0 < fVar13)) && (fVar13 < auVar15._0_4_)) {
      auVar15 = vcvtph2ps_f16c(ZEXT416((uint)uVar3));
      auVar14 = vmaxss_avx(auVar14,auVar15);
      auVar15 = vcvtps2ph_f16c(auVar14,3);
      auVar14 = vpinsrw_avx(auVar15,auVar15._0_4_,0);
      auVar22 = ZEXT1664(auVar14);
      *(short *)(param_3 + 0x7c) = auVar15._0_2_;
    }
  }
  else {
    auVar6 = vcvtph2ps_f16c(ZEXT216(uVar5));
    auVar18 = vcvtph2ps_f16c(ZEXT216(uVar4));
    if (auVar6._0_4_ < auVar18._0_4_) goto LAB_1401cd5bf;
  }
  auVar24._0_8_ = func_0x000144ed97a0(uVar17);
  auVar24._8_56_ = extraout_var_00;
  auVar24 = ZEXT1664(auVar24._0_16_);
  auVar22._0_8_ = func_0x000144ed97a0(auVar22._0_8_);
  auVar22._8_56_ = extraout_var_01;
  lVar2 = *(longlong *)(param_3 + 0x40);
  auVar23 = ZEXT1664(auVar22._0_16_);
  cVar8 = func_0x000144fbdf20(lVar2,lVar10);
  auVar14 = auVar23._0_16_;
  if (cVar8 != '\0') {
    auVar15 = auVar24._0_16_;
    auVar24 = ZEXT1664(auVar14);
    auVar14 = auVar15;
  }
  auVar22 = ZEXT1664(auVar14);
  lVar10 = func_0x000145218f00(*(undefined8 *)(param_3 + 8),*(undefined1 *)(lVar2 + 0x3c));
  if (lVar10 == 0) {
    return;
  }
  auVar14._4_4_ = _DAT_145fc6f10;
  auVar14._0_4_ = _DAT_145fc6f10;
  auVar14._8_4_ = _DAT_145fc6f10;
  auVar14._12_4_ = _DAT_145fc6f10;
  auVar23 = ZEXT1664(auVar24._0_16_ ^ auVar14);
LAB_1401cd573:
  fVar13 = (float)FUN_1401cd820(param_3);
  *(float *)(lVar10 + 0x80) = (fVar13 * auVar23._0_4_ + auVar23._0_4_) - *(float *)(lVar10 + 0x88);
  *(float *)(lVar10 + 0x84) = (fVar13 * auVar22._0_4_ + auVar22._0_4_) - *(float *)(lVar10 + 0x88);
  return;
}

