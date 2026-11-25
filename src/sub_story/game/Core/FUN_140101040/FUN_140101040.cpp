// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140101040  size: 265 bytes
// Name:    FUN_140101040
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144fa1230
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140101040(longlong param_1,longlong param_2,undefined1 (*param_3) [16])

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined4 uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  float fVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    func_0x000144dc3790();
  }
  else {
    FUN_144fa1230();
  }
  uVar13 = 0;
  uVar16 = 0;
  *(undefined8 *)*param_3 = uStack_48;
  *(undefined8 *)(*param_3 + 8) = uStack_40;
  LOCK();
  auVar19 = *(undefined1 (*) [16])(param_1 + 0x70);
  if (ZEXT816(0) == auVar19) {
    *(undefined8 *)*(undefined1 (*) [16])(param_1 + 0x70) = 0;
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  else {
    uVar16 = auVar19._8_8_;
    uVar13 = auVar19._0_8_;
  }
  UNLOCK();
  uVar17 = 0;
  uVar14 = 0;
  LOCK();
  auVar19 = *(undefined1 (*) [16])(param_1 + 0x60);
  if (ZEXT816(0) == auVar19) {
    *(undefined8 *)*(undefined1 (*) [16])(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  else {
    uVar17 = auVar19._8_8_;
    uVar14 = auVar19._0_8_;
  }
  UNLOCK();
  auVar19._8_8_ = 0;
  auVar19._0_8_ = uVar16;
  auVar21._8_8_ = 0;
  auVar21._0_8_ = uVar13;
  auVar21 = vpunpcklqdq_avx(auVar21,auVar19);
  auVar19 = vcmpps_avx(auVar21,(undefined1  [16])0x0,0);
  uVar15 = vmovmskps_avx(auVar19);
  if ((~(byte)uVar15 & 7) == 0) {
    auVar20._8_8_ = 0;
    auVar20._0_8_ = uVar14;
    auVar22._8_8_ = 0;
    auVar22._0_8_ = uVar17;
    auVar21 = vpunpcklqdq_avx(auVar20,auVar22);
    auVar19 = vcmpps_avx(auVar21,(undefined1  [16])0x0,0);
    uVar15 = vmovmskps_avx(auVar19);
    if ((~(byte)uVar15 & 7) != 0) {
      fVar10 = *(float *)(param_2 + 0x44);
      fVar11 = *(float *)(param_2 + 0x48);
      fVar12 = *(float *)(param_2 + 0x4c);
      fVar18 = auVar21._0_4_;
      auVar19 = vshufps_avx(auVar21,auVar21,0x55);
      auVar21 = vshufps_avx(auVar21,auVar21,0xaa);
      fVar1 = *(float *)(*param_3 + 4);
      fVar4 = *(float *)(*param_3 + 8);
      fVar7 = *(float *)(*param_3 + 0xc);
      fVar2 = *(float *)(param_2 + 0x54);
      fVar5 = *(float *)(param_2 + 0x58);
      fVar8 = *(float *)(param_2 + 0x5c);
      fVar3 = *(float *)(param_2 + 100);
      fVar6 = *(float *)(param_2 + 0x68);
      fVar9 = *(float *)(param_2 + 0x6c);
      *(float *)*param_3 =
           auVar21._0_4_ * *(float *)(param_2 + 0x60) +
           auVar19._0_4_ * *(float *)(param_2 + 0x50) +
           *(float *)(param_2 + 0x40) * fVar18 + *(float *)*param_3;
      *(float *)(*param_3 + 4) =
           auVar21._4_4_ * fVar3 + auVar19._4_4_ * fVar2 + fVar10 * fVar18 + fVar1;
      *(float *)(*param_3 + 8) =
           auVar21._8_4_ * fVar6 + auVar19._8_4_ * fVar5 + fVar11 * fVar18 + fVar4;
      *(float *)(*param_3 + 0xc) =
           auVar21._12_4_ * fVar9 + auVar19._12_4_ * fVar8 + fVar12 * fVar18 + fVar7;
    }
  }
  else {
    *param_3 = auVar21;
  }
  return;
}

