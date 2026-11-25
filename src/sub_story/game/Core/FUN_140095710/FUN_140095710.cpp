// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140095710  size: 697 bytes
// Name:    FUN_140095710
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1451d7080, FUN_145647140, FUN_14031bc70
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140095710(longlong param_1,undefined1 (*param_2) [16],longlong param_3)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  char cVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  bool bVar12;
  undefined8 extraout_XMM0_Qa;
  undefined1 auVar13 [16];
  undefined1 extraout_var [56];
  undefined1 auVar15 [16];
  undefined1 auVar16 [64];
  undefined1 auVar17 [16];
  undefined1 auVar18 [64];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [64];
  float fVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined8 auStack_220 [4];
  undefined8 uStack_200;
  undefined1 auStack_1f8 [16];
  undefined1 auStack_1e8 [16];
  undefined1 auStack_1d8 [16];
  float afStack_1c8 [52];
  undefined1 auStack_f8 [16];
  undefined1 auStack_e8 [16];
  undefined1 auStack_d8 [16];
  undefined1 auStack_c8 [16];
  longlong lStack_b8;
  undefined8 uStack_b0;
  undefined2 uStack_a8;
  undefined1 auVar14 [64];
  
  if (*(longlong *)(param_3 + 0x38) == 0) {
    bVar12 = true;
  }
  else {
    bVar12 = (*(byte *)(param_3 + 0x1c) & 8) == 0;
  }
  auStack_220[0] = 0x14009578a;
  cVar8 = func_0x000144e4ae00(param_1,param_3,*(undefined1 *)(param_1 + 0x492));
  if (cVar8 != '\0') {
    if (*(char *)(param_1 + 0x48e) == '\x01') {
      if (*(longlong *)(param_1 + 0x430) == 0) {
        auStack_220[0] = 0x1400957c2;
        cVar8 = (**(code **)(param_1 + 0x438))(param_3);
      }
      else {
        auStack_220[0] = 0x1400957bb;
        cVar8 = (**(code **)(param_1 + 0x438))(*(longlong *)(param_1 + 0x430),param_3);
      }
      if (cVar8 == '\0') {
        return;
      }
    }
    if ((((byte)(bVar12 | *(byte *)(param_1 + 0x493) ^ 1) == 1) &&
        ((*(char *)(param_1 + 0x494) != '\x01' || ((*(byte *)(param_3 + 0x19) & 0x10) == 0)))) &&
       (((lVar11 = *(longlong *)(*(longlong *)(param_3 + 8) + 0x20),
         *(char *)(lVar11 + 0x10) == '\x06' && (*(longlong *)(lVar11 + 0x88) != 0)) ||
        ((*(ulonglong *)(param_1 + 0x480) & *(ulonglong *)(param_3 + 0xf8)) == 0)))) {
      auStack_220[0] = 0x14009582f;
      lVar9 = func_0x000144febb80(param_1);
      auStack_220[0] = 0x140095846;
      uVar10 = FUN_1451d7080(*(undefined1 *)(lVar9 + 0x1f),lVar11,auStack_1f8);
      auVar1 = *(undefined1 (*) [16])(param_3 + 0x80);
      auVar16 = ZEXT1664(*(undefined1 (*) [16])(param_3 + 0x60));
      auVar18 = ZEXT1664(*(undefined1 (*) [16])(param_3 + 0x70));
      auVar19 = vpunpckhwd_avx(auVar1,auVar1);
      auVar19 = vpsrad_avx(auVar19,0x10);
      auVar19 = vcvtdq2ps_avx(auVar19);
      auVar19 = vshufpd_avx(auVar19,auVar19,3);
      auVar21 = ZEXT1664(CONCAT412(auVar19._12_4_ * _UNK_146159c9c + auVar1._12_4_,
                                   CONCAT48(auVar19._8_4_ * _UNK_146159c98 + auVar1._8_4_,
                                            CONCAT44(auVar19._4_4_ * _UNK_146159c94 + auVar1._4_4_,
                                                     auVar19._0_4_ * _DAT_146159c90 + auVar1._0_4_))
                                  ));
      uStack_200 = 0x140095889;
      lVar11 = FUN_145647140(*(undefined8 *)(param_3 + 0x50));
      auVar14._8_56_ = extraout_var;
      auVar14._0_8_ = extraout_XMM0_Qa;
      lVar11 = -lVar11;
      auVar13 = auVar14._0_16_;
      auVar17 = auVar18._0_16_;
      auVar4 = vpunpckldq_avx(auVar13,auVar17);
      auVar19 = vpunpckhdq_avx(auVar13,auVar17);
      auVar1 = *(undefined1 (*) [16])(param_1 + 0x4f0);
      auVar15 = auVar16._0_16_;
      auVar23 = vpunpckldq_avx(auVar15,(undefined1  [16])0x0);
      auVar3 = vpunpckhdq_avx(auVar15,(undefined1  [16])0x0);
      uStack_b0 = 0xffffffff00000000;
      uStack_a8 = 0xffff;
      auVar3 = vpunpckldq_avx(auVar19,auVar3);
      auVar5 = vpunpckldq_avx(auVar4,auVar23);
      auVar19 = vpunpckhdq_avx(auVar4,auVar23);
      auVar20 = auVar21._0_16_;
      auVar23 = vsubps_avx(param_2[1],auVar20);
      auVar7 = vsubps_avx(*param_2,auVar20);
      fVar22 = auVar23._0_4_;
      auVar4 = vshufps_avx(auVar23,auVar23,0x55);
      auVar23 = vshufps_avx(auVar23,auVar23,0xaa);
      auVar6 = vshufps_avx(auVar7,auVar7,0x55);
      auVar24._0_4_ =
           auVar3._0_4_ * auVar23._0_4_ + auVar19._0_4_ * auVar4._0_4_ + fVar22 * auVar5._0_4_;
      auVar24._4_4_ =
           auVar3._4_4_ * auVar23._4_4_ + auVar19._4_4_ * auVar4._4_4_ + fVar22 * auVar5._4_4_;
      auVar24._8_4_ =
           auVar3._8_4_ * auVar23._8_4_ + auVar19._8_4_ * auVar4._8_4_ + fVar22 * auVar5._8_4_;
      auVar24._12_4_ =
           auVar3._12_4_ * auVar23._12_4_ + auVar19._12_4_ * auVar4._12_4_ + fVar22 * auVar5._12_4_;
      fVar22 = auVar7._0_4_;
      auVar4 = vshufps_avx(auVar7,auVar7,0xaa);
      auVar23._0_4_ =
           auVar3._0_4_ * auVar4._0_4_ + auVar19._0_4_ * auVar6._0_4_ + auVar5._0_4_ * fVar22;
      auVar23._4_4_ =
           auVar3._4_4_ * auVar4._4_4_ + auVar19._4_4_ * auVar6._4_4_ + auVar5._4_4_ * fVar22;
      auVar23._8_4_ =
           auVar3._8_4_ * auVar4._8_4_ + auVar19._8_4_ * auVar6._8_4_ + auVar5._8_4_ * fVar22;
      auVar23._12_4_ =
           auVar3._12_4_ * auVar4._12_4_ + auVar19._12_4_ * auVar6._12_4_ + auVar5._12_4_ * fVar22;
      auVar3 = vminps_avx(auVar23,auVar24);
      *(undefined1 (*) [16])(auStack_1f8 + lVar11) = auVar23;
      auVar19 = vmaxps_avx(auVar23,auVar24);
      *(undefined1 (*) [16])(auStack_1e8 + lVar11) = auVar24;
      auVar3 = vsubps_avx(auVar3,auVar1);
      *(undefined1 (*) [16])(auStack_1d8 + lVar11) = auVar3;
      *(float *)((longlong)afStack_1c8 + lVar11) = auVar19._0_4_ + auVar1._0_4_;
      *(float *)((longlong)afStack_1c8 + lVar11 + 4) = auVar19._4_4_ + auVar1._4_4_;
      *(float *)((longlong)afStack_1c8 + lVar11 + 8) = auVar19._8_4_ + auVar1._8_4_;
      *(float *)((longlong)afStack_1c8 + lVar11 + 0xc) = auVar19._12_4_ + auVar1._12_4_;
      uVar2 = *(undefined4 *)(param_3 + 0x10);
      auStack_f8 = auVar13;
      auStack_e8 = auVar15;
      auStack_d8 = auVar17;
      auStack_c8 = auVar20;
      lStack_b8 = param_3;
      *(undefined8 *)((longlong)auStack_220 + lVar11) = 0x140095970;
      FUN_14031bc70(&uStack_b0,uVar2);
      *(undefined8 *)((longlong)auStack_220 + lVar11) = 0x140095985;
      func_0x0001451d7060(param_1,auStack_1f8 + lVar11,uVar10,auStack_f8);
    }
  }
  return;
}

