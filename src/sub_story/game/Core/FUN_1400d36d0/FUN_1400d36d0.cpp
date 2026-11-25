// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400d36d0  size: 1336 bytes
// Name:    FUN_1400d36d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400df6c0, FUN_1451e8ce0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400d36d0(longlong param_1,longlong *param_2,longlong param_3,undefined8 param_4,
                  float param_5,int param_6,char param_7)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  short sVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auVar9 [16];
  undefined1 extraout_var [56];
  undefined1 auVar10 [16];
  undefined1 in_ZMM3 [64];
  undefined1 auVar11 [16];
  undefined1 auVar13 [64];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar17 [64];
  undefined1 auVar18 [64];
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auVar26 [64];
  longlong *plStack_118;
  undefined4 uStack_110;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  undefined1 auStack_f8 [16];
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  undefined1 auVar12 [16];
  
  auVar11 = in_ZMM3._0_16_;
  auVar12._0_12_ = ZEXT812(0);
  auVar12._12_4_ = 0;
  auVar13 = ZEXT1664(auVar12);
  fVar14 = 0.0;
  auVar12 = vcmpss_avx(ZEXT416((uint)*(float *)(param_1 + 0x9c)),auVar12,4);
  auVar12 = vblendvps_avx(auVar11,ZEXT416((uint)(*(float *)(param_1 + 0x9c) + in_ZMM3._0_4_)),
                          auVar12);
  if (param_7 != '\0') {
    if ((*(float *)(param_1 + 0xa4) != 0.0) || (NAN(*(float *)(param_1 + 0xa4)))) {
      auVar17 = ZEXT1664(auVar12);
      auVar26 = ZEXT1664(auVar11);
      lVar8 = func_0x000144f62e80(*(undefined8 *)(param_2[0x766] + 8));
      uStack_110 = *(undefined4 *)(lVar8 + 0x88);
      plStack_118 = param_2;
      sVar4 = FUN_1451e8ce0();
      fVar14 = auVar13._0_4_;
      auVar11 = auVar26._0_16_;
      auVar12 = auVar17._0_16_;
      *(byte *)(param_3 + 0x140) = *(byte *)(param_3 + 0x140) & 0xfe | -1 < sVar4;
      if (param_6 == 0 && -1 < sVar4) {
        lVar8 = func_0x000144f62e80(*(undefined8 *)(param_2[0x766] + 8));
        iVar7 = *(int *)(lVar8 + 0x88);
        iVar5 = func_0x000144e05fa0(param_2[1]);
        fVar15 = 0.0;
        fVar19 = 0.0;
        fVar20 = 0.0;
        fVar21 = 0.0;
        fVar14 = 0.0;
        fVar16 = 0.0;
        fVar23 = 0.0;
        fVar24 = 0.0;
        if (iVar7 != iVar5) {
          uVar6 = (**(code **)(*param_2 + 0xf0))(param_2,iVar7);
          (**(code **)(*param_2 + 0x108))(param_2,uVar6,&plStack_118);
          fVar14 = fStack_108;
          fVar16 = fStack_104;
          fVar23 = fStack_100;
          fVar24 = fStack_fc;
        }
        (**(code **)(*param_2 + 0x88))(param_2,&plStack_118);
        auVar11._4_4_ = fStack_104;
        auVar11._0_4_ = fStack_108;
        auVar11._8_4_ = fStack_100;
        auVar11._12_4_ = fStack_fc;
        auVar12 = vshufps_avx(auVar11,auStack_f8,0x33);
        auVar12 = vshufps_avx(auVar11,auVar12,0x2f);
        auVar17 = ZEXT1664(CONCAT412(fVar24 * (_DAT_145fc6ed8 + auVar12._12_4_),
                                     CONCAT48(fVar23 * (_DAT_145fc6ed8 + auVar12._8_4_),
                                              CONCAT44(fVar16 * (_DAT_145fc6ed8 + auVar12._4_4_),
                                                       fVar14 * (_DAT_145fc6ed8 + auVar12._0_4_)))))
        ;
        fVar14 = _DAT_145fc6ed8;
        fVar16 = _DAT_145fc6ed8;
        fVar23 = _DAT_145fc6ed8;
        fVar24 = _DAT_145fc6ed8;
        (**(code **)(*param_2 + 0x88))(param_2,&fStack_d8);
        fVar22 = auVar17._0_4_;
        auVar11 = auVar17._0_16_;
        auVar12 = vshufps_avx(auVar11,auVar11,0x55);
        auVar11 = vshufps_avx(auVar11,auVar11,0xaa);
        auVar17 = ZEXT1664(CONCAT412(auVar11._12_4_ * fStack_ac +
                                     auVar12._12_4_ * fStack_bc + fVar22 * fStack_cc + fStack_9c,
                                     CONCAT48(auVar11._8_4_ * fStack_b0 +
                                              auVar12._8_4_ * fStack_c0 +
                                              fVar22 * fStack_d0 + fStack_a0,
                                              CONCAT44(auVar11._4_4_ * fStack_b4 +
                                                       auVar12._4_4_ * fStack_c4 +
                                                       fVar22 * fStack_d4 + fStack_a4,
                                                       auVar11._0_4_ * fStack_b8 +
                                                       auVar12._0_4_ * fStack_c8 +
                                                       fVar22 * fStack_d8 + fStack_a8))));
        iVar7 = func_0x000144e05fa0(param_2[1]);
        if (iVar7 != 0) {
          uVar6 = (**(code **)(*param_2 + 0xf0))(param_2,0);
          (**(code **)(*param_2 + 0x108))(param_2,uVar6,&plStack_118);
          fVar15 = fStack_108;
          fVar19 = fStack_104;
          fVar20 = fStack_100;
          fVar21 = fStack_fc;
        }
        (**(code **)(*param_2 + 0x88))(param_2,&plStack_118);
        auVar3._4_4_ = fStack_104;
        auVar3._0_4_ = fStack_108;
        auVar3._8_4_ = fStack_100;
        auVar3._12_4_ = fStack_fc;
        auVar12 = vshufps_avx(auVar3,auStack_f8,0x33);
        auVar12 = vshufps_avx(auVar3,auVar12,0x2f);
        auVar18 = ZEXT1664(CONCAT412(fVar21 * (fVar24 + auVar12._12_4_),
                                     CONCAT48(fVar20 * (fVar23 + auVar12._8_4_),
                                              CONCAT44(fVar19 * (fVar16 + auVar12._4_4_),
                                                       fVar15 * (fVar14 + auVar12._0_4_)))));
        (**(code **)(*param_2 + 0x88))(param_2,&fStack_d8);
        fVar14 = auVar13._0_4_;
        fVar16 = auVar18._0_4_;
        auVar11 = auVar18._0_16_;
        auVar12 = vshufps_avx(auVar11,auVar11,0x55);
        auVar11 = vshufps_avx(auVar11,auVar11,0xaa);
        auVar10._0_4_ =
             auVar11._0_4_ * fStack_b8 + auVar12._0_4_ * fStack_c8 + fVar16 * fStack_d8 + fStack_a8;
        auVar10._4_4_ =
             auVar11._4_4_ * fStack_b4 + auVar12._4_4_ * fStack_c4 + fVar16 * fStack_d4 + fStack_a4;
        auVar10._8_4_ =
             auVar11._8_4_ * fStack_b0 + auVar12._8_4_ * fStack_c0 + fVar16 * fStack_d0 + fStack_a0;
        auVar10._12_4_ =
             auVar11._12_4_ * fStack_ac +
             auVar12._12_4_ * fStack_bc + fVar16 * fStack_cc + fStack_9c;
        auVar12 = vsubps_avx(auVar10,auVar17._0_16_);
        auVar11 = auVar26._0_16_;
        auVar12 = vshufpd_avx(auVar12,auVar12,1);
        auVar12 = ZEXT416((uint)(auVar12._0_4_ + *(float *)(param_1 + 0xa4)));
      }
    }
    else {
      *(byte *)(param_3 + 0x140) = *(byte *)(param_3 + 0x140) & 0xfe;
    }
  }
  if ((auVar12._0_4_ != auVar11._0_4_) || (NAN(auVar12._0_4_) || NAN(auVar11._0_4_))) {
    auVar26 = ZEXT1664(auVar11);
    auVar13._0_8_ = FUN_1400df6c0(param_1,param_2,param_5,auVar12._0_8_);
    auVar13._8_56_ = extraout_var;
    auVar12 = auVar13._0_16_;
    fVar14 = (float)auVar13._0_8_ - auVar26._0_4_;
  }
  *(float *)(param_1 + 0x280) = fVar14;
  if (param_7 == '\x01' && (*(byte *)(param_3 + 0x140) & 2) != 0) {
    auVar13 = ZEXT1664(auVar12);
    fVar14 = *(float *)((ulonglong)*(byte *)(param_1 + 0x388) * 4 + 0x14abbd840);
    lVar8 = func_0x000144f62e80(*(undefined8 *)(param_2[0x766] + 8));
    iVar7 = *(int *)(lVar8 + 0x88);
    iVar5 = func_0x000144e05fa0(param_2[1]);
    fVar19 = 0.0;
    fVar20 = 0.0;
    fVar21 = 0.0;
    fVar22 = 0.0;
    fVar16 = 0.0;
    fVar23 = 0.0;
    fVar24 = 0.0;
    fVar15 = 0.0;
    if (iVar7 != iVar5) {
      uVar6 = (**(code **)(*param_2 + 0xf0))(param_2,iVar7);
      (**(code **)(*param_2 + 0x108))(param_2,uVar6,&plStack_118);
      fVar16 = fStack_108;
      fVar23 = fStack_104;
      fVar24 = fStack_100;
      fVar15 = fStack_fc;
    }
    (**(code **)(*param_2 + 0x88))(param_2,&plStack_118);
    auVar1._4_4_ = fStack_104;
    auVar1._0_4_ = fStack_108;
    auVar1._8_4_ = fStack_100;
    auVar1._12_4_ = fStack_fc;
    auVar12 = vshufps_avx(auVar1,auStack_f8,0x33);
    auVar12 = vshufps_avx(auVar1,auVar12,0x2f);
    auVar26 = ZEXT1664(CONCAT412(fVar15 * (_DAT_145fc6ed8 + auVar12._12_4_),
                                 CONCAT48(fVar24 * (_DAT_145fc6ed8 + auVar12._8_4_),
                                          CONCAT44(fVar23 * (_DAT_145fc6ed8 + auVar12._4_4_),
                                                   fVar16 * (_DAT_145fc6ed8 + auVar12._0_4_)))));
    fVar16 = _DAT_145fc6ed8;
    fVar23 = _DAT_145fc6ed8;
    fVar24 = _DAT_145fc6ed8;
    fVar15 = _DAT_145fc6ed8;
    (**(code **)(*param_2 + 0x88))(param_2,&fStack_d8);
    fVar29 = auVar26._0_4_;
    auVar11 = auVar26._0_16_;
    auVar12 = vshufps_avx(auVar11,auVar11,0x55);
    auVar11 = vshufps_avx(auVar11,auVar11,0xaa);
    fVar25 = auVar11._0_4_ * fStack_b8 + auVar12._0_4_ * fStack_c8 + fVar29 * fStack_d8 + fStack_a8;
    fVar27 = auVar11._4_4_ * fStack_b4 + auVar12._4_4_ * fStack_c4 + fVar29 * fStack_d4 + fStack_a4;
    fVar28 = auVar11._8_4_ * fStack_b0 + auVar12._8_4_ * fStack_c0 + fVar29 * fStack_d0 + fStack_a0;
    fVar29 = auVar11._12_4_ * fStack_ac +
             auVar12._12_4_ * fStack_bc + fVar29 * fStack_cc + fStack_9c;
    iVar7 = func_0x000144e05fa0(param_2[1]);
    if (iVar7 != 0) {
      uVar6 = (**(code **)(*param_2 + 0xf0))(param_2,0);
      (**(code **)(*param_2 + 0x108))(param_2,uVar6,&plStack_118);
      fVar19 = fStack_108;
      fVar20 = fStack_104;
      fVar21 = fStack_100;
      fVar22 = fStack_fc;
    }
    (**(code **)(*param_2 + 0x88))(param_2,&plStack_118);
    auVar2._4_4_ = fStack_104;
    auVar2._0_4_ = fStack_108;
    auVar2._8_4_ = fStack_100;
    auVar2._12_4_ = fStack_fc;
    auVar12 = vshufps_avx(auVar2,auStack_f8,0x33);
    auVar12 = vshufps_avx(auVar2,auVar12,0x2f);
    auVar26 = ZEXT1664(CONCAT412(fVar22 * (fVar15 + auVar12._12_4_),
                                 CONCAT48(fVar21 * (fVar24 + auVar12._8_4_),
                                          CONCAT44(fVar20 * (fVar23 + auVar12._4_4_),
                                                   fVar19 * (fVar16 + auVar12._0_4_)))));
    (**(code **)(*param_2 + 0x88))(param_2,&fStack_d8);
    fVar16 = auVar26._0_4_;
    auVar11 = auVar26._0_16_;
    auVar12 = vshufps_avx(auVar11,auVar11,0x55);
    auVar11 = vshufps_avx(auVar11,auVar11,0xaa);
    auVar9._0_4_ = fVar25 + (-(auVar11._0_4_ * fStack_b8) -
                            (auVar12._0_4_ * fStack_c8 + fVar16 * fStack_d8 + fStack_a8));
    auVar9._4_4_ = fVar27 + (-(auVar11._4_4_ * fStack_b4) -
                            (auVar12._4_4_ * fStack_c4 + fVar16 * fStack_d4 + fStack_a4));
    auVar9._8_4_ = fVar28 + (-(auVar11._8_4_ * fStack_b0) -
                            (auVar12._8_4_ * fStack_c0 + fVar16 * fStack_d0 + fStack_a0));
    auVar9._12_4_ =
         fVar29 + (-(auVar11._12_4_ * fStack_ac) -
                  (auVar12._12_4_ * fStack_bc + fVar16 * fStack_cc + fStack_9c));
    auVar12 = vshufpd_avx(auVar9,auVar9,1);
    auVar12 = vmaxss_avx(ZEXT416((uint)(*(float *)(param_3 + 0x138) - (fVar14 + auVar12._0_4_))),
                         ZEXT416((uint)(*(float *)(param_3 + 0xe4) * _DAT_14abbd824 +
                                       param_5 + *(float *)(param_1 + 0x350))));
    auVar11 = vminss_avx(auVar13._0_16_,auVar12);
    *(byte *)(param_3 + 0x140) =
         *(byte *)(param_3 + 0x140) & 0xfb | (auVar11._0_4_ == auVar12._0_4_) << 2;
  }
  return;
}

