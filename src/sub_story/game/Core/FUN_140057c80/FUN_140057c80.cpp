// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140057c80  size: 703 bytes
// Name:    FUN_140057c80
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145025b00, FUN_144e258f0, FUN_1400746e0, FUN_140047dc0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_140057c80(undefined1 (*param_1) [16],longlong *param_2,int param_3,undefined4 param_4,
                 undefined1 param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar16;
  float fVar17;
  undefined1 auVar14 [16];
  float fVar18;
  undefined1 auVar15 [16];
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  int iStack_34;
  
  uVar6 = _DAT_146159bc0;
  fVar26 = _DAT_145fc6edc;
  bVar3 = *(byte *)(param_2 + 6);
  if (bVar3 == 0xc) {
    lVar8 = param_2[0x22];
    fVar9 = *(float *)(lVar8 + 0xb0) + *(float *)(lVar8 + 0xa0);
    fVar10 = *(float *)(lVar8 + 0xb4) + *(float *)(lVar8 + 0xa4);
    fVar11 = *(float *)(lVar8 + 0xb8) + *(float *)(lVar8 + 0xa8);
    fVar12 = *(float *)(lVar8 + 0xbc) + *(float *)(lVar8 + 0xac);
LAB_140057cca:
    *param_1 = ZEXT416((uint)_DAT_145fc6ed8);
    uVar5 = _UNK_14614f7f8;
    uVar4 = _DAT_14614f7f0;
    *(undefined8 *)param_1[1] = uVar6;
    *(undefined8 *)(param_1[1] + 8) = 0;
    *(undefined8 *)param_1[2] = uVar4;
    *(undefined8 *)(param_1[2] + 8) = uVar5;
    *(float *)param_1[3] = fVar9 * fVar26;
    *(float *)(param_1[3] + 4) = fVar10 * fVar26;
    *(float *)(param_1[3] + 8) = fVar11 * fVar26;
    *(float *)(param_1[3] + 0xc) = fVar12 * fVar26;
    return -1;
  }
  if (bVar3 == 0xd) {
    lVar8 = param_2[0x22];
    fVar9 = *(float *)(lVar8 + 0x90) + *(float *)(lVar8 + 0x80);
    fVar10 = *(float *)(lVar8 + 0x94) + *(float *)(lVar8 + 0x84);
    fVar11 = *(float *)(lVar8 + 0x98) + *(float *)(lVar8 + 0x88);
    fVar12 = *(float *)(lVar8 + 0x9c) + *(float *)(lVar8 + 0x8c);
    goto LAB_140057cca;
  }
  if ((param_3 == 0) || ((0x1cU >> (bVar3 & 0x1f) & 1) == 0)) {
    if ((char)param_4 == '\0') {
      fVar26 = *(float *)(param_2 + 8);
      fVar9 = *(float *)((longlong)param_2 + 0x44);
      fVar10 = *(float *)(param_2 + 9);
      fVar11 = *(float *)((longlong)param_2 + 0x4c);
      auVar1 = *(undefined1 (*) [16])(param_2 + 0xe);
      fVar12 = *(float *)(param_2 + 10);
      fVar19 = *(float *)((longlong)param_2 + 0x54);
      fVar20 = *(float *)(param_2 + 0xb);
      fVar21 = *(float *)((longlong)param_2 + 0x5c);
      fVar22 = *(float *)(param_2 + 0xc);
      fVar23 = *(float *)((longlong)param_2 + 100);
      fVar24 = *(float *)(param_2 + 0xd);
      fVar25 = *(float *)((longlong)param_2 + 0x6c);
      auVar15 = vpunpckhwd_avx(auVar1,auVar1);
      auVar15 = vpsrad_avx(auVar15,0x10);
      auVar15 = vcvtdq2ps_avx(auVar15);
      auVar15 = vshufpd_avx(auVar15,auVar15,3);
      fVar13 = auVar15._0_4_ * _DAT_146159c90 + auVar1._0_4_;
      fVar16 = auVar15._4_4_ * _UNK_146159c94 + auVar1._4_4_;
      fVar17 = auVar15._8_4_ * _UNK_146159c98 + auVar1._8_4_;
      fVar18 = auVar15._12_4_ * _UNK_146159c9c + auVar1._12_4_;
    }
    else {
      auVar1 = *(undefined1 (*) [16])(param_2 + 10);
      auVar15 = *(undefined1 (*) [16])(param_2 + 0xc);
      auVar2 = *(undefined1 (*) [16])(param_2 + 0xe);
      auVar14 = vshufps_avx(auVar15,auVar1,0x33);
      auVar14 = vshufps_avx(auVar1,auVar14,0x8f);
      fVar26 = auVar14._0_4_ + _DAT_145fc6ed8;
      fVar9 = auVar14._4_4_ + _DAT_145fc6ed8;
      fVar10 = auVar14._8_4_ + _DAT_145fc6ed8;
      fVar11 = auVar14._12_4_ + _DAT_145fc6ed8;
      auVar14 = vpunpckhwd_avx(auVar2,auVar2);
      auVar14 = vpsrad_avx(auVar14,0x10);
      auVar14 = vcvtdq2ps_avx(auVar14);
      fVar12 = fVar26 * auVar1._0_4_;
      fVar19 = fVar9 * auVar1._4_4_;
      fVar20 = fVar10 * auVar1._8_4_;
      fVar21 = fVar11 * auVar1._12_4_;
      fVar22 = fVar26 * auVar15._0_4_;
      fVar23 = fVar9 * auVar15._4_4_;
      fVar24 = fVar10 * auVar15._8_4_;
      fVar25 = fVar11 * auVar15._12_4_;
      auVar1 = vshufpd_avx(auVar14,auVar14,3);
      fVar13 = auVar1._0_4_ * _DAT_146159c90 + auVar2._0_4_;
      fVar16 = auVar1._4_4_ * _UNK_146159c94 + auVar2._4_4_;
      fVar17 = auVar1._8_4_ * _UNK_146159c98 + auVar2._8_4_;
      fVar18 = auVar1._12_4_ * _UNK_146159c9c + auVar2._12_4_;
      fVar26 = fVar26 * *(float *)(param_2 + 8);
      fVar9 = fVar9 * *(float *)((longlong)param_2 + 0x44);
      fVar10 = fVar10 * *(float *)(param_2 + 9);
      fVar11 = fVar11 * *(float *)((longlong)param_2 + 0x4c);
    }
    *(float *)*param_1 = fVar26;
    *(float *)(*param_1 + 4) = fVar9;
    *(float *)(*param_1 + 8) = fVar10;
    *(float *)(*param_1 + 0xc) = fVar11;
    *(float *)param_1[1] = fVar12;
    *(float *)(param_1[1] + 4) = fVar19;
    *(float *)(param_1[1] + 8) = fVar20;
    *(float *)(param_1[1] + 0xc) = fVar21;
    *(float *)param_1[2] = fVar22;
    *(float *)(param_1[2] + 4) = fVar23;
    *(float *)(param_1[2] + 8) = fVar24;
    *(float *)(param_1[2] + 0xc) = fVar25;
    *(float *)param_1[3] = fVar13;
    *(float *)(param_1[3] + 4) = fVar16;
    *(float *)(param_1[3] + 8) = fVar17;
    *(float *)(param_1[3] + 0xc) = fVar18;
    return -1;
  }
  iStack_34 = -1;
  lVar8 = (**(code **)(*param_2 + 0xa8))(param_2);
  if (lVar8 == 0) {
    lVar8 = FUN_144e258f0(param_2);
    if (lVar8 == 0) goto LAB_140057e5f;
    FUN_140047dc0(*(undefined8 *)(*(longlong *)(*(longlong *)(lVar8 + 0x1a8) + 0x18) + 0x18),param_3
                  ,&iStack_34);
  }
  else {
    FUN_1400746e0(lVar8,param_3,&iStack_34);
  }
  iVar7 = iStack_34;
  if (iStack_34 != -1) {
    FUN_145025b00(param_1,param_2,iStack_34,param_4,param_5,1);
    return iVar7;
  }
LAB_140057e5f:
  if (((((param_2[5] == 0) || (lVar8 = *(longlong *)(param_2[5] + 8), lVar8 == 0)) ||
       (lVar8 = *(longlong *)(lVar8 + 0x18), lVar8 == 0)) ||
      ((*(short *)(lVar8 + 0x6c) != 1 || (*(int *)(*(longlong *)(lVar8 + 0x28) + 0x1c) != param_3)))
      ) && (param_3 != 0x6686685c)) {
    *(undefined8 *)param_1[2] = 0;
    *(undefined8 *)(param_1[2] + 8) = 0;
    *(undefined8 *)param_1[3] = 0;
    *(undefined8 *)(param_1[3] + 8) = 0;
    *(undefined8 *)*param_1 = 0;
    *(undefined8 *)(*param_1 + 8) = 0;
    *(undefined8 *)param_1[1] = 0;
    *(undefined8 *)(param_1[1] + 8) = 0;
    return -1;
  }
  if ((char)param_4 == '\0') {
    fVar26 = *(float *)(param_2 + 8);
    fVar9 = *(float *)((longlong)param_2 + 0x44);
    fVar10 = *(float *)(param_2 + 9);
    fVar11 = *(float *)((longlong)param_2 + 0x4c);
    auVar1 = *(undefined1 (*) [16])(param_2 + 0xe);
    fVar12 = *(float *)(param_2 + 10);
    fVar19 = *(float *)((longlong)param_2 + 0x54);
    fVar20 = *(float *)(param_2 + 0xb);
    fVar21 = *(float *)((longlong)param_2 + 0x5c);
    fVar22 = *(float *)(param_2 + 0xc);
    fVar23 = *(float *)((longlong)param_2 + 100);
    fVar24 = *(float *)(param_2 + 0xd);
    fVar25 = *(float *)((longlong)param_2 + 0x6c);
    auVar15 = vpunpckhwd_avx(auVar1,auVar1);
    auVar15 = vpsrad_avx(auVar15,0x10);
    auVar15 = vcvtdq2ps_avx(auVar15);
    auVar15 = vshufpd_avx(auVar15,auVar15,3);
    fVar13 = auVar15._0_4_ * _DAT_146159c90 + auVar1._0_4_;
    fVar16 = auVar15._4_4_ * _UNK_146159c94 + auVar1._4_4_;
    fVar17 = auVar15._8_4_ * _UNK_146159c98 + auVar1._8_4_;
    fVar18 = auVar15._12_4_ * _UNK_146159c9c + auVar1._12_4_;
  }
  else {
    auVar1 = *(undefined1 (*) [16])(param_2 + 10);
    auVar15 = *(undefined1 (*) [16])(param_2 + 0xc);
    auVar2 = *(undefined1 (*) [16])(param_2 + 0xe);
    auVar14 = vshufps_avx(auVar15,auVar1,0x33);
    auVar14 = vshufps_avx(auVar1,auVar14,0x8f);
    fVar26 = auVar14._0_4_ + _DAT_145fc6ed8;
    fVar9 = auVar14._4_4_ + _DAT_145fc6ed8;
    fVar10 = auVar14._8_4_ + _DAT_145fc6ed8;
    fVar11 = auVar14._12_4_ + _DAT_145fc6ed8;
    auVar14 = vpunpckhwd_avx(auVar2,auVar2);
    auVar14 = vpsrad_avx(auVar14,0x10);
    auVar14 = vcvtdq2ps_avx(auVar14);
    fVar12 = fVar26 * auVar1._0_4_;
    fVar19 = fVar9 * auVar1._4_4_;
    fVar20 = fVar10 * auVar1._8_4_;
    fVar21 = fVar11 * auVar1._12_4_;
    fVar22 = fVar26 * auVar15._0_4_;
    fVar23 = fVar9 * auVar15._4_4_;
    fVar24 = fVar10 * auVar15._8_4_;
    fVar25 = fVar11 * auVar15._12_4_;
    auVar1 = vshufpd_avx(auVar14,auVar14,3);
    fVar13 = auVar1._0_4_ * _DAT_146159c90 + auVar2._0_4_;
    fVar16 = auVar1._4_4_ * _UNK_146159c94 + auVar2._4_4_;
    fVar17 = auVar1._8_4_ * _UNK_146159c98 + auVar2._8_4_;
    fVar18 = auVar1._12_4_ * _UNK_146159c9c + auVar2._12_4_;
    fVar26 = fVar26 * *(float *)(param_2 + 8);
    fVar9 = fVar9 * *(float *)((longlong)param_2 + 0x44);
    fVar10 = fVar10 * *(float *)(param_2 + 9);
    fVar11 = fVar11 * *(float *)((longlong)param_2 + 0x4c);
  }
  *(float *)*param_1 = fVar26;
  *(float *)(*param_1 + 4) = fVar9;
  *(float *)(*param_1 + 8) = fVar10;
  *(float *)(*param_1 + 0xc) = fVar11;
  *(float *)param_1[1] = fVar12;
  *(float *)(param_1[1] + 4) = fVar19;
  *(float *)(param_1[1] + 8) = fVar20;
  *(float *)(param_1[1] + 0xc) = fVar21;
  *(float *)param_1[2] = fVar22;
  *(float *)(param_1[2] + 4) = fVar23;
  *(float *)(param_1[2] + 8) = fVar24;
  *(float *)(param_1[2] + 0xc) = fVar25;
  *(float *)param_1[3] = fVar13;
  *(float *)(param_1[3] + 4) = fVar16;
  *(float *)(param_1[3] + 8) = fVar17;
  *(float *)(param_1[3] + 0xc) = fVar18;
  return -1;
}

