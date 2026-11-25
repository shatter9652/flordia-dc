// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14006a390  size: 648 bytes
// Name:    FUN_14006a390
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14006a390(longlong param_1,undefined1 (*param_2) [16],undefined1 (*param_3) [16],
                       undefined1 (*param_4) [16],char param_5,char param_6)

{
  undefined1 auVar1 [16];
  uint uVar2;
  longlong *plVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  byte bVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  byte bVar16;
  undefined8 unaff_RBX;
  undefined7 uVar17;
  char cVar18;
  uint uVar19;
  ulonglong uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  
  uVar17 = (undefined7)((ulonglong)unaff_RBX >> 8);
  uVar15 = CONCAT71(uVar17,param_5);
  if (((*param_3)[0xc] & 4) != 0) {
    lVar13 = func_0x000144eb5520();
    lVar14 = func_0x000144eb5520(param_1,param_3);
    if (((lVar13 != 0) && (lVar14 != 0)) && (*(char *)(lVar13 + 0x1b) != *(char *)(lVar14 + 0x1b)))
    {
      uVar15 = (ulonglong)(byte)param_3[2][0xc];
      if (uVar15 == 0) {
        cVar18 = '\0';
      }
      else {
        auVar1 = *param_3;
        uVar19 = (uint)*(short *)(param_3[2] + 6);
        cVar18 = '\0';
        auVar22 = vsubps_avx(auVar1,*param_2);
        auVar27 = vsubps_avx(*param_4,auVar1);
        lVar13 = *(longlong *)
                  (*(longlong *)(param_1 + 0xc30 + (ulonglong)*(ushort *)(param_3[1] + 4) * 8) +
                  0x10);
        auVar21._0_4_ = auVar22._0_4_ ^ _DAT_145fc6f10;
        auVar21._4_4_ = auVar22._4_4_ ^ _DAT_145fc6f10;
        auVar21._8_4_ = auVar22._8_4_ ^ _DAT_145fc6f10;
        auVar21._12_4_ = auVar22._12_4_ ^ _DAT_145fc6f10;
        auVar28 = vmovshdup_avx(auVar22);
        auVar28 = vunpcklps_avx(auVar28,auVar21);
        auVar28 = vinsertps_avx(auVar28,auVar22,0x74);
        auVar21 = ZEXT816(0) << 0x20;
        fVar23 = auVar28._0_4_;
        auVar22._0_4_ = fVar23 * fVar23;
        fVar24 = auVar28._4_4_;
        auVar22._4_4_ = fVar24 * fVar24;
        fVar25 = auVar28._8_4_;
        auVar22._8_4_ = fVar25 * fVar25;
        fVar26 = auVar28._12_4_;
        auVar22._12_4_ = fVar26 * fVar26;
        auVar28 = vblendps_avx(auVar22,auVar21,8);
        auVar28 = vhaddps_avx(auVar28,auVar28);
        auVar22 = vhaddps_avx(auVar28,auVar28);
        auVar28 = vrsqrtps_avx(auVar22);
        fVar4 = auVar28._0_4_;
        fVar6 = auVar28._4_4_;
        fVar8 = auVar28._8_4_;
        fVar10 = auVar28._12_4_;
        fVar5 = auVar27._0_4_;
        auVar28._0_4_ = fVar5 * fVar5;
        fVar7 = auVar27._4_4_;
        auVar28._4_4_ = fVar7 * fVar7;
        fVar9 = auVar27._8_4_;
        auVar28._8_4_ = fVar9 * fVar9;
        fVar11 = auVar27._12_4_;
        auVar28._12_4_ = fVar11 * fVar11;
        auVar28 = vblendps_avx(auVar28,auVar21,8);
        auVar28 = vhaddps_avx(auVar28,auVar28);
        fVar23 = ((_DAT_145fc6f08 * fVar4 * fVar4 * auVar22._0_4_ - _DAT_145fc6f08) * fVar4 + fVar4)
                 * fVar23;
        fVar24 = ((_DAT_145fc6f08 * fVar6 * fVar6 * auVar22._4_4_ - _DAT_145fc6f08) * fVar6 + fVar6)
                 * fVar24;
        fVar25 = ((_DAT_145fc6f08 * fVar8 * fVar8 * auVar22._8_4_ - _DAT_145fc6f08) * fVar8 + fVar8)
                 * fVar25;
        fVar26 = ((_DAT_145fc6f08 * fVar10 * fVar10 * auVar22._12_4_ - _DAT_145fc6f08) * fVar10 +
                 fVar10) * fVar26;
        auVar28 = vhaddps_avx(auVar28,auVar28);
        auVar22 = vrsqrtps_avx(auVar28);
        fVar4 = auVar22._0_4_;
        fVar6 = auVar22._4_4_;
        fVar8 = auVar22._8_4_;
        fVar10 = auVar22._12_4_;
        auVar27._0_4_ =
             fVar23 * fVar5 * ((_DAT_145fc6f08 * fVar4 * fVar4 * auVar28._0_4_ - _DAT_145fc6f08) *
                               fVar4 + fVar4);
        auVar27._4_4_ =
             fVar24 * fVar7 * ((_DAT_145fc6f08 * fVar6 * fVar6 * auVar28._4_4_ - _DAT_145fc6f08) *
                               fVar6 + fVar6);
        auVar27._8_4_ =
             fVar25 * fVar9 * ((_DAT_145fc6f08 * fVar8 * fVar8 * auVar28._8_4_ - _DAT_145fc6f08) *
                               fVar8 + fVar8);
        auVar27._12_4_ =
             fVar26 * fVar11 * ((_DAT_145fc6f08 * fVar10 * fVar10 * auVar28._12_4_ - _DAT_145fc6f08)
                                * fVar10 + fVar10);
        auVar28 = vblendps_avx(auVar27,auVar21,8);
        auVar28 = vhaddps_avx(auVar28,auVar28);
        auVar28 = vhaddps_avx(auVar28,auVar28);
        do {
          uVar2 = *(uint *)(lVar13 + 4 + (ulonglong)uVar19 * 0x20);
          if (((uVar2 != *(uint *)(param_4[1] + 4)) && (uVar2 != *(uint *)(param_2[1] + 4))) &&
             ((uVar20 = (ulonglong)uVar2 & 0xffff, uVar20 != 0xffff &&
              (((uint)uVar20 < 0x12c0 &&
               (plVar3 = *(longlong **)(param_1 + 0xc30 + uVar20 * 8), plVar3 != (longlong *)0x0))))
             )) {
            if ((uVar2 >> 0x10 < (uint)*(ushort *)(plVar3 + 1)) &&
               ((*(ushort *)(plVar3 + 1) != 0 || (short)plVar3[9] != 0 && (*plVar3 != 0)))) {
              auVar22 = vsubps_avx(*(undefined1 (*) [16])
                                    (*plVar3 + (ulonglong)(uVar2 >> 0x10) * 0x34),auVar1);
              fVar4 = auVar22._0_4_;
              auVar30._0_4_ = fVar4 * fVar4;
              fVar6 = auVar22._4_4_;
              auVar30._4_4_ = fVar6 * fVar6;
              fVar8 = auVar22._8_4_;
              auVar30._8_4_ = fVar8 * fVar8;
              fVar10 = auVar22._12_4_;
              auVar30._12_4_ = fVar10 * fVar10;
              auVar22 = vblendps_avx(auVar30,auVar21,8);
              auVar22 = vhaddps_avx(auVar22,auVar22);
              auVar22 = vhaddps_avx(auVar22,auVar22);
              auVar27 = vrsqrtps_avx(auVar22);
              fVar5 = auVar27._0_4_;
              fVar7 = auVar27._4_4_;
              fVar9 = auVar27._8_4_;
              fVar11 = auVar27._12_4_;
              auVar29._0_4_ =
                   fVar4 * fVar23 *
                   ((_DAT_145fc6f08 * fVar5 * fVar5 * auVar22._0_4_ - _DAT_145fc6f08) * fVar5 +
                   fVar5);
              auVar29._4_4_ =
                   fVar6 * fVar24 *
                   ((_DAT_145fc6f08 * fVar7 * fVar7 * auVar22._4_4_ - _DAT_145fc6f08) * fVar7 +
                   fVar7);
              auVar29._8_4_ =
                   fVar8 * fVar25 *
                   ((_DAT_145fc6f08 * fVar9 * fVar9 * auVar22._8_4_ - _DAT_145fc6f08) * fVar9 +
                   fVar9);
              auVar29._12_4_ =
                   fVar10 * fVar26 *
                   ((_DAT_145fc6f08 * fVar11 * fVar11 * auVar22._12_4_ - _DAT_145fc6f08) * fVar11 +
                   fVar11);
              auVar22 = vblendps_avx(auVar29,auVar21,8);
              auVar22 = vhaddps_avx(auVar22,auVar22);
              auVar22 = vhaddps_avx(auVar22,auVar22);
              auVar22 = vcmpps_avx(auVar22,auVar28,5);
              if ((((SUB161(auVar22 >> 0x1f,0) & 1) == 0 && (SUB161(auVar22 >> 0x3f,0) & 1) == 0) &&
                  (SUB161(auVar22 >> 0x5f,0) & 1) == 0) && -1 < auVar22[0xf]) {
                cVar18 = cVar18 + *(char *)((ulonglong)uVar19 * 0x20 + lVar13 + 0x1b);
              }
            }
          }
          uVar19 = uVar19 + 1;
          uVar15 = uVar15 - 1;
        } while (uVar15 != 0);
      }
      bVar16 = param_5 - cVar18;
      uVar15 = CONCAT71(uVar17,bVar16);
      if (param_6 != '\0') {
        bVar12 = *(char *)(lVar14 + 0x1b) - 1;
        if ((char)bVar16 < (char)bVar12) {
          bVar12 = bVar16;
        }
        if ((char)bVar12 < '\x01') {
          return 0;
        }
        return (ulonglong)bVar12;
      }
    }
  }
  return uVar15 & 0xffffffff;
}

