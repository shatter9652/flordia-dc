// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14000b0e0  size: 1057 bytes
// Name:    FUN_14000b0e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1451c1630, FUN_1451b5e10
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_14000b0e0(longlong param_1,uint param_2,undefined8 param_3)

{
  longlong *plVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [64];
  float fVar21;
  uint uVar22;
  float fVar23;
  uint uVar24;
  uint uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  uint uStack_b8;
  uint uStack_b4;
  undefined1 auStack_a8 [16];
  uint uStack_98;
  uint uStack_94;
  
  fVar26 = 0.0;
  fVar21 = 0.0;
  if ((-1 < (int)param_2) && (fVar16 = (float)param_3, fVar21 = fVar26, 0.0 <= fVar16)) {
    lVar6 = *(longlong *)(param_1 + 0x50);
    if (((int)param_2 < *(int *)(lVar6 + 0x15f0) + -1) &&
       (fVar16 < (float)*(int *)(lVar6 + 0x15f0) + _DAT_145fc6f48)) {
      uVar11 = *(uint *)(lVar6 + 0x68 + (ulonglong)param_2 * 0xa0);
      uVar8 = (ulonglong)uVar11 & 0xffff;
      if (((uVar8 == 0xffff) || (0x12bf < (uint)uVar8)) ||
         (plVar1 = *(longlong **)(_DAT_14a9e88c0 + 0xc30 + uVar8 * 8), plVar1 == (longlong *)0x0)) {
        lVar9 = 0;
      }
      else {
        uVar11 = uVar11 >> 0x10;
        lVar9 = 0;
        if ((uVar11 < *(ushort *)(plVar1 + 1)) &&
           (*(ushort *)(plVar1 + 1) != 0 || (short)plVar1[9] != 0)) {
          lVar9 = (ulonglong)uVar11 * 0x34 + *plVar1;
        }
      }
      uVar11 = *(uint *)(lVar6 + 0x68 + (ulonglong)(param_2 + 1) * 0xa0);
      uVar8 = (ulonglong)uVar11 & 0xffff;
      if (((uVar8 != 0xffff) && ((uint)uVar8 < 0x12c0)) &&
         (plVar1 = *(longlong **)(_DAT_14a9e88c0 + 0xc30 + uVar8 * 8), plVar1 != (longlong *)0x0)) {
        uVar11 = uVar11 >> 0x10;
        if (((((uVar11 < *(ushort *)(plVar1 + 1)) &&
              (*(ushort *)(plVar1 + 1) != 0 || (short)plVar1[9] != 0)) && (lVar9 != 0)) &&
            ((*plVar1 != 0 && ((*(byte *)(lVar9 + 0xc) & 0x16) == 0)))) &&
           (lVar10 = *plVar1 + (ulonglong)uVar11 * 0x34, (*(byte *)(lVar10 + 0xc) & 0x16) == 0)) {
          uVar11 = *(uint *)(lVar6 + 0x68 + (longlong)(int)fVar16 * 0xa0);
          uVar8 = (ulonglong)uVar11 & 0xffff;
          if (((uVar8 == 0xffff) || (0x12bf < (uint)uVar8)) ||
             (plVar1 = *(longlong **)(_DAT_14a9e88c0 + 0xc30 + uVar8 * 8), plVar1 == (longlong *)0x0
             )) {
            lVar7 = 0;
          }
          else {
            uVar11 = uVar11 >> 0x10;
            lVar7 = 0;
            if ((uVar11 < *(ushort *)(plVar1 + 1)) &&
               (*(ushort *)(plVar1 + 1) != 0 || (short)plVar1[9] != 0)) {
              lVar7 = (ulonglong)uVar11 * 0x34 + *plVar1;
            }
          }
          uVar11 = *(uint *)(lVar6 + 0x68 + (longlong)((int)fVar16 + 1) * 0xa0);
          uVar8 = (ulonglong)uVar11 & 0xffff;
          if (((uVar8 != 0xffff) && ((uint)uVar8 < 0x12c0)) &&
             (plVar1 = *(longlong **)(_DAT_14a9e88c0 + 0xc30 + uVar8 * 8), plVar1 != (longlong *)0x0
             )) {
            uVar11 = uVar11 >> 0x10;
            if ((((uVar11 < *(ushort *)(plVar1 + 1)) &&
                 (*(ushort *)(plVar1 + 1) != 0 || (short)plVar1[9] != 0)) &&
                ((lVar7 != 0 && ((*plVar1 != 0 && ((*(byte *)(lVar7 + 0xc) & 0x16) == 0)))))) &&
               (lVar6 = *plVar1 + (ulonglong)uVar11 * 0x34, (*(byte *)(lVar6 + 0xc) & 0x16) == 0)) {
              FUN_1451b5e10(_DAT_14a9e88c0,&uStack_98,lVar9,lVar10,0);
              auVar12._0_4_ = _DAT_145fc6f10 ^ uStack_98;
              auVar12._4_4_ = _DAT_145fc6f10;
              auVar12._8_4_ = _DAT_145fc6f10;
              auVar12._12_4_ = _DAT_145fc6f10;
              auVar12 = vunpcklps_avx(ZEXT416(uStack_94),auVar12);
              auVar12 = vshufps_avx(auVar12,ZEXT416(uStack_94),0x14);
              auVar20 = ZEXT1664(auVar12);
              uVar11 = _DAT_145fc6f10;
              uVar22 = _DAT_145fc6f10;
              uVar24 = _DAT_145fc6f10;
              uVar25 = _DAT_145fc6f10;
              FUN_1451b5e10(_DAT_14a9e88c0,&uStack_b8,lVar7,lVar6,0);
              auVar18._0_12_ = ZEXT812(0);
              auVar18._12_4_ = 0;
              auVar12 = vcmpps_avx(auVar20._0_16_,auVar18,0);
              uVar5 = vmovmskps_avx(auVar12);
              fVar21 = 0.0;
              if ((~(byte)uVar5 & 7) != 0) {
                auVar17._0_4_ = uVar11 ^ uStack_b8;
                auVar17._4_4_ = uVar22;
                auVar17._8_4_ = uVar24;
                auVar17._12_4_ = uVar25;
                auVar12 = vunpcklps_avx(ZEXT416(uStack_b4),auVar17);
                auVar17 = vshufps_avx(auVar12,ZEXT416(uStack_b4),0x14);
                auVar12 = vcmpps_avx(auVar17,auVar18,0);
                uVar5 = vmovmskps_avx(auVar12);
                if ((~(byte)uVar5 & 7) != 0) {
                  auVar13._0_4_ = auVar20._0_4_ * auVar20._0_4_;
                  auVar13._4_4_ = auVar20._4_4_ * auVar20._4_4_;
                  auVar13._8_4_ = auVar20._8_4_ * auVar20._8_4_;
                  auVar13._12_4_ = auVar20._12_4_ * auVar20._12_4_;
                  auVar12 = vblendps_avx(auVar13,ZEXT816(0) << 0x20,8);
                  auVar12 = vhaddps_avx(auVar12,auVar12);
                  auVar18 = vhaddps_avx(auVar12,auVar12);
                  auVar12 = vrsqrtps_avx(auVar18);
                  fVar21 = auVar12._0_4_;
                  fVar23 = auVar12._4_4_;
                  fVar21 = (_DAT_145fc6f08 * fVar21 * fVar21 * auVar18._0_4_ - _DAT_145fc6f08) *
                           fVar21 + fVar21;
                  fVar23 = (_DAT_145fc6f08 * fVar23 * fVar23 * auVar18._4_4_ - _DAT_145fc6f08) *
                           fVar23 + fVar23;
                  fVar26 = auVar17._0_4_;
                  auVar19._0_4_ = fVar26 * fVar26;
                  fVar27 = auVar17._4_4_;
                  auVar19._4_4_ = fVar27 * fVar27;
                  fVar28 = auVar17._8_4_;
                  auVar19._8_4_ = fVar28 * fVar28;
                  fVar29 = auVar17._12_4_;
                  auVar19._12_4_ = fVar29 * fVar29;
                  auVar12 = vblendps_avx(auVar19,ZEXT816(0) << 0x20,8);
                  auVar12 = vhaddps_avx(auVar12,auVar12);
                  auVar12 = vhaddps_avx(auVar12,auVar12);
                  auVar17 = vrsqrtps_avx(auVar12);
                  fVar16 = auVar17._0_4_;
                  fVar2 = auVar17._4_4_;
                  fVar3 = auVar17._8_4_;
                  fVar4 = auVar17._12_4_;
                  fVar26 = ((_DAT_145fc6f08 * fVar16 * fVar16 * auVar12._0_4_ - _DAT_145fc6f08) *
                            fVar16 + fVar16) * fVar26;
                  fVar27 = ((_DAT_145fc6f08 * fVar2 * fVar2 * auVar12._4_4_ - _DAT_145fc6f08) *
                            fVar2 + fVar2) * fVar27;
                  fVar28 = ((_DAT_145fc6f08 * fVar3 * fVar3 * auVar12._8_4_ - _DAT_145fc6f08) *
                            fVar3 + fVar3) * fVar28;
                  fVar29 = ((_DAT_145fc6f08 * fVar4 * fVar4 * auVar12._12_4_ - _DAT_145fc6f08) *
                            fVar4 + fVar4) * fVar29;
                  FUN_1451c1630(auVar18._0_8_,auStack_a8,param_3,auVar17._0_8_);
                  fVar16 = fVar26 * fVar21 * auVar20._0_4_;
                  fVar23 = fVar27 * fVar23 * auVar20._4_4_;
                  auVar12 = vsubps_avx(auStack_a8,
                                       *(undefined1 (*) [16])
                                        (*(longlong *)(param_1 + 0x50) + 0x30 +
                                        (ulonglong)param_2 * 0xa0));
                  auVar14._0_4_ = fVar26 * auVar12._0_4_;
                  auVar14._4_4_ = fVar27 * auVar12._4_4_;
                  auVar14._8_4_ = fVar28 * auVar12._8_4_;
                  auVar14._12_4_ = fVar29 * auVar12._12_4_;
                  auVar12 = vhaddps_avx(auVar14,auVar14);
                  fVar21 = auVar12._0_4_;
                  auVar15._0_8_ = CONCAT44(fVar23 * fVar21,fVar16 * fVar21);
                  auVar15._8_4_ = fVar16 * fVar21;
                  auVar15._12_4_ = fVar23 * fVar21;
                  auVar12 = vhaddps_avx(auVar15,auVar15);
                  auVar20 = ZEXT1664(auVar12);
                  fVar21 = (float)func_0x00014000bb60(auVar15._0_8_,param_2);
                  fVar21 = (auVar20._0_4_ + auVar20._0_4_) / fVar21;
                }
              }
            }
          }
        }
      }
    }
  }
  return fVar21;
}

