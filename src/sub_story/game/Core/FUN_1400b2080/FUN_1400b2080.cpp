// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400b2080  size: 1005 bytes
// Name:    FUN_1400b2080
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14095b8a0, FUN_1452303e0, FUN_1454bb2b0, FUN_144ad9ac0, FUN_140b6c9d0, FUN_142983cd0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400b2080(longlong param_1,longlong param_2,undefined8 param_3,longlong *param_4,
                  longlong param_5,char param_6)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  uint uVar6;
  longlong lVar7;
  undefined1 auVar8 [16];
  float fVar9;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar10 [16];
  float fVar14;
  float fVar18;
  float fVar19;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [104];
  
  if ((*(longlong *)(param_1 + 0x50) != 0) &&
     (((param_6 == '\0' ||
       ((param_5 != 0 && (*(float *)(param_1 + 0x60) <= *(float *)(param_5 + 0x40))))) &&
      (uVar6 = *(int *)(param_2 + 0x8c) * 0x19660d + 0xe8bea4b8,
      uVar2 = *(int *)(param_2 + 0x8c) * 0x17385ca9 + 0x5771bed5,
      uVar2 = (uVar2 >> 0x10 ^ uVar2) * 0x19660d + (uVar6 >> 0x10 ^ uVar6),
      plVar5 = (longlong *)FUN_142983cd0(*(longlong *)(param_1 + 0x50),uVar2 >> 0x10 ^ uVar2),
      plVar5 != (longlong *)0x0)))) {
    uVar1 = *(undefined4 *)(param_2 + 0x8c);
    uVar3 = func_0x00014501ab80(param_3);
    uVar4 = func_0x000144e98420(param_4);
    *(undefined4 *)((longlong)plVar5 + 0x3c4) = uVar4;
    *(undefined4 *)(plVar5 + 0x79) = uVar3;
    *(undefined4 *)((longlong)plVar5 + 0x3cc) = uVar1;
    plVar5[0x7a] = param_1;
    FUN_144ad9ac0(plVar5 + 0x7b,uVar1,param_1 + 0x10,param_1 + 0x30);
    if (param_6 != '\0') {
      fVar9 = *(float *)(param_5 + 0x10);
      fVar11 = *(float *)(param_5 + 0x14);
      fVar12 = *(float *)(param_5 + 0x18);
      fVar13 = *(float *)(param_5 + 0x1c);
      auVar8 = ZEXT416(0) << 0x20;
      auVar24._4_4_ = _DAT_1461667c4;
      auVar24._0_4_ = _DAT_1461667c4;
      auVar24._8_4_ = _DAT_1461667c4;
      auVar24._12_4_ = _DAT_1461667c4;
      auVar15._0_4_ = fVar9 * _DAT_14614f7f0;
      auVar15._4_4_ = fVar11 * _UNK_14614f7f4;
      auVar15._8_4_ = fVar12 * _UNK_14614f7f8;
      auVar15._12_4_ = fVar13 * _UNK_14614f7fc;
      auVar15 = vblendps_avx(auVar15,auVar8,8);
      auVar15 = vhaddps_avx(auVar15,auVar15);
      auVar15 = vhaddps_avx(auVar15,auVar15);
      auVar16._0_4_ = auVar15._0_4_ & _DAT_145fc6f4c;
      auVar16._4_4_ = auVar15._4_4_ & _DAT_145fc6f4c;
      auVar16._8_4_ = auVar15._8_4_ & _DAT_145fc6f4c;
      auVar16._12_4_ = auVar15._12_4_ & _DAT_145fc6f4c;
      auVar15 = vcmpps_avx(auVar24,auVar16,6);
      if ((((SUB161(auVar15 >> 0x1f,0) & 1) == 0 && (SUB161(auVar15 >> 0x3f,0) & 1) == 0) &&
          (SUB161(auVar15 >> 0x5f,0) & 1) == 0) && -1 < auVar15[0xf]) {
        auVar17._8_8_ = 0;
        auVar17._0_8_ = _DAT_146159bc0;
      }
      else {
        auVar17._4_4_ = _UNK_14614f7f4;
        auVar17._0_4_ = _DAT_14614f7f0;
        auVar17._8_4_ = _UNK_14614f7f8;
        auVar17._12_4_ = _UNK_14614f7fc;
      }
      if (*(char *)(param_1 + 0x67) != '\0') {
        auVar21._4_4_ = _DAT_145fc6f10;
        auVar21._0_4_ = _DAT_145fc6f10;
        auVar21._8_4_ = _DAT_145fc6f10;
        auVar21._12_4_ = _DAT_145fc6f10;
        fVar9 = (float)((uint)fVar9 ^ _DAT_145fc6f10);
        fVar11 = (float)((uint)fVar11 ^ _DAT_145fc6f10);
        fVar12 = (float)((uint)fVar12 ^ _DAT_145fc6f10);
        fVar13 = (float)((uint)fVar13 ^ _DAT_145fc6f10);
        auVar17 = auVar17 | auVar21;
      }
      auVar22._0_4_ = fVar9 * fVar9;
      auVar22._4_4_ = fVar11 * fVar11;
      auVar22._8_4_ = fVar12 * fVar12;
      auVar22._12_4_ = fVar13 * fVar13;
      auVar15 = vblendps_avx(auVar22,auVar8,8);
      auVar15 = vhaddps_avx(auVar15,auVar15);
      auVar15 = vhaddps_avx(auVar15,auVar15);
      auVar16 = vrsqrtps_avx(auVar15);
      fVar14 = auVar16._0_4_;
      fVar18 = auVar16._4_4_;
      fVar19 = auVar16._8_4_;
      fVar20 = auVar16._12_4_;
      auVar10._0_4_ =
           ((_DAT_145fc6f08 * fVar14 * fVar14 * auVar15._0_4_ - _DAT_145fc6f08) * fVar14 + fVar14) *
           fVar9;
      auVar10._4_4_ =
           ((_DAT_145fc6f08 * fVar18 * fVar18 * auVar15._4_4_ - _DAT_145fc6f08) * fVar18 + fVar18) *
           fVar11;
      auVar10._8_4_ =
           ((_DAT_145fc6f08 * fVar19 * fVar19 * auVar15._8_4_ - _DAT_145fc6f08) * fVar19 + fVar19) *
           fVar12;
      auVar10._12_4_ =
           ((_DAT_145fc6f08 * fVar20 * fVar20 * auVar15._12_4_ - _DAT_145fc6f08) * fVar20 + fVar20)
           * fVar13;
      auVar15 = vshufps_avx(auVar17,auVar17,0xc9);
      auVar16 = vshufps_avx(auVar17,auVar17,0xd2);
      auVar24 = vshufps_avx(auVar10,auVar10,0xd2);
      auVar17 = vshufps_avx(auVar10,auVar10,0xc9);
      fVar14 = -(auVar17._0_4_ * auVar16._0_4_) + auVar24._0_4_ * auVar15._0_4_;
      fVar18 = -(auVar17._4_4_ * auVar16._4_4_) + auVar24._4_4_ * auVar15._4_4_;
      fVar19 = -(auVar17._8_4_ * auVar16._8_4_) + auVar24._8_4_ * auVar15._8_4_;
      fVar20 = -(auVar17._12_4_ * auVar16._12_4_) + auVar24._12_4_ * auVar15._12_4_;
      auVar23._0_4_ = fVar14 * fVar14;
      auVar23._4_4_ = fVar18 * fVar18;
      auVar23._8_4_ = fVar19 * fVar19;
      auVar23._12_4_ = fVar20 * fVar20;
      auVar15 = vblendps_avx(auVar23,auVar8,8);
      auVar15 = vhaddps_avx(auVar15,auVar15);
      auVar15 = vhaddps_avx(auVar15,auVar15);
      auVar8 = vrsqrtps_avx(auVar15);
      fVar9 = auVar8._0_4_;
      fVar11 = auVar8._4_4_;
      fVar12 = auVar8._8_4_;
      fVar13 = auVar8._12_4_;
      auVar8._0_4_ = fVar14 * ((_DAT_145fc6f08 * fVar9 * fVar9 * auVar15._0_4_ - _DAT_145fc6f08) *
                               fVar9 + fVar9);
      auVar8._4_4_ = fVar18 * ((_DAT_145fc6f08 * fVar11 * fVar11 * auVar15._4_4_ - _DAT_145fc6f08) *
                               fVar11 + fVar11);
      auVar8._8_4_ = fVar19 * ((_DAT_145fc6f08 * fVar12 * fVar12 * auVar15._8_4_ - _DAT_145fc6f08) *
                               fVar12 + fVar12);
      auVar8._12_4_ =
           fVar20 * ((_DAT_145fc6f08 * fVar13 * fVar13 * auVar15._12_4_ - _DAT_145fc6f08) * fVar13 +
                    fVar13);
      vshufps_avx(auVar8,auVar8,0xd2);
      vshufps_avx(auVar8,auVar8,0xc9);
    }
    func_0x000144e911f0(plVar5,auStack_b8);
    lVar7 = param_4[0x80];
    if ((char)lVar7 == '\x01') {
      uVar1 = *(undefined4 *)((longlong)param_4 + 0x3fc);
      FUN_1452303e0(plVar5,uVar1);
      *(undefined4 *)((longlong)plVar5 + 0x424) = uVar1;
    }
    *(char *)(plVar5 + 0x80) = (char)lVar7;
    *(char *)(plVar5 + 0x86) = (char)param_4[0x86];
    uVar2 = *(uint *)((longlong)param_4 + 0x314);
    if ((ulonglong)uVar2 == 0) {
      *(undefined4 *)((longlong)plVar5 + 0x314) = 0;
    }
    else {
      lVar7 = (ulonglong)uVar2 << 3;
      func_0x000145f40560(auStack_a8,param_4 + 99,lVar7);
      if (*(uint *)(plVar5 + 0x62) < uVar2) {
        *(uint *)(plVar5 + 0x62) = uVar2;
      }
      func_0x000145f40560(plVar5 + 99,auStack_a8,lVar7);
      *(uint *)((longlong)plVar5 + 0x314) = uVar2;
    }
    FUN_14095b8a0(plVar5,*(undefined2 *)((longlong)param_4 + 0xc54));
    FUN_1454bb2b0(plVar5,0,param_2);
    if ((*(char *)(*param_4 + 0x212) == '\x01') && (*(char *)(*plVar5 + 0x212) == '\x01')) {
      (**(code **)(_DAT_146b16378 + 0x78))(_DAT_14a924830,plVar5,param_4);
    }
    if (*(char *)((longlong)plVar5 + 0x2c3) == '\0') {
      FUN_140b6c9d0(plVar5);
    }
    uVar2 = *(uint *)((longlong)param_4 + 0x3bc);
    if ((uVar2 >> 0xd & 1) != 0) {
      *(byte *)((longlong)plVar5 + 0x3bd) = *(byte *)((longlong)plVar5 + 0x3bd) | 0x20;
      uVar2 = *(uint *)((longlong)param_4 + 0x3bc);
    }
    if ((uVar2 >> 0xe & 1) != 0) {
      *(byte *)((longlong)plVar5 + 0x3bd) = *(byte *)((longlong)plVar5 + 0x3bd) | 0x40;
    }
    if (*(char *)(param_1 + 100) == '\x01') {
      *(float *)((longlong)plVar5 + 0x2ac) =
           *(float *)(param_2 + 0x98) / (_DAT_145fc6ed8 - *(float *)(param_2 + 0x1c));
    }
    (**(code **)(_DAT_146b16378 + 0xd0))(_DAT_14a924830,plVar5);
  }
  return;
}

