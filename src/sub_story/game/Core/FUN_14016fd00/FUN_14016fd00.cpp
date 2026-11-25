// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14016fd00  size: 3819 bytes
// Name:    FUN_14016fd00
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14214d660, FUN_145247300, FUN_1405d1010, FUN_1417b7200, FUN_1405e8de0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14016fd00(longlong *param_1,longlong param_2)

{
  float *pfVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  byte bVar6;
  byte bVar7;
  char cVar8;
  int iVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  byte bVar14;
  longlong *plVar15;
  longlong lVar16;
  ulonglong uVar17;
  bool bVar18;
  longlong lVar19;
  longlong lVar20;
  undefined1 (*pauVar21) [16];
  longlong lVar22;
  bool bVar23;
  bool bVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float fVar40;
  float fVar41;
  uint uVar42;
  undefined1 auVar43 [64];
  undefined1 auVar44 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [64];
  undefined1 auVar48 [64];
  undefined1 auVar49 [64];
  undefined1 auVar50 [64];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  char cStack_11c;
  char cStack_11b;
  char cStack_11a;
  char cStack_119;
  longlong *plStack_118;
  longlong lStack_110;
  ulonglong uStack_108;
  longlong lStack_100;
  longlong *plStack_f8;
  longlong *plStack_f0;
  undefined1 auVar45 [64];
  undefined1 auVar53 [64];
  
  bVar6 = FUN_1405e8de0();
  bVar7 = FUN_1405d1010(param_1,param_2);
  *(undefined2 *)((longlong)param_1 + 0x47a) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x47c) = 1;
  bVar14 = *(byte *)((longlong)param_1 + 0x302);
  if ((bVar7 & bVar6) == 1 && (bVar14 & 1) != 0) {
    FUN_1417b7200(param_1);
    bVar14 = *(byte *)((longlong)param_1 + 0x302) & 0xfe;
    *(byte *)((longlong)param_1 + 0x302) = bVar14;
  }
  if ((~*(byte *)((longlong)param_1 + 0x483) & 6) == 0) {
    *(byte *)((longlong)param_1 + 0x302) = bVar14 | 1;
  }
  lVar5 = param_1[0x62];
  *(undefined1 *)(lVar5 + 0x2a0) = 0;
  cVar8 = *(char *)((longlong)param_1 + 0x469);
  lVar12 = param_1[0x8d];
  bVar14 = func_0x000144da4370(*(undefined4 *)(param_1[0x81] + 0x154));
  *(byte *)(lVar5 + 0x2a1) = bVar14 & (cVar8 != '\0' || (char)lVar12 != '\0');
  *(bool *)(lVar5 + 0x29c) = (byte)(*(char *)((longlong)param_1 + 0x47a) - 1U) < 2;
  lVar5 = param_1[0x62];
  *(byte *)(lVar5 + 0x2a0) = *(byte *)(lVar5 + 0x2a0) | *(char *)(lVar5 + 0x29c) != '\0';
  cVar8 = *(char *)((longlong)param_1 + 0x46b);
  cVar3 = *(char *)((longlong)param_1 + 0x46a);
  bVar14 = func_0x000144da4370(*(undefined4 *)(param_1[0x81] + 0x154));
  *(byte *)(lVar5 + 0x2a2) = bVar14 & (cVar8 != '\0' || cVar3 != '\0');
  *(bool *)(lVar5 + 0x29d) = (byte)(*(char *)((longlong)param_1 + 0x47b) - 1U) < 2;
  lVar5 = param_1[0x62];
  *(byte *)(lVar5 + 0x2a0) = *(byte *)(lVar5 + 0x2a0) | *(char *)(lVar5 + 0x29d) != '\0';
  cVar8 = *(char *)((longlong)param_1 + 0x46d);
  cVar3 = *(char *)((longlong)param_1 + 0x46c);
  bVar14 = func_0x000144da4370(*(undefined4 *)(param_1[0x81] + 0x154));
  *(byte *)(lVar5 + 0x2a3) = bVar14 & (cVar8 != '\0' || cVar3 != '\0');
  *(bool *)(lVar5 + 0x29e) = (byte)(*(char *)((longlong)param_1 + 0x47c) - 1U) < 2;
  lVar5 = param_1[0x62];
  *(byte *)(lVar5 + 0x2a0) = *(byte *)(lVar5 + 0x2a0) | *(char *)(lVar5 + 0x29e) != '\0';
  *(bool *)(lVar5 + 0x2a4) = *(char *)((longlong)param_1 + 0x47d) != '\x03';
  *(bool *)(lVar5 + 0x29f) = (byte)(*(char *)((longlong)param_1 + 0x47d) - 1U) < 2;
  lVar5 = param_1[0x62];
  bVar14 = *(char *)(lVar5 + 0x29f) != '\0' | *(byte *)(lVar5 + 0x2a0);
  *(byte *)(lVar5 + 0x2a0) = bVar14;
  lVar12 = param_1[0x81];
  cVar8 = func_0x000140005970(*(undefined2 *)(lVar12 + 0x148));
  if (cVar8 == '\0') {
    bVar23 = false;
  }
  else {
    bVar23 = (*(byte *)(lVar12 + 0x58) & 1) == 0;
  }
  bVar6 = *(byte *)(lVar12 + 0xcc);
  fVar40 = *(float *)(lVar5 + 0x294);
  *(undefined1 *)(lVar5 + 0x2aa) = 0;
  fVar41 = _DAT_145fc6ed8;
  auVar43 = ZEXT464((uint)_DAT_145fc6ed8);
  auVar44._0_12_ = ZEXT812(0);
  auVar44._12_4_ = 0;
  auVar45 = ZEXT1664(auVar44);
  auVar30 = ZEXT416((uint)(fVar40 * *(float *)(param_2 + 0x300 +
                                              (ulonglong)(*(char *)(lVar5 + 0x29c) != '\0') * 4) +
                          *(float *)(param_1 + 0x58)));
  auVar32 = ZEXT416((uint)_DAT_145fc6ed8);
  auVar35 = vminss_avx(auVar32,auVar30);
  auVar30 = vcmpss_avx(auVar30,auVar44,1);
  auVar31._0_4_ = ~auVar30._0_4_ & auVar35._0_4_;
  auVar31._4_4_ = ~auVar30._4_4_ & auVar35._4_4_;
  auVar31._8_4_ = ~auVar30._8_4_ & auVar35._8_4_;
  auVar31._12_4_ = ~auVar30._12_4_ & auVar35._12_4_;
  *(uint *)(param_1 + 0x58) = auVar31._0_4_;
  auVar30 = vcmpps_avx(auVar31,auVar32,1);
  auVar35 = ZEXT416((uint)(fVar40 * *(float *)(param_2 + 0x308 +
                                              (ulonglong)(*(char *)(lVar5 + 0x29d) != '\0') * 4) +
                          *(float *)((longlong)param_1 + 0x2c4)));
  auVar31 = vminss_avx(auVar32,auVar35);
  auVar35 = vcmpss_avx(auVar35,auVar44,1);
  auVar37._0_4_ = ~auVar35._0_4_ & auVar31._0_4_;
  auVar37._4_4_ = ~auVar35._4_4_ & auVar31._4_4_;
  auVar37._8_4_ = ~auVar35._8_4_ & auVar31._8_4_;
  auVar37._12_4_ = ~auVar35._12_4_ & auVar31._12_4_;
  *(uint *)((longlong)param_1 + 0x2c4) = auVar37._0_4_;
  auVar35 = vcmpps_avx(auVar37,auVar32,1);
  auVar31 = ZEXT416((uint)(fVar40 * *(float *)(param_2 + 0x310 +
                                              (ulonglong)(*(char *)(lVar5 + 0x29e) != '\0') * 4) +
                          *(float *)(param_1 + 0x59)));
  auVar37 = vminss_avx(auVar32,auVar31);
  auVar31 = vcmpss_avx(auVar31,auVar44,1);
  fVar25 = (float)(~auVar31._0_4_ & auVar37._0_4_);
  *(float *)(param_1 + 0x59) = fVar25;
  auVar31 = ZEXT416((uint)(fVar40 * *(float *)(param_2 + 0x318 +
                                              (ulonglong)(*(char *)(lVar5 + 0x29f) != '\0') * 4) +
                          *(float *)((longlong)param_1 + 0x2cc)));
  auVar37 = vminss_avx(auVar32,auVar31);
  auVar31 = vcmpss_avx(auVar31,auVar44,1);
  fVar26 = (float)(~auVar31._0_4_ & auVar37._0_4_);
  *(float *)((longlong)param_1 + 0x2cc) = fVar26;
  *(byte *)(lVar5 + 0x2a0) =
       bVar14 | fVar26 < fVar41 | fVar25 < fVar41 | (auVar30[0] | auVar35[0]) & 1;
  fVar41 = _DAT_146159c28;
  if ((bVar6 & 1) == 0) {
    fVar41 = (*(float *)(param_2 + 0x2ec) + *(float *)(param_2 + 0x2ec)) *
             *(float *)(param_1 + 0x7c);
  }
  auVar35._4_4_ = _DAT_145fc6ed8;
  auVar35._0_4_ = _DAT_145fc6ed8;
  auVar35._8_4_ = _DAT_145fc6ed8;
  auVar35._12_4_ = _DAT_145fc6ed8;
  fVar25 = fVar41 * fVar40;
  auVar30._0_4_ = (float)param_1[0x5a] + fVar25;
  auVar30._4_4_ = (float)((ulonglong)param_1[0x5a] >> 0x20) + fVar25;
  auVar30._8_4_ = fVar25 + 0.0;
  auVar30._12_4_ = fVar25 + 0.0;
  auVar35 = vminps_avx(auVar35,auVar30);
  auVar30 = vcmpps_avx(auVar30,ZEXT816(0) << 0x20,5);
  auVar32._0_4_ = auVar30._0_4_ & auVar35._0_4_;
  auVar32._4_4_ = auVar30._4_4_ & auVar35._4_4_;
  auVar32._8_4_ = auVar30._8_4_ & auVar35._8_4_;
  auVar32._12_4_ = auVar30._12_4_ & auVar35._12_4_;
  lVar5 = vmovlps_avx(auVar32);
  param_1[0x5a] = lVar5;
  fVar25 = fVar40 * *(float *)(param_2 + 0x350);
  lStack_100 = param_2;
  uVar11 = func_0x000144f12500(*(undefined4 *)(param_1[0x82] + 0x9c));
  lVar12 = FUN_145247300(uVar11);
  lVar5 = _DAT_14abbef18;
  auVar47 = ZEXT464(_DAT_145fc6edc);
  auVar48 = ZEXT464(_DAT_145fc6f08);
  lVar16 = 0;
  plVar15 = param_1 + 0x46;
  plStack_118 = param_1 + 0x3a;
  plStack_f0 = param_1 + 0x52;
  fVar26 = _DAT_145fc6f80;
  plStack_f8 = plVar15;
  do {
    bVar14 = *(byte *)((longlong)param_1 + lVar16 * 2 + 0x468);
    uStack_108 = (ulonglong)bVar14;
    bVar7 = *(byte *)((longlong)param_1 + lVar16 * 2 + 0x469);
    lVar20 = 0;
    lStack_110 = (longlong)plStack_f0 + lVar16 * 4;
    lVar22 = (ulonglong)bVar14 * 0x20;
    bVar24 = true;
    do {
      bVar18 = bVar24;
      if ((int)lVar16 == 1) {
        if (lVar5 == lVar12) {
          lVar13 = *(longlong *)(lVar12 + 0x30);
          if (lVar13 == 0) {
            lVar13 = 0x14abbe230;
          }
LAB_140170410:
          uVar42 = *(uint *)(lVar20 * 0x10 + 8 + (ulonglong)bVar7 * 0x20 + lVar13);
          lVar19 = (ulonglong)(uint)((int)uStack_108 << 5) + lVar13;
          goto LAB_140170463;
        }
        lVar13 = *(longlong *)(lVar12 + 0x30);
        if (lVar13 != 0) goto LAB_140170410;
        iVar4 = *(int *)(lVar12 + 0x88);
        iVar9 = 0;
        lVar13 = lVar12;
        do {
          if ((iVar4 <= iVar9) || (lVar13 = *(longlong *)(lVar13 + 0x80), lVar13 == 0)) {
            lVar19 = *(longlong *)(lVar5 + 0x30);
            if (lVar19 == 0) {
              lVar19 = 0x14abbe230;
            }
            break;
          }
          lVar19 = *(longlong *)(lVar13 + 0x30);
          iVar9 = iVar9 + 1;
        } while (lVar19 == 0);
        uVar42 = *(uint *)(lVar20 * 0x10 + 8 + (ulonglong)bVar7 * 0x20 + lVar19);
        auVar30 = ZEXT416(uVar42);
        iVar9 = 0;
        lVar13 = lVar12;
        do {
          if ((iVar4 <= iVar9) || (lVar13 = *(longlong *)(lVar13 + 0x80), lVar13 == 0)) {
            lVar19 = *(longlong *)(lVar5 + 0x30);
            if (lVar19 == 0) {
              lVar19 = 0x14abbe230;
            }
            break;
          }
          lVar19 = *(longlong *)(lVar13 + 0x30);
          iVar9 = iVar9 + 1;
        } while (lVar19 == 0);
        uVar2 = *(uint *)(lVar20 * 0x10 + 4 + (ulonglong)(uint)((int)uStack_108 << 5) + lVar19);
        auVar35 = ZEXT416(uVar2);
        iVar9 = 0;
        lVar19 = lVar12;
        do {
          if ((iVar4 <= iVar9) || (lVar19 = *(longlong *)(lVar19 + 0x80), lVar19 == 0)) {
            lVar13 = *(longlong *)(lVar5 + 0x30);
            auVar35 = ZEXT416(uVar2);
            auVar30 = ZEXT416(uVar42);
            goto LAB_1401706c7;
          }
          lVar13 = *(longlong *)(lVar19 + 0x30);
          iVar9 = iVar9 + 1;
        } while (lVar13 == 0);
      }
      else {
        if ((int)lVar16 == 0) {
          if (lVar5 == lVar12) {
            lVar13 = *(longlong *)(lVar12 + 0x20);
LAB_140170439:
            if (lVar13 == 0) {
              lVar13 = 0x14abbe230;
            }
          }
          else {
            lVar13 = *(longlong *)(lVar12 + 0x20);
            if (lVar13 == 0) {
              iVar4 = *(int *)(lVar12 + 0x88);
              iVar9 = 0;
              lVar13 = lVar12;
              do {
                if ((iVar4 <= iVar9) || (lVar13 = *(longlong *)(lVar13 + 0x80), lVar13 == 0)) {
                  lVar19 = *(longlong *)(lVar5 + 0x20);
                  if (lVar19 == 0) {
                    lVar19 = 0x14abbe230;
                  }
                  break;
                }
                lVar19 = *(longlong *)(lVar13 + 0x20);
                iVar9 = iVar9 + 1;
              } while (lVar19 == 0);
              uVar42 = *(uint *)(lVar20 * 0x10 + 8 + (ulonglong)bVar7 * 0x20 + lVar19);
              auVar30 = ZEXT416(uVar42);
              iVar9 = 0;
              lVar13 = lVar12;
              do {
                if ((iVar4 <= iVar9) || (lVar13 = *(longlong *)(lVar13 + 0x80), lVar13 == 0)) {
                  lVar19 = *(longlong *)(lVar5 + 0x20);
                  if (lVar19 == 0) {
                    lVar19 = 0x14abbe230;
                  }
                  break;
                }
                lVar19 = *(longlong *)(lVar13 + 0x20);
                iVar9 = iVar9 + 1;
              } while (lVar19 == 0);
              uVar2 = *(uint *)(lVar20 * 0x10 + 4 + lVar22 + lVar19);
              auVar35 = ZEXT416(uVar2);
              iVar9 = 0;
              lVar19 = lVar12;
LAB_140170241:
              if ((iVar9 < iVar4) && (lVar19 = *(longlong *)(lVar19 + 0x80), lVar19 != 0))
              goto code_r0x000140170259;
              lVar13 = *(longlong *)(lVar5 + 0x20);
              auVar35 = ZEXT416(uVar2);
              auVar30 = ZEXT416(uVar42);
LAB_1401706c7:
              if (lVar13 == 0) {
                lVar13 = 0x14abbe230;
              }
              goto LAB_140170469;
            }
          }
        }
        else {
          if (lVar5 == lVar12) {
            lVar13 = *(longlong *)(lVar12 + 0x28);
            goto LAB_140170439;
          }
          lVar13 = *(longlong *)(lVar12 + 0x28);
          if (lVar13 == 0) {
            iVar4 = *(int *)(lVar12 + 0x88);
            iVar9 = 0;
            lVar13 = lVar12;
            do {
              if ((iVar4 <= iVar9) || (lVar13 = *(longlong *)(lVar13 + 0x80), lVar13 == 0)) {
                lVar19 = *(longlong *)(lVar5 + 0x28);
                if (lVar19 == 0) {
                  lVar19 = 0x14abbe230;
                }
                break;
              }
              lVar19 = *(longlong *)(lVar13 + 0x28);
              iVar9 = iVar9 + 1;
            } while (lVar19 == 0);
            uVar42 = *(uint *)(lVar20 * 0x10 + 8 + (ulonglong)bVar7 * 0x20 + lVar19);
            auVar30 = ZEXT416(uVar42);
            iVar9 = 0;
            lVar13 = lVar12;
            do {
              if ((iVar4 <= iVar9) || (lVar13 = *(longlong *)(lVar13 + 0x80), lVar13 == 0)) {
                lVar19 = *(longlong *)(lVar5 + 0x28);
                if (lVar19 == 0) {
                  lVar19 = 0x14abbe230;
                }
                break;
              }
              lVar19 = *(longlong *)(lVar13 + 0x28);
              iVar9 = iVar9 + 1;
            } while (lVar19 == 0);
            uVar2 = *(uint *)(lVar20 * 0x10 + 4 + lVar22 + lVar19);
            auVar35 = ZEXT416(uVar2);
            iVar9 = 0;
            lVar19 = lVar12;
            do {
              if ((iVar4 <= iVar9) || (lVar19 = *(longlong *)(lVar19 + 0x80), lVar19 == 0)) {
                lVar13 = *(longlong *)(lVar5 + 0x28);
                auVar35 = ZEXT416(uVar2);
                auVar30 = ZEXT416(uVar42);
                goto LAB_1401706c7;
              }
              lVar13 = *(longlong *)(lVar19 + 0x28);
              iVar9 = iVar9 + 1;
            } while (lVar13 == 0);
            goto LAB_140170469;
          }
        }
        uVar42 = *(uint *)(lVar20 * 0x10 + 8 + (ulonglong)bVar7 * 0x20 + lVar13);
        lVar19 = lVar22 + lVar13;
LAB_140170463:
        auVar30 = ZEXT416(uVar42);
        auVar35 = ZEXT416(*(uint *)(lVar20 * 0x10 + 4 + lVar19));
      }
LAB_140170469:
      lVar19 = lVar20 * 0x10;
      auVar31 = ZEXT416(*(uint *)(lVar19 + lVar13 + lVar22));
      auVar35 = vinsertps_avx(auVar31,auVar35,0x10);
      auVar30 = vinsertps_avx(auVar35,auVar30,0x20);
      auVar30 = vinsertps_avx(auVar30,auVar31,0x30);
      fVar29 = auVar45._0_4_;
      if ((bVar23 == false) || (*(char *)(param_1[0x62] + 0x2a1 + lVar16) != '\x01')) {
        fVar28 = *(float *)((longlong)param_1 + lVar16 * 4 + 0x2b0);
        if ((fVar28 == fVar29) && (!NAN(fVar28) && !NAN(fVar29))) goto LAB_1401704f3;
      }
      else if ((bVar6 & 1) == 0) {
        auVar35 = vcmpps_avx(auVar30,*(undefined1 (*) [16])(plVar15 + lVar16 * 4 + lVar20 * 2),0);
        pauVar21 = (undefined1 (*) [16])(plVar15 + lVar16 * 4 + lVar20 * 2);
        uVar10 = vmovmskps_avx(auVar35);
        if ((~(byte)uVar10 & 7) == 0) {
          fVar28 = *(float *)(lStack_110 + lVar19);
          if (auVar43._0_4_ <= fVar28) goto LAB_140170531;
        }
        else {
          *pauVar21 = auVar30;
          lVar13 = (param_1 + lVar16 * 4 + lVar20 * 2 + 0x2e)[1];
          plStack_118[lVar16 * 4 + lVar20 * 2] = param_1[lVar16 * 4 + lVar20 * 2 + 0x2e];
          (plStack_118 + lVar16 * 4 + lVar20 * 2)[1] = lVar13;
          fVar28 = 0.0;
        }
        auVar35 = vminss_avx(auVar43._0_16_,ZEXT416((uint)(fVar25 + fVar28)));
        auVar30 = vcmpss_avx(ZEXT416((uint)(fVar25 + fVar28)),auVar45._0_16_,1);
        fVar27 = (float)(~auVar30._0_4_ & auVar35._0_4_);
        fVar28 = auVar47._0_4_;
        *(float *)(lStack_110 + lVar19) = fVar27;
        if ((fVar29 < fVar27) && (fVar28 = auVar48._0_4_, fVar27 < auVar43._0_4_)) {
          fVar28 = (float)func_0x000145f40770(fVar26 * fVar27);
          fVar28 = auVar47._0_4_ * fVar28;
          plVar15 = plStack_f8;
        }
        fVar28 = auVar47._0_4_ - fVar28;
        auVar30 = *(undefined1 (*) [16])(plStack_118 + lVar16 * 4 + lVar20 * 2);
        auVar35 = vsubps_avx(*pauVar21,auVar30);
        pfVar1 = (float *)(param_1 + lVar16 * 4 + lVar20 * 2 + 0x2e);
        *pfVar1 = auVar35._0_4_ * fVar28 + auVar30._0_4_;
        pfVar1[1] = auVar35._4_4_ * fVar28 + auVar30._4_4_;
        pfVar1[2] = auVar35._8_4_ * fVar28 + auVar30._8_4_;
        pfVar1[3] = auVar35._12_4_ * fVar28 + auVar30._12_4_;
      }
      else {
LAB_1401704f3:
        *(undefined1 (*) [16])(param_1 + lVar16 * 4 + lVar20 * 2 + 0x2e) = auVar30;
        *(undefined1 (*) [16])(plVar15 + lVar16 * 4 + lVar20 * 2) = auVar30;
        lVar13 = (plVar15 + lVar16 * 4 + lVar20 * 2)[1];
        plStack_118[lVar16 * 4 + lVar20 * 2] = plVar15[lVar16 * 4 + lVar20 * 2];
        (plStack_118 + lVar16 * 4 + lVar20 * 2)[1] = lVar13;
        *(undefined4 *)(lStack_110 + lVar19) = 0;
      }
LAB_140170531:
      lVar13 = lStack_100;
      lVar20 = 1;
      bVar24 = false;
    } while (bVar18);
    lVar16 = lVar16 + 1;
    if (lVar16 == 3) {
      auVar45 = ZEXT464(_DAT_14615af58);
      auVar36 = ZEXT416(_DAT_14615af58);
      if ((*(uint *)(param_1[0x81] + 0x14c) & 0x200) == 0) {
        auVar36._0_4_ = *(uint *)((longlong)param_1 + 0x3e4) ^ _DAT_145fc6f10;
        auVar36._4_4_ = _DAT_145fc6f10;
        auVar36._8_4_ = _DAT_145fc6f10;
        auVar36._12_4_ = _DAT_145fc6f10;
      }
      bVar24 = (bVar6 & 1) == 0;
      auVar30 = ZEXT416(_DAT_14615af58);
      fVar25 = _DAT_146159c28;
      if (bVar24) {
        fVar25 = *(float *)(param_1 + 0x7c);
        auVar30 = auVar36;
      }
      auVar48 = ZEXT464((uint)fVar25);
      auVar47 = ZEXT1664(auVar30);
      fVar25 = _DAT_146159c28;
      if (bVar24) {
        fVar25 = *(float *)(param_1 + 0x7d);
      }
      auVar49 = ZEXT464((uint)fVar25);
      if (bVar24) {
        auVar45 = ZEXT1664(CONCAT412(_DAT_145fc6f10,
                                     CONCAT48(_DAT_145fc6f10,
                                              CONCAT44(_DAT_145fc6f10,
                                                       *(uint *)((longlong)param_1 + 0x3ec) ^
                                                       _DAT_145fc6f10))));
      }
      FUN_14214d660(param_1,&cStack_11c);
      fVar25 = auVar49._0_4_;
      lVar5 = param_1[0x62];
      if (cStack_11c == '\0') {
        bVar14 = 0;
      }
      else {
        bVar14 = *(byte *)(lVar5 + 0x2a1);
      }
      fVar26 = auVar48._0_4_;
      *(byte *)(lVar5 + 0x2a5) = bVar14;
      bVar6 = 1;
      if (bVar23 != false) {
        bVar6 = bVar14 ^ 1;
      }
      fVar28 = auVar47._0_4_;
      fVar29 = fVar26;
      if ((bVar23 & bVar14) == 0) {
        fVar29 = fVar28;
      }
      auVar38._0_12_ = ZEXT812(0);
      auVar38._12_4_ = 0;
      auVar30 = ZEXT416((uint)(fVar29 * fVar40 * *(float *)(lVar13 + 0x2ec) +
                              *(float *)(param_1 + 0x56)));
      auVar31 = auVar43._0_16_;
      auVar35 = vminss_avx(auVar31,auVar30);
      auVar30 = vcmpss_avx(auVar30,auVar38,1);
      auVar51._0_4_ = ~auVar30._0_4_ & auVar35._0_4_;
      auVar51._4_4_ = ~auVar30._4_4_ & auVar35._4_4_;
      auVar51._8_4_ = ~auVar30._8_4_ & auVar35._8_4_;
      auVar51._12_4_ = ~auVar30._12_4_ & auVar35._12_4_;
      auVar49 = ZEXT1664(auVar51);
      *(uint *)(param_1 + 0x56) = auVar51._0_4_;
      if (cStack_11b == '\x01') {
        bVar7 = *(byte *)(lVar5 + 0x2a2);
      }
      else {
        bVar7 = 0;
      }
      *(byte *)(lVar5 + 0x2a6) = bVar7;
      fVar29 = fVar28;
      if (bVar23 != false) {
        fVar29 = fVar26;
        if (bVar7 == 0) {
          fVar29 = fVar28;
        }
        bVar6 = bVar6 != 0 & (bVar7 ^ 1);
      }
      auVar30 = ZEXT416((uint)(fVar29 * fVar40 * *(float *)(lVar13 + 0x2f0) +
                              *(float *)((longlong)param_1 + 0x2b4)));
      auVar35 = vminss_avx(auVar31,auVar30);
      auVar30 = vcmpss_avx(auVar30,auVar38,1);
      auVar52._0_4_ = ~auVar30._0_4_ & auVar35._0_4_;
      auVar52._4_4_ = ~auVar30._4_4_ & auVar35._4_4_;
      auVar52._8_4_ = ~auVar30._8_4_ & auVar35._8_4_;
      auVar52._12_4_ = ~auVar30._12_4_ & auVar35._12_4_;
      auVar53 = ZEXT1664(auVar52);
      auVar30 = vcmpps_avx(auVar51,auVar38,0);
      *(uint *)((longlong)param_1 + 0x2b4) = auVar52._0_4_;
      auVar35 = vcmpps_avx(auVar52,auVar38,0);
      if (cStack_11a == '\x01') {
        bVar7 = *(byte *)(lVar5 + 0x2a3);
      }
      else {
        bVar7 = 0;
      }
      *(byte *)(lVar5 + 0x2a7) = bVar7;
      if (bVar23 != false) {
        if (bVar7 == 0) {
          fVar26 = fVar28;
        }
        fVar28 = fVar26;
        bVar6 = ~bVar7 & bVar6 != 0;
      }
      auVar37 = ZEXT416((uint)(fVar28 * fVar40 * *(float *)(lVar13 + 0x2f4) +
                              *(float *)(param_1 + 0x57)));
      auVar32 = vminss_avx(auVar31,auVar37);
      auVar37 = vcmpss_avx(auVar37,auVar38,1);
      fVar26 = (float)(~auVar37._0_4_ & auVar32._0_4_);
      auVar50 = ZEXT1664(CONCAT412(~auVar37._12_4_ & auVar32._12_4_,
                                   CONCAT48(~auVar37._8_4_ & auVar32._8_4_,
                                            CONCAT44(~auVar37._4_4_ & auVar32._4_4_,fVar26))));
      *(float *)(param_1 + 0x57) = fVar26;
      if (cStack_119 == '\x01') {
        cVar8 = *(char *)(lVar5 + 0x2a4);
      }
      else {
        cVar8 = '\0';
      }
      *(char *)(lVar5 + 0x2a8) = cVar8;
      if ((bVar23 == false) || (cVar8 == '\0')) {
        fVar25 = auVar45._0_4_;
      }
      auVar46._0_12_ = ZEXT812(0);
      auVar46._12_4_ = 0;
      auVar45 = ZEXT1664(auVar46);
      auVar32 = ZEXT416((uint)(fVar25 * fVar40 * *(float *)(lVar13 + 0x2f8) +
                              *(float *)((longlong)param_1 + 700)));
      auVar37 = vminss_avx(auVar31,auVar32);
      auVar31 = vcmpss_avx(auVar32,auVar46,1);
      fVar25 = (float)(~auVar31._0_4_ & auVar37._0_4_);
      *(float *)((longlong)param_1 + 700) = fVar25;
      cVar8 = func_0x00014546d4f0();
      uVar42 = auVar43._0_4_;
      auVar31 = auVar47._0_16_;
      if (cVar8 != '\0') {
        auVar33._0_12_ = ZEXT812(0);
        auVar33._12_4_ = 0;
        auVar37 = vmaxss_avx(auVar33,auVar49._0_16_);
        auVar37 = vmaxss_avx(auVar37,auVar53._0_16_);
        auVar37 = vmaxss_avx(auVar37,auVar50._0_16_);
        if (auVar45._0_4_ < auVar37._0_4_) {
          if ((*(float *)((longlong)param_1 + 0x2e4) != _DAT_145fc6f48) ||
             (NAN(*(float *)((longlong)param_1 + 0x2e4)) || NAN(_DAT_145fc6f48))) {
            if ((bVar6 & 1) == 0) {
              auVar31 = auVar48._0_16_;
            }
            auVar34._0_4_ = auVar31._0_4_ ^ _DAT_145fc6f10;
            auVar34._4_4_ = auVar31._4_4_ ^ _DAT_145fc6f10;
            auVar34._8_4_ = auVar31._8_4_ ^ _DAT_145fc6f10;
            auVar34._12_4_ = auVar31._12_4_ ^ _DAT_145fc6f10;
            auVar31 = vmaxss_avx(auVar34,auVar31);
            fVar29 = auVar31._0_4_;
            if ((fVar29 != _DAT_146159c28) || (NAN(fVar29) || NAN(_DAT_146159c28))) {
              fVar29 = (float)func_0x000145f408b0(_DAT_14616478c,fVar40 * _DAT_14615a458 * fVar29);
              auVar39._0_12_ = ZEXT812(0);
              auVar39._12_4_ = 0;
              auVar37 = vminss_avx(ZEXT416((uint)_DAT_145fc6ed8),
                                   ZEXT416((uint)(_DAT_145fc6ed8 - fVar29)));
              auVar31 = vcmpss_avx(ZEXT416((uint)(_DAT_145fc6ed8 - fVar29)),auVar39,1);
              uVar42 = ~auVar31._0_4_ & auVar37._0_4_;
            }
          }
          *(uint *)(param_1 + 0x5c) = uVar42;
        }
      }
      uVar42 = (uint)(*(char *)((longlong)param_1 + 0x2fc) == '\x04');
      if ((bVar23 & bVar14) == 0) {
        uVar42 = 0;
      }
      uVar11 = func_0x000144ee2e80(param_1[2],param_1[3],0);
      *(undefined8 *)(lVar5 + 0x260) = uVar11;
      lVar5 = param_1[0x62];
      lVar12 = *(longlong *)(lVar5 + 0x260);
      *(float *)(lVar12 + 0x58) = fVar40;
      *(uint *)(lVar12 + 0x68) = uVar42;
      *(float *)(lVar12 + 0x60) = fVar41;
      *(float *)(lVar12 + 100) = fVar41;
      uVar11 = func_0x000144ee2e80(param_1[2],param_1[3],2);
      *(undefined8 *)(lVar5 + 0x270) = uVar11;
      lVar5 = param_1[0x62];
      lVar12 = *(longlong *)(lVar5 + 0x270);
      *(float *)(lVar12 + 0x58) = fVar40;
      *(uint *)(lVar12 + 0x68) = uVar42;
      *(float *)(lVar12 + 0x60) = fVar41;
      *(float *)(lVar12 + 100) = fVar41;
      cVar8 = *(char *)((longlong)param_1 + 0x2fd);
      uVar11 = func_0x000144ee2e80(param_1[2],param_1[3],1);
      *(undefined8 *)(lVar5 + 0x268) = uVar11;
      lVar5 = param_1[0x62];
      lVar12 = *(longlong *)(lVar5 + 0x268);
      *(float *)(lVar12 + 0x58) = fVar40;
      uVar42 = (uint)(cVar8 == '\x04' & bVar23 & bVar14);
      *(uint *)(lVar12 + 0x68) = uVar42;
      *(float *)(lVar12 + 0x60) = fVar41;
      *(float *)(lVar12 + 100) = fVar41;
      uVar11 = func_0x000144ee2e80(param_1[2],param_1[3],3);
      *(undefined8 *)(lVar5 + 0x278) = uVar11;
      uVar17 = CONCAT71((int7)((ulonglong)lVar5 >> 8),1);
      lVar5 = *(longlong *)(param_1[0x62] + 0x278);
      *(float *)(lVar5 + 0x58) = fVar40;
      *(uint *)(lVar5 + 0x68) = uVar42;
      *(float *)(lVar5 + 0x60) = fVar41;
      *(float *)(lVar5 + 100) = fVar41;
      if (((auVar30[0] & auVar35[0] & fVar26 == 0.0 & fVar25 == 0.0) != 0) &&
         (((*(byte *)(param_1[0x81] + 0x58) & 1) != 0 ||
          (cVar8 = func_0x000140005970(*(undefined2 *)(param_1[0x81] + 0x148)), cVar8 == '\0')))) {
        (**(code **)(*param_1 + 0x70))();
        uVar17 = 0;
        *(byte *)(param_1[0x81] + 0x58) = *(byte *)(param_1[0x81] + 0x58) | 2;
      }
      return uVar17 & 0xffffffff;
    }
  } while( true );
code_r0x000140170259:
  lVar13 = *(longlong *)(lVar19 + 0x20);
  iVar9 = iVar9 + 1;
  if (lVar13 != 0) goto LAB_140170469;
  goto LAB_140170241;
}

