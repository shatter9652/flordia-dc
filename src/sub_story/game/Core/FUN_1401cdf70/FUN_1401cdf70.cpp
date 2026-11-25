// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401cdf70  size: 297 bytes
// Name:    FUN_1401cdf70
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401cdf70(longlong param_1,longlong param_2,uint param_3,undefined8 *param_4)

{
  longlong *plVar1;
  bool bVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  uint uVar6;
  float fVar7;
  undefined4 uVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined1 auVar11 [16];
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  uVar10 = (ulonglong)(param_3 >> 0x10);
  plVar1 = *(longlong **)(param_1 + (ulonglong)*(ushort *)(param_2 + 4 + uVar10 * 8) * 8);
  uVar8 = (**(code **)(*plVar1 + 8))(plVar1);
  switch(uVar8) {
  case 0:
    lVar9 = (**(code **)(*plVar1 + 0x88))(plVar1);
    uVar6 = _DAT_145fc6f48;
    lVar9 = (ulonglong)((uint)*(ushort *)(param_2 + 2 + uVar10 * 8) * 0x60) + lVar9;
    *(undefined8 *)(lVar9 + 0x50) = *param_4;
    fVar12 = *(float *)(param_4 + 1);
    auVar4 = vcmpss_avx(ZEXT416((uint)fVar12),ZEXT416(uVar6),4);
    auVar11 = ZEXT416((uint)_DAT_145fc6f50);
    auVar5 = vcmpss_avx(ZEXT416((uint)fVar12),auVar11,1);
    auVar4 = vblendvps_avx(auVar11,ZEXT416((uint)(fVar12 * fVar12)),auVar4);
    auVar4 = vblendvps_avx(auVar11,auVar4,auVar5);
    fVar12 = auVar4._0_4_;
    bVar2 = NAN(_DAT_145fc6f50);
    bVar3 = fVar12 != _DAT_145fc6f50;
    *(float *)(lVar9 + 0x58) = fVar12;
    if ((bVar3) || (uVar8 = _UNK_14615a5bc, NAN(fVar12) || bVar2)) {
      fVar12 = *(float *)((longlong)param_4 + 0xc);
      auVar4 = vcmpss_avx(ZEXT416((uint)fVar12),ZEXT416(uVar6),4);
      auVar5 = vcmpss_avx(ZEXT416((uint)fVar12),auVar11,1);
      auVar4 = vblendvps_avx(auVar11,ZEXT416((uint)(fVar12 * fVar12)),auVar4);
      auVar4 = vblendvps_avx(auVar11,auVar4,auVar5);
      uVar8 = auVar4._0_4_;
    }
    *(undefined4 *)(lVar9 + 0x5c) = uVar8;
    return;
  case 1:
    lVar9 = (**(code **)(*plVar1 + 0x88))(plVar1);
    lVar9 = (ulonglong)((uint)*(ushort *)(param_2 + 2 + uVar10 * 8) * 0x30) + lVar9;
    break;
  case 2:
    lVar9 = (**(code **)(*plVar1 + 0x88))(plVar1);
    uVar6 = _DAT_145fc6f48;
    lVar9 = (ulonglong)((uint)*(ushort *)(param_2 + 2 + uVar10 * 8) * 0x90) + lVar9;
    *(undefined8 *)(lVar9 + 0x80) = *param_4;
    fVar12 = *(float *)(param_4 + 1);
    auVar4 = vcmpss_avx(ZEXT416((uint)fVar12),ZEXT416(uVar6),4);
    auVar11 = ZEXT416((uint)_DAT_145fc6f50);
    auVar5 = vcmpss_avx(ZEXT416((uint)fVar12),auVar11,1);
    auVar4 = vblendvps_avx(auVar11,ZEXT416((uint)(fVar12 * fVar12)),auVar4);
    auVar4 = vblendvps_avx(auVar11,auVar4,auVar5);
    fVar12 = auVar4._0_4_;
    bVar2 = NAN(_DAT_145fc6f50);
    bVar3 = fVar12 != _DAT_145fc6f50;
    *(float *)(lVar9 + 0x88) = fVar12;
    if ((bVar3) || (uVar8 = _UNK_14615a5bc, NAN(fVar12) || bVar2)) {
      fVar12 = *(float *)((longlong)param_4 + 0xc);
      auVar4 = vcmpss_avx(ZEXT416((uint)fVar12),ZEXT416(uVar6),4);
      auVar5 = vcmpss_avx(ZEXT416((uint)fVar12),auVar11,1);
      auVar4 = vblendvps_avx(auVar11,ZEXT416((uint)(fVar12 * fVar12)),auVar4);
      auVar4 = vblendvps_avx(auVar11,auVar4,auVar5);
      uVar8 = auVar4._0_4_;
    }
    *(undefined4 *)(lVar9 + 0x8c) = uVar8;
    return;
  case 3:
    lVar9 = (**(code **)(*plVar1 + 0x88))(plVar1);
    lVar9 = (ulonglong)((uint)*(ushort *)(param_2 + 2 + uVar10 * 8) * 0x30) + lVar9;
    break;
  case 4:
    lVar9 = (**(code **)(*plVar1 + 0x88))(plVar1);
    fVar7 = _DAT_145fc6f50;
    uVar6 = _DAT_145fc6f48;
    lVar9 = (ulonglong)((uint)*(ushort *)(param_2 + 2 + uVar10 * 8) * 0x30) + lVar9;
    *(undefined8 *)(lVar9 + 0x14) = *param_4;
    fVar12 = *(float *)(param_4 + 1);
    auVar4 = vcmpss_avx(ZEXT416((uint)fVar12),ZEXT416(uVar6),4);
    auVar13 = ZEXT416((uint)fVar7);
    auVar5 = vcmpss_avx(ZEXT416((uint)fVar12),auVar13,1);
    auVar4 = vblendvps_avx(auVar13,ZEXT416((uint)(fVar12 * fVar12)),auVar4);
    auVar4 = vblendvps_avx(auVar13,auVar4,auVar5);
    *(int *)(lVar9 + 0x1c) = auVar4._0_4_;
    auVar5 = vcmpss_avx(auVar4,auVar13,0);
    fVar12 = *(float *)((longlong)param_4 + 0xc);
    auVar4 = vcmpss_avx(ZEXT416((uint)fVar12),ZEXT416(uVar6),4);
    auVar11 = vcmpss_avx(ZEXT416((uint)fVar12),auVar13,1);
    auVar4 = vblendvps_avx(auVar13,ZEXT416((uint)(fVar12 * fVar12)),auVar4);
    auVar14._4_4_ = _UNK_14615a5bc;
    auVar14._0_4_ = _UNK_14615a5bc;
    auVar14._8_4_ = _UNK_14615a5bc;
    auVar14._12_4_ = _UNK_14615a5bc;
    auVar4 = vblendvps_avx(auVar13,auVar4,auVar11);
    auVar4 = vblendvps_avx(auVar4,auVar14,auVar5);
    *(int *)(lVar9 + 0x20) = auVar4._0_4_;
    return;
  default:
    return;
  }
  fVar7 = _DAT_145fc6f50;
  uVar6 = _DAT_145fc6f48;
  *(undefined8 *)(lVar9 + 0x20) = *param_4;
  fVar12 = *(float *)(param_4 + 1);
  auVar4 = vcmpss_avx(ZEXT416((uint)fVar12),ZEXT416(uVar6),4);
  auVar14 = ZEXT416((uint)fVar7);
  auVar5 = vcmpss_avx(ZEXT416((uint)fVar12),auVar14,1);
  auVar4 = vblendvps_avx(auVar14,ZEXT416((uint)(fVar12 * fVar12)),auVar4);
  auVar4 = vblendvps_avx(auVar14,auVar4,auVar5);
  *(int *)(lVar9 + 0x28) = auVar4._0_4_;
  auVar5 = vcmpss_avx(auVar4,auVar14,0);
  fVar12 = *(float *)((longlong)param_4 + 0xc);
  auVar4 = vcmpss_avx(ZEXT416((uint)fVar12),ZEXT416(uVar6),4);
  auVar11 = vcmpss_avx(ZEXT416((uint)fVar12),auVar14,1);
  auVar4 = vblendvps_avx(auVar14,ZEXT416((uint)(fVar12 * fVar12)),auVar4);
  auVar13._4_4_ = _UNK_14615a5bc;
  auVar13._0_4_ = _UNK_14615a5bc;
  auVar13._8_4_ = _UNK_14615a5bc;
  auVar13._12_4_ = _UNK_14615a5bc;
  auVar4 = vblendvps_avx(auVar14,auVar4,auVar11);
  auVar4 = vblendvps_avx(auVar4,auVar13,auVar5);
  *(int *)(lVar9 + 0x2c) = auVar4._0_4_;
  return;
}

