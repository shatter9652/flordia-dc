// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400800b0  size: 468 bytes
// Name:    FUN_1400800b0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400800b0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  float fVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  uint uVar11;
  uint uVar12;
  float fVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  float fVar20;
  undefined1 in_ZMM1 [64];
  float fVar21;
  uint in_XMM2_Dc;
  uint in_XMM2_Dd;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  
  fVar10 = _DAT_145fc6ed8;
  fVar21 = (float)param_3;
  fVar20 = in_ZMM1._0_4_;
  fVar4 = fVar21 * fVar20;
  fVar25 = fVar20 * fVar20 - fVar21;
  auVar7._4_12_ = in_ZMM1._4_12_;
  auVar7._0_4_ = fVar25;
  fVar23 = -(fVar20 * 0.0) - 0.0;
  auVar2._4_8_ = SUB128(ZEXT812(0),4);
  auVar2._0_4_ = fVar23;
  auVar2._12_4_ = 0;
  fVar23 = fVar23 * fVar21;
  uVar11 = (uint)fVar20 ^ (uint)_DAT_145fc6f10;
  uVar14 = in_ZMM1._4_4_ ^ (uint)_DAT_145fc6f10;
  uVar16 = in_ZMM1._8_4_ ^ (uint)_DAT_145fc6f10;
  uVar18 = in_ZMM1._12_4_ ^ (uint)_DAT_145fc6f10;
  uVar12 = (uint)fVar21 ^ (uint)_DAT_145fc6f10;
  uVar15 = (uint)((ulonglong)param_3 >> 0x20) ^ (uint)_DAT_145fc6f10;
  uVar17 = in_XMM2_Dc ^ (uint)_DAT_145fc6f10;
  uVar19 = in_XMM2_Dd ^ (uint)_DAT_145fc6f10;
  fVar5 = (fVar21 - fVar25) * fVar20;
  fVar24 = fVar20 * 0.0 * fVar20 + fVar21 * _DAT_145fc6f10;
  auVar3._4_12_ = in_ZMM1._4_12_;
  auVar3._0_4_ = fVar24;
  fVar6 = _DAT_145fc6ed8 - fVar20 * 0.0;
  fVar13 = fVar21 * fVar21 - fVar4 * fVar20;
  fVar22 = -(fVar6 * fVar20) + fVar21 * _DAT_145fc6f10;
  fVar1 = fVar24 + _DAT_145fc6ed8;
  auVar2 = vinsertps_avx(ZEXT416((uint)fVar13),auVar2,0x1d);
  auVar3 = vinsertps_avx(auVar2,auVar3,0x20);
  auVar3 = vinsertps_avx(auVar3,ZEXT416((uint)((-(fVar24 * fVar20) - fVar23) + _DAT_145fc6ed8)),0x30
                        );
  *(undefined1 (*) [16])(param_1 + 0x50) = auVar3;
  auVar2 = vinsertps_avx(auVar2,ZEXT416((uint)fVar1),0x20);
  auVar8._4_4_ = uVar14;
  auVar8._0_4_ = uVar11;
  auVar8._8_4_ = uVar16;
  auVar8._12_4_ = uVar18;
  auVar2 = vinsertps_avx(auVar2,ZEXT416((uint)(-(fVar1 * fVar20) - fVar23)),0x30);
  *(undefined1 (*) [16])(param_1 + 0x60) = auVar2;
  auVar3 = vinsertps_avx(ZEXT416((uint)fVar22),ZEXT416((uint)(-(fVar6 * fVar21) - fVar22 * fVar20)),
                         0x1c);
  auVar2 = vblendps_avx(ZEXT816(0) << 0x40,ZEXT416((uint)fVar6),1);
  auVar2 = vshufps_avx(auVar2,auVar3,0x41);
  *(undefined1 (*) [16])(param_1 + 0x70) = auVar2;
  auVar2 = vunpcklps_avx(ZEXT416((uint)fVar10),auVar8);
  auVar2 = vinsertps_avx(auVar2,auVar7,0x20);
  auVar2 = vinsertps_avx(auVar2,ZEXT416((uint)fVar5),0x30);
  *(undefined1 (*) [16])(param_1 + 0x80) = auVar2;
  auVar2 = vinsertps_avx(auVar8,auVar7,0x1c);
  auVar2 = vinsertps_avx(auVar2,ZEXT416((uint)fVar5),0x20);
  auVar2 = vinsertps_avx(auVar2,ZEXT416((uint)(-(fVar25 * fVar21) - fVar5 * fVar20)),0x30);
  *(undefined1 (*) [16])(param_1 + 0x90) = auVar2;
  auVar9._4_4_ = uVar15;
  auVar9._0_4_ = uVar12;
  auVar9._8_4_ = uVar17;
  auVar9._12_4_ = uVar19;
  auVar2 = vinsertps_avx(auVar9,ZEXT416((uint)fVar4),0x1c);
  auVar2 = vinsertps_avx(auVar2,ZEXT416((uint)fVar13),0x20);
  auVar2 = vinsertps_avx(auVar2,ZEXT416((uint)(-(fVar4 * fVar21) - fVar13 * fVar20)),0x30);
  *(undefined1 (*) [16])(param_1 + 0xa0) = auVar2;
  return;
}

