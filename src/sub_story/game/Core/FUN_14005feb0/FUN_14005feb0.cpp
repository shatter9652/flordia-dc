// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14005feb0  size: 703 bytes
// Name:    FUN_14005feb0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144ff5cf0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14005feb0(longlong param_1,undefined1 (*param_2) [16],float param_3,uint param_4,
                  longlong param_5)

{
  uint uVar1;
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  char cVar8;
  uint uVar9;
  undefined4 uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  byte bVar16;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 extraout_var_00 [56];
  undefined1 extraout_var_01 [56];
  float fVar22;
  float fVar23;
  undefined1 auVar21 [16];
  float fVar24;
  undefined1 auVar25 [16];
  uint unaff_XMM6_Dc;
  ulonglong unaff_XMM7_Qa;
  undefined8 unaff_XMM7_Qb;
  undefined1 auVar26 [64];
  undefined8 unaff_XMM8_Qa;
  undefined8 unaff_XMM8_Qb;
  undefined1 auVar27 [16];
  undefined8 unaff_XMM9_Qb;
  undefined1 auVar28 [16];
  undefined8 unaff_XMM10_Qa;
  undefined8 uStack_80;
  ulonglong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 auStack_48 [4];
  undefined1 auVar19 [64];
  undefined1 auVar20 [64];
  undefined1 extraout_var [56];
  
  auVar27._0_12_ = ZEXT812(0);
  auVar27._12_4_ = 0;
  auVar18 = *(undefined1 (*) [16])(param_1 + 0x70);
  auVar21 = *(undefined1 (*) [16])(param_5 + 0x20);
  auVar17 = vpunpckhwd_avx(auVar18,auVar18);
  auVar17 = vpsrad_avx(auVar17,0x10);
  auVar2 = vcvtdq2ps_avx(auVar17);
  auVar17 = *(undefined1 (*) [16])(param_5 + 0x30);
  fVar22 = auVar21._0_4_;
  auVar25._0_4_ = fVar22 * fVar22;
  fVar23 = auVar21._4_4_;
  auVar25._4_4_ = fVar23 * fVar23;
  fVar24 = auVar21._8_4_;
  auVar25._8_4_ = fVar24 * fVar24;
  fVar6 = auVar21._12_4_;
  auVar25._12_4_ = fVar6 * fVar6;
  auVar25 = vblendps_avx(auVar25,auVar27,8);
  auVar25 = vhaddps_avx(auVar25,auVar25);
  auVar25 = vhaddps_avx(auVar25,auVar25);
  if (_DAT_145fc6ed8 < auVar25._0_4_) {
    auVar21 = vrsqrtps_avx(auVar25);
    fVar3 = auVar21._0_4_;
    fVar4 = auVar21._4_4_;
    fVar5 = auVar21._8_4_;
    fVar7 = auVar21._12_4_;
    auVar28 = vcmpps_avx(auVar27,auVar25,1);
    auVar21._0_4_ =
         auVar28._0_4_ &
         (uint)(((fVar3 * fVar3 * auVar25._0_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar3 + fVar3)
               * fVar22);
    auVar21._4_4_ =
         auVar28._4_4_ &
         (uint)(((fVar4 * fVar4 * auVar25._4_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar4 + fVar4)
               * fVar23);
    auVar21._8_4_ =
         auVar28._8_4_ &
         (uint)(((fVar5 * fVar5 * auVar25._8_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar5 + fVar5)
               * fVar24);
    auVar21._12_4_ =
         auVar28._12_4_ &
         (uint)(((fVar7 * fVar7 * auVar25._12_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar7 + fVar7)
               * fVar6);
  }
  fVar22 = auVar17._0_4_;
  auVar28._0_4_ = fVar22 * fVar22;
  fVar23 = auVar17._4_4_;
  auVar28._4_4_ = fVar23 * fVar23;
  fVar24 = auVar17._8_4_;
  auVar28._8_4_ = fVar24 * fVar24;
  fVar6 = auVar17._12_4_;
  auVar28._12_4_ = fVar6 * fVar6;
  auVar2 = vshufpd_avx(auVar2,auVar2,3);
  auVar25 = vblendps_avx(auVar28,auVar27,8);
  auVar25 = vhaddps_avx(auVar25,auVar25);
  auVar25 = vhaddps_avx(auVar25,auVar25);
  if (_DAT_145fc6ed8 < auVar25._0_4_) {
    auVar17 = vrsqrtps_avx(auVar25);
    fVar3 = auVar17._0_4_;
    fVar4 = auVar17._4_4_;
    fVar5 = auVar17._8_4_;
    fVar7 = auVar17._12_4_;
    auVar27 = vcmpps_avx(ZEXT816(0) << 0x20,auVar25,1);
    auVar17._0_4_ =
         auVar27._0_4_ &
         (uint)(((fVar3 * fVar3 * auVar25._0_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar3 + fVar3)
               * fVar22);
    auVar17._4_4_ =
         auVar27._4_4_ &
         (uint)(((fVar4 * fVar4 * auVar25._4_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar4 + fVar4)
               * fVar23);
    auVar17._8_4_ =
         auVar27._8_4_ &
         (uint)(((fVar5 * fVar5 * auVar25._8_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar5 + fVar5)
               * fVar24);
    auVar17._12_4_ =
         auVar27._12_4_ &
         (uint)(((fVar7 * fVar7 * auVar25._12_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar7 + fVar7)
               * fVar6);
  }
  auVar26 = ZEXT1664(CONCAT412(auVar2._12_4_ * _UNK_146159c9c + auVar18._12_4_,
                               CONCAT48(auVar2._8_4_ * _UNK_146159c98 + auVar18._8_4_,
                                        CONCAT44(auVar2._4_4_ * _UNK_146159c94 + auVar18._4_4_,
                                                 auVar2._0_4_ * _DAT_146159c90 + auVar18._0_4_))));
  vshufps_avx(auVar21,auVar21,0x55);
  vshufps_avx(auVar21,auVar21,0xaa);
  vshufps_avx(auVar17,auVar17,0x55);
  vshufps_avx(auVar17,auVar17,0xaa);
  uStack_78 = unaff_XMM7_Qa;
  uStack_70 = unaff_XMM7_Qb;
  uStack_68 = unaff_XMM8_Qa;
  uStack_60 = unaff_XMM8_Qb;
  uStack_50 = unaff_XMM9_Qb;
  auStack_48[0] = unaff_XMM10_Qa;
  uStack_80._0_4_ = unaff_XMM6_Dc;
  func_0x000144e50cc0(param_2);
  fVar22 = *(float *)(param_5 + 0x2c);
  uVar10 = 0;
  uVar9 = 0;
  if ((param_2[0x36][6] == '\0') && (*(longlong *)(param_2[0x28] + 8) != 0)) {
    uVar9 = (uint)(*(char *)(*(longlong *)(*(longlong *)(param_2[0x28] + 8) + 0xe8) + 0x30) ==
                  '\x02') << 3;
  }
  uVar1 = *(uint *)(param_5 + 0x98);
  *(uint *)(param_2[8] + 4) = (uint)*(byte *)(param_5 + 0x11d);
  *(uint *)(param_2[7] + 0xc) = uVar9 | param_4 | uVar1;
  *param_2 = auVar26._0_16_;
  *(float *)(param_2[4] + 4) = param_3 * fVar22;
  param_2[0x36][0] = *(undefined1 *)(param_5 + 0x118);
  *(undefined8 *)(param_2[0x35] + 8) = *(undefined8 *)(param_5 + 0x100);
  uVar9 = *(uint *)(param_1 + 0xa0);
  auVar26._0_8_ = FUN_144ff5cf0(param_2,uVar9);
  auVar26._8_56_ = extraout_var;
  auVar18 = auVar26._0_16_;
  if ((uVar9 >> 0x11 & 1) != 0) {
    uVar10 = func_0x00014074f6d0(*(undefined4 *)(param_1 + 0xa4));
    auVar19._8_56_ = extraout_var_00;
    auVar19._0_8_ = extraout_XMM0_Qa;
    auVar18 = auVar19._0_16_;
  }
  *(undefined4 *)(param_2[0x34] + 0xc) = uVar10;
  if ((param_2[0x36][6] == '\0') && (lVar15 = *(longlong *)(param_2[0x28] + 8), lVar15 != 0)) {
    lVar14 = *(longlong *)(lVar15 + 0xe8);
    bVar16 = param_2[0x3c][2] & 0xfc;
    param_2[0x3c][2] = bVar16;
    lVar13 = lRam0000000149f361d0;
    auVar18 = vpinsrw_avx(auVar18,(uint)*(ushort *)(param_5 + 0x68),0);
    cVar8 = func_0x00014509f460(auVar18._0_8_);
    if (cVar8 != '\0') {
      lVar11 = func_0x00014509f480(*(undefined4 *)(lVar14 + 0x9c));
      if (lVar11 != 0) {
        puVar12 = (undefined8 *)
                  func_0x000144e9db80(*(undefined4 *)(lVar11 + 0x14),*(undefined8 *)(lVar11 + 0x18),
                                      *(undefined4 *)(param_5 + 0xa0));
        if (puVar12 != (undefined8 *)0x0) {
          lVar11 = func_0x000144e9db60();
          lVar13 = func_0x000144e9db70();
          param_2[0x3c][2] = bVar16 | 1;
          uStack_68 = *(undefined8 *)*param_2;
          uStack_60 = *(undefined8 *)(*param_2 + 8);
          FUN_144e9dca0(puVar12,&uStack_78,&uStack_68);
          *(ulonglong *)(param_2[0x2c] + 0xc) = uStack_78;
          *(ulonglong *)(param_2[0x2d] + 4) = uStack_78;
          if ((param_2[7][0xc] & 8) != 0) {
            lVar14 = func_0x000144e9dbe0(*(undefined4 *)(lVar14 + 0x9c));
            if (lVar14 != 0) {
              lVar11 = FUN_144e9dc30(*(undefined4 *)(lVar14 + 0x6c),*(undefined8 *)(lVar14 + 0x70),
                                     *(uint *)(param_5 + 0xa0) & 0x7f);
              auVar20._8_56_ = extraout_var_01;
              auVar20._0_8_ = extraout_XMM0_Qa_00;
              auVar18 = vpinsrw_avx(auVar20._0_16_,(uint)*(ushort *)((longlong)puVar12 + 0x24),0);
              func_0x000144e9de00(*puVar12,auVar18._0_8_);
              lVar13 = func_0x000144e9dbc0();
              FUN_144e9de50(puVar12,&uStack_70);
              *(undefined8 *)(param_2[0x2d] + 4) = uStack_70;
            }
          }
          if ((*(byte *)((longlong)puVar12 + 0x27) & 0x20) != 0) {
            FUN_1400603b0(puVar12,auStack_48);
            *(undefined8 *)(param_2[0x2d] + 4) = auStack_48[0];
          }
          lVar14 = _DAT_14a943aa8;
          *(int *)(param_2[0x2d] + 0xc) =
               (int)((ulonglong)
                     (*(longlong *)(*(longlong *)(lVar11 + 0x28) + 0x18) - _DAT_14a943aa8) >> 5);
          *(int *)param_2[0x2e] =
               (int)((ulonglong)(*(longlong *)(*(longlong *)(lVar13 + 0x28) + 0x18) - lVar14) >> 5);
        }
      }
    }
    if (*(char *)(lVar15 + 0x30) == '\t') {
      uStack_78 = CONCAT44(uStack_78._4_4_,0xffffffff);
      uStack_80._0_4_ = (uint)uStack_80 & 0xffffff;
      uStack_80 = (ulonglong)(uint)uStack_80;
      lVar15 = FUN_1400601e0(lVar15,&uStack_78,(longlong)&uStack_80 + 4,(longlong)&uStack_80 + 3);
      if ((lVar15 == 0) || (*(longlong *)(lVar15 + 0x50) == 0)) {
        if (*(longlong *)(param_5 + 0x48) != 0) {
          lVar15 = FUN_140060170(*(undefined4 *)(*(longlong *)(param_5 + 0x48) + 0x30));
          if (lVar15 != 0) {
            auVar18 = vpmovzxbd_avx(ZEXT416(*(uint *)(lVar15 + 0x20)));
            fVar22 = _DAT_14615a130 * *(float *)(param_2[1] + 4);
            fVar23 = _DAT_14615a130 * *(float *)(param_2[1] + 8);
            fVar24 = _DAT_14615a130 * *(float *)(param_2[1] + 0xc);
            auVar18 = vcvtdq2ps_avx(auVar18);
            *(float *)param_2[1] = _DAT_14615a130 * *(float *)param_2[1] * auVar18._0_4_;
            *(float *)(param_2[1] + 4) = fVar22 * auVar18._4_4_;
            *(float *)(param_2[1] + 8) = fVar23 * auVar18._8_4_;
            *(float *)(param_2[1] + 0xc) = fVar24 * auVar18._12_4_;
          }
        }
      }
      else if (uStack_80._3_1_ == '\x01') {
        *(undefined4 *)(param_2[0x2b] + 8) = uStack_80._4_4_;
      }
      else {
        func_0x0001400602c0(uStack_78 & 0xffffffff);
        param_2[0x3c][2] = param_2[0x3c][2] | 2;
        func_0x000140060340(*(undefined8 *)(lVar15 + 0x50),*(undefined8 *)(lVar15 + 0x1a0),
                            &uStack_50);
        *(undefined8 *)(param_2[0x2c] + 0xc) = uStack_50;
        lVar14 = _DAT_14a943aa8;
        *(int *)(param_2[0x2d] + 0xc) =
             (int)((ulonglong)
                   (*(longlong *)(*(longlong *)(*(longlong *)(lVar15 + 0x1a0) + 0x28) + 0x18) -
                   _DAT_14a943aa8) >> 5);
        *(int *)param_2[0x2e] =
             (int)((ulonglong)(*(longlong *)(*(longlong *)(lVar13 + 0x28) + 0x18) - lVar14) >> 5);
      }
    }
    return;
  }
  return;
}

