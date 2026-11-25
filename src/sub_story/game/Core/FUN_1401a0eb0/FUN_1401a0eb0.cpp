// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401a0eb0  size: 927 bytes
// Name:    FUN_1401a0eb0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140f234a0, FUN_140f234c0, FUN_1450654c0, FUN_145238e00, FUN_14122b490, FUN_140f235b0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401a0eb0(longlong param_1)

{
  ushort uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  uint uVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  float fVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [64];
  undefined1 in_ZMM7 [64];
  undefined1 auVar22 [64];
  undefined1 auVar23 [64];
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined1 auStack_3b8 [16];
  undefined8 uStack_3a0;
  undefined8 auStack_398 [64];
  undefined1 auStack_194 [300];
  undefined1 auStack_68 [16];
  
  auStack_68 = in_ZMM7._0_16_;
  uVar7 = func_0x000144dc06c0(*(undefined4 *)(param_1 + 0xd30));
  if (2999 < uVar7) {
    *(undefined4 *)(param_1 + 0xd30) = _DAT_14abbef40;
    uStack_3a0 = 0x40;
    uVar13 = (ulonglong)*(uint *)(param_1 + 0x1c);
    if (uVar13 != 0) {
      uVar7 = 0;
      auVar21 = ZEXT1264(ZEXT812(0));
      uVar10 = 0;
      do {
        if (uVar7 == 0x40) {
          uVar7 = 0x40;
          goto LAB_1401a11f2;
        }
        lVar15 = *(longlong *)(param_1 + 0x20 + uVar10 * 8);
        lVar2 = *(longlong *)(lVar15 + 8);
        if ((((lVar2 != 0) && (*(char *)(lVar2 + 0x14) == '\x01')) &&
            (*(char *)(lVar2 + 0x1a) == '\x01')) &&
           (uVar1 = *(ushort *)(lVar15 + 0x18), 1 < (ulonglong)uVar1)) {
          auVar22 = ZEXT1664(*(undefined1 (*) [16])(lVar15 + 0x30));
          uVar14 = 0;
          uVar5 = uVar7;
          do {
            if (uVar5 == 0x40) break;
            plVar3 = *(longlong **)(*(longlong *)(lVar15 + 0x10) + uVar14 * 8);
            lVar2 = *plVar3;
            lVar11 = FUN_145238e00(lVar2);
            if (lVar11 != 0) {
              func_0x000145f40560(auStack_194,*(undefined8 *)(lVar11 + 0x340),0x11c);
              uStack_3c8 = *(undefined8 *)(lVar2 + 0x70);
              uStack_3c0 = *(undefined8 *)(lVar2 + 0x78);
              func_0x000144dc3790(&uStack_3c8,auStack_3b8);
              fVar16 = (float)func_0x0001452dd900(auStack_194,0x15);
              fVar16 = fVar16 * fVar16;
              auVar17._4_4_ = fVar16;
              auVar17._0_4_ = fVar16;
              auVar17._8_4_ = fVar16;
              auVar17._12_4_ = fVar16;
              auVar20 = vsubps_avx(auStack_3b8,auVar22._0_16_);
              auVar19._0_4_ = auVar20._0_4_ * auVar20._0_4_;
              auVar19._4_4_ = auVar20._4_4_ * auVar20._4_4_;
              auVar19._8_4_ = auVar20._8_4_ * auVar20._8_4_;
              auVar19._12_4_ = auVar20._12_4_ * auVar20._12_4_;
              auVar20 = vblendps_avx(auVar19,auVar21._0_16_,8);
              auVar20 = vhaddps_avx(auVar20,auVar20);
              auVar20 = vhaddps_avx(auVar20,auVar20);
              auVar20 = vcmpps_avx(auVar17,auVar20,5);
              if ((((SUB161(auVar20 >> 0x1f,0) & 1) == 0 && (SUB161(auVar20 >> 0x3f,0) & 1) == 0) &&
                  (SUB161(auVar20 >> 0x5f,0) & 1) == 0) && -1 < auVar20[0xf]) {
                uVar7 = uVar5 + 1;
                uStack_3a0 = CONCAT44(uVar7,(undefined4)uStack_3a0);
                auStack_398[uVar5] = plVar3;
                uVar5 = uVar7;
              }
            }
            uVar14 = uVar14 + 1;
          } while (uVar1 != uVar14);
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < uVar13);
      if (uVar7 != 0) {
LAB_1401a11f2:
        lVar15 = 0;
        do {
          FUN_140f234c0(param_1,*(undefined8 *)((longlong)auStack_398 + lVar15));
          lVar15 = lVar15 + 8;
        } while ((ulonglong)uVar7 << 3 != lVar15);
        uVar13 = (ulonglong)*(uint *)(param_1 + 0x1c);
      }
      if ((int)uVar13 != 0) {
        lVar15 = param_1 + 0x28;
        uVar14 = 1;
        uVar10 = 0;
        auVar21 = ZEXT1264(ZEXT812(0));
        do {
          lVar2 = *(longlong *)(param_1 + 0x20 + uVar10 * 8);
          lVar11 = *(longlong *)(lVar2 + 8);
          if (((lVar11 != 0) && (*(short *)(lVar2 + 0x18) != 0)) &&
             ((*(char *)(lVar11 + 0x14) == '\x01' &&
              ((*(char *)(lVar11 + 0x1a) == '\x01' && (uVar10 + 1 < uVar13)))))) {
            if (*(char *)(lVar11 + 0x26) == '\0') {
              auVar22 = ZEXT1664(*(undefined1 (*) [16])(lVar2 + 0x30));
              uVar12 = uVar14;
              do {
                lVar4 = *(longlong *)(param_1 + 0x20 + uVar12 * 8);
                cVar6 = FUN_140f234a0(lVar4,**(undefined8 **)(lVar2 + 0x10));
                if (((cVar6 != '\0') && (*(ushort *)(lVar4 + 0x18) != 0)) &&
                   (((int)*(uint *)(lVar11 + 0x1f8) < 1 ||
                    ((uint)*(ushort *)(lVar2 + 0x18) + (uint)*(ushort *)(lVar4 + 0x18) <=
                     *(uint *)(lVar11 + 0x1f8))))) {
                  auVar20 = vsubps_avx(auVar22._0_16_,*(undefined1 (*) [16])(lVar4 + 0x30));
                  auVar23 = ZEXT1664(auVar20);
                  lVar8 = func_0x0001401a1370(lVar2);
                  uVar9 = FUN_14122b490(*(undefined8 *)(lVar8 + 8),*(undefined2 *)(lVar8 + 0x10),2);
                  func_0x000145f40560(&uStack_3a0,uVar9,0x11c);
                  fVar16 = (float)func_0x0001452dd900(&uStack_3a0,0x18);
                  auVar20._0_4_ = auVar23._0_4_ * auVar23._0_4_;
                  auVar20._4_4_ = auVar23._4_4_ * auVar23._4_4_;
                  auVar20._8_4_ = auVar23._8_4_ * auVar23._8_4_;
                  auVar20._12_4_ = auVar23._12_4_ * auVar23._12_4_;
                  fVar16 = fVar16 * fVar16;
                  auVar20 = vblendps_avx(auVar20,auVar21._0_16_,8);
                  auVar18._4_4_ = fVar16;
                  auVar18._0_4_ = fVar16;
                  auVar18._8_4_ = fVar16;
                  auVar18._12_4_ = fVar16;
                  auVar20 = vhaddps_avx(auVar20,auVar20);
                  auVar20 = vhaddps_avx(auVar20,auVar20);
                  auVar20 = vcmpps_avx(auVar20,auVar18,5);
                  if ((((SUB161(auVar20 >> 0x1f,0) & 1) == 0 && (SUB161(auVar20 >> 0x3f,0) & 1) == 0
                       ) && (SUB161(auVar20 >> 0x5f,0) & 1) == 0) && -1 < auVar20[0xf]) {
                    do {
                      if (*(ushort *)(lVar4 + 0x18) == 0) break;
                      cVar6 = FUN_140f235b0(lVar2,*(undefined8 *)
                                                   (*(longlong *)(lVar4 + 0x10) +
                                                   (ulonglong)(*(ushort *)(lVar4 + 0x18) - 1) * 8));
                    } while (cVar6 != '\0');
                  }
                }
                uVar13 = (ulonglong)*(uint *)(param_1 + 0x1c);
                uVar12 = uVar12 + 1;
              } while (uVar12 < uVar13);
            }
            else {
              lVar11 = 0;
              do {
                FUN_140f234a0(*(undefined8 *)(lVar15 + lVar11 * 8),**(undefined8 **)(lVar2 + 0x10));
                uVar13 = (ulonglong)*(uint *)(param_1 + 0x1c);
                uVar12 = uVar14 + 1 + lVar11;
                lVar11 = lVar11 + 1;
              } while (uVar12 < uVar13);
            }
          }
          uVar10 = uVar10 + 1;
          uVar14 = uVar14 + 1;
          lVar15 = lVar15 + 8;
        } while (uVar10 < uVar13);
      }
    }
    FUN_1450654c0(param_1);
  }
  return;
}

