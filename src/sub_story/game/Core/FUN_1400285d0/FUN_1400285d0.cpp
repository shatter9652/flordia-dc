// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400285d0  size: 675 bytes
// Name:    FUN_1400285d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400289a0, FUN_144dfb360
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400285d0(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar12;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar13 [16];
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  undefined1 auStack_118 [16];
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [16];
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  
  (**(code **)(*(longlong *)param_1[6] + 0x90))();
  (**(code **)(*(longlong *)param_1[7] + 0x90))();
  (**(code **)(*(longlong *)param_1[6] + 0x18))((longlong *)param_1[6],&fStack_a8);
  (**(code **)(*(longlong *)param_1[7] + 0x18))((longlong *)param_1[7],auStack_b8);
  auVar4._4_4_ = fStack_a4;
  auVar4._0_4_ = fStack_a8;
  auVar4._8_4_ = fStack_a0;
  auVar4._12_4_ = fStack_9c;
  auVar7._0_4_ = (uint)auStack_b8._0_4_ ^ _DAT_145fc6f10;
  auVar7._4_4_ = (uint)auStack_b8._4_4_ ^ _DAT_145fc6f10;
  auVar7._8_4_ = (uint)auStack_b8._8_4_ ^ _DAT_145fc6f10;
  auVar7._12_4_ = (uint)auStack_b8._12_4_ ^ _DAT_145fc6f10;
  auVar2 = vblendps_avx(auVar7,auStack_b8,10);
  auVar6 = vshufps_avx(auVar2,auVar2,0x1b);
  auVar3 = vshufpd_avx(auStack_b8,auVar7,1);
  auVar2 = vblendps_avx(auVar7,auStack_b8,9);
  auVar7 = vshufps_avx(auVar4,auVar4,0xc9);
  auVar4 = vshufps_avx(auVar4,auVar4,0xd2);
  auVar2 = vshufps_avx(auVar2,auVar2,0xb1);
  auVar5._0_4_ = -(fStack_a0 * auVar2._0_4_) -
                 (fStack_a4 * auVar3._0_4_ +
                 (fStack_a8 * auVar6._0_4_ - fStack_9c * auStack_b8._0_4_));
  auVar5._4_4_ = -(fStack_a0 * auVar2._4_4_) -
                 (fStack_a4 * auVar3._4_4_ +
                 (fStack_a8 * auVar6._4_4_ - fStack_9c * auStack_b8._4_4_));
  auVar5._8_4_ = -(fStack_a0 * auVar2._8_4_) -
                 (fStack_a4 * auVar3._8_4_ +
                 (fStack_a8 * auVar6._8_4_ - fStack_9c * auStack_b8._8_4_));
  auVar5._12_4_ =
       -(fStack_a0 * auVar2._12_4_) -
       (fStack_a4 * auVar3._12_4_ + (fStack_a8 * auVar6._12_4_ - fStack_9c * auStack_b8._12_4_));
  auVar2 = vshufps_avx(auVar5,auVar5,0xd2);
  auVar3 = vshufps_avx(auVar5,auVar5,0xc9);
  fVar12 = -(auVar4._0_4_ * auVar3._0_4_) + auVar2._0_4_ * auVar7._0_4_;
  fVar14 = -(auVar4._4_4_ * auVar3._4_4_) + auVar2._4_4_ * auVar7._4_4_;
  fVar15 = -(auVar4._8_4_ * auVar3._8_4_) + auVar2._8_4_ * auVar7._8_4_;
  fVar16 = -(auVar4._12_4_ * auVar3._12_4_) + auVar2._12_4_ * auVar7._12_4_;
  auVar13._0_4_ = fVar12 + fVar12;
  auVar13._4_4_ = fVar14 + fVar14;
  auVar13._8_4_ = fVar15 + fVar15;
  auVar13._12_4_ = fVar16 + fVar16;
  auVar2 = vshufps_avx(auVar13,auVar13,0xd2);
  auVar3 = vshufps_avx(auVar13,auVar13,0xc9);
  auVar6._0_4_ = auVar13._0_4_ * fStack_9c + auVar5._0_4_ +
                 -(auVar4._0_4_ * auVar3._0_4_) + auVar2._0_4_ * auVar7._0_4_;
  auVar6._4_4_ = auVar13._4_4_ * fStack_9c + auVar5._4_4_ +
                 -(auVar4._4_4_ * auVar3._4_4_) + auVar2._4_4_ * auVar7._4_4_;
  auVar6._8_4_ = auVar13._8_4_ * fStack_9c + auVar5._8_4_ +
                 -(auVar4._8_4_ * auVar3._8_4_) + auVar2._8_4_ * auVar7._8_4_;
  auVar6._12_4_ =
       auVar13._12_4_ * fStack_9c + auVar5._12_4_ +
       -(auVar4._12_4_ * auVar3._12_4_) + auVar2._12_4_ * auVar7._12_4_;
  vblendps_avx(auVar6,auVar5,8);
  uVar17 = _DAT_145fc6f10;
  uVar18 = _DAT_145fc6f10;
  uVar19 = _DAT_145fc6f10;
  uVar20 = _DAT_145fc6f10;
  FUN_1400289a0(*(undefined8 *)(param_1[8] + 0x20),auStack_c8);
  uStack_98 = _DAT_145fc6ee0;
  uStack_90 = _UNK_145fc6ee8;
  uStack_88 = 0xffffffff;
  plVar1 = (longlong *)param_1[8];
  (**(code **)(*plVar1 + 0x128))(plVar1);
  (**(code **)(*plVar1 + 0x100))(plVar1,&uStack_108,&uStack_98);
  uStack_e8 = uStack_98;
  uStack_e0 = uStack_90;
  (**(code **)(*param_1 + 0xb0))(param_1,&uStack_d8);
  uStack_108 = uStack_d8;
  uStack_100 = uStack_d0;
  uStack_f8 = 0xffffffff;
  FUN_144dfb360(param_1[8],&uStack_108,auStack_118);
  auVar2._4_4_ = fStack_a4;
  auVar2._0_4_ = fStack_a8;
  auVar2._8_4_ = fStack_a0;
  auVar2._12_4_ = fStack_9c;
  auVar8._0_4_ = (uint)fStack_a8 ^ uVar17;
  auVar8._4_4_ = (uint)fStack_a4 ^ uVar18;
  auVar8._8_4_ = (uint)fStack_a0 ^ uVar19;
  auVar8._12_4_ = (uint)fStack_9c ^ uVar20;
  auVar3 = vshufps_avx(auStack_118,auStack_118,0xd2);
  auVar6 = vshufps_avx(auStack_118,auStack_118,0xc9);
  auVar2 = vblendps_avx(auVar8,auVar2,8);
  auVar7 = vshufps_avx(auVar2,auVar2,0xc9);
  auVar2 = vshufps_avx(auVar2,auVar2,0xd2);
  fVar12 = -(auVar2._0_4_ * auVar6._0_4_) + auVar7._0_4_ * auVar3._0_4_;
  fVar14 = -(auVar2._4_4_ * auVar6._4_4_) + auVar7._4_4_ * auVar3._4_4_;
  fVar15 = -(auVar2._8_4_ * auVar6._8_4_) + auVar7._8_4_ * auVar3._8_4_;
  fVar16 = -(auVar2._12_4_ * auVar6._12_4_) + auVar7._12_4_ * auVar3._12_4_;
  auVar11._0_4_ = fVar12 + fVar12;
  auVar11._4_4_ = fVar14 + fVar14;
  auVar11._8_4_ = fVar15 + fVar15;
  auVar11._12_4_ = fVar16 + fVar16;
  auVar3 = vshufps_avx(auVar11,auVar11,0xd2);
  auVar6 = vshufps_avx(auVar11,auVar11,0xc9);
  auVar9._0_4_ = fStack_9c * auVar11._0_4_ + auStack_118._0_4_ +
                 -(auVar2._0_4_ * auVar6._0_4_) + auVar3._0_4_ * auVar7._0_4_;
  auVar9._4_4_ = fStack_9c * auVar11._4_4_ + auStack_118._4_4_ +
                 -(auVar2._4_4_ * auVar6._4_4_) + auVar3._4_4_ * auVar7._4_4_;
  auVar9._8_4_ = fStack_9c * auVar11._8_4_ + auStack_118._8_4_ +
                 -(auVar2._8_4_ * auVar6._8_4_) + auVar3._8_4_ * auVar7._8_4_;
  auVar9._12_4_ =
       fStack_9c * auVar11._12_4_ + auStack_118._12_4_ +
       -(auVar2._12_4_ * auVar6._12_4_) + auVar3._12_4_ * auVar7._12_4_;
  auVar2 = vblendps_avx(auVar9,auStack_118,8);
  auVar10._0_4_ = (uint)auVar2._0_4_ ^ uVar17;
  auVar10._4_4_ = (uint)auVar2._4_4_ ^ uVar18;
  auVar10._8_4_ = (uint)auVar2._8_4_ ^ uVar19;
  auVar10._12_4_ = (uint)auVar2._12_4_ ^ uVar20;
  auVar3 = vblendps_avx(auVar10,auVar2,10);
  auVar7 = vshufps_avx(auVar3,auVar3,0x1b);
  auVar6 = vshufpd_avx(auVar2,auVar10,1);
  auVar3 = vblendps_avx(auVar10,auVar2,9);
  auVar3 = vshufps_avx(auVar3,auVar3,0xb1);
  *(float *)(param_1 + 4) =
       fStack_a0 * auVar3._0_4_ +
       fStack_a4 * auVar6._0_4_ + fStack_a8 * auVar7._0_4_ + auVar2._0_4_ * fStack_9c;
  *(float *)((longlong)param_1 + 0x24) =
       fStack_a0 * auVar3._4_4_ +
       fStack_a4 * auVar6._4_4_ + fStack_a8 * auVar7._4_4_ + auVar2._4_4_ * fStack_9c;
  *(float *)(param_1 + 5) =
       fStack_a0 * auVar3._8_4_ +
       fStack_a4 * auVar6._8_4_ + fStack_a8 * auVar7._8_4_ + auVar2._8_4_ * fStack_9c;
  *(float *)((longlong)param_1 + 0x2c) =
       fStack_a0 * auVar3._12_4_ +
       fStack_a4 * auVar6._12_4_ + fStack_a8 * auVar7._12_4_ + auVar2._12_4_ * fStack_9c;
  return;
}

