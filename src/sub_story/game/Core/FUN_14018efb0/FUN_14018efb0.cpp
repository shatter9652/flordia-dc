// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14018efb0  size: 876 bytes
// Name:    FUN_14018efb0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14018f340, FUN_14018f3a0, FUN_14018f730, FUN_14018f560, FUN_14018fd00
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14018efb0(longlong param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float fVar13;
  longlong lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  ulonglong uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [64];
  undefined1 auVar24 [64];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  func_0x00014018f360();
  FUN_14018f730(param_1);
  auVar23 = ZEXT464(*(uint *)(param_1 + 0x62c));
  if (*(longlong *)(param_1 + 0x448) != 0) {
    fVar15 = (float)func_0x000144d9ff70(param_1 + 0x428,*(undefined4 *)(param_1 + 0x5f0));
    auVar3 = vmaxss_avx(ZEXT416(_DAT_14614f7d0),
                        ZEXT416((uint)(fVar15 * *(float *)(param_1 + 0x5c0))));
    *(int *)(param_1 + 0x5e0) = auVar3._0_4_;
  }
  auVar24 = ZEXT464(*(uint *)(param_1 + 0x628));
  fVar16 = (float)func_0x00014018f320(param_1 + 0x230,*(uint *)(param_1 + 0x628));
  uVar9 = FUN_14018f340(param_1 + 0x268,auVar24._0_8_);
  fVar17 = (float)func_0x00014018f320(param_1 + 0x2a0,auVar23._0_8_);
  uVar10 = FUN_14018f340(param_1 + 0x2d8,auVar23._0_8_);
  fVar18 = (float)func_0x00014018f320(param_1 + 0x310,auVar23._0_8_);
  uVar11 = FUN_14018f340(param_1 + 0x348,auVar23._0_8_);
  fVar19 = (float)func_0x00014018f320(param_1 + 0x380,auVar24._0_8_);
  uVar12 = FUN_14018f340(param_1 + 0x3b8,auVar24._0_8_);
  uVar20 = func_0x00014018f320(param_1 + 0x3f0,auVar23._0_8_);
  fVar8 = _DAT_14615b71c;
  fVar7 = _DAT_14615b718;
  fVar6 = _DAT_14615b714;
  fVar5 = _DAT_14615b710;
  fVar4 = _DAT_145fc6fb0;
  fVar15 = (float)((uint)fVar16 & 0x7fffff | 0x3f800000);
  fVar13 = (float)((uint)fVar17 & 0x7fffff | 0x3f800000);
  auVar21._0_12_ = ZEXT812(0);
  auVar21._12_4_ = 0;
  auVar3 = vcmpss_avx(auVar21,ZEXT416((uint)(fVar16 + _DAT_145fc6fb0)),2);
  auVar1 = vcmpss_avx(auVar21,ZEXT416((uint)(fVar17 + _DAT_145fc6fb0)),2);
  auVar22 = ZEXT416(_DAT_14615af00);
  auVar3 = vblendvps_avx(auVar22,ZEXT416((uint)((-(fVar15 * (fVar15 * _DAT_14615b714 -
                                                            _DAT_14615b710)) +
                                                (float)(int)(((uint)fVar16 >> 0x17) - 0x7f) +
                                                _DAT_14615b718) * _DAT_14615b71c)),auVar3);
  fVar15 = fVar18 + _DAT_145fc6fb0;
  *(int *)(param_1 + 0x60c) = auVar3._0_4_;
  *(undefined4 *)(param_1 + 0x610) = uVar9;
  fVar16 = (float)((uint)fVar18 & 0x7fffff | 0x3f800000);
  auVar2 = vcmpss_avx(auVar21,ZEXT416((uint)fVar15),2);
  auVar3 = vblendvps_avx(auVar22,ZEXT416((uint)((-(fVar13 * (fVar13 * fVar6 - fVar5)) +
                                                (float)(int)(((uint)fVar17 >> 0x17) - 0x7f) + fVar7)
                                               * fVar8)),auVar1);
  *(int *)(param_1 + 0x604) = auVar3._0_4_;
  *(undefined4 *)(param_1 + 0x608) = uVar10;
  fVar15 = (float)((uint)fVar19 & 0x7fffff | 0x3f800000);
  auVar1 = vcmpss_avx(auVar21,ZEXT416((uint)(fVar19 + fVar4)),2);
  auVar3 = vblendvps_avx(auVar22,ZEXT416((uint)((-(fVar16 * (fVar16 * fVar6 - fVar5)) +
                                                (float)(int)(((uint)fVar18 >> 0x17) - 0x7f) + fVar7)
                                               * fVar8)),auVar2);
  *(int *)(param_1 + 0x61c) = auVar3._0_4_;
  *(undefined4 *)(param_1 + 0x620) = uVar11;
  fVar13 = (float)((uint)(float)uVar20 & 0x7fffff | 0x3f800000);
  auVar3 = vblendvps_avx(auVar22,ZEXT416((uint)((-(fVar15 * (fVar15 * fVar6 - fVar5)) +
                                                (float)(int)(((uint)fVar19 >> 0x17) - 0x7f) + fVar7)
                                               * fVar8)),auVar1);
  *(int *)(param_1 + 0x614) = auVar3._0_4_;
  *(undefined4 *)(param_1 + 0x618) = uVar12;
  auVar3 = vcmpss_avx(auVar21,ZEXT416((uint)((float)uVar20 + fVar4)),2);
  auVar3 = vblendvps_avx(auVar22,ZEXT416((uint)((-(fVar13 * (fVar13 * fVar6 - fVar5)) +
                                                (float)(int)(((uint)(uVar20 >> 0x17) & 0x1ff) - 0x7f
                                                            ) + fVar7) * fVar8)),auVar3);
  *(int *)(param_1 + 0x624) = auVar3._0_4_;
  FUN_14018fd00(param_1);
  FUN_14018f560(param_1);
  FUN_14018f3a0(param_1);
  if (*(char *)(param_1 + 0xa08) == '\x01') {
    lVar14 = func_0x000144da3240(*(undefined8 *)(param_1 + 0x40));
    uStack_58 = *(undefined8 *)(lVar14 + 0x40);
    uStack_50 = *(undefined8 *)(lVar14 + 0x48);
    uStack_48 = *(undefined8 *)(lVar14 + 0x50);
    uStack_40 = *(undefined8 *)(lVar14 + 0x58);
    uStack_38 = *(undefined8 *)(lVar14 + 0x60);
    uStack_30 = *(undefined8 *)(lVar14 + 0x68);
    fVar15 = (float)FUN_1453f5f90(param_1 + 0x9b0,&uStack_58);
    *(float *)(param_1 + 0xacc) = fVar15;
    *(float *)(param_1 + 0x614) = fVar15 + *(float *)(param_1 + 0x614);
    fVar15 = (float)FUN_1453f5f90(param_1 + 0x790,&uStack_58,*(undefined4 *)(param_1 + 0x7f0));
    *(float *)(param_1 + 0xac0) = fVar15;
    *(float *)(param_1 + 0x61c) = fVar15 + *(float *)(param_1 + 0x61c);
  }
  return;
}

