// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14002cb70  size: 222 bytes
// Name:    FUN_14002cb70
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e25a70, FUN_144e25cf0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14002cb70(undefined1 (*param_1) [16],longlong param_2,uint param_3)

{
  float fVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 uVar9;
  short sVar10;
  longlong lVar11;
  undefined1 (*pauVar12) [16];
  ulonglong uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  if (((param_3 != 0xffffffff) && (lVar3 = *(longlong *)(param_2 + 0x170), lVar3 != 0)) &&
     (lVar4 = *(longlong *)(lVar3 + 0x1d8), lVar4 != 0)) {
    uVar13 = (ulonglong)*(ushort *)(*(longlong *)(lVar3 + 0x1c8) + (ulonglong)param_3 * 6);
    if ((int)*(short *)(lVar4 + 6 + uVar13 * 10) == param_3) {
      uStack_50 = 0x14002cbd3;
      lVar11 = FUN_144e25a70(param_2,param_3);
      uStack_50 = 0x14002cbe0;
      sVar10 = FUN_144e25cf0(lVar11,param_3);
      uStack_50 = 0x14002cbef;
      pauVar12 = (undefined1 (*) [16])func_0x000144e34fb0(lVar3,0,lVar4 + uVar13 * 10);
      plVar5 = *(longlong **)(*(longlong *)(lVar11 + 0x1a8) + 0x40);
      if ((plVar5 == (longlong *)0x0) ||
         (lVar3 = *(longlong *)(*(longlong *)(*plVar5 + 8) + (ulonglong)(uint)(int)sVar10 * 8),
         lVar3 == 0)) {
        *param_1 = ZEXT416((uint)_DAT_145fc6ed8);
        *(undefined8 *)param_1[1] = _DAT_146159bc0;
        *(undefined8 *)(param_1[1] + 8) = 0;
        uVar9 = _UNK_14614f7f8;
        *(undefined8 *)param_1[2] = _DAT_14614f7f0;
        *(undefined8 *)(param_1[2] + 8) = uVar9;
        param_1[3] = ZEXT816(0) << 0x20;
      }
      else {
        uStack_78 = *(undefined8 *)(lVar3 + 0x10);
        uStack_70 = *(undefined8 *)(lVar3 + 0x18);
        uStack_68 = *(undefined8 *)(lVar3 + 0x20);
        uStack_60 = *(undefined8 *)(lVar3 + 0x28);
        uStack_58 = *(undefined8 *)(lVar3 + 0x30);
        uStack_50 = *(undefined8 *)(lVar3 + 0x38);
        uStack_48 = *(undefined8 *)(lVar3 + 0x40);
        uStack_40 = *(undefined8 *)(lVar3 + 0x48);
        uStack_b8 = *(undefined8 *)(lVar3 + 0x50);
        uStack_b0 = *(undefined8 *)(lVar3 + 0x58);
        uStack_a8 = *(undefined8 *)(lVar3 + 0x60);
        uStack_a0 = *(undefined8 *)(lVar3 + 0x68);
        uStack_98 = *(undefined8 *)(lVar3 + 0x70);
        uStack_90 = *(undefined8 *)(lVar3 + 0x78);
        uStack_88 = *(undefined8 *)(lVar3 + 0x80);
        uStack_80 = *(undefined8 *)(lVar3 + 0x88);
        auVar2 = *pauVar12;
        fVar1 = *(float *)(*pauVar12 + 0xc);
        uStack_c8 = *(undefined8 *)pauVar12[1];
        uStack_c0 = *(undefined8 *)(pauVar12[1] + 8);
        auVar14._0_4_ = auVar2._0_4_ + auVar2._0_4_;
        auVar14._4_4_ = auVar2._4_4_ + auVar2._4_4_;
        auVar14._8_4_ = auVar2._8_4_ + auVar2._8_4_;
        auVar14._12_4_ = auVar2._12_4_ + auVar2._12_4_;
        auVar6 = vshufps_avx(auVar2,auVar2,0xc9);
        auVar2 = vshufps_avx(auVar2,auVar2,0xd2);
        fStack_ec = *(float *)pauVar12[2];
        auVar7 = vshufps_avx(auVar14,auVar14,0xc9);
        auVar8 = vshufps_avx(auVar14,auVar14,0xd2);
        auVar16._0_4_ = auVar2._0_4_ * auVar14._0_4_ + auVar7._0_4_ * fVar1;
        auVar16._4_4_ = auVar2._4_4_ * auVar14._4_4_ + auVar7._4_4_ * fVar1;
        auVar16._8_4_ = auVar2._8_4_ * auVar14._8_4_ + auVar7._8_4_ * fVar1;
        auVar16._12_4_ = auVar2._12_4_ * auVar14._12_4_ + auVar7._12_4_ * fVar1;
        auVar15._0_4_ = -(fVar1 * auVar8._0_4_) + auVar6._0_4_ * auVar14._0_4_;
        auVar15._4_4_ = -(fVar1 * auVar8._4_4_) + auVar6._4_4_ * auVar14._4_4_;
        auVar15._8_4_ = -(fVar1 * auVar8._8_4_) + auVar6._8_4_ * auVar14._8_4_;
        auVar15._12_4_ = -(fVar1 * auVar8._12_4_) + auVar6._12_4_ * auVar14._12_4_;
        auVar17._0_4_ =
             -(auVar8._0_4_ * auVar2._0_4_) - (auVar6._0_4_ * auVar7._0_4_ - _DAT_145fc6ed8);
        auVar17._4_4_ =
             -(auVar8._4_4_ * auVar2._4_4_) - (auVar6._4_4_ * auVar7._4_4_ - _DAT_145fc6ed8);
        auVar17._8_4_ =
             -(auVar8._8_4_ * auVar2._8_4_) - (auVar6._8_4_ * auVar7._8_4_ - _DAT_145fc6ed8);
        auVar17._12_4_ =
             -(auVar8._12_4_ * auVar2._12_4_) - (auVar6._12_4_ * auVar7._12_4_ - _DAT_145fc6ed8);
        auVar2 = vblendps_avx(auVar16,auVar15,2);
        auVar6 = vblendps_avx(auVar17,auVar16,2);
        auVar7 = vblendps_avx(auVar15,auVar17,2);
        auVar2 = vblendps_avx(auVar17,auVar2,3);
        auVar6 = vblendps_avx(auVar15,auVar6,3);
        auVar7 = vblendps_avx(auVar16,auVar7,3);
        fStack_f8 = fStack_ec * auVar6._0_4_;
        fStack_f4 = fStack_ec * auVar6._4_4_;
        fStack_f0 = fStack_ec * auVar6._8_4_;
        fStack_ec = fStack_ec * auVar6._12_4_;
        fStack_dc = *(float *)(pauVar12[2] + 4);
        fStack_e8 = fStack_dc * auVar7._0_4_;
        fStack_e4 = fStack_dc * auVar7._4_4_;
        fStack_e0 = fStack_dc * auVar7._8_4_;
        fStack_dc = fStack_dc * auVar7._12_4_;
        fStack_cc = *(float *)(pauVar12[2] + 8);
        fStack_d8 = fStack_cc * auVar2._0_4_;
        fStack_d4 = fStack_cc * auVar2._4_4_;
        fStack_d0 = fStack_cc * auVar2._8_4_;
        fStack_cc = fStack_cc * auVar2._12_4_;
        FUN_14536c8a0(param_1,&fStack_f8,&uStack_78,&uStack_b8);
      }
      return;
    }
  }
  *param_1 = ZEXT416((uint)_DAT_145fc6ed8);
  *(undefined8 *)param_1[1] = _DAT_146159bc0;
  *(undefined8 *)(param_1[1] + 8) = 0;
  uVar9 = _UNK_14614f7f8;
  *(undefined8 *)param_1[2] = _DAT_14614f7f0;
  *(undefined8 *)(param_1[2] + 8) = uVar9;
  param_1[3] = ZEXT816(0) << 0x20;
  return;
}

