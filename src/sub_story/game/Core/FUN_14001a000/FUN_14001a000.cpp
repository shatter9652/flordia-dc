// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14001a000  size: 1222 bytes
// Name:    FUN_14001a000
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145355850, FUN_140a96430
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14001a000(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  undefined1 auVar3 [16];
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong unaff_GS_OFFSET;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined1 auVar33 [16];
  undefined1 auStack_7d8 [144];
  float fStack_748;
  float fStack_744;
  float fStack_740;
  float fStack_73c;
  undefined1 auStack_738 [16];
  undefined1 auStack_728 [16];
  float fStack_558;
  float fStack_554;
  float fStack_550;
  float fStack_54c;
  float fStack_548;
  float fStack_544;
  float fStack_540;
  float fStack_53c;
  float fStack_538;
  float fStack_534;
  float fStack_530;
  float fStack_52c;
  float fStack_528;
  float fStack_524;
  float fStack_520;
  float fStack_51c;
  undefined1 auStack_3d8 [16];
  
  *(undefined8 *)(param_1 + 0xa8) = 0;
  uVar4 = *(uint *)(param_1 + 0xa0);
  uVar5 = (ulonglong)uVar4 & 0x1ffff;
  if (uVar5 == 0x1ffff) {
    return;
  }
  plVar2 = *(longlong **)((ulonglong)(uVar4 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0);
  if (plVar2 == (longlong *)0x0) {
    return;
  }
  uVar1 = *(uint *)(plVar2[5] + uVar5 * 4);
  if ((uVar1 >> 0x11 & 0x3ff) != uVar4 >> 0x16) {
    return;
  }
  if ((uVar1 & *(uint *)(plVar2 + 6)) != *(uint *)(plVar2 + 6)) {
    return;
  }
  if (*plVar2 == 0) {
    return;
  }
  *(undefined8 *)(param_1 + 0xa8) =
       *(undefined8 *)(*plVar2 + 0x28 + (ulonglong)(uint)((int)uVar5 * (int)plVar2[1]));
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
  }
  lVar6 = **(longlong **)(unaff_GS_OFFSET + 0x58);
  uVar4 = *(uint *)(lVar6 + 0x12d8);
  if ((uVar4 & 6) == 0) {
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      func_0x0001455db994();
      uVar4 = *(uint *)(lVar6 + 0x12d8);
    }
    lVar6 = 0x58;
    if ((uVar4 & 0x20) == 0) goto LAB_14001a153;
  }
  lVar6 = 0x5c;
