// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14000d780  size: 453 bytes
// Name:    FUN_14000d780
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14000d780(longlong param_1,longlong param_2)

{
  undefined1 (*pauVar1) [16];
  uint *puVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined1 (*pauVar9) [16];
  char cVar10;
  char cVar11;
  undefined4 uVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  float fVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  
  func_0x00014044a690(param_2);
  iVar3 = *(int *)(param_1 + 4);
  if (0 < (longlong)iVar3) {
    auVar17._4_4_ = _DAT_145fc6f70;
    auVar17._0_4_ = _DAT_145fc6f70;
    auVar17._8_4_ = _DAT_145fc6f70;
    auVar17._12_4_ = _DAT_145fc6f70;
    pauVar1 = (undefined1 (*) [16])(param_1 + 0x10);
    lVar8 = 0;
    do {
      puVar2 = (uint *)(param_1 + 0x10 + lVar8);
      auVar21._0_4_ = _DAT_145fc6f4c & *puVar2;
      auVar21._4_4_ = _DAT_145fc6f4c & puVar2[1];
      auVar21._8_4_ = _DAT_145fc6f4c & puVar2[2];
      auVar21._12_4_ = _DAT_145fc6f4c & puVar2[3];
      auVar21 = vcmpps_avx(auVar21,auVar17,0x11);
      uVar12 = vmovmskps_avx(auVar21);
      if ((~(byte)uVar12 & 3) != 0) {
        return 0;
      }
      lVar8 = lVar8 + 0x20;
    } while ((longlong)iVar3 << 5 != lVar8);
    if (3 < iVar3) {
      uVar4 = func_0x0001455b8030(param_1);
      if (uVar4 == 0xffffffff) {
        return 0;
      }
      uVar14 = *(uint *)(param_2 + 4);
      uVar6 = (ulonglong)uVar14;
      uVar5 = (ulonglong)uVar4;
      uVar13 = 0x30;
      if (0x30 < (int)uVar14) {
        uVar13 = uVar14;
      }
      while ((uint)uVar6 != uVar13) {
        uVar14 = (uint)uVar6 + 1;
        *(undefined1 *)(param_1 + 0x20 + uVar5 * 0x20) = 1;
        *(uint *)(param_2 + 4) = uVar14;
        *(undefined1 (*) [16])(param_2 + 0x10 + uVar6 * 0x10) = pauVar1[uVar5 * 2];
        iVar3 = *(int *)(param_1 + 4);
        uVar7 = (longlong)((int)uVar5 + 1) % (longlong)iVar3 & 0xffffffff;
        if (0 < (longlong)iVar3) {
          uVar15 = 0;
          uVar6 = uVar7;
          pauVar9 = pauVar1;
          do {
            uVar7 = uVar6;
            if ((uVar4 == uVar15) || (pauVar9[1][0] == '\0')) {
              auVar18._8_8_ = 0;
              auVar18._0_8_ = *(ulonglong *)*pauVar9;
              auVar22._8_8_ = 0;
              auVar22._0_8_ = *(ulonglong *)pauVar1[uVar5 * 2];
              auVar24._8_8_ = 0;
              auVar24._0_8_ = *(ulonglong *)pauVar1[uVar6 * 2];
              auVar17 = vsubps_avx(auVar18,auVar22);
              auVar21 = vsubps_avx(auVar24,auVar18);
              auVar17 = vshufps_avx(auVar17,auVar17,0xe1);
              auVar19._0_4_ = auVar21._0_4_ * auVar17._0_4_;
              auVar19._4_4_ = auVar21._4_4_ * auVar17._4_4_;
              auVar19._8_4_ = auVar21._8_4_ * auVar17._8_4_;
              auVar19._12_4_ = auVar21._12_4_ * auVar17._12_4_;
              auVar17 = vhsubps_avx(auVar19,auVar19);
              fVar16 = auVar17._0_4_;
              cVar11 = (fVar16 <= 0.0) + '\x01';
              cVar10 = '\0';
              if (fVar16 != 0.0) {
                cVar10 = cVar11;
              }
              if (NAN(fVar16)) {
                cVar10 = cVar11;
              }
              if (cVar10 == '\0') {
                auVar17 = pauVar1[uVar5 * 2];
                auVar21 = vsubps_avx(auVar17,*pauVar9);
                auVar17 = vsubps_avx(auVar17,pauVar1[uVar6 * 2]);
                auVar23._0_4_ = auVar21._0_4_ * auVar21._0_4_;
                auVar23._4_4_ = auVar21._4_4_ * auVar21._4_4_;
                auVar23._8_4_ = auVar21._8_4_ * auVar21._8_4_;
                auVar23._12_4_ = auVar21._12_4_ * auVar21._12_4_;
                auVar20._0_4_ = auVar17._0_4_ * auVar17._0_4_;
                auVar20._4_4_ = auVar17._4_4_ * auVar17._4_4_;
                auVar20._8_4_ = auVar17._8_4_ * auVar17._8_4_;
                auVar20._12_4_ = auVar17._12_4_ * auVar17._12_4_;
                auVar17 = vhaddps_avx(auVar23,auVar23);
                auVar21 = vhaddps_avx(auVar20,auVar20);
                uVar7 = uVar15 & 0xffffffff;
                if (auVar17._0_4_ <= auVar21._0_4_) {
                  uVar7 = uVar6;
                }
              }
              else if (cVar10 == '\x02') {
                uVar7 = uVar15 & 0xffffffff;
              }
            }
            uVar15 = uVar15 + 1;
            pauVar9 = pauVar9 + 2;
            uVar6 = uVar7;
          } while ((longlong)iVar3 != uVar15);
        }
        uVar6 = (ulonglong)uVar14;
        uVar5 = uVar7;
        if ((uint)uVar7 == uVar4) {
          func_0x000145280450(param_2);
          return 1;
        }
      }
    }
  }
  return 0;
}

