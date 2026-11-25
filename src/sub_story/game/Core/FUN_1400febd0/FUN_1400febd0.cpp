// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400febd0  size: 702 bytes
// Name:    FUN_1400febd0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145007150, FUN_1451d7080, FUN_14031bc70, FUN_145647140
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400febd0(longlong param_1,undefined1 (*param_2) [16],longlong param_3)

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
  longlong lVar10;
  bool bVar11;
  undefined8 extraout_XMM0_Qa;
  undefined1 auVar12 [16];
  undefined1 extraout_var [56];
  undefined1 auVar14 [16];
  undefined1 auVar15 [64];
  undefined1 auVar16 [16];
  undefined1 auVar17 [64];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [64];
  float fVar21;
  float fVar22;
  undefined8 auStack_230 [4];
  undefined8 uStack_210;
  float afStack_208 [64];
  undefined1 auStack_108 [16];
  undefined1 auStack_f8 [16];
  undefined1 auStack_e8 [16];
  undefined1 auStack_d8 [16];
  longlong lStack_c8;
  undefined8 uStack_c0;
  undefined2 uStack_b8;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auVar13 [64];
  
  if (*(longlong *)(param_3 + 0x38) == 0) {
    bVar11 = true;
  }
  else {
    bVar11 = (*(byte *)(param_3 + 0x1c) & 8) == 0;
  }
  auStack_230[0] = 0x1400fec42;
  cVar8 = func_0x000144e4ae00(param_1,param_3,*(undefined1 *)(param_1 + 0x492));
  if (cVar8 != '\0') {
    if (*(char *)(param_1 + 0x48e) == '\x01') {
      if (*(longlong *)(param_1 + 0x430) == 0) {
        auStack_230[0] = 0x1400fec7a;
        cVar8 = (**(code **)(param_1 + 0x438))(param_3);
      }
      else {
        auStack_230[0] = 0x1400fec73;
        cVar8 = (**(code **)(param_1 + 0x438))(*(longlong *)(param_1 + 0x430),param_3);
      }
      if (cVar8 == '\0') {
        return;
      }
    }
    if ((((byte)(bVar11 | *(byte *)(param_1 + 0x493) ^ 1) == 1) &&
        ((*(char *)(param_1 + 0x494) != '\x01' || ((*(byte *)(param_3 + 0x19) & 0x10) == 0)))) &&
       (((lVar10 = *(longlong *)(*(longlong *)(param_3 + 8) + 0x20),
         *(char *)(lVar10 + 0x10) == '\x06' && (*(longlong *)(lVar10 + 0x88) != 0)) ||
        ((*(ulonglong *)(param_1 + 0x480) & *(ulonglong *)(param_3 + 0xf8)) == 0)))) {
      auStack_230[0] = 0x1400fece7;
      lVar9 = func_0x000144febb80(param_1);
      auStack_230[0] = 0x1400fecfe;
      lVar9 = FUN_1451d7080(*(undefined1 *)(lVar9 + 0x1f),lVar10,afStack_208);
      auVar1 = *(undefined1 (*) [16])(param_3 + 0x80);
      auVar15 = ZEXT1664(*(undefined1 (*) [16])(param_3 + 0x60));
      auVar17 = ZEXT1664(*(undefined1 (*) [16])(param_3 + 0x70));
      auVar18 = vpunpckhwd_avx(auVar1,auVar1);
      auVar18 = vpsrad_avx(auVar18,0x10);
      auVar18 = vcvtdq2ps_avx(auVar18);
      auVar18 = vshufpd_avx(auVar18,auVar18,3);
      auVar20 = ZEXT1664(CONCAT412(auVar18._12_4_ * _UNK_146159c9c + auVar1._12_4_,
                                   CONCAT48(auVar18._8_4_ * _UNK_146159c98 + auVar1._8_4_,
                                            CONCAT44(auVar18._4_4_ * _UNK_146159c94 + auVar1._4_4_,
                                                     auVar18._0_4_ * _DAT_146159c90 + auVar1._0_4_))
                                  ));
      uStack_210 = 0x1400fed41;
      lVar10 = FUN_145647140(*(undefined8 *)(param_3 + 0x50));
      auVar13._8_56_ = extraout_var;
      auVar13._0_8_ = extraout_XMM0_Qa;
      lVar10 = -lVar10;
      auVar12 = auVar13._0_16_;
      auVar16 = auVar17._0_16_;
      auVar3 = vpunpckldq_avx(auVar12,auVar16);
      auVar1 = vpunpckhdq_avx(auVar12,auVar16);
      auVar14 = auVar15._0_16_;
      auVar4 = vpunpckldq_avx(auVar14,(undefined1  [16])0x0);
      auVar18 = vpunpckhdq_avx(auVar14,(undefined1  [16])0x0);
      uStack_c0 = 0xffffffff00000000;
      uStack_b8 = 0xffff;
      auVar18 = vpunpckldq_avx(auVar1,auVar18);
      auVar5 = vpunpckldq_avx(auVar3,auVar4);
      auVar1 = vpunpckhdq_avx(auVar3,auVar4);
      auVar19 = auVar20._0_16_;
      auVar4 = vsubps_avx(param_2[1],auVar19);
      auVar7 = vsubps_avx(*param_2,auVar19);
      fVar22 = auVar4._0_4_;
      auVar3 = vshufps_avx(auVar4,auVar4,0x55);
      auVar4 = vshufps_avx(auVar4,auVar4,0xaa);
      auVar6 = vshufps_avx(auVar7,auVar7,0x55);
      fVar21 = auVar7._0_4_;
      auVar7 = vshufps_avx(auVar7,auVar7,0xaa);
      *(float *)((longlong)afStack_208 + lVar10) =
           auVar18._0_4_ * auVar7._0_4_ + auVar1._0_4_ * auVar6._0_4_ + auVar5._0_4_ * fVar21;
      *(float *)((longlong)afStack_208 + lVar10 + 4) =
           auVar18._4_4_ * auVar7._4_4_ + auVar1._4_4_ * auVar6._4_4_ + auVar5._4_4_ * fVar21;
      *(float *)((longlong)afStack_208 + lVar10 + 8) =
           auVar18._8_4_ * auVar7._8_4_ + auVar1._8_4_ * auVar6._8_4_ + auVar5._8_4_ * fVar21;
      *(float *)((longlong)afStack_208 + lVar10 + 0xc) =
           auVar18._12_4_ * auVar7._12_4_ + auVar1._12_4_ * auVar6._12_4_ + auVar5._12_4_ * fVar21;
      *(float *)((longlong)afStack_208 + lVar10 + 0x10) =
           auVar18._0_4_ * auVar4._0_4_ + auVar1._0_4_ * auVar3._0_4_ + fVar22 * auVar5._0_4_;
      *(float *)((longlong)afStack_208 + lVar10 + 0x14) =
           auVar18._4_4_ * auVar4._4_4_ + auVar1._4_4_ * auVar3._4_4_ + fVar22 * auVar5._4_4_;
      *(float *)((longlong)afStack_208 + lVar10 + 0x18) =
           auVar18._8_4_ * auVar4._8_4_ + auVar1._8_4_ * auVar3._8_4_ + fVar22 * auVar5._8_4_;
      *(float *)((longlong)afStack_208 + lVar10 + 0x1c) =
           auVar18._12_4_ * auVar4._12_4_ + auVar1._12_4_ * auVar3._12_4_ + fVar22 * auVar5._12_4_;
      uVar2 = *(undefined4 *)(param_3 + 0x10);
      auStack_108 = auVar12;
      auStack_f8 = auVar14;
      auStack_e8 = auVar16;
      auStack_d8 = auVar19;
      lStack_c8 = param_3;
      *(undefined8 *)((longlong)auStack_230 + lVar10) = 0x1400fedfe;
      FUN_14031bc70(&uStack_c0,uVar2);
      uStack_a8 = *(undefined8 *)(lVar9 + 0x20);
      uStack_a0 = *(undefined8 *)(lVar9 + 0x28);
      uStack_98 = *(undefined8 *)(lVar9 + 0x30);
      uStack_90 = *(undefined8 *)(lVar9 + 0x38);
      *(undefined8 *)((longlong)auStack_230 + lVar10) = 0x1400fee31;
      cVar8 = FUN_145007150((longlong)afStack_208 + lVar10);
      if (cVar8 == '\0') {
        *(undefined8 *)((longlong)auStack_230 + lVar10) = 0x1400fee52;
        func_0x000145007130(param_1,(longlong)afStack_208 + lVar10,lVar9,auStack_108);
      }
    }
  }
  return;
}

