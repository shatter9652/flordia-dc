// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14005f280  size: 335 bytes
// Name:    FUN_14005f280
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14005f280(longlong param_1,float *param_2,ulonglong param_3,undefined4 param_4)

{
  ushort uVar1;
  longlong lVar2;
  float fVar3;
  float *pfVar6;
  ulonglong uVar7;
  uint uVar8;
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar4;
  float fVar5;
  
  pfVar6 = (float *)func_0x000144ea0c70(param_4);
  fVar3 = *pfVar6;
  fVar5 = pfVar6[1];
  fVar4 = pfVar6[2];
  fVar9 = pfVar6[3];
  uVar1 = *(ushort *)
           (*(longlong *)
             (*(longlong *)(*(longlong *)(param_1 + 0x80) + 0x10) +
             (ulonglong)((uint)((param_3 & 0xffffffff) >> 0xd) & 0x7f0)) +
           (ulonglong)((uint)param_3 >> 4 & 0x1fff) * 2);
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    uVar8 = (uVar1 >> 1) / 0x555;
    lVar2 = *(longlong *)
             (*(longlong *)(*(longlong *)(param_1 + 0x70) + 0x10) + (ulonglong)(uVar8 << 4));
    if (lVar2 != 0) {
      uVar7 = (ulonglong)((uint)uVar1 + uVar8 * -0xaaa);
      auVar11 = vpinsrw_avx(ZEXT416(*(uint *)(lVar2 + uVar7 * 6)),
                            (uint)*(ushort *)(lVar2 + 4 + uVar7 * 6),2);
      pfVar6 = *(float **)(param_1 + 0xe0);
      auVar11 = vpshufb_avx(auVar11,_DAT_14615d060);
      auVar12 = vcvtdq2ps_avx(auVar11);
      auVar11._0_4_ = auVar12._0_4_ * _DAT_14615ca94 * *(float *)(param_1 + 0x60) + *pfVar6;
      auVar11._4_4_ = auVar12._4_4_ * _DAT_14615ca94 * *(float *)(param_1 + 100) + pfVar6[1];
      auVar11._8_4_ = auVar12._8_4_ * _DAT_14615ca94 * *(float *)(param_1 + 0x68) + pfVar6[2];
      auVar11._12_4_ = auVar12._12_4_ * _DAT_14615ca94 * *(float *)(param_1 + 0x6c) + pfVar6[3];
      goto LAB_14005f336;
    }
  }
  auVar11 = *(undefined1 (*) [16])(*(longlong *)(param_1 + 0x78) + (ulonglong)uVar1 * 0x10);
LAB_14005f336:
  auVar12._0_4_ = fVar3 * _DAT_14615e450;
  auVar12._4_4_ = fVar5 * _UNK_14615e454;
  auVar12._8_4_ = fVar4 * _UNK_14615e458;
  auVar12._12_4_ = fVar9 * _UNK_14615e45c;
  auVar13._0_12_ = ZEXT812(0);
  auVar13._12_4_ = 0;
  auVar12 = vblendps_avx(auVar12,auVar13,8);
  auVar12 = vhaddps_avx(auVar12,auVar12);
  auVar12 = vhaddps_avx(auVar12,auVar12);
  auVar14._0_4_ = (uint)auVar12._0_4_ ^ _DAT_145fc6f10;
  auVar14._4_4_ = auVar12._4_4_ ^ _DAT_145fc6f10;
  auVar14._8_4_ = auVar12._8_4_ ^ _DAT_145fc6f10;
  auVar14._12_4_ = auVar12._12_4_ ^ _DAT_145fc6f10;
  auVar14 = vmaxss_avx(auVar14,auVar12);
  if (auVar14._0_4_ <= _DAT_145fc6f00) {
    fVar3 = (float)vextractps_avx(auVar11,2);
    param_2[2] = fVar3;
  }
  else {
    auVar15._0_4_ = *param_2 * fVar3;
    auVar15._4_4_ = param_2[1] * fVar5;
    auVar15._8_4_ = param_2[2] * fVar4;
    auVar15._12_4_ = param_2[3] * fVar9;
    auVar10._0_4_ = auVar11._0_4_ * fVar3;
    auVar10._4_4_ = auVar11._4_4_ * fVar5;
    auVar10._8_4_ = auVar11._8_4_ * fVar4;
    auVar10._12_4_ = auVar11._12_4_ * fVar9;
    auVar11 = vblendps_avx(auVar15,auVar13,8);
    auVar14 = vblendps_avx(auVar10,auVar13,8);
    auVar11 = vhaddps_avx(auVar11,auVar11);
    auVar14 = vhaddps_avx(auVar14,auVar14);
    auVar11 = vhaddps_avx(auVar11,auVar11);
    auVar14 = vhaddps_avx(auVar14,auVar14);
    fVar9 = (auVar11._0_4_ - auVar14._0_4_) / auVar12._0_4_;
    fVar3 = fVar9 * _UNK_14615e4f4;
    fVar4 = fVar9 * _UNK_14615e4f8;
    fVar5 = fVar9 * _UNK_14615e4fc;
    *param_2 = fVar9 * _DAT_14615e4f0 + *param_2;
    param_2[1] = fVar3 + param_2[1];
    param_2[2] = fVar4 + param_2[2];
    param_2[3] = fVar5 + param_2[3];
  }
  return;
}

