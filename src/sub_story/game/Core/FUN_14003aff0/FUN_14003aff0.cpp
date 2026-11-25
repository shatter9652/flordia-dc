// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14003aff0  size: 852 bytes
// Name:    FUN_14003aff0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14003aff0(longlong param_1,ushort param_2,undefined1 (*param_3) [16],
                  undefined1 (*param_4) [16],undefined1 (*param_5) [16],longlong param_6)

{
  ushort uVar1;
  uint uVar2;
  bool bVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined1 (*pauVar8) [16];
  uint uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [64];
  undefined1 auVar12 [16];
  undefined1 auVar13 [64];
  float fVar14;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar15 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [64];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined4 uVar27;
  undefined1 auVar28 [16];
  
  if (param_2 == 0) {
    uVar9 = 0xffffffff;
    auVar21 = ZEXT816(0);
    auVar10 = ZEXT816(0);
    auVar12 = ZEXT816(0);
  }
  else {
    auVar19 = *param_4;
    auVar20._0_12_ = ZEXT812(0);
    auVar20._12_4_ = 0;
    uVar9 = 0xffffffff;
    auVar13 = ZEXT864(0);
    auVar11 = ZEXT864(0);
    auVar23 = ZEXT864(0);
    auVar15 = *param_5;
    uVar4 = (ulonglong)param_2;
    do {
      lVar5 = (uVar4 - 1) * 0x30;
      if (*(char *)(param_1 + 0x26 + lVar5) == '\0') {
        puVar6 = (undefined8 *)(lVar5 + param_1);
        uVar2 = *(uint *)(puVar6 + 4);
        fVar14 = (float)*(byte *)(param_6 + (int)uVar2) * _DAT_14615a130;
        auVar10._4_4_ = fVar14;
        auVar10._0_4_ = fVar14;
        auVar10._8_4_ = fVar14;
        auVar10._12_4_ = fVar14;
        auVar10 = vcmpps_avx(auVar20,auVar10,5);
        if ((((SUB161(auVar10 >> 0x1f,0) & 1) == 0 && (SUB161(auVar10 >> 0x3f,0) & 1) == 0) &&
            (SUB161(auVar10 >> 0x5f,0) & 1) == 0) && -1 < auVar10[0xf]) {
          uVar1 = *(ushort *)(puVar6 + 1);
          uVar7 = (ulonglong)uVar1;
          if (*(char *)((longlong)puVar6 + 0x24) == '\x01') {
            uVar9 = uVar2;
            if (uVar7 == 0) {
              if ((undefined1 (*) [16])puVar6[3] == (undefined1 (*) [16])0x0) {
                auVar23 = ZEXT1264(ZEXT812(0));
              }
              else {
                auVar23 = ZEXT1664(*(undefined1 (*) [16])puVar6[3]);
              }
            }
            else {
              pauVar8 = (undefined1 (*) [16])*puVar6;
              auVar23 = ZEXT1664(pauVar8[(ulonglong)(uVar1 - 1) * 2 + 1]);
              if (uVar7 != 1) {
                uVar27 = *(undefined4 *)pauVar8[2];
                auVar21._4_4_ = uVar27;
                auVar21._0_4_ = uVar27;
                auVar21._8_4_ = uVar27;
                auVar21._12_4_ = uVar27;
                auVar12 = pauVar8[2];
                auVar10 = pauVar8[3];
                auVar21 = vcmpps_avx(auVar15,auVar21,5);
                if ((((SUB161(auVar21 >> 0x1f,0) & 1) == 0 && (SUB161(auVar21 >> 0x3f,0) & 1) == 0)
                    && (SUB161(auVar21 >> 0x5f,0) & 1) == 0) && -1 < auVar21[0xf]) {
                  uVar27 = SUB164(*pauVar8,0);
                  auVar21 = pauVar8[1];
                }
                else {
                  pauVar8 = pauVar8 + 5;
                  lVar5 = uVar7 - 1;
                  do {
                    auVar21 = auVar10;
                    lVar5 = lVar5 + -1;
                    if (lVar5 == 0) goto LAB_14003b101;
                    uVar27 = *(undefined4 *)pauVar8[-1];
                    auVar26._4_4_ = uVar27;
                    auVar26._0_4_ = uVar27;
                    auVar26._8_4_ = uVar27;
                    auVar26._12_4_ = uVar27;
                    uVar27 = auVar12._0_4_;
                    auVar12 = pauVar8[-1];
                    auVar10 = *pauVar8;
                    pauVar8 = pauVar8 + 2;
                    auVar26 = vcmpps_avx(auVar15,auVar26,5);
                  } while ((((SUB161(auVar26 >> 0x1f,0) & 1) != 0 ||
                            (SUB161(auVar26 >> 0x3f,0) & 1) != 0) ||
                           (SUB161(auVar26 >> 0x5f,0) & 1) != 0) || auVar26[0xf] < '\0');
                }
                auVar22._4_4_ = uVar27;
                auVar22._0_4_ = uVar27;
                auVar22._8_4_ = uVar27;
                auVar22._12_4_ = uVar27;
                auVar12 = vshufps_avx(auVar12,auVar12,0x55);
                auVar26 = vsubps_avx(auVar15,auVar22);
                auVar10 = vsubps_avx(auVar10,auVar21);
                auVar23 = ZEXT1664(CONCAT412(auVar12._12_4_ * auVar26._12_4_ * auVar10._12_4_ +
                                             auVar21._12_4_,
                                             CONCAT48(auVar12._8_4_ * auVar26._8_4_ * auVar10._8_4_
                                                      + auVar21._8_4_,
                                                      CONCAT44(auVar12._4_4_ * auVar26._4_4_ *
                                                               auVar10._4_4_ + auVar21._4_4_,
                                                               auVar12._0_4_ * auVar26._0_4_ *
                                                               auVar10._0_4_ + auVar21._0_4_))));
              }
            }
          }
          else {
            if (uVar7 == 0) {
              if ((undefined1 (*) [16])puVar6[3] == (undefined1 (*) [16])0x0) {
                auVar12 = ZEXT816(0) << 0x20;
              }
              else {
                auVar12 = *(undefined1 (*) [16])puVar6[3];
              }
            }
            else {
              pauVar8 = (undefined1 (*) [16])*puVar6;
              auVar12 = pauVar8[(ulonglong)(uVar1 - 1) * 2 + 1];
              if (uVar7 != 1) {
                uVar27 = *(undefined4 *)pauVar8[2];
                auVar25._4_4_ = uVar27;
                auVar25._0_4_ = uVar27;
                auVar25._8_4_ = uVar27;
                auVar25._12_4_ = uVar27;
                auVar21 = pauVar8[2];
                auVar10 = pauVar8[3];
                auVar26 = vcmpps_avx(auVar15,auVar25,5);
                if ((((SUB161(auVar26 >> 0x1f,0) & 1) == 0 && (SUB161(auVar26 >> 0x3f,0) & 1) == 0)
                    && (SUB161(auVar26 >> 0x5f,0) & 1) == 0) && -1 < auVar26[0xf]) {
                  uVar27 = SUB164(*pauVar8,0);
                  auVar26 = pauVar8[1];
                }
                else {
                  pauVar8 = pauVar8 + 5;
                  lVar5 = uVar7 - 1;
                  do {
                    auVar26 = auVar10;
                    lVar5 = lVar5 + -1;
                    if (lVar5 == 0) goto LAB_14003b0f0;
                    uVar27 = *(undefined4 *)pauVar8[-1];
                    auVar28._4_4_ = uVar27;
                    auVar28._0_4_ = uVar27;
                    auVar28._8_4_ = uVar27;
                    auVar28._12_4_ = uVar27;
                    uVar27 = auVar21._0_4_;
                    auVar21 = pauVar8[-1];
                    auVar10 = *pauVar8;
                    pauVar8 = pauVar8 + 2;
                    auVar22 = vcmpps_avx(auVar15,auVar28,5);
                  } while ((((SUB161(auVar22 >> 0x1f,0) & 1) != 0 ||
                            (SUB161(auVar22 >> 0x3f,0) & 1) != 0) ||
                           (SUB161(auVar22 >> 0x5f,0) & 1) != 0) || auVar22[0xf] < '\0');
                }
                auVar24._4_4_ = uVar27;
                auVar24._0_4_ = uVar27;
                auVar24._8_4_ = uVar27;
                auVar24._12_4_ = uVar27;
                auVar21 = vshufps_avx(auVar21,auVar21,0x55);
                auVar22 = vsubps_avx(auVar15,auVar24);
                auVar10 = vsubps_avx(auVar10,auVar26);
                auVar12._0_4_ = auVar21._0_4_ * auVar22._0_4_ * auVar10._0_4_ + auVar26._0_4_;
                auVar12._4_4_ = auVar21._4_4_ * auVar22._4_4_ * auVar10._4_4_ + auVar26._4_4_;
                auVar12._8_4_ = auVar21._8_4_ * auVar22._8_4_ * auVar10._8_4_ + auVar26._8_4_;
                auVar12._12_4_ = auVar21._12_4_ * auVar22._12_4_ * auVar10._12_4_ + auVar26._12_4_;
              }
            }
LAB_14003b0f0:
            auVar10 = vsubps_avx(auVar12,auVar19);
            auVar13 = ZEXT1664(CONCAT412(auVar13._12_4_ + _DAT_145fc6ed8,
                                         CONCAT48(auVar13._8_4_ + _DAT_145fc6ed8,
                                                  CONCAT44(auVar13._4_4_ + _DAT_145fc6ed8,
                                                           auVar13._0_4_ + _DAT_145fc6ed8))));
            auVar11 = ZEXT1664(CONCAT412(auVar10._12_4_ * fVar14 + auVar19._12_4_ + auVar11._12_4_,
                                         CONCAT48(auVar10._8_4_ * fVar14 + auVar19._8_4_ +
                                                  auVar11._8_4_,
                                                  CONCAT44(auVar10._4_4_ * fVar14 + auVar19._4_4_ +
                                                           auVar11._4_4_,
                                                           auVar10._0_4_ * fVar14 + auVar19._0_4_ +
                                                           auVar11._0_4_))));
          }
        }
      }
LAB_14003b101:
      auVar21 = auVar23._0_16_;
      auVar10 = auVar11._0_16_;
      auVar12 = auVar13._0_16_;
      bVar3 = 1 < (longlong)uVar4;
      uVar4 = uVar4 - 1;
    } while (bVar3);
  }
  auVar19 = vrcpps_avx(auVar12);
  fVar14 = auVar19._0_4_;
  fVar16 = auVar19._4_4_;
  fVar17 = auVar19._8_4_;
  fVar18 = auVar19._12_4_;
  auVar19._0_4_ = (uint)auVar12._0_4_ ^ _DAT_145fc6f10;
  auVar19._4_4_ = (uint)auVar12._4_4_ ^ _DAT_145fc6f10;
  auVar19._8_4_ = (uint)auVar12._8_4_ ^ _DAT_145fc6f10;
  auVar19._12_4_ = (uint)auVar12._12_4_ ^ _DAT_145fc6f10;
  auVar19 = vcmpps_avx(auVar12,auVar19,0);
  auVar15._0_4_ = (-((auVar12._0_4_ * fVar14 - _DAT_145fc6ed8) * fVar14) + fVar14) * auVar10._0_4_;
  auVar15._4_4_ = (-((auVar12._4_4_ * fVar16 - _DAT_145fc6ed8) * fVar16) + fVar16) * auVar10._4_4_;
  auVar15._8_4_ = (-((auVar12._8_4_ * fVar17 - _DAT_145fc6ed8) * fVar17) + fVar17) * auVar10._8_4_;
  auVar15._12_4_ =
       (-((auVar12._12_4_ * fVar18 - _DAT_145fc6ed8) * fVar18) + fVar18) * auVar10._12_4_;
  auVar10 = vblendvps_avx(auVar15,auVar10,auVar19);
  *param_3 = auVar10;
  if (-1 < (int)uVar9) {
    auVar12 = vsubps_avx(auVar21,auVar10);
    fVar14 = (float)*(byte *)(param_6 + (ulonglong)uVar9) * _DAT_14615a130;
    *(float *)*param_3 = auVar12._0_4_ * fVar14 + auVar10._0_4_;
    *(float *)(*param_3 + 4) = auVar12._4_4_ * fVar14 + auVar10._4_4_;
    *(float *)(*param_3 + 8) = auVar12._8_4_ * fVar14 + auVar10._8_4_;
    *(float *)(*param_3 + 0xc) = auVar12._12_4_ * fVar14 + auVar10._12_4_;
  }
  return;
}

