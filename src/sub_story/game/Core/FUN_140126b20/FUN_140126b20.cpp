// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140126b20  size: 637 bytes
// Name:    FUN_140126b20
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144fd3af0, FUN_144fd3d20
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140126b20(longlong param_1,ulonglong param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  longlong lVar5;
  longlong lVar6;
  ulonglong unaff_RBP;
  undefined7 uVar7;
  uint uVar8;
  longlong lVar9;
  float fVar10;
  undefined1 extraout_var [56];
  undefined1 auVar11 [64];
  undefined8 uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [64];
  undefined1 auVar15 [64];
  float fVar16;
  undefined1 auVar17 [64];
  float fVar18;
  undefined1 auVar19 [64];
  undefined1 auVar20 [64];
  undefined1 auVar21 [64];
  float fVar22;
  undefined1 in_ZMM14 [64];
  undefined1 auVar23 [64];
  undefined4 uStack_e0;
  uint auStack_dc [33];
  undefined1 auStack_58 [16];
  undefined1 extraout_var_00 [56];
  
  lVar5 = _DAT_14a9e88c0;
  auStack_58 = in_ZMM14._0_16_;
  uVar8 = *(uint *)(param_1 + 0x120 + (param_2 & 0xffffffff) * 4);
  if (uVar8 == 0) {
    uVar12 = 0;
  }
  else {
    auVar17 = ZEXT464(_DAT_145fc6ed8);
    auVar19 = ZEXT1664(CONCAT412(_DAT_145fc6ed8,
                                 CONCAT48(_DAT_145fc6ed8,CONCAT44(_DAT_145fc6ed8,_DAT_145fc6ed8))));
    auVar20 = ZEXT464(_DAT_14615a298);
    auVar21 = ZEXT464(_DAT_146159cc0);
    uVar1 = *(undefined4 *)(param_1 + 0x160);
    auVar15 = ZEXT1264(ZEXT812(0));
    auVar14 = ZEXT864(0);
    fVar16 = _DAT_146159ec0;
    fVar18 = _DAT_14615ba88;
    do {
      uVar2 = *(uint *)(param_1 + 8 + (ulonglong)(LZCOUNT(uVar8) ^ 0x1f) * 4);
      uVar3 = *(uint *)(param_1 + 0x90 + (ulonglong)(uVar2 & 0x1fffe) * 2);
      FUN_144fd3d20(lVar5,auStack_dc,(uVar3 >> 1 & 0x1fff) + (uVar3 & 0xfffc000) * 4,uVar1);
      lVar9 = *(longlong *)(**(longlong **)(lVar5 + 0xb4f0) + 8);
      lVar9 = (ulonglong)
              *(ushort *)
               (*(longlong *)((*(longlong **)(lVar5 + 0xb4f0))[1] + 8) + 2 +
               (ulonglong)
               ((auStack_dc[0] >> 1 & 0x7fff) +
               *(int *)(lVar9 + 0x38 + (ulonglong)(auStack_dc[0] >> 0x10) * 0x3c)) * 0x14) * 0x3c +
              lVar9;
      lVar6 = func_0x000140126da0();
      uVar7 = (undefined7)(unaff_RBP >> 8);
      if (lVar6 == 0) {
        unaff_RBP = CONCAT71(uVar7,*(byte *)(lVar9 + 0x2b));
        if (*(byte *)(lVar9 + 0x2b) < 5) {
          fVar22 = (float)*(byte *)(lVar9 + 0x2d);
          fVar10 = 0.0;
          goto LAB_140126c7c;
        }
      }
      else {
        fVar22 = *(float *)(lVar6 + 0x14);
        unaff_RBP = CONCAT71(uVar7,*(undefined1 *)(lVar9 + 0x2b));
        auVar23._0_8_ = FUN_144fd3af0(lVar6,unaff_RBP & 0xffffffff);
        auVar23._8_56_ = extraout_var;
        auVar13 = vminss_avx(auVar23._0_16_,auVar21._0_16_);
        fVar10 = auVar13._0_4_;
LAB_140126c7c:
        auVar4 = vminss_avx(auVar17._0_16_,ZEXT416((uint)(fVar22 * fVar16)));
        auVar13 = vcmpss_avx(ZEXT416((uint)(fVar22 * fVar16)),auVar15._0_16_,1);
        auVar4._4_12_ = auVar4._4_12_;
        auVar4._0_4_ = auVar4._0_4_ * fVar18 + auVar17._0_4_;
        auVar13 = vblendvps_avx(auVar4,auVar19._0_16_,auVar13);
        auVar13 = vmaxss_avx(ZEXT416((uint)(auVar13._0_4_ * fVar10)),auVar17._0_16_);
        auVar23 = ZEXT1664(auVar13);
        if (auVar14._0_4_ < auVar13._0_4_) {
          uVar2 = *(uint *)(param_1 + 0xd8 + (ulonglong)(uVar2 >> 0x11) * 4);
          FUN_144fd3d20(lVar5,&uStack_e0,uVar1,(uVar2 >> 1 & 0x1fff) + (uVar2 & 0xfffc000) * 4);
          lVar9 = func_0x000140126da0(uStack_e0);
          fVar22 = auVar23._0_4_;
          auVar13 = auVar14._0_16_;
          if (lVar9 == 0) {
            fVar10 = 0.0;
          }
          else {
            auVar11._0_8_ = FUN_144fd3af0(lVar9,unaff_RBP & 0xffffffff);
            fVar22 = auVar23._0_4_;
            auVar13 = auVar14._0_16_;
            auVar11._8_56_ = extraout_var_00;
            auVar4 = vminss_avx(auVar11._0_16_,auVar17._0_16_);
            fVar10 = auVar4._0_4_;
          }
          auVar4 = vmaxss_avx(ZEXT416((uint)(auVar17._0_4_ - fVar10)),auVar20._0_16_);
          auVar13 = vmaxss_avx(auVar13,ZEXT416((uint)(fVar22 * auVar4._0_4_)));
          auVar14 = ZEXT1664(auVar13);
        }
      }
      uVar12 = auVar14._0_8_;
      uVar8 = ~(0x80000000U >> (LZCOUNT(uVar8) & 0x1fU)) & uVar8;
    } while (uVar8 != 0);
  }
  return uVar12;
}

