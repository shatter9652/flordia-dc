// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140194250  size: 512 bytes
// Name:    FUN_140194250
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1450498e0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140194250(longlong param_1,undefined4 param_2,undefined1 (*param_3) [16],
                  undefined1 (*param_4) [16],undefined1 (*param_5) [16],undefined1 (*param_6) [16],
                  undefined4 *param_7,undefined4 *param_8,undefined4 *param_9)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [64];
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  uVar3 = FUN_1450498e0(param_1,0x1c,param_2);
  lVar2 = *(longlong *)(param_1 + 0x18);
  auVar8 = ZEXT864(*(ulonglong *)(lVar1 + (ulonglong)uVar3));
  uVar3 = FUN_1450498e0(param_1,0x1d,param_2);
  auVar5 = vmovhps_avx(auVar8._0_16_,*(undefined8 *)(lVar2 + (ulonglong)uVar3));
  *param_3 = auVar5;
  lVar1 = *(longlong *)(param_1 + 0x18);
  uVar3 = FUN_1450498e0(param_1,0x1e,param_2);
  lVar2 = *(longlong *)(param_1 + 0x18);
  auVar8 = ZEXT864(*(ulonglong *)(lVar1 + (ulonglong)uVar3));
  uVar3 = FUN_1450498e0(param_1,0x1f,param_2);
  auVar5 = vmovhps_avx(auVar8._0_16_,*(undefined8 *)(lVar2 + (ulonglong)uVar3));
  *param_4 = auVar5;
  lVar1 = *(longlong *)(param_1 + 0x18);
  uVar3 = FUN_1450498e0(param_1,4,param_2);
  fVar13 = _DAT_14616ff24;
  fVar9 = _DAT_14616fac4;
  auVar7._4_4_ = _DAT_14615c510;
  auVar7._0_4_ = _DAT_14615c510;
  auVar7._8_4_ = _DAT_14615c510;
  auVar7._12_4_ = _DAT_14615c510;
  auVar8 = ZEXT1664(auVar7);
  auVar5 = vpand_avx(ZEXT416(*(uint *)(lVar1 + (ulonglong)uVar3)),auVar7);
  auVar5 = vcvtdq2ps_avx(auVar5);
  auVar4._0_4_ = _DAT_14616fac4 * auVar5._0_4_ + _DAT_14616ff24;
  auVar4._4_4_ = _DAT_14616fac4 * auVar5._4_4_ + _DAT_14616ff24;
  auVar4._8_4_ = _DAT_14616fac4 * auVar5._8_4_ + _DAT_14616ff24;
  auVar4._12_4_ = _DAT_14616fac4 * auVar5._12_4_ + _DAT_14616ff24;
  auVar5 = vshufps_avx(auVar4,auVar4,0x24);
  *param_5 = auVar5;
  lVar1 = *(longlong *)(param_1 + 0x18);
  fVar10 = fVar9;
  fVar11 = fVar9;
  fVar12 = fVar9;
  fVar14 = fVar13;
  fVar15 = fVar13;
  fVar16 = fVar13;
  uVar3 = FUN_1450498e0(param_1,8,param_2);
  uVar3 = *(uint *)(lVar1 + (ulonglong)uVar3);
  auVar5._4_4_ = uVar3;
  auVar5._0_4_ = uVar3;
  auVar5._8_4_ = uVar3;
  auVar5._12_4_ = uVar3;
  auVar5 = vpsrlvd_avx2(auVar5,_DAT_14616ff30);
  auVar5 = vpand_avx(auVar5,auVar8._0_16_);
  auVar5 = vcvtdq2ps_avx(auVar5);
  auVar6._0_4_ = fVar9 * auVar5._0_4_ + fVar13;
  auVar6._4_4_ = fVar10 * auVar5._4_4_ + fVar14;
  auVar6._8_4_ = fVar11 * auVar5._8_4_ + fVar15;
  auVar6._12_4_ = fVar12 * auVar5._12_4_ + fVar16;
  auVar5 = vmovlhps_avx(ZEXT416((uint)((float)(uVar3 & 0x3ff) * _DAT_14616fac4 + _DAT_14616ff24)),
                        auVar6);
  auVar5 = vshufps_avx(auVar5,auVar6,0xd8);
  auVar5 = vinsertps_avx(auVar5,ZEXT416(*(uint *)(&UNK_14615eac0 +
                                                 (ulonglong)(uVar3 < 0x40000000) * 4)),0x30);
  *param_6 = auVar5;
  lVar1 = *(longlong *)(param_1 + 0x18);
  uVar3 = FUN_1450498e0(param_1,0x18,param_2);
  *param_7 = *(undefined4 *)(lVar1 + (ulonglong)uVar3);
  lVar1 = *(longlong *)(param_1 + 0x18);
  uVar3 = FUN_1450498e0(param_1,0x19,param_2);
  *param_8 = *(undefined4 *)(lVar1 + (ulonglong)uVar3);
  lVar1 = *(longlong *)(param_1 + 0x18);
  uVar3 = FUN_1450498e0(param_1,0x1a,param_2);
  *param_9 = *(undefined4 *)(lVar1 + (ulonglong)uVar3);
  return;
}

