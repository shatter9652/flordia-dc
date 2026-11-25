// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14013d190  size: 468 bytes
// Name:    FUN_14013d190
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1452d75d0, FUN_1404e20c0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14013d190(undefined8 param_1,longlong param_2,longlong *param_3)

{
  float *pfVar1;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  longlong lVar9;
  ulonglong uVar10;
  float fVar11;
  float fVar12;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [64];
  undefined1 auVar18 [64];
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  
  uVar10 = 0;
  auVar17 = ZEXT1264(ZEXT812(0));
  if (param_2 != 0) {
    lVar9 = FUN_1452d75d0(param_1,*(longlong *)(param_2 + 8) + 0x20);
    uVar10 = auVar17._0_8_;
    if (lVar9 != 0) {
      uVar2 = *(uint *)(lVar9 + -0x10);
      auVar17 = ZEXT1264(ZEXT812(0));
      plVar4 = *(longlong **)((ulonglong)(uVar2 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0);
      uVar13 = extraout_XMM0_Qa;
      if (plVar4 != (longlong *)0x0) {
        uVar3 = *(uint *)(plVar4[5] + (ulonglong)(uVar2 & 0x1ffff) * 4);
        if (((((uVar3 >> 0x11 & 0x3ff) == uVar2 >> 0x16) &&
             ((uVar3 & *(uint *)(plVar4 + 6)) == *(uint *)(plVar4 + 6))) &&
            (lVar5 = *plVar4, lVar5 != 0)) &&
           (uVar10 = (ulonglong)((uVar2 & 0x1ffff) * (int)plVar4[1]),
           *(char *)(lVar5 + 0x30 + uVar10) == '\x02')) {
          lVar6 = *(longlong *)(lVar5 + 0x20 + uVar10);
          auVar14 = _DAT_1461677c0;
          auVar15 = _DAT_1461677b0;
          if (lVar6 != 0) {
            auVar14 = *(undefined1 (*) [16])(lVar6 + 0x40);
            auVar15 = *(undefined1 (*) [16])(lVar6 + 0x30);
          }
          auVar18 = ZEXT1664(auVar15);
          auVar17 = ZEXT1664(auVar14);
          (**(code **)(*param_3 + 0x20))(param_3,&fStack_58);
          auVar14 = *(undefined1 (*) [16])(lVar5 + 0x70 + uVar10);
          auVar16._0_12_ = ZEXT812(0);
          auVar16._12_4_ = 0;
          auVar7 = vmovshdup_avx(auVar18._0_16_);
          auVar8 = vmovshdup_avx(auVar17._0_16_);
          auVar15 = vpunpckhwd_avx(auVar14,auVar14);
          auVar15 = vpsrad_avx(auVar15,0x10);
          auVar15 = vcvtdq2ps_avx(auVar15);
          auVar15 = vshufpd_avx(auVar15,auVar15,3);
          fStack_58 = (-(auVar15._0_4_ * _DAT_146159c90) - auVar14._0_4_) + fStack_58;
          fStack_54 = (-(auVar15._4_4_ * _UNK_146159c94) - auVar14._4_4_) + fStack_54;
          fStack_50 = (-(auVar15._8_4_ * _UNK_146159c98) - auVar14._8_4_) + fStack_50;
          fStack_4c = (-(auVar15._12_4_ * _UNK_146159c9c) - auVar14._12_4_) + fStack_4c;
          pfVar1 = (float *)(lVar5 + 0x50 + uVar10);
          auVar14._0_4_ = fStack_58 * *pfVar1;
          auVar14._4_4_ = fStack_54 * pfVar1[1];
          auVar14._8_4_ = fStack_50 * pfVar1[2];
          auVar14._12_4_ = fStack_4c * pfVar1[3];
          auVar14 = vblendps_avx(auVar14,auVar16,8);
          auVar14 = vhaddps_avx(auVar14,auVar14);
          auVar15 = vhaddps_avx(auVar14,auVar14);
          uVar13 = auVar15._0_8_;
          auVar14 = vcmpps_avx(auVar7,auVar15,6);
          auVar15 = vcmpps_avx(auVar15,auVar8,6);
          if (((auVar14._0_4_ | auVar15._0_4_) & 1) != 0) {
            pfVar1 = (float *)(lVar5 + 0x40 + uVar10);
            auVar15._0_4_ = fStack_58 * *pfVar1;
            auVar15._4_4_ = fStack_54 * pfVar1[1];
            auVar15._8_4_ = fStack_50 * pfVar1[2];
            auVar15._12_4_ = fStack_4c * pfVar1[3];
            auVar14 = vblendps_avx(auVar15,auVar16,8);
            auVar14 = vhaddps_avx(auVar14,auVar14);
            auVar14 = vhaddps_avx(auVar14,auVar14);
            uVar13 = auVar14._0_8_;
          }
          auVar17 = ZEXT464((uint)((float)uVar13 * _DAT_1461677d0));
        }
      }
      fVar11 = (float)FUN_1404e20c0(uVar13,0,param_3);
      fVar12 = (float)func_0x000145f40770(auVar17._0_8_);
      uVar2 = *(uint *)(lVar9 + 0x1c);
      fVar12 = fVar12 * _DAT_146159b44 + _DAT_145fc6f98;
      *(uint *)(lVar9 + 0x1c) = uVar2 + 1;
      uVar10 = (ulonglong)
               (uint)(fVar12 * fVar11 * *(float *)(&UNK_14615d5d8 + (ulonglong)(uVar2 < 2) * 4));
    }
  }
  return uVar10;
}

