// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401a1630  size: 234 bytes
// Name:    FUN_1401a1630
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401a1630(float param_1,longlong param_2)

{
  float fVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  uint uVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  undefined1 uVar10;
  longlong lVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [64];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar18 [16];
  float fVar17;
  
  fVar9 = _DAT_14760e6d8;
  uVar8 = _DAT_14615cc70;
  uVar7 = _DAT_146159be0;
  uVar6 = _DAT_146159b38;
  uVar4 = *(uint *)(param_2 + 0x78);
  if ((ulonglong)uVar4 != 0) {
    auVar16._8_8_ = 0;
    auVar16._0_8_ = _DAT_14615cc60;
    lVar11 = 0;
    do {
      uVar2 = *(undefined8 *)(param_2 + 0x18 + lVar11);
      fVar17 = (float)uVar2;
      fVar1 = (float)((ulonglong)uVar2 >> 0x20);
      auVar18._0_4_ = -(param_1 * fVar17) + fVar17;
      auVar18._4_4_ = -(param_1 * fVar1) + fVar1;
      auVar18._8_4_ = -(param_1 * 0.0) + 0.0;
      auVar18._12_4_ = -(param_1 * 0.0) + 0.0;
      auVar18 = vmaxps_avx(auVar18,ZEXT416(uVar7));
      auVar18 = vminps_avx(auVar18,auVar16);
      uVar2 = vmovlps_avx(auVar18);
      *(undefined8 *)(param_2 + 0x18 + lVar11) = uVar2;
      fVar1 = *(float *)(param_2 + 0x20 + lVar11);
      auVar18 = vmaxss_avx(ZEXT416((uint)(param_1 * (fVar9 - fVar1) + fVar1)),ZEXT416(uVar6));
      auVar18 = vminss_avx(auVar18,ZEXT416(uVar8));
      *(int *)(param_2 + 0x20 + lVar11) = auVar18._0_4_;
      lVar11 = lVar11 + 0xc;
    } while ((ulonglong)uVar4 * 0xc != lVar11);
  }
  uVar3 = *(ulonglong *)(param_2 + 0x10);
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar3;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = _DAT_14615cd40;
  auVar16 = vsubps_avx(auVar14,auVar12);
  auVar15._0_4_ = param_1 * auVar16._0_4_ + (float)uVar3;
  auVar15._4_4_ = param_1 * auVar16._4_4_ + (float)(uVar3 >> 0x20);
  auVar15._8_4_ = param_1 * auVar16._8_4_ + 0.0;
  auVar15._12_4_ = param_1 * auVar16._12_4_ + 0.0;
  auVar16 = vmaxps_avx(auVar15,ZEXT416(_DAT_146159be0));
  auVar5._8_8_ = _UNK_14615cc68;
  auVar5._0_8_ = _DAT_14615cc60;
  auVar16 = vminps_avx(auVar16,auVar5);
  uVar2 = vmovlps_avx(auVar16);
  *(undefined8 *)(param_2 + 0x10) = uVar2;
  *(undefined1 *)(param_2 + 0x7f) = 0xff;
  if ((longlong)*(int *)(param_2 + 0x78) != 0) {
    auVar13 = ZEXT464((uint)_DAT_145fc6f50);
    lVar11 = 0;
    do {
      auVar16 = vminss_avx(auVar13._0_16_,ZEXT416(*(uint *)(param_2 + 0x20 + lVar11)));
      auVar13 = ZEXT1664(auVar16);
      lVar11 = lVar11 + 0xc;
    } while ((longlong)*(int *)(param_2 + 0x78) * 0xc != lVar11);
    if ((auVar16._0_4_ != _DAT_145fc6f50) || (NAN(auVar16._0_4_) || NAN(_DAT_145fc6f50))) {
      uVar10 = FUN_145067ef0();
      *(undefined1 *)(param_2 + 0x7f) = uVar10;
    }
  }
  return;
}

