// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140067d10  size: 1286 bytes
// Name:    FUN_140067d10
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_141fd5cd0, FUN_14072fa90, FUN_145234880, FUN_1452115d0, FUN_144ef3e20, FUN_144d9d7a0, FUN_145006b70
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_140067d10(void *param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  uint uVar6;
  longlong *plVar7;
  char cVar8;
  int iVar9;
  longlong lVar10;
  float *pfVar11;
  void *pvVar12;
  undefined1 *puVar13;
  ulonglong unaff_RBP;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float fVar30;
  undefined1 auVar31 [64];
  undefined1 auVar32 [64];
  uint uStack_d0;
  ushort uStack_ca;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 uStack_c0;
  ulonglong uStack_b8;
  longlong *plStack_b0;
  undefined1 auStack_a8 [16];
  undefined8 uStack_90;
  undefined1 auStack_88 [16];
  undefined1 aauStack_78 [3] [16];
  
  if ((((((*(char *)((longlong)param_1 + 0x5a) != '\0') ||
         (iVar9 = (**(code **)(*param_4 + 8))(param_4), iVar9 != 2)) &&
        ((*(char *)((longlong)param_1 + 0x59) != '\0' ||
         (iVar9 = (**(code **)(*param_4 + 8))(param_4), iVar9 != 1)))) &&
       ((*(char *)((longlong)param_1 + 0x57) != '\0' ||
        (cVar8 = (**(code **)(*param_4 + 0x38))(param_4), cVar8 == '\0')))) &&
      ((*(char *)((longlong)param_1 + 0x58) != '\0' ||
       (cVar8 = (**(code **)(*param_4 + 0x40))(param_4), cVar8 == '\0')))) &&
     ((*(byte *)((longlong)param_4 + 0x54) & 0x10) == 0)) {
    lVar1 = *param_2;
    lVar10 = lVar1 + 0x29ed0;
    (**(code **)(*param_4 + 0x20))(param_4,&uStack_c8);
    uStack_d0 = *(uint *)(param_4 + 0xf);
    if ((uStack_d0 == 0xfffffffe) && ((*(byte *)(lVar1 + 0x29f70) & 1) != 0)) {
      FUN_145234880(lVar10,&uStack_d0);
    }
    if ((*(char *)(param_3 + 0x22) != '\x01') ||
       (cVar8 = func_0x0001455b7270(param_3,lVar10,uStack_d0), cVar8 != '\0')) {
      uVar6 = uStack_d0;
      lVar1 = param_2[2];
      plStack_b0 = param_2;
      if (lVar1 == 0) {
LAB_140067f13:
        cVar8 = FUN_145006b70(param_1);
        plVar7 = plStack_b0;
        if (cVar8 != '\0') {
          lVar10 = *plStack_b0;
          func_0x000144eaee50(*(undefined1 *)((longlong)param_1 + 0x56),auStack_a8,lVar10);
          if (_DAT_145fc6f48 < *(float *)((longlong)param_1 + 0x4c)) {
            (**(code **)(*param_4 + 0x20))(param_4,aauStack_78);
            lVar10 = *plVar7;
            puVar13 = auStack_88;
            pvVar12 = param_1;
            func_0x0001455278f0(param_1,puVar13,lVar10);
            auVar2 = vsubps_avx(aauStack_78[0],auStack_88);
            auVar20._0_4_ = auVar2._0_4_ * auVar2._0_4_;
            auVar20._4_4_ = auVar2._4_4_ * auVar2._4_4_;
            auVar20._8_4_ = auVar2._8_4_ * auVar2._8_4_;
            auVar20._12_4_ = auVar2._12_4_ * auVar2._12_4_;
            auVar17 = vhaddps_avx(auVar20,auVar20);
            auVar2 = vrsqrtss_avx(auVar17,auVar17);
            fVar27 = auVar2._0_4_;
            auVar2 = vcmpss_avx(ZEXT416(_DAT_146159bfc),auVar17,2);
            if (0.0 < (float)(auVar2._0_4_ &
                             (uint)(((fVar27 * fVar27 * auVar17._0_4_ * _DAT_145fc6f08 +
                                     _DAT_145fc6edc) * fVar27 + fVar27) * auVar17._0_4_))) {
              auVar2 = vshufpd_avx(auStack_88,auStack_88,1);
              auVar17 = vshufpd_avx(aauStack_78[0],aauStack_78[0],1);
              fVar27 = (_DAT_146159cc4 - auVar2._0_4_) + auVar17._0_4_;
              atan2f(pvVar12,puVar13);
              if (*(float *)((longlong)param_1 + 0x4c) <
                  (float)((uint)(fVar27 * _DAT_146159c20) & _DAT_145fc6f4c)) goto LAB_1400681ec;
            }
          }
          fVar27 = *(float *)((longlong)param_1 + 0x3c);
          if (fVar27 <= 0.0) {
LAB_1400680d9:
            fVar27 = *(float *)((longlong)param_1 + 0x40);
            if (0.0 < fVar27) {
              auVar4._4_4_ = uStack_c4;
              auVar4._0_4_ = uStack_c8;
              auVar4._8_8_ = uStack_c0;
              auVar26._0_12_ = ZEXT812(0);
              auVar26._12_4_ = 0;
              fVar27 = fVar27 * fVar27;
              auVar23._4_4_ = fVar27;
              auVar23._0_4_ = fVar27;
              auVar23._8_4_ = fVar27;
              auVar23._12_4_ = fVar27;
              auVar2 = vsubps_avx(auVar4,auVar4);
              auVar18._0_4_ = auVar2._0_4_ * auVar2._0_4_;
              auVar18._4_4_ = auVar2._4_4_ * auVar2._4_4_;
              auVar18._8_4_ = auVar2._8_4_ * auVar2._8_4_;
              auVar18._12_4_ = auVar2._12_4_ * auVar2._12_4_;
              auVar2 = vblendps_avx(auVar18,auVar26,8);
              auVar2 = vhaddps_avx(auVar2,auVar2);
              auVar2 = vhaddps_avx(auVar2,auVar2);
              auVar2 = vcmpps_avx(auVar23,auVar2,5);
              if ((((SUB161(auVar2 >> 0x1f,0) & 1) == 0 && (SUB161(auVar2 >> 0x3f,0) & 1) == 0) &&
                  (SUB161(auVar2 >> 0x5f,0) & 1) == 0) && -1 < auVar2[0xf]) goto LAB_1400681ec;
            }
            if (0.0 < *(float *)((longlong)param_1 + 0x44)) {
              auVar5._4_4_ = uStack_c4;
              auVar5._0_4_ = uStack_c8;
              auVar5._8_8_ = uStack_c0;
              auVar2 = vsubps_avx(auVar5,auVar5);
              auVar2 = vshufpd_avx(auVar2,auVar2,1);
              if (*(float *)((longlong)param_1 + 0x44) < (float)(auVar2._0_4_ & _DAT_145fc6f4c))
              goto LAB_1400681ec;
            }
            uVar14 = CONCAT71((int7)(unaff_RBP >> 8),1);
            if ((*(char *)((longlong)param_1 + 0x56) != '\x01') ||
               (iVar9 = FUN_14072fa90(*(undefined8 *)(lVar10 + 0x2a070)), iVar9 < 1))
            goto LAB_1400681ee;
            uStack_90 = uStack_c0;
            lVar10 = FUN_1452115d0(*(undefined8 *)(*plVar7 + 0x2a070));
            if ((lVar10 == 0) || (lVar10 = FUN_144ef3e20(lVar10), lVar10 == 0)) goto LAB_1400681ee;
            cVar8 = FUN_141fd5cd0(lVar10,param_4);
            if (cVar8 != '\0') {
              if (((~*(uint *)(lVar10 + 0xa4) & 0x7ffe) == 0) ||
                 (cVar8 = FUN_144d9d7a0(*(uint *)(lVar10 + 0xa0),*(uint *)(lVar10 + 0xa0) >> 0x10),
                 cVar8 == '\0')) {
                cVar8 = (**(code **)(*param_4 + 0x38))(param_4);
              }
              else {
                cVar8 = (**(code **)(*param_4 + 0x40))(param_4);
              }
              if (cVar8 == '\0') goto LAB_1400681ee;
            }
          }
          else {
            if (*(char *)((longlong)param_1 + 0x5b) == '\x01') {
              auVar2 = vsubps_avx(auStack_a8,*(undefined1 (*) [16])(lVar10 + 0x2a020));
              auVar28._0_4_ = auVar2._0_4_ * auVar2._0_4_;
              auVar28._4_4_ = auVar2._4_4_ * auVar2._4_4_;
              auVar28._8_4_ = auVar2._8_4_ * auVar2._8_4_;
              auVar28._12_4_ = auVar2._12_4_ * auVar2._12_4_;
              auVar17 = vhaddps_avx(auVar28,auVar28);
              auVar2 = vrsqrtss_avx(auVar17,auVar17);
              fVar30 = auVar2._0_4_;
              auVar2 = vcmpss_avx(ZEXT416(_DAT_146159bfc),auVar17,2);
              auVar2 = vminss_avx(ZEXT416((uint)fVar27),
                                  ZEXT416((uint)((float)(auVar2._0_4_ &
                                                        (uint)(((fVar30 * fVar30 * auVar17._0_4_ *
                                                                 _DAT_145fc6f08 + _DAT_145fc6edc) *
                                                                fVar30 + fVar30) * auVar17._0_4_)) +
                                                _DAT_14615b980)));
              fVar27 = auVar2._0_4_;
            }
            auVar3._4_4_ = uStack_c4;
            auVar3._0_4_ = uStack_c8;
            auVar3._8_8_ = uStack_c0;
            auVar2 = vsubps_avx(auStack_a8,auVar3);
            auVar29._0_12_ = ZEXT812(0);
            auVar29._12_4_ = 0;
            fVar27 = fVar27 * fVar27;
            auVar21._4_4_ = fVar27;
            auVar21._0_4_ = fVar27;
            auVar21._8_4_ = fVar27;
            auVar21._12_4_ = fVar27;
            auVar25._0_4_ = auVar2._0_4_ * auVar2._0_4_;
            auVar25._4_4_ = auVar2._4_4_ * auVar2._4_4_;
            auVar25._8_4_ = auVar2._8_4_ * auVar2._8_4_;
            auVar25._12_4_ = auVar2._12_4_ * auVar2._12_4_;
            auVar2 = vblendps_avx(auVar25,auVar29,8);
            auVar2 = vhaddps_avx(auVar2,auVar2);
            auVar17 = vhaddps_avx(auVar2,auVar2);
            auVar2 = vcmpps_avx(auVar21,auVar17,5);
            if ((((SUB161(auVar2 >> 0x1f,0) & 1) != 0 || (SUB161(auVar2 >> 0x3f,0) & 1) != 0) ||
                (SUB161(auVar2 >> 0x5f,0) & 1) != 0) || auVar2[0xf] < '\0') {
              fVar27 = *(float *)((longlong)param_1 + 0x38) * *(float *)((longlong)param_1 + 0x38);
              auVar22._4_4_ = fVar27;
              auVar22._0_4_ = fVar27;
              auVar22._8_4_ = fVar27;
              auVar22._12_4_ = fVar27;
              auVar2 = vcmpps_avx(auVar17,auVar22,5);
              if ((((SUB161(auVar2 >> 0x1f,0) & 1) != 0 || (SUB161(auVar2 >> 0x3f,0) & 1) != 0) ||
                  (SUB161(auVar2 >> 0x5f,0) & 1) != 0) || auVar2[0xf] < '\0') goto LAB_1400680d9;
            }
          }
        }
      }
      else {
        uStack_ca = *(ushort *)(lVar1 + 0x30);
        uStack_b8 = (ulonglong)*(uint *)(param_3 + 0x28);
        if (uStack_b8 != 0) {
          auVar31 = ZEXT1664(CONCAT88(uStack_c0,CONCAT44(uStack_c4,uStack_c8)));
          unaff_RBP = (ulonglong)uStack_d0;
          param_3 = param_3 + 0x2c;
          lVar15 = 0;
          auVar32 = ZEXT1264(ZEXT812(0));
          lVar16 = uStack_b8 << 6;
          do {
            cVar8 = func_0x0001455b7270(param_3,lVar10,uVar6);
            if (cVar8 != '\0') {
              fVar27 = *(float *)(*(longlong *)(lVar1 + 0x28) + 0x24 + lVar15);
              auVar2 = vsubps_avx(*(undefined1 (*) [16])
                                   (*(longlong *)(lVar1 + 0x28) + 0x10 + lVar15),auVar31._0_16_);
              auVar17._0_4_ = auVar2._0_4_ * auVar2._0_4_;
              auVar17._4_4_ = auVar2._4_4_ * auVar2._4_4_;
              auVar17._8_4_ = auVar2._8_4_ * auVar2._8_4_;
              auVar17._12_4_ = auVar2._12_4_ * auVar2._12_4_;
              auVar2 = vblendps_avx(auVar17,auVar32._0_16_,8);
              auVar2 = vhaddps_avx(auVar2,auVar2);
              auVar2 = vhaddps_avx(auVar2,auVar2);
              if (auVar2._0_4_ < fVar27 * fVar27) goto LAB_140067f13;
            }
            lVar15 = lVar15 + 0x40;
            param_3 = param_3 + 0x24;
          } while (lVar16 != lVar15);
        }
        if ((uint)uStack_b8 < (uint)uStack_ca) {
          auVar2._4_4_ = uStack_c4;
          auVar2._0_4_ = uStack_c8;
          auVar2._8_8_ = uStack_c0;
          iVar9 = (uint)uStack_ca - (uint)uStack_b8;
          auVar19._0_12_ = ZEXT812(0);
          auVar19._12_4_ = 0;
          pfVar11 = (float *)(uStack_b8 * 0x40 + 0x24 + *(longlong *)(lVar1 + 0x28));
          do {
            auVar17 = vsubps_avx(*(undefined1 (*) [16])(pfVar11 + -5),auVar2);
            auVar24._0_4_ = auVar17._0_4_ * auVar17._0_4_;
            auVar24._4_4_ = auVar17._4_4_ * auVar17._4_4_;
            auVar24._8_4_ = auVar17._8_4_ * auVar17._8_4_;
            auVar24._12_4_ = auVar17._12_4_ * auVar17._12_4_;
            auVar17 = vblendps_avx(auVar24,auVar19,8);
            auVar17 = vhaddps_avx(auVar17,auVar17);
            auVar17 = vhaddps_avx(auVar17,auVar17);
            if (auVar17._0_4_ < *pfVar11 * *pfVar11) goto LAB_140067f13;
            pfVar11 = pfVar11 + 0x10;
            iVar9 = iVar9 + -1;
          } while (iVar9 != 0);
        }
        else if (uStack_ca == 0) goto LAB_140067f13;
      }
    }
  }
LAB_1400681ec:
  uVar14 = 0;
LAB_1400681ee:
  return uVar14 & 0xffffffff;
}

