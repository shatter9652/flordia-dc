// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14014a8e0  size: 3148 bytes
// Name:    FUN_14014a8e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_143d3ff90, FUN_143d400b0, FUN_1451d0420, FUN_144fd9dd0, FUN_144fd9d80, FUN_1407bb7b0, FUN_14004c030, FUN_1453c8060, FUN_14006bee0, FUN_140666ae0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14014a8e0(longlong param_1,undefined4 *param_2,longlong param_3,uint param_4,uint *param_5,
                  float param_6)

{
  uint *puVar1;
  float fVar2;
  code *pcVar3;
  longlong *plVar4;
  char cVar5;
  undefined1 uVar6;
  byte bVar7;
  ushort uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong *puVar15;
  undefined8 uVar16;
  ulonglong uVar17;
  undefined1 *puVar18;
  ulonglong uVar19;
  undefined4 *puVar20;
  ulonglong uVar21;
  uint uVar22;
  uint uVar23;
  longlong lVar24;
  ulonglong uVar25;
  undefined1 (*pauVar26) [16];
  byte bVar27;
  bool bVar28;
  bool bVar29;
  float fVar30;
  undefined8 extraout_XMM0_Qa;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 extraout_var [56];
  undefined1 extraout_var_00 [56];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar36;
  undefined1 in_ZMM6 [64];
  undefined1 auVar37 [64];
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  undefined1 auVar43 [64];
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  undefined1 auVar52 [16];
  undefined1 auVar53 [64];
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  undefined1 in_ZMM13 [64];
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  undefined1 in_ZMM15 [64];
  undefined1 auVar63 [64];
  float fStack_174;
  longlong lStack_170;
  longlong lStack_168;
  ulonglong uStack_160;
  ulonglong uStack_158;
  ulonglong uStack_150;
  uint uStack_144;
  undefined4 *puStack_140;
  ulonglong uStack_138;
  undefined4 uStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  undefined1 auStack_e8 [16];
  undefined1 auStack_78 [16];
  undefined1 auStack_58 [16];
  
  auStack_58 = in_ZMM15._0_16_;
  auStack_78 = in_ZMM13._0_16_;
  auStack_e8 = in_ZMM6._0_16_;
  puVar11 = (undefined8 *)
            (**(code **)(*(longlong *)(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffff0) + 0x90))();
  if (puVar11 == (undefined8 *)0x0) {
    return;
  }
  uStack_12c = 0xffffffff;
  cVar5 = func_0x00014006feb0(*puVar11,param_2[1]);
  if (cVar5 == '\0') {
    return;
  }
  lVar12 = FUN_1407bb7b0(*(undefined8 *)(param_2 + 2),param_2[4]);
  lVar13 = func_0x000143d3ff80(*(undefined4 *)(param_1 + 0xbc),*(undefined8 *)(param_1 + 0xc0),
                               *param_2);
  if (lVar13 != 0) {
    lVar12 = lVar13;
  }
  if (lVar12 == 0) {
    return;
  }
  uStack_150 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffff0;
  lVar14 = func_0x000145162130(*(undefined4 *)(uStack_150 + 0x9c));
  if (lVar14 == 0) {
    return;
  }
  uStack_158 = _DAT_14ab760c8;
  if (param_3 == 0) {
    uStack_160 = 0x40;
  }
  else {
    uStack_160 = FUN_14006bee0(*(undefined4 *)(param_3 + 0x10));
    if (((uint)uStack_160 < 0x40) &&
       (puVar15 = (ulonglong *)
                  func_0x00014006bd30(*(undefined4 *)(param_1 + 0x6c),
                                      *(undefined8 *)(param_1 + 0x70),0xe3a0bac9),
       puVar15 != (ulonglong *)0x0)) {
      bVar28 = (*puVar15 >> (uStack_160 & 0x3f) & 1) != 0;
      goto LAB_14014aa59;
    }
  }
  bVar28 = false;
LAB_14014aa59:
  uVar16 = func_0x00014023cb90();
  FUN_144fd9dd0(&fStack_128,uVar16);
  uVar22 = *(int *)(lVar12 + 0xc) + param_5[1];
  puStack_140 = param_2;
  if (*param_5 < uVar22) {
    uVar16 = func_0x000144d9c140(8,(ulonglong)uVar22 << 3);
    if ((ulonglong)param_5[1] != 0) {
      func_0x000145f40560(uVar16,*(undefined8 *)(param_5 + 2),(ulonglong)param_5[1] << 3);
    }
    if (*(longlong *)(param_5 + 2) != 0) {
      func_0x000144d9c130();
    }
    *(undefined8 *)(param_5 + 2) = uVar16;
    *param_5 = uVar22;
  }
  puVar20 = puStack_140;
  FUN_144fd9d80(CONCAT44(fStack_124,fStack_128));
  uVar22 = *(uint *)(lVar12 + 0xc);
  if (uVar22 != 0) {
    uStack_138 = (ulonglong)param_4;
    fVar42 = 0.0;
    auVar43 = ZEXT1264(ZEXT812(0));
    uVar21 = 0;
    uStack_144 = (uint)(uStack_158 != uStack_150) * 4 + 4;
    lStack_170 = lVar13;
    lStack_168 = param_3;
    do {
      if (param_3 == 0) {
LAB_14014ab7d:
        lVar14 = *(longlong *)(puVar20 + 2);
        uVar9 = func_0x0001424e8620(lVar14);
        uVar22 = (lVar14 == 0x3c034112c0ae7d80) + 2;
        if (lVar13 == 0) {
          uVar22 = (uint)(lVar14 == 0x3c034112c0ae7d80);
        }
        if ((lVar14 == 0x2c9f9d6292f4c1ac) || (lVar14 == -0x1618431f1eee03b2)) {
          uVar22 = uVar22 | uStack_144;
        }
        uVar23 = uVar22;
        if ((lVar14 == -0xd492f34194e1e65) &&
           (uVar23 = uVar22 + 0x10,
           1 < (byte)(*(char *)((*(ulonglong *)(param_1 + 8) & 0xfffffffffffffff0) + 0xfa) - 5U))) {
          uVar23 = uVar22;
        }
        uVar22 = uVar23 + 0x20;
        if (!bVar28) {
          uVar22 = uVar23;
        }
        func_0x000143d3f130(&fStack_174,uStack_160,param_4,uVar21 & 0xffffffff,uVar9,uVar22);
        plVar4 = _DAT_149fd66a8;
        if ((ulonglong)*(uint *)(param_1 + 0x7c) != 0) {
          lVar24 = 0;
          do {
            pauVar26 = *(undefined1 (**) [16])(*(longlong *)(param_1 + 0x80) + lVar24);
            if (*(float *)pauVar26[10] == fStack_174) {
              bVar29 = lVar13 != 0;
              cVar5 = *(char *)(param_1 + 0x60);
              uVar22 = param_5[1];
              if (uVar22 == *param_5) {
                uVar23 = uVar22 >> 1;
                if (uVar22 < 2) {
                  uVar23 = 1;
                }
                lVar13 = func_0x000144d9c140(8,(ulonglong)(uVar23 + uVar22) * 8);
                if ((ulonglong)param_5[1] != 0) {
                  func_0x000145f40560(lVar13,*(undefined8 *)(param_5 + 2),(ulonglong)param_5[1] << 3
                                     );
                }
                if (*(longlong *)(param_5 + 2) != 0) {
                  func_0x000144d9c130();
                }
                *(longlong *)(param_5 + 2) = lVar13;
                *param_5 = uVar23 + uVar22;
                uVar22 = param_5[1];
                param_3 = lStack_168;
              }
              else {
                lVar13 = *(longlong *)(param_5 + 2);
              }
              param_5[1] = uVar22 + 1;
              *(undefined1 (**) [16])(lVar13 + (ulonglong)uVar22 * 8) = pauVar26;
              puVar20 = puStack_140;
              lVar13 = lStack_170;
              if (bVar29 || cVar5 < '\0') goto LAB_14014ae6e;
              goto LAB_14014b382;
            }
            lVar24 = lVar24 + 8;
          } while ((ulonglong)*(uint *)(param_1 + 0x7c) << 3 != lVar24);
        }
        uVar19 = _DAT_149fd66a8[4];
        do {
          iVar10 = (int)uVar19;
          if (iVar10 == 0x1fffe) goto LAB_14014ad78;
          uVar25 = uVar19 & 0xffffffff;
          LOCK();
          uVar17 = plVar4[4];
          bVar29 = uVar19 == uVar17;
          if (bVar29) {
            plVar4[4] = (ulonglong)(*(uint *)(plVar4[5] + uVar25 * 4) & 0x1ffff) |
                        uVar19 & 0xffffffff00000000;
            uVar17 = uVar19;
          }
          UNLOCK();
          uVar19 = uVar17;
        } while (!bVar29);
        LOCK();
        *(int *)(plVar4 + 2) = (int)plVar4[2] + 1;
        UNLOCK();
        puVar1 = (uint *)(plVar4[5] + uVar25 * 4);
        *puVar1 = *puVar1 | *(uint *)(plVar4 + 6);
        if (*plVar4 == 0) {
LAB_14014ad78:
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pauVar26 = (undefined1 (*) [16])(*plVar4 + (ulonglong)(uint)((int)plVar4[1] * iVar10));
        if (plVar4[3] != 0) {
          FUN_14004c030(plVar4,pauVar26);
        }
        FUN_1453c8060(pauVar26);
        uVar22 = *(uint *)(param_1 + 0x7c);
        if (uVar22 == *(uint *)(param_1 + 0x78)) {
          uVar23 = uVar22 >> 1;
          if (uVar22 < 2) {
            uVar23 = 1;
          }
          lVar13 = func_0x000144d9c140(8,(ulonglong)(uVar23 + uVar22) * 8);
          if ((ulonglong)*(uint *)(param_1 + 0x7c) != 0) {
            func_0x000145f40560(lVar13,*(undefined8 *)(param_1 + 0x80),
                                (ulonglong)*(uint *)(param_1 + 0x7c) << 3);
          }
          if (*(longlong *)(param_1 + 0x80) != 0) {
            func_0x000144d9c130();
          }
          *(longlong *)(param_1 + 0x80) = lVar13;
          *(uint *)(param_1 + 0x78) = uVar23 + uVar22;
          uVar22 = *(uint *)(param_1 + 0x7c);
        }
        else {
          lVar13 = *(longlong *)(param_1 + 0x80);
        }
        *(uint *)(param_1 + 0x7c) = uVar22 + 1;
        *(undefined1 (**) [16])(lVar13 + (ulonglong)uVar22 * 8) = pauVar26;
        uVar22 = param_5[1];
        if (uVar22 == *param_5) {
          uVar23 = uVar22 >> 1;
          if (uVar22 < 2) {
            uVar23 = 1;
          }
          lVar13 = func_0x000144d9c140(8,(ulonglong)(uVar23 + uVar22) * 8);
          if ((ulonglong)param_5[1] != 0) {
            func_0x000145f40560(lVar13,*(undefined8 *)(param_5 + 2),(ulonglong)param_5[1] << 3);
          }
          if (*(longlong *)(param_5 + 2) != 0) {
            func_0x000144d9c130();
          }
          *(longlong *)(param_5 + 2) = lVar13;
          *param_5 = uVar23 + uVar22;
          uVar22 = param_5[1];
        }
        else {
          lVar13 = *(longlong *)(param_5 + 2);
        }
        param_5[1] = uVar22 + 1;
        *(undefined1 (**) [16])(lVar13 + (ulonglong)uVar22 * 8) = pauVar26;
LAB_14014ae6e:
        bVar29 = lStack_170 != 0;
        FUN_140666ae0(pauVar26,*(undefined8 *)(*(longlong *)(lVar12 + 0x10) + uVar21 * 8));
        uVar22 = *(uint *)(pauVar26[9] + 8);
        uVar23 = *(uint *)pauVar26[0xf];
        *(undefined4 *)(pauVar26[0xf] + 0xc) = 0x3f800000;
        *(uint *)(pauVar26[9] + 8) = uVar22 | 8;
        *(uint *)pauVar26[0xf] = uVar23 | 0x4000;
        if (*(longlong *)(puVar20 + 2) == -0x43007bbd4a8e6490) {
          *(uint *)pauVar26[0xf] = uVar23 | 0x80004000;
        }
        auVar31 = *(undefined1 (*) [16])(puVar20 + 8);
        fVar30 = (float)puVar20[0xb];
        fVar54 = (float)puVar20[0xc];
        fVar38 = (float)puVar20[0xd];
        fVar58 = (float)puVar20[0xe];
        auVar34._0_4_ = auVar31._0_4_ + auVar31._0_4_;
        auVar34._4_4_ = auVar31._4_4_ + auVar31._4_4_;
        auVar34._8_4_ = auVar31._8_4_ + auVar31._8_4_;
        auVar34._12_4_ = auVar31._12_4_ + auVar31._12_4_;
        auVar32 = vshufps_avx(auVar31,auVar31,0xc9);
        auVar31 = vshufps_avx(auVar31,auVar31,0xd2);
        auVar33 = vshufps_avx(auVar34,auVar34,0xc9);
        auVar35 = vshufps_avx(auVar34,auVar34,0xd2);
        auVar37 = ZEXT1664(CONCAT412(-(fVar30 * auVar35._12_4_) + auVar32._12_4_ * auVar34._12_4_,
                                     CONCAT48(-(fVar30 * auVar35._8_4_) +
                                              auVar32._8_4_ * auVar34._8_4_,
                                              CONCAT44(-(fVar30 * auVar35._4_4_) +
                                                       auVar32._4_4_ * auVar34._4_4_,
                                                       -(fVar30 * auVar35._0_4_) +
                                                       auVar32._0_4_ * auVar34._0_4_))));
        auVar63 = ZEXT1664(CONCAT412(auVar31._12_4_ * auVar34._12_4_ + auVar33._12_4_ * fVar30,
                                     CONCAT48(auVar31._8_4_ * auVar34._8_4_ + auVar33._8_4_ * fVar30
                                              ,CONCAT44(auVar31._4_4_ * auVar34._4_4_ +
                                                        auVar33._4_4_ * fVar30,
                                                        auVar31._0_4_ * auVar34._0_4_ +
                                                        auVar33._0_4_ * fVar30))));
        auVar53 = ZEXT1664(CONCAT412(-(auVar35._12_4_ * auVar31._12_4_) -
                                     (auVar32._12_4_ * auVar33._12_4_ - _DAT_145fc6ed8),
                                     CONCAT48(-(auVar35._8_4_ * auVar31._8_4_) -
                                              (auVar32._8_4_ * auVar33._8_4_ - _DAT_145fc6ed8),
                                              CONCAT44(-(auVar35._4_4_ * auVar31._4_4_) -
                                                       (auVar32._4_4_ * auVar33._4_4_ -
                                                       _DAT_145fc6ed8),
                                                       -(auVar35._0_4_ * auVar31._0_4_) -
                                                       (auVar32._0_4_ * auVar33._0_4_ -
                                                       _DAT_145fc6ed8)))));
        fVar39 = fVar38;
        fVar40 = fVar38;
        fVar41 = fVar38;
        fVar55 = fVar54;
        fVar56 = fVar54;
        fVar57 = fVar54;
        fVar59 = fVar58;
        fVar60 = fVar58;
        fVar61 = fVar58;
        FUN_143d400b0(*(undefined4 *)(param_1 + 0xac),*(undefined8 *)(param_1 + 0xb0),&fStack_128,
                      puVar20[1]);
        fVar47 = auVar53._0_4_;
        auVar52 = auVar63._0_16_;
        auVar31 = vshufps_avx(auVar52,auVar52,0x55);
        auVar35 = auVar37._0_16_;
        auVar32 = vshufps_avx(auVar35,auVar35,0xaa);
        fVar36 = auVar37._0_4_;
        fVar62 = auVar63._0_4_;
        auVar34 = auVar53._0_16_;
        auVar33 = vshufps_avx(auVar34,auVar34,0x55);
        auVar35 = vshufps_avx(auVar35,auVar35,0x55);
        auVar34 = vshufps_avx(auVar34,auVar34,0xaa);
        fVar30 = *(float *)*pauVar26;
        fVar2 = *(float *)(*pauVar26 + 4);
        fVar44 = fStack_108 * auVar32._0_4_ + fStack_118 * auVar31._0_4_ + fStack_128 * fVar47;
        fVar45 = fStack_104 * auVar32._4_4_ + fStack_114 * auVar31._4_4_ + fStack_124 * fVar47;
        fVar46 = fStack_100 * auVar32._8_4_ + fStack_110 * auVar31._8_4_ + fStack_120 * fVar47;
        fVar47 = fStack_fc * auVar32._12_4_ + fStack_10c * auVar31._12_4_ + fStack_11c * fVar47;
        auVar31 = vshufps_avx(auVar52,auVar52,0xaa);
        fVar48 = fStack_108 * auVar31._0_4_ + fStack_118 * auVar33._0_4_ + fStack_128 * fVar36;
        fVar49 = fStack_104 * auVar31._4_4_ + fStack_114 * auVar33._4_4_ + fStack_124 * fVar36;
        fVar50 = fStack_100 * auVar31._8_4_ + fStack_110 * auVar33._8_4_ + fStack_120 * fVar36;
        fVar51 = fStack_fc * auVar31._12_4_ + fStack_10c * auVar33._12_4_ + fStack_11c * fVar36;
        auVar52._0_4_ =
             fStack_108 * auVar34._0_4_ + fStack_118 * auVar35._0_4_ + fStack_128 * fVar62;
        auVar52._4_4_ =
             fStack_104 * auVar34._4_4_ + fStack_114 * auVar35._4_4_ + fStack_124 * fVar62;
        auVar52._8_4_ =
             fStack_100 * auVar34._8_4_ + fStack_110 * auVar35._8_4_ + fStack_120 * fVar62;
        auVar52._12_4_ =
             fStack_fc * auVar34._12_4_ + fStack_10c * auVar35._12_4_ + fStack_11c * fVar62;
        auVar37 = ZEXT1664(auVar52);
        fVar36 = *(float *)(*pauVar26 + 8);
        auVar31._0_4_ =
             auVar52._0_4_ * fVar36 +
             fVar48 * fVar2 +
             fVar44 * fVar30 +
             fStack_108 * fVar58 + fStack_118 * fVar38 + fStack_128 * fVar54 + fStack_f8;
        auVar31._4_4_ =
             auVar52._4_4_ * fVar36 +
             fVar49 * fVar2 +
             fVar45 * fVar30 +
             fStack_104 * fVar59 + fStack_114 * fVar39 + fStack_124 * fVar55 + fStack_f4;
        auVar31._8_4_ =
             auVar52._8_4_ * fVar36 +
             fVar50 * fVar2 +
             fVar46 * fVar30 +
             fStack_100 * fVar60 + fStack_110 * fVar40 + fStack_120 * fVar56 + fStack_f0;
        auVar31._12_4_ =
             auVar52._12_4_ * fVar36 +
             fVar51 * fVar2 +
             fVar47 * fVar30 +
             fStack_fc * fVar61 + fStack_10c * fVar41 + fStack_11c * fVar57 + fStack_ec;
        auVar31 = vblendps_avx(auVar31,*pauVar26,8);
        *pauVar26 = auVar31;
        fVar30 = *(float *)pauVar26[2];
        fVar54 = *(float *)(pauVar26[2] + 4);
        fVar38 = *(float *)(pauVar26[2] + 8);
        auVar32._0_4_ = auVar52._0_4_ * fVar38 + fVar48 * fVar54 + fVar44 * fVar30;
        auVar32._4_4_ = auVar52._4_4_ * fVar38 + fVar49 * fVar54 + fVar45 * fVar30;
        auVar32._8_4_ = auVar52._8_4_ * fVar38 + fVar50 * fVar54 + fVar46 * fVar30;
        auVar32._12_4_ = auVar52._12_4_ * fVar38 + fVar51 * fVar54 + fVar47 * fVar30;
        auVar31 = vblendps_avx(auVar32,pauVar26[2],8);
        pauVar26[2] = auVar31;
        fVar30 = *(float *)pauVar26[3];
        fVar54 = *(float *)(pauVar26[3] + 4);
        fVar38 = *(float *)(pauVar26[3] + 8);
        auVar33._0_4_ = auVar52._0_4_ * fVar38 + fVar48 * fVar54 + fVar44 * fVar30;
        auVar33._4_4_ = auVar52._4_4_ * fVar38 + fVar49 * fVar54 + fVar45 * fVar30;
        auVar33._8_4_ = auVar52._8_4_ * fVar38 + fVar50 * fVar54 + fVar46 * fVar30;
        auVar33._12_4_ = auVar52._12_4_ * fVar38 + fVar51 * fVar54 + fVar47 * fVar30;
        auVar31 = vblendps_avx(auVar33,pauVar26[3],8);
        pauVar26[3] = auVar31;
        *(float *)pauVar26[10] = fStack_174;
        if ((pauVar26[9][10] & 4) != 0) {
          lVar13 = *(longlong *)pauVar26[4];
          if (*(byte *)(lVar13 + 0x22) < 8) {
            auVar53._0_8_ = func_0x00014011dfd0();
            auVar52 = auVar37._0_16_;
            auVar53._8_56_ = extraout_var;
            auVar31 = auVar53._0_16_;
            lVar13 = *(longlong *)pauVar26[4];
            *(undefined1 *)(lVar13 + 0x22) = 8;
          }
          if (*(int *)(lVar13 + 4) != 0) {
            lVar24 = 0;
            uVar19 = 0;
            do {
              auVar31 = *(undefined1 (*) [16])(*(longlong *)(lVar13 + 8) + lVar24);
              auVar32 = vcmpps_avx(auVar43._0_16_,auVar31,4);
              if ((((SUB161(auVar32 >> 0x1f,0) & 1) != 0 || (SUB161(auVar32 >> 0x3f,0) & 1) != 0) ||
                  (SUB161(auVar32 >> 0x5f,0) & 1) != 0) || auVar32[0xf] < '\0') {
                fVar30 = auVar31._0_4_;
                auVar32 = vshufps_avx(auVar31,auVar31,0x55);
                auVar33 = vshufps_avx(auVar31,auVar31,0xaa);
                auVar35._0_4_ =
                     auVar52._0_4_ * auVar33._0_4_ + fVar48 * auVar32._0_4_ + fVar44 * fVar30;
                auVar35._4_4_ =
                     auVar52._4_4_ * auVar33._4_4_ + fVar49 * auVar32._4_4_ + fVar45 * fVar30;
                auVar35._8_4_ =
                     auVar52._8_4_ * auVar33._8_4_ + fVar50 * auVar32._8_4_ + fVar46 * fVar30;
                auVar35._12_4_ =
                     auVar52._12_4_ * auVar33._12_4_ + fVar51 * auVar32._12_4_ + fVar47 * fVar30;
                auVar31 = vblendps_avx(auVar35,auVar31,8);
                *(undefined1 (*) [16])(*(longlong *)(lVar13 + 8) + lVar24) = auVar31;
                lVar13 = *(longlong *)pauVar26[4];
              }
              uVar19 = uVar19 + 1;
              lVar24 = lVar24 + 0x10;
            } while (uVar19 < *(uint *)(lVar13 + 4));
          }
        }
        param_3 = lStack_168;
        *(undefined4 *)pauVar26[0x11] = puVar20[1];
        uVar23 = *(uint *)(pauVar26[9] + 8);
        if ((uVar23 >> 0x14 & 1) != 0) {
          uVar23 = uVar23 & 0xffdfffff;
          *(uint *)(pauVar26[9] + 8) = uVar23;
        }
        bVar27 = bVar29 & (byte)((uVar22 & 0x40) >> 6);
        uVar22 = uVar23;
        if (uStack_158 == uStack_150) {
          bVar29 = true;
          if (*(longlong *)(puVar20 + 2) == 0x2c9f9d6292f4c1ac) {
            *(float *)(*pauVar26 + 0xc) = *(float *)(*pauVar26 + 0xc) * _DAT_14763b848;
            puVar18 = (undefined1 *)func_0x0001455bc1b0();
            bVar7 = func_0x000145ed7c70(*puVar18);
            auVar37._8_56_ = extraout_var_00;
            auVar37._0_8_ = extraout_XMM0_Qa;
            auVar31 = auVar37._0_16_;
            if ((~bVar7 & 1) == 0 && bVar27 == 0) {
              uVar22 = uVar23 | 0x40001c0;
              *(uint *)(pauVar26[9] + 8) = uVar22;
              if (((*(char *)(_DAT_14ab7f990 + 0x18d) == '\x01') &&
                  (*(char *)(_DAT_14ab7f990 + 400) == '\x01')) &&
                 (*(char *)(_DAT_14ab7f990 + 0x1cf) == '\x01')) {
                uVar22 = uVar23 & 0xffdfffff | 0x40001c0;
                *(uint *)(pauVar26[9] + 8) = uVar22;
              }
            }
            goto LAB_14014b134;
          }
        }
        else {
LAB_14014b134:
          uVar23 = uVar22;
          bVar29 = true;
          if (*(longlong *)(puVar20 + 2) == 0x2c9f9d6292f4c1ac) {
            if ((*(byte *)(param_1 + 0x61) & 8) != 0 && bVar27 == 0) {
              uVar23 = uVar23 | 0x40000c0;
              *(uint *)(pauVar26[9] + 8) = uVar23;
            }
            bVar29 = false;
          }
        }
        lVar13 = lStack_170;
        if (*(char *)(_DAT_14ab7f990 + 0x18d) == '\x01') {
          bVar7 = *(byte *)(_DAT_14ab7f990 + 0x13a);
        }
        else {
          bVar7 = 0;
        }
        uVar22 = *(uint *)pauVar26[0xf];
        if (((~bVar7 & (byte)uVar22 >> 3 & 1) == 0 && bVar27 == 0) &&
           ((!bVar29 && lVar14 != 0x3c034112c0ae7d80) && pauVar26[0x11][0xd] == '\x02')) {
          uVar23 = (uint)bVar7 << 7 | uVar23 | 0x4000040;
          *(uint *)(pauVar26[9] + 8) = uVar23;
          *(uint *)pauVar26[0xf] = uVar22 | 0x20000000;
          if ((uVar22 >> 0xc & 1) == 0) {
            *(undefined4 *)pauVar26[0xb] = 0x3e666666;
          }
        }
        if ((uVar23 & 0x40) != 0) {
          pauVar26[0x11][9] = 0xff;
        }
        *(uint *)(pauVar26[9] + 8) =
             (uVar23 & 0xfffffffd) +
             (uint)(*(byte *)(param_1 + 99) < 0x40 && uStack_158 != uStack_150) * 2;
        if (lStack_170 == 0) {
LAB_14014b2a1:
          if (param_3 != 0) {
            auVar31 = vpinsrw_avx(auVar31,(uint)*(ushort *)(param_3 + 0x28),0);
            auVar32 = vcvtph2ps_f16c(ZEXT216(auVar31._0_2_));
            if (fVar42 < auVar32._0_4_) {
              *(ushort *)(pauVar26[6] + 8) = auVar31._0_2_;
              bVar29 = false;
              lVar14 = *(longlong *)(*(longlong *)(param_3 + 0x98) + 0x10 + uStack_138 * 0x18);
              *(undefined2 *)(pauVar26[6] + 0xc) = *(undefined2 *)(lVar14 + uVar21 * 4);
              *(undefined2 *)(pauVar26[6] + 10) =
                   *(undefined2 *)(*(longlong *)(*(longlong *)(lVar12 + 0x10) + uVar21 * 8) + 0x6a);
              uVar8 = (ushort)*(byte *)(lVar14 + 2 + uVar21 * 4);
              goto LAB_14014b309;
            }
          }
          bVar29 = false;
        }
        else {
          lVar14 = *(longlong *)(*(longlong *)(lStack_170 + 0x10) + uVar21 * 8);
          auVar31 = vpinsrw_avx(auVar31,(uint)*(ushort *)(lVar14 + 0x68),0);
          auVar32 = vcvtph2ps_f16c(ZEXT216(auVar31._0_2_));
          if (auVar32._0_4_ <= fVar42) goto LAB_14014b2a1;
          *(ushort *)(pauVar26[6] + 8) = auVar31._0_2_;
          bVar29 = true;
          *(undefined2 *)(pauVar26[6] + 0xc) = *(undefined2 *)(lVar14 + 0x6c);
          *(undefined2 *)(pauVar26[6] + 10) = *(undefined2 *)(lVar14 + 0x6a);
          uVar8 = *(ushort *)(lVar14 + 0x6e);
LAB_14014b309:
          *(ushort *)(pauVar26[6] + 0xe) = uVar8;
        }
        uVar6 = func_0x00014013d470(*(undefined2 *)
                                     (*(longlong *)(*(longlong *)(lVar12 + 0x10) + uVar21 * 8) +
                                     0x6e));
        pauVar26[0x12][1] = uVar6;
        lVar14 = func_0x00014509f480(*(undefined4 *)
                                      ((*(ulonglong *)(param_1 + 8) & 0xfffffffffffffff0) + 0x9c));
        if (((lVar14 != 0) &&
            (lVar14 = func_0x000144e9db80(*(undefined4 *)(lVar14 + 0x14),
                                          *(undefined8 *)(lVar14 + 0x18),*(undefined4 *)pauVar26[10]
                                         ), lVar14 != 0)) &&
           (func_0x00014061c450(lVar14,0), !bVar29)) {
          *(byte *)(lVar14 + 0x27) = *(byte *)(lVar14 + 0x27) & 0xf7;
        }
        FUN_1451d0420(param_1,pauVar26);
LAB_14014b382:
        if (((fVar42 <= param_6) &&
            (lVar14 = func_0x00014509f480(*(undefined4 *)
                                           ((*(ulonglong *)(param_1 + 8) & 0xfffffffffffffff0) +
                                           0x9c)), lVar14 != 0)) &&
           (lVar14 = func_0x000144e9db80(*(undefined4 *)(lVar14 + 0x14),
                                         *(undefined8 *)(lVar14 + 0x18),*(undefined4 *)pauVar26[10])
           , lVar14 != 0)) {
          *(float *)(lVar14 + 8) = param_6;
        }
        uVar22 = *(uint *)(lVar12 + 0xc);
      }
      else {
        uVar23 = *(uint *)(*(longlong *)(param_3 + 0x98) + 0xc + uStack_138 * 0x18);
        if (uVar23 <= uVar21) {
          return;
        }
        cVar5 = FUN_143d3ff90(*(undefined8 *)(param_3 + 0x18),
                              CONCAT31((int3)(uVar23 >> 8),
                                       *(undefined1 *)
                                        (*(longlong *)
                                          (*(longlong *)(param_3 + 0x98) + uStack_138 * 0x18 + 0x10)
                                         + 2 + uVar21 * 4)));
        if (cVar5 == '\0') goto LAB_14014ab7d;
      }
      uVar21 = uVar21 + 1;
    } while (uVar21 < uVar22);
  }
  return;
}

