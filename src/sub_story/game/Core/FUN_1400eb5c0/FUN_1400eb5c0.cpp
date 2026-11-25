// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400eb5c0  size: 709 bytes
// Name:    FUN_1400eb5c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1400eb5c0(longlong param_1,longlong *param_2,int param_3,byte param_4)

{
  undefined8 uVar1;
  int iVar2;
  ushort *puVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  bool bVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 in_ZMM0 [64];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 in_ZMM1 [64];
  undefined4 uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 in_ZMM3 [64];
  undefined1 auVar19 [16];
  undefined1 in_ZMM4 [64];
  undefined1 auVar20 [16];
  
  auVar14 = in_ZMM1._0_16_;
  auVar17 = in_ZMM3._0_16_;
  auVar12 = in_ZMM0._0_16_;
  auVar19 = in_ZMM4._0_16_;
  iVar2 = *(int *)(param_1 + 0x60);
  iVar6 = -1;
  if ((((longlong)iVar2 < 0x40) && (param_3 != -1)) && (param_3 < 3)) {
    lVar5 = (longlong)param_3 * 7;
    if (*(byte *)(lVar5 + 0x147b9a410) != 0) {
      lVar9 = (ulonglong)*(byte *)(lVar5 + 0x147b9a410) * 0x10;
      lVar7 = param_2[1];
      puVar3 = (ushort *)((longlong *)*param_2)[0x191];
      lVar4 = *(longlong *)(*(longlong *)*param_2 + 0x50);
      uVar10 = (ulonglong)*puVar3;
      if (*(int *)(*(longlong *)(lVar7 + (ulonglong)*(ushort *)(lVar4 + -8 + lVar9) * 8) +
                  (ulonglong)
                  puVar3[uVar10 * 0xc + (ulonglong)*(ushort *)(lVar4 + -6 + lVar9) * 0xc + 6]) != 0)
      {
        if (*(byte *)(lVar5 + 0x147b9a411) != 0) {
          lVar8 = (ulonglong)*(byte *)(lVar5 + 0x147b9a411) * 0x10;
          lVar9 = *(longlong *)(lVar7 + (ulonglong)*(ushort *)(lVar4 + -8 + lVar8) * 8);
          auVar12._8_8_ = 0;
          auVar12._0_8_ =
               *(ulonglong *)
                (lVar9 + (ulonglong)
                         puVar3[uVar10 * 0xc + (ulonglong)*(ushort *)(lVar4 + -6 + lVar8) * 0xc + 6]
                );
          auVar12 = vinsertps_avx(auVar12,ZEXT416(*(uint *)(lVar9 + 8 +
                                                           (ulonglong)
                                                           puVar3[uVar10 * 0xc +
                                                                  (ulonglong)
                                                                  *(ushort *)(lVar4 + -6 + lVar8) *
                                                                  0xc + 6])),0x20);
        }
        if (*(byte *)(lVar5 + 0x147b9a412) != 0) {
          lVar8 = (ulonglong)*(byte *)(lVar5 + 0x147b9a412) * 0x10;
          lVar9 = *(longlong *)(lVar7 + (ulonglong)*(ushort *)(lVar4 + -8 + lVar8) * 8);
          auVar14._8_8_ = 0;
          auVar14._0_8_ =
               *(ulonglong *)
                (lVar9 + (ulonglong)
                         puVar3[uVar10 * 0xc + (ulonglong)*(ushort *)(lVar4 + -6 + lVar8) * 0xc + 6]
                );
          auVar14 = vinsertps_avx(auVar14,ZEXT416(*(uint *)(lVar9 + 8 +
                                                           (ulonglong)
                                                           puVar3[uVar10 * 0xc +
                                                                  (ulonglong)
                                                                  *(ushort *)(lVar4 + -6 + lVar8) *
                                                                  0xc + 6])),0x20);
        }
        if (*(byte *)(lVar5 + 0x147b9a413) == 0) {
          bVar11 = true;
        }
        else {
          lVar9 = (ulonglong)*(byte *)(lVar5 + 0x147b9a413) * 0x10;
          bVar11 = *(int *)(*(longlong *)(lVar7 + (ulonglong)*(ushort *)(lVar4 + -8 + lVar9) * 8) +
                           (ulonglong)
                           puVar3[uVar10 * 0xc +
                                  (ulonglong)*(ushort *)(lVar4 + -6 + lVar9) * 0xc + 6]) == 0;
        }
        uVar16 = _DAT_145fc6ed8;
        if (*(byte *)(lVar5 + 0x147b9a414) != 0) {
          lVar9 = (ulonglong)*(byte *)(lVar5 + 0x147b9a414) * 0x10;
          uVar16 = *(undefined4 *)
                    (*(longlong *)(lVar7 + (ulonglong)*(ushort *)(lVar4 + -8 + lVar9) * 8) +
                    (ulonglong)
                    puVar3[uVar10 * 0xc + (ulonglong)*(ushort *)(lVar4 + -6 + lVar9) * 0xc + 6]);
        }
        if (*(byte *)(lVar5 + 0x147b9a415) != 0) {
          lVar8 = (ulonglong)*(byte *)(lVar5 + 0x147b9a415) * 0x10;
          lVar9 = *(longlong *)(lVar7 + (ulonglong)*(ushort *)(lVar4 + -8 + lVar8) * 8);
          auVar17._8_8_ = 0;
          auVar17._0_8_ =
               *(ulonglong *)
                (lVar9 + (ulonglong)
                         puVar3[uVar10 * 0xc + (ulonglong)*(ushort *)(lVar4 + -6 + lVar8) * 0xc + 6]
                );
          auVar17 = vinsertps_avx(auVar17,ZEXT416(*(uint *)(lVar9 + 8 +
                                                           (ulonglong)
                                                           puVar3[uVar10 * 0xc +
                                                                  (ulonglong)
                                                                  *(ushort *)(lVar4 + -6 + lVar8) *
                                                                  0xc + 6])),0x20);
        }
        if (*(byte *)(lVar5 + 0x147b9a416) != 0) {
          lVar9 = (ulonglong)*(byte *)(lVar5 + 0x147b9a416) * 0x10;
          lVar5 = *(longlong *)(lVar7 + (ulonglong)*(ushort *)(lVar4 + -8 + lVar9) * 8);
          auVar19._8_8_ = 0;
          auVar19._0_8_ =
               *(ulonglong *)
                (lVar5 + (ulonglong)
                         puVar3[uVar10 * 0xc + (ulonglong)*(ushort *)(lVar4 + -6 + lVar9) * 0xc + 6]
                );
          auVar19 = vinsertps_avx(auVar19,ZEXT416(*(uint *)(lVar5 + 8 +
                                                           (ulonglong)
                                                           puVar3[uVar10 * 0xc +
                                                                  (ulonglong)
                                                                  *(ushort *)(lVar4 + -6 + lVar9) *
                                                                  0xc + 6])),0x20);
        }
        auVar15 = auVar12;
        if (bVar11 == false) {
          auVar15 = auVar17;
        }
        auVar20._0_4_ = auVar12._0_4_ * _DAT_146159ec4;
        auVar20._4_4_ = auVar12._4_4_ * _DAT_146159ec4;
        auVar20._8_4_ = auVar12._8_4_ * _DAT_146159ec4;
        auVar20._12_4_ = auVar12._12_4_ * _DAT_146159ec4;
        auVar18._0_4_ = auVar14._0_4_ * _DAT_146159ec4;
        auVar18._4_4_ = auVar14._4_4_ * _DAT_146159ec4;
        auVar18._8_4_ = auVar14._8_4_ * _DAT_146159ec4;
        auVar18._12_4_ = auVar14._12_4_ * _DAT_146159ec4;
        auVar13._0_4_ = auVar15._0_4_ * _DAT_146159ec4;
        auVar13._4_4_ = auVar15._4_4_ * _DAT_146159ec4;
        auVar13._8_4_ = auVar15._8_4_ * _DAT_146159ec4;
        auVar13._12_4_ = auVar15._12_4_ * _DAT_146159ec4;
        if (bVar11 == false) {
          auVar14 = auVar19;
        }
        lVar5 = *(longlong *)(param_1 + 0x58);
        auVar15._0_4_ = auVar14._0_4_ * _DAT_146159ec4;
        auVar15._4_4_ = auVar14._4_4_ * _DAT_146159ec4;
        auVar15._8_4_ = auVar14._8_4_ * _DAT_146159ec4;
        auVar15._12_4_ = auVar14._12_4_ * _DAT_146159ec4;
        auVar12 = vinsertps_avx(auVar20,auVar18,0x30);
        auVar17 = vshufps_avx(auVar18,auVar18,0xe9);
        *(int *)(param_1 + 0x60) = iVar2 + 1;
        lVar7 = (longlong)iVar2 * 0x40;
        auVar14 = vinsertps_avx(auVar13,auVar15,0x30);
        auVar19 = vshufps_avx(auVar15,auVar15,0xe9);
        *(undefined1 (*) [16])(lVar5 + lVar7) = auVar12;
        uVar1 = vmovlps_avx(auVar17);
        *(undefined8 *)(lVar5 + 0x10 + lVar7) = uVar1;
        *(uint *)(lVar5 + 0x18 + lVar7) = (uint)param_4 * 4 + 1 + (uint)(bVar11 ^ 1) * 2;
        *(undefined4 *)(lVar5 + 0x1c + lVar7) = uVar16;
        *(undefined1 (*) [16])(lVar5 + 0x20 + lVar7) = auVar14;
        uVar1 = vmovlps_avx(auVar19);
        *(undefined8 *)(lVar5 + 0x30 + lVar7) = uVar1;
        *(undefined8 *)(lVar5 + 0x38 + lVar7) = 0;
        iVar6 = iVar2;
      }
    }
  }
  return iVar6;
}

