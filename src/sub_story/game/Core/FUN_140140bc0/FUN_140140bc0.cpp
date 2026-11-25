// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140140bc0  size: 637 bytes
// Name:    FUN_140140bc0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145647140, FUN_1451d7080, FUN_14031bc70, FUN_145007150
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2
FUN_140140bc0(longlong param_1,undefined8 param_2,longlong param_3,undefined1 (*param_4) [16])

{
  undefined1 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  char cVar10;
  undefined2 uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 (*pauVar15) [16];
  undefined4 uVar16;
  float fVar17;
  undefined1 auVar18 [16];
  float fVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined8 auStack_210 [4];
  undefined8 uStack_1f0;
  float afStack_1e8 [2];
  undefined8 uStack_1e0;
  float afStack_1d8 [2];
  undefined8 uStack_1d0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  longlong lStack_a8;
  undefined8 uStack_a0;
  undefined2 uStack_98;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  auStack_210[0] = 0x140140c0b;
  func_0x000145487a00(param_1 + 0x4a0);
  auVar18._0_8_ = CONCAT44(_DAT_145fc6ed8,_DAT_145fc6ed8);
  auVar18._8_4_ = _DAT_145fc6ed8;
  auVar18._12_4_ = _DAT_145fc6ed8;
  *(undefined8 *)(param_1 + 0x4c0) = auVar18._0_8_;
  auVar18 = vpcmpeqd_avx(auVar18,auVar18);
  if (param_3 != 0) {
    auVar18 = *(undefined1 (*) [16])(param_3 + 0xf8);
  }
  auVar2 = vpand_avx(auVar18,*(undefined1 (*) [16])(param_1 + 0x470));
  uVar11 = 0;
  auVar20._0_8_ = -(ulonglong)(auVar2._0_8_ == 0);
  auVar20._8_8_ = -(ulonglong)(auVar2._8_8_ == 0);
  if (((SUB161(auVar20 >> 0x3f,0) & 1) == 0 && -1 < auVar20._8_8_) &&
     ((*(ulonglong *)(param_1 + 0x480) & auVar18._0_8_) == 0)) {
    if (param_3 != 0) {
      param_2 = *(undefined8 *)(*(longlong *)(param_3 + 8) + 0x20);
    }
    uStack_1f0 = 0x140140c70;
    lVar12 = FUN_145647140();
    lVar12 = -lVar12;
    pauVar15 = (undefined1 (*) [16])((longlong)afStack_1e8 + lVar12);
    uVar7 = *(undefined8 *)(param_1 + 0x4d8);
    uVar8 = *(undefined8 *)(param_1 + 0x4e0);
    uVar9 = *(undefined8 *)(param_1 + 0x4e8);
    *(undefined8 *)((longlong)afStack_1e8 + lVar12) = *(undefined8 *)(param_1 + 0x4d0);
    *(undefined8 *)((longlong)&uStack_1e0 + lVar12) = uVar7;
    *(undefined8 *)((longlong)afStack_1d8 + lVar12) = uVar8;
    *(undefined8 *)((longlong)&uStack_1d0 + lVar12) = uVar9;
    *(undefined8 *)((longlong)afStack_1e8 + lVar12 + -8) = 0x140140c8c;
    lVar13 = FUN_145647140();
    lVar13 = -lVar13;
    auVar21._0_12_ = ZEXT812(0);
    auVar21._12_4_ = 0;
    uVar16 = 0;
    uStack_a0 = 0xffffffff00000000;
    uStack_98 = 0xffff;
    auVar2 = vsubps_avx(pauVar15[1],param_4[3]);
    auVar3 = vunpcklps_avx(*param_4,param_4[2]);
    auVar4 = vunpcklps_avx(param_4[1],auVar21);
    auVar18 = vunpckhps_avx(*param_4,param_4[2]);
    auVar20 = vunpckhps_avx(param_4[1],auVar21);
    auVar21 = vsubps_avx(*pauVar15,param_4[3]);
    auVar5 = vunpcklps_avx(auVar18,auVar20);
    auVar6 = vunpcklps_avx(auVar3,auVar4);
    auVar3 = vunpckhps_avx(auVar3,auVar4);
    fVar19 = auVar2._0_4_;
    auVar18 = vshufps_avx(auVar2,auVar2,0x55);
    auVar2 = vshufps_avx(auVar2,auVar2,0xaa);
    auVar20 = vshufps_avx(auVar21,auVar21,0x55);
    fVar17 = auVar21._0_4_;
    auVar21 = vshufps_avx(auVar21,auVar21,0xaa);
    *(float *)((longlong)afStack_1e8 + lVar13 + lVar12) =
         auVar5._0_4_ * auVar21._0_4_ + auVar3._0_4_ * auVar20._0_4_ + fVar17 * auVar6._0_4_;
    *(float *)((longlong)afStack_1e8 + lVar13 + lVar12 + 4) =
         auVar5._4_4_ * auVar21._4_4_ + auVar3._4_4_ * auVar20._4_4_ + fVar17 * auVar6._4_4_;
    *(float *)((longlong)&uStack_1e0 + lVar13 + lVar12) =
         auVar5._8_4_ * auVar21._8_4_ + auVar3._8_4_ * auVar20._8_4_ + fVar17 * auVar6._8_4_;
    *(float *)((longlong)afStack_1d8 + lVar13 + lVar12 + -4) =
         auVar5._12_4_ * auVar21._12_4_ + auVar3._12_4_ * auVar20._12_4_ + fVar17 * auVar6._12_4_;
    *(float *)((longlong)afStack_1d8 + lVar13 + lVar12) =
         auVar5._0_4_ * auVar2._0_4_ + auVar3._0_4_ * auVar18._0_4_ + auVar6._0_4_ * fVar19;
    *(float *)((longlong)afStack_1d8 + lVar13 + lVar12 + 4) =
         auVar5._4_4_ * auVar2._4_4_ + auVar3._4_4_ * auVar18._4_4_ + auVar6._4_4_ * fVar19;
    *(float *)((longlong)&uStack_1d0 + lVar13 + lVar12) =
         auVar5._8_4_ * auVar2._8_4_ + auVar3._8_4_ * auVar18._8_4_ + auVar6._8_4_ * fVar19;
    *(float *)((longlong)&uStack_1d0 + lVar13 + lVar12 + 4) =
         auVar5._12_4_ * auVar2._12_4_ + auVar3._12_4_ * auVar18._12_4_ + auVar6._12_4_ * fVar19;
    if (param_3 != 0) {
      uVar16 = *(undefined4 *)(param_3 + 0x10);
    }
    uStack_e8 = *(undefined8 *)*param_4;
    uStack_e0 = *(undefined8 *)(*param_4 + 8);
    uStack_d8 = *(undefined8 *)param_4[1];
    uStack_d0 = *(undefined8 *)(param_4[1] + 8);
    uStack_c8 = *(undefined8 *)param_4[2];
    uStack_c0 = *(undefined8 *)(param_4[2] + 8);
    uStack_b8 = *(undefined8 *)param_4[3];
    uStack_b0 = *(undefined8 *)(param_4[3] + 8);
    lStack_a8 = param_3;
    *(undefined8 *)((longlong)auStack_210 + lVar13 + lVar12) = 0x140140d74;
    FUN_14031bc70(&uStack_a0,uVar16);
    *(undefined8 *)((longlong)auStack_210 + lVar13 + lVar12) = 0x140140d7c;
    lVar14 = func_0x000144febb80(param_1);
    uVar1 = *(undefined1 *)(lVar14 + 0x1f);
    *(undefined8 *)((longlong)auStack_210 + lVar13 + lVar12) = 0x140140d93;
    lVar14 = FUN_1451d7080(uVar1,param_2,afStack_1e8);
    uStack_88 = *(undefined8 *)(lVar14 + 0x20);
    uStack_80 = *(undefined8 *)(lVar14 + 0x28);
    uStack_78 = *(undefined8 *)(lVar14 + 0x30);
    uStack_70 = *(undefined8 *)(lVar14 + 0x38);
    *(undefined8 *)((longlong)auStack_210 + lVar13 + lVar12) = 0x140140dc7;
    cVar10 = FUN_145007150((longlong)afStack_1e8 + lVar13 + lVar12);
    if (cVar10 == '\0') {
      *(undefined8 *)((longlong)auStack_210 + lVar13 + lVar12) = 0x140140de8;
      func_0x000145007130(param_1,(longlong)afStack_1e8 + lVar13 + lVar12,lVar14,&uStack_e8);
    }
    uVar11 = *(undefined2 *)(param_1 + 0x4ba);
  }
  return uVar11;
}