LAB_14001a153:
  func_0x000145f40560(auStack_7d8,(longlong)*(int *)(lVar6 + 0x14a210cb8) * 0x730 + 0x14a94bbb0,
                      0x730);
  FUN_145355850(auStack_7d8,1);
  uVar4 = *(uint *)(param_1 + 0xa0);
  auVar15._0_12_ = ZEXT812(0);
  auVar15._12_4_ = 0;
  auVar15 = vblendps_avx(auVar15,auStack_738,0xc);
  plVar2 = *(longlong **)((ulonglong)(uVar4 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0);
  uVar1 = *(uint *)(plVar2[5] + (ulonglong)(uVar4 & 0x1ffff) * 4);
  lVar6 = 0;
  if (uVar4 >> 0x16 == (uVar1 >> 0x11 & 0x3ff) &&
      (uVar1 & *(uint *)(plVar2 + 6)) == *(uint *)(plVar2 + 6)) {
    lVar6 = (ulonglong)((uVar4 & 0x1ffff) * (int)plVar2[1]) + *plVar2;
  }
  auVar18 = *(undefined1 (*) [16])(lVar6 + 0x50);
  auVar22 = *(undefined1 (*) [16])(lVar6 + 0x60);
  auVar17 = vsubps_avx(*(undefined1 (*) [16])(lVar6 + 0x70),auStack_3d8);
  auVar3 = vpsubw_avx(*(undefined1 (*) [16])(lVar6 + 0x70),auStack_3d8);
  auVar26 = vshufps_avx(auVar22,auVar18,0x33);
  auVar26 = vshufps_avx(auVar18,auVar26,0x8f);
  fVar29 = auVar26._0_4_ + _DAT_145fc6ed8;
  fVar30 = auVar26._4_4_ + _DAT_145fc6ed8;
  fVar31 = auVar26._8_4_ + _DAT_145fc6ed8;
  fVar32 = auVar26._12_4_ + _DAT_145fc6ed8;
  auVar24._0_4_ = fVar29 * *(float *)(lVar6 + 0x40);
  auVar24._4_4_ = fVar30 * *(float *)(lVar6 + 0x44);
  auVar24._8_4_ = fVar31 * *(float *)(lVar6 + 0x48);
  auVar24._12_4_ = fVar32 * *(float *)(lVar6 + 0x4c);
  auVar3 = vblendps_avx(auVar17,auVar3,8);
  auVar26 = vpunpckhwd_avx(auVar3,auVar3);
  auVar26 = vpsrad_avx(auVar26,0x10);
  auVar26 = vcvtdq2ps_avx(auVar26);
  auVar20._0_4_ = fVar29 * auVar18._0_4_;
  auVar20._4_4_ = fVar30 * auVar18._4_4_;
  auVar20._8_4_ = fVar31 * auVar18._8_4_;
  auVar20._12_4_ = fVar32 * auVar18._12_4_;
  auVar18 = vshufpd_avx(auVar26,auVar26,3);
  auVar27._0_4_ = (float)_DAT_146159c90 * auVar18._0_4_ + auVar3._0_4_;
  fVar7 = (float)((ulonglong)_DAT_146159c90 >> 0x20);
  auVar27._4_4_ = fVar7 * auVar18._4_4_ + auVar3._4_4_;
  auVar27._8_4_ = auVar18._8_4_ * 0.0 + auVar3._8_4_;
  auVar27._12_4_ = auVar18._12_4_ * 0.0 + auVar3._12_4_;
  auVar26._4_4_ = _DAT_14615a290;
  auVar26._0_4_ = _DAT_14615a290;
  auVar26._8_4_ = _DAT_14615a290;
  auVar26._12_4_ = _DAT_14615a290;
  auVar3 = vshufps_avx(auVar24,auVar24,0x55);
  auVar18 = vrcpps_avx(auVar26);
  fVar8 = auVar18._0_4_;
  fVar9 = auVar18._4_4_;
  fVar10 = auVar18._8_4_;
  fVar11 = auVar18._12_4_;
  auVar33._0_4_ = fVar29 * auVar22._0_4_;
  auVar33._4_4_ = fVar30 * auVar22._4_4_;
  auVar33._8_4_ = fVar31 * auVar22._8_4_;
  auVar33._12_4_ = fVar32 * auVar22._12_4_;
  auVar22._0_4_ = auVar27._0_4_ * ((-(fVar8 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar8 + fVar8);
  auVar22._4_4_ = auVar27._4_4_ * ((-(fVar9 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar9 + fVar9);
  auVar22._8_4_ = auVar27._8_4_ * ((-(fVar10 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar10 + fVar10);
  auVar22._12_4_ =
       auVar27._12_4_ * ((-(fVar11 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar11 + fVar11);
  auVar18 = vroundps_avx(auVar22,3);
  auVar17._0_4_ = -(auVar18._0_4_ * _DAT_14615a290) + auVar27._0_4_;
  auVar17._4_4_ = -(auVar18._4_4_ * _DAT_14615a290) + auVar27._4_4_;
  auVar17._8_4_ = -(auVar18._8_4_ * _DAT_14615a290) + auVar27._8_4_;
  auVar17._12_4_ = -(auVar18._12_4_ * _DAT_14615a290) + auVar27._12_4_;
  auVar23._0_4_ = (int)auVar18._0_4_;
  auVar23._4_4_ = (int)auVar18._4_4_;
  auVar23._8_4_ = (int)auVar18._8_4_;
  auVar23._12_4_ = (int)auVar18._12_4_;
  auVar22 = vpackssdw_avx(auVar23,auVar23);
  auVar18 = vblendps_avx(auVar27,auVar17,3);
  auVar26 = vshufps_avx(auVar24,auVar24,0xaa);
  auVar22 = vinsertps_avx(auVar18,auVar22,0x30);
  auVar18 = vpunpckhwd_avx(auVar22,auVar22);
  auVar18 = vpsrad_avx(auVar18,0x10);
  auVar18 = vcvtdq2ps_avx(auVar18);
  auVar18 = vshufpd_avx(auVar18,auVar18,3);
  auVar19._0_4_ = (float)_DAT_146159c90 * auVar18._0_4_ + auVar22._0_4_;
  auVar19._4_4_ = fVar7 * auVar18._4_4_ + auVar22._4_4_;
  auVar19._8_4_ = auVar18._8_4_ * 0.0 + auVar22._8_4_;
  auVar19._12_4_ = auVar18._12_4_ * 0.0 + auVar22._12_4_;
  auVar18 = vshufps_avx(auVar20,auVar20,0x55);
  auVar22 = vshufps_avx(auVar20,auVar20,0xaa);
  auVar28._0_4_ =
       fStack_528 * 0.0 +
       fStack_548 * auVar3._0_4_ + fStack_538 * auVar26._0_4_ + auVar24._0_4_ * fStack_558;
  auVar28._4_4_ =
       fStack_524 * 0.0 +
       fStack_544 * auVar3._4_4_ + fStack_534 * auVar26._4_4_ + auVar24._0_4_ * fStack_554;
  auVar28._8_4_ =
       fStack_520 * 0.0 +
       fStack_540 * auVar3._8_4_ + fStack_530 * auVar26._8_4_ + auVar24._0_4_ * fStack_550;
  auVar28._12_4_ =
       fStack_51c * 0.0 +
       fStack_53c * auVar3._12_4_ + fStack_52c * auVar26._12_4_ + auVar24._0_4_ * fStack_54c;
  auVar3 = vshufps_avx(auVar33,auVar33,0x55);
  auVar26 = vshufps_avx(auVar33,auVar33,0xaa);
  auVar25._0_4_ =
       fStack_528 * 0.0 +
       fStack_548 * auVar18._0_4_ + fStack_538 * auVar22._0_4_ + auVar20._0_4_ * fStack_558;
  auVar25._4_4_ =
       fStack_524 * 0.0 +
       fStack_544 * auVar18._4_4_ + fStack_534 * auVar22._4_4_ + auVar20._0_4_ * fStack_554;
  auVar25._8_4_ =
       fStack_520 * 0.0 +
       fStack_540 * auVar18._8_4_ + fStack_530 * auVar22._8_4_ + auVar20._0_4_ * fStack_550;
  auVar25._12_4_ =
       fStack_51c * 0.0 +
       fStack_53c * auVar18._12_4_ + fStack_52c * auVar22._12_4_ + auVar20._0_4_ * fStack_54c;
  auVar21._0_4_ =
       fStack_528 * 0.0 +
       fStack_548 * auVar3._0_4_ + fStack_538 * auVar26._0_4_ + fStack_558 * auVar33._0_4_;
  auVar21._4_4_ =
       fStack_524 * 0.0 +
       fStack_544 * auVar3._4_4_ + fStack_534 * auVar26._4_4_ + fStack_554 * auVar33._0_4_;
  auVar21._8_4_ =
       fStack_520 * 0.0 +
       fStack_540 * auVar3._8_4_ + fStack_530 * auVar26._8_4_ + fStack_550 * auVar33._0_4_;
  auVar21._12_4_ =
       fStack_51c * 0.0 +
       fStack_53c * auVar3._12_4_ + fStack_52c * auVar26._12_4_ + fStack_54c * auVar33._0_4_;
  auVar18 = vshufps_avx(auVar19,auVar19,0x55);
  auVar22 = vshufps_avx(auVar19,auVar19,0xaa);
  auVar3 = vshufps_avx(auVar21,auVar21,0xaa);
  auVar16._0_4_ =
       fStack_538 * auVar22._0_4_ +
       fStack_558 * auVar19._0_4_ + fStack_548 * auVar18._0_4_ + fStack_528;
  auVar16._4_4_ =
       fStack_534 * auVar22._4_4_ +
       fStack_554 * auVar19._0_4_ + fStack_544 * auVar18._4_4_ + fStack_524;
  auVar16._8_4_ =
       fStack_530 * auVar22._8_4_ +
       fStack_550 * auVar19._0_4_ + fStack_540 * auVar18._8_4_ + fStack_520;
  auVar16._12_4_ =
       fStack_52c * auVar22._12_4_ +
       fStack_54c * auVar19._0_4_ + fStack_53c * auVar18._12_4_ + fStack_51c;
  auVar18 = vshufps_avx(auVar28,auVar28,0x55);
  auVar22 = vshufps_avx(auVar28,auVar28,0xaa);
  auVar26 = vshufps_avx(auVar28,auVar28,0xff);
  fVar11 = auStack_728._0_4_;
  fVar12 = auStack_728._4_4_;
  fVar13 = auStack_728._8_4_;
  fVar14 = auStack_728._12_4_;
  auVar17 = vshufps_avx(auVar25,auVar25,0xaa);
  auVar19 = vshufps_avx(auVar16,auVar16,0xaa);
  fVar29 = auStack_7d8._128_4_;
  fVar30 = auStack_7d8._132_4_;
  fVar31 = auStack_7d8._136_4_;
  fVar32 = auStack_7d8._140_4_;
  fVar7 = auVar15._0_4_;
  fVar8 = auVar15._4_4_;
  fVar9 = auVar15._8_4_;
  fVar10 = auVar15._12_4_;
  auVar15 = vshufps_avx(auVar25,auVar25,0x55);
  auVar20 = vshufps_avx(auVar25,auVar25,0xff);
  auVar23 = vshufps_avx(auVar21,auVar21,0x55);
  *(float *)(param_1 + 0xb0) =
       fVar7 * auVar22._0_4_ +
       fVar29 * auVar28._0_4_ + fVar11 * auVar26._0_4_ + auVar18._0_4_ * fStack_748;
  *(float *)(param_1 + 0xb4) =
       fVar8 * auVar22._4_4_ +
       fVar30 * auVar28._0_4_ + fVar12 * auVar26._4_4_ + auVar18._4_4_ * fStack_744;
  *(float *)(param_1 + 0xb8) =
       fVar9 * auVar22._8_4_ +
       fVar31 * auVar28._0_4_ + fVar13 * auVar26._8_4_ + auVar18._8_4_ * fStack_740;
  *(float *)(param_1 + 0xbc) =
       fVar10 * auVar22._12_4_ +
       fVar32 * auVar28._0_4_ + fVar14 * auVar26._12_4_ + auVar18._12_4_ * fStack_73c;
  auVar18 = vshufps_avx(auVar21,auVar21,0xff);
  auVar22 = vshufps_avx(auVar16,auVar16,0x55);
  auVar26 = vshufps_avx(auVar16,auVar16,0xff);
  *(float *)(param_1 + 0xc0) =
       fVar7 * auVar17._0_4_ +
       fVar29 * auVar25._0_4_ + fVar11 * auVar20._0_4_ + auVar15._0_4_ * fStack_748;
  *(float *)(param_1 + 0xc4) =
       fVar8 * auVar17._4_4_ +
       fVar30 * auVar25._0_4_ + fVar12 * auVar20._4_4_ + auVar15._4_4_ * fStack_744;
  *(float *)(param_1 + 200) =
       fVar9 * auVar17._8_4_ +
       fVar31 * auVar25._0_4_ + fVar13 * auVar20._8_4_ + auVar15._8_4_ * fStack_740;
  *(float *)(param_1 + 0xcc) =
       fVar10 * auVar17._12_4_ +
       fVar32 * auVar25._0_4_ + fVar14 * auVar20._12_4_ + auVar15._12_4_ * fStack_73c;
  *(float *)(param_1 + 0xd0) =
       fVar7 * auVar3._0_4_ +
       fVar29 * auVar21._0_4_ + fVar11 * auVar18._0_4_ + auVar23._0_4_ * fStack_748;
  *(float *)(param_1 + 0xd4) =
       fVar8 * auVar3._4_4_ +
       fVar30 * auVar21._0_4_ + fVar12 * auVar18._4_4_ + auVar23._4_4_ * fStack_744;
  *(float *)(param_1 + 0xd8) =
       fVar9 * auVar3._8_4_ +
       fVar31 * auVar21._0_4_ + fVar13 * auVar18._8_4_ + auVar23._8_4_ * fStack_740;
  *(float *)(param_1 + 0xdc) =
       fVar10 * auVar3._12_4_ +
       fVar32 * auVar21._0_4_ + fVar14 * auVar18._12_4_ + auVar23._12_4_ * fStack_73c;
  auVar18._0_4_ =
       fVar7 * auVar19._0_4_ +
       fVar29 * auVar16._0_4_ + fVar11 * auVar26._0_4_ + auVar22._0_4_ * fStack_748;
  auVar18._4_4_ =
       fVar8 * auVar19._4_4_ +
       fVar30 * auVar16._0_4_ + fVar12 * auVar26._4_4_ + auVar22._4_4_ * fStack_744;
  auVar18._8_4_ =
       fVar9 * auVar19._8_4_ +
       fVar31 * auVar16._0_4_ + fVar13 * auVar26._8_4_ + auVar22._8_4_ * fStack_740;
  auVar18._12_4_ =
       fVar10 * auVar19._12_4_ +
       fVar32 * auVar16._0_4_ + fVar14 * auVar26._12_4_ + auVar22._12_4_ * fStack_73c;
  *(undefined1 (*) [16])(param_1 + 0xe0) = auVar18;
  if (*(int *)(param_1 + 0xf0) != 0) {
    FUN_140a96430();
  }
  return;
}

