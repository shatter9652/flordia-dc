// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 143dc0730  size: 5091 bytes
// Name:    rlTelemetryPolicies::LoadMetricsFromJson
// Subsystem: core
// Class:   rlTelemetryPolicies
//
// Evidence:
//   GTAVSRC: rlTelemetryPolicies::LoadMetricsFromJson  (rage/base/src/rline/rltelemetry.cpp)
//   literal: TelemetryConfig
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140468000, FUN_141be6540, FUN_145897b50, FUN_1402675a0, FUN_1457d1ec0, FUN_145292d40, FUN_143dc1b80, FUN_143dc1b40, FUN_140467f40, FUN_141cbe2a0, FUN_140467d60, FUN_145a11970, FUN_142097ed0, FUN_141fb2df0, FUN_145aaa710, FUN_143dc1b20, FUN_1457d1fb0, FUN_140467df0, FUN_1457d2040, FUN_145a962c0, FUN_143dc1c00, FUN_145db1c30
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"
#include "gta6decomp/rlTelemetryPolicies.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong rlTelemetryPolicies__LoadMetricsFromJson
                    (longlong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  int *piVar1;
  longlong *plVar2;
  ushort uVar3;
  uint uVar4;
  char cVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  ulonglong uVar9;
  uint *puVar10;
  ulonglong uVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined1 *puVar15;
  longlong *plVar16;
  longlong *plVar17;
  ushort uVar18;
  undefined8 uVar19;
  uint uVar20;
  uint *puVar21;
  undefined8 uVar22;
  uint uVar23;
  uint *puVar24;
  longlong lVar25;
  uint *puVar26;
  longlong lVar27;
  int iVar28;
  longlong *plVar29;
  undefined1 uVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [64];
  undefined1 auVar33 [16];
  undefined1 auVar34 [64];
  undefined1 auVar35 [16];
  undefined1 auVar36 [64];
  undefined1 auVar37 [64];
  undefined4 uVar38;
  undefined1 uStack_503;
  char cStack_502;
  undefined1 uStack_501;
  longlong lStack_500;
  uint uStack_4f4;
  uint uStack_4f0;
  undefined4 uStack_4ec;
  short sStack_4e6;
  uint uStack_4e4;
  uint uStack_4e0;
  uint uStack_4dc;
  uint uStack_4d8;
  undefined4 uStack_4d4;
  longlong *plStack_4d0;
  undefined4 uStack_4c8;
  longlong *plStack_4c0;
  undefined4 uStack_4b8;
  longlong lStack_4b0;
  longlong lStack_4a8;
  longlong lStack_4a0;
  longlong lStack_498;
  longlong lStack_490;
  undefined1 auStack_488 [8];
  longlong *plStack_480;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined1 auStack_448 [8];
  longlong *plStack_440;
  undefined1 auStack_428 [8];
  longlong *plStack_420;
  undefined1 auStack_408 [8];
  longlong *plStack_400;
  undefined1 auStack_3e8 [8];
  longlong *plStack_3e0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined1 auStack_368 [8];
  longlong *plStack_360;
  undefined1 auStack_348 [8];
  longlong *plStack_340;
  uint uStack_328;
  undefined4 uStack_324;
  undefined1 auStack_320 [12];
  uint uStack_314;
  undefined8 uStack_310;
  uint uStack_308;
  undefined1 uStack_304;
  ulonglong auStack_1e8 [53];
  
  plVar17 = (longlong *)(param_4 & 0xffffffff);
  FUN_145897b50();
  func_0x000140467f00(auStack_428);
  uStack_388 = 0;
  uStack_380 = 0;
  uStack_378 = 0;
  uStack_370 = 0;
  uStack_3a8 = 0;
  uStack_3a0 = 0;
  uStack_398 = 0;
  uStack_390 = 0;
  cStack_502 = '\0';
  uStack_501 = 0;
  cVar5 = func_0x000141a93200(auStack_428,param_3,param_4 & 0xffffffff);
  if (cVar5 == '\0') {
    uVar38 = 8;
    uVar7 = 0x739b2fe7;
    FUN_1402675a0(0x146cb4b88,4);
    FUN_1457d1ec0(0x146cb4b88,1,0x809,0x897ead3f,uVar7,uVar38,param_3);
    uVar11 = 0;
LAB_143dc091b:
    func_0x000145db1be0(param_1);
  }
  else {
    puVar15 = auStack_448;
    func_0x000140467f00(puVar15);
    cVar5 = FUN_140467df0(auStack_428,&UNK_14678137f,puVar15);
    if (cVar5 == '\0') {
      uVar38 = 0;
      uVar7 = 0xc4c832cd;
      FUN_1402675a0(0x146cb4b88,4);
      uVar19 = 0x80c;
      uVar22 = 0x35c0e73e;
LAB_143dc09fe:
      FUN_1457d1ec0(0x146cb4b88,1,uVar19,uVar22,uVar7,uVar38);
      iVar28 = 0xe;
LAB_143dc082a:
      uVar11 = 0;
    }
    else {
      cVar5 = FUN_141be6540(auStack_448,&UNK_146784951,&cStack_502);
      if (cVar5 == '\0') {
        uVar38 = 0;
        uVar7 = 0x797b946a;
        FUN_1402675a0(0x146cb4b88,4);
        uVar19 = 0x80e;
        uVar22 = 0xd7a71766;
        goto LAB_143dc09fe;
      }
      if (cStack_502 == '\0') {
        FUN_143dc1b20(param_1);
        iVar28 = 1;
        goto LAB_143dc082a;
      }
      uStack_4d4 = 0;
      cVar5 = FUN_141cbe2a0(auStack_448,&UNK_146779f6d);
      if (cVar5 != '\0') {
        FUN_143dc1b40(param_2,uStack_4d4);
      }
      FUN_141be6540(auStack_448,&UNK_14677a63b,&uStack_501);
      func_0x000140467f00(auStack_3e8);
      cVar5 = FUN_140467df0(auStack_428,&UNK_14677a3fe,auStack_3e8);
      if (cVar5 == '\0') {
        uVar38 = 0;
        uVar7 = 0x70f2c857;
        FUN_1402675a0(0x146cb4b88,4);
        uVar19 = 0x820;
        uVar22 = 0x7b3100fa;
LAB_143dc1967:
        FUN_1457d1ec0(0x146cb4b88,1,uVar19,uVar22,uVar7,uVar38);
        iVar28 = 0xe;
        uVar11 = 0;
      }
      else {
        cVar5 = FUN_145a962c0(auStack_3e8,&UNK_14677f481,param_1 + 0x78);
        if (cVar5 == '\0') {
          uVar38 = 0;
          uVar7 = 0xb57befc5;
          FUN_1402675a0(0x146cb4b88,4);
          uVar19 = 0x823;
          uVar22 = 0xd542f357;
          goto LAB_143dc1967;
        }
        cVar5 = FUN_140467d60(auStack_3e8,&UNK_146784d64,&uStack_3a8,0x40);
        if (cVar5 == '\0') {
          uVar11 = (ulonglong)uStack_3a8 >> 0x20;
          uStack_3a8 = CONCAT44((uint)uVar11 & 0xffffff00,0x656e6f6e);
        }
        uVar7 = func_0x000144fc2180(0,&uStack_3a8);
        *(undefined4 *)(param_1 + 0x7c) = uVar7;
        func_0x000140467f00(auStack_488);
        FUN_140467df0(auStack_428,&UNK_14677c8d7,auStack_488);
        cVar5 = FUN_140468000(auStack_488,auStack_488);
        if (cVar5 != '\0') {
          auVar34 = ZEXT1664(CONCAT115(DAT_146159579,
                                       CONCAT114(DAT_146159579,
                                                 CONCAT113(DAT_146159579,
                                                           CONCAT112(DAT_146159579,
                                                                     CONCAT111(DAT_146159579,
                                                                               CONCAT110(
                                                  DAT_146159579,
                                                  CONCAT19(DAT_146159579,
                                                           CONCAT18(DAT_146159579,
                                                                    CONCAT17(DAT_146159579,
                                                                             CONCAT16(DAT_146159579,
                                                                                      CONCAT15(
                                                  DAT_146159579,
                                                  CONCAT14(DAT_146159579,
                                                           CONCAT13(DAT_146159579,
                                                                    CONCAT12(DAT_146159579,
                                                                             CONCAT11(DAT_146159579,
                                                                                      DAT_146159579)
                                                                            )))))))))))))));
          auVar36 = ZEXT464(_DAT_145fc6ed8);
          auVar32 = ZEXT1264(ZEXT812(0));
          lStack_500 = param_1;
LAB_143dc0b66:
          uStack_503 = 0;
          uStack_3c8 = 0;
          uStack_3c0 = 0;
          uStack_3b8 = 0;
          uStack_3b0 = 0;
          auVar32 = ZEXT1664(auVar32._0_16_);
          auVar34 = ZEXT1664(auVar34._0_16_);
          auVar36 = ZEXT1664(auVar36._0_16_);
          cVar5 = FUN_140467d60(auStack_488,&UNK_146780119,&uStack_3c8,0x20);
          if (cVar5 == '\0') {
            auStack_1e8[0] = auStack_1e8[0] & 0xffffffffffffff00;
            cVar5 = FUN_141be6540(auStack_488,&UNK_146784949,auStack_1e8);
            auVar35 = auVar36._0_16_;
            auVar33 = auVar34._0_16_;
            auVar31 = auVar32._0_16_;
            if (cVar5 == '\0') {
              uVar38 = 0;
              uVar7 = 0xf8b49354;
              FUN_1402675a0(0x146cb4b88,4);
              uVar19 = 0x83e;
              uVar22 = 0x290c3fb3;
              goto LAB_143dc1aca;
            }
            uStack_503 = (undefined1)auStack_1e8[0];
LAB_143dc0bda:
            auStack_1e8[0xc] = 0;
            auStack_1e8[0xd] = 0;
            auStack_1e8[0xe] = 0;
            auStack_1e8[0xf] = 0;
            auStack_1e8[8] = 0;
            auStack_1e8[9] = 0;
            auStack_1e8[10] = 0;
            auStack_1e8[0xb] = 0;
            auStack_1e8[4] = 0;
            auStack_1e8[5] = 0;
            auStack_1e8[6] = 0;
            auStack_1e8[7] = 0;
            auStack_1e8[0] = 0;
            auStack_1e8[1] = 0;
            auStack_1e8[2] = 0;
            auStack_1e8[3] = 0;
            auVar32 = ZEXT1664(auVar31);
            auVar34 = ZEXT1664(auVar33);
            auVar36 = ZEXT1664(auVar35);
            cVar5 = FUN_140467d60(auStack_488,&UNK_146782a2e,auStack_1e8,0x80);
            if (cVar5 == '\0') {
              uVar38 = 0;
              uVar7 = 0x6b907719;
              FUN_1402675a0(0x146cb4b88,4);
              uVar19 = 0x843;
              uVar22 = 0xd3bdc3b7;
              goto LAB_143dc1aca;
            }
            uStack_4ec = 0;
            cVar5 = FUN_141cbe2a0(auStack_488,&UNK_14677c9b8,&uStack_4ec);
            if (cVar5 == '\0') {
              uStack_4ec = 0;
            }
            uStack_4f0 = 0x3f800000;
            cVar5 = FUN_141fb2df0(auStack_488,&UNK_146778596,&uStack_4f0);
            if (cVar5 == '\0') {
              auVar37 = ZEXT1664(auVar36._0_16_);
              uStack_4f0 = 0x3f800000;
            }
            else {
              auVar37 = ZEXT464(uStack_4f0);
            }
            uVar6 = func_0x000144fc2180(0,auStack_1e8);
            uStack_328 = auVar37._0_4_;
            uStack_324 = uStack_4ec;
            uStack_310 = auVar32._4_8_;
            uStack_308 = auVar32._12_4_;
            auStack_320 = auVar32._0_12_;
            uStack_304 = uStack_503;
            uStack_314 = uStack_308;
            func_0x000140467f00(auStack_368);
            plStack_4d0 = (longlong *)0x0;
            uStack_4c8 = 0;
            plStack_4c0 = (longlong *)0x0;
            uStack_4b8 = 0;
            cVar5 = FUN_140467df0(auStack_488,&UNK_14677d915);
            if ((cVar5 != '\0') && (cVar5 = FUN_145a11970(&plStack_4d0,auStack_368), cVar5 != '\0'))
            {
              if ((short)uStack_4b8 != 0 || (short)uStack_4c8 != 0) {
                sStack_4e6 = (short)uStack_4c8;
                if (*(uint *)(param_1 + 0x2c) < 0x20) {
                  uStack_4e4 = uVar6 & 0xffffff7f;
                  uStack_4e0 = uVar6 >> 7;
                  uVar30 = (undefined1)uStack_4e4;
                  auVar37 = ZEXT1664(CONCAT115(uVar30,CONCAT114(uVar30,CONCAT113(uVar30,CONCAT112(
                                                  uVar30,CONCAT111(uVar30,CONCAT110(uVar30,CONCAT19(
                                                  uVar30,CONCAT18(uVar30,CONCAT17(uVar30,CONCAT16(
                                                  uVar30,CONCAT15(uVar30,CONCAT14(uVar30,CONCAT13(
                                                  uVar30,CONCAT12(uVar30,CONCAT11(uVar30,uVar30)))))
                                                  )))))))))));
                  uStack_4f4 = uVar6;
LAB_143dc1365:
                  uVar8 = *(uint *)(param_1 + 0x28);
                  lVar13 = *(longlong *)(param_1 + 0x30);
                  if (uVar8 != 0) {
                    uVar12 = uStack_4e0;
                    do {
                      uVar12 = uVar12 & uVar8 - 1;
                      auVar31 = *(undefined1 (*) [16])(lVar13 + (ulonglong)uVar12 * 0x290);
                      lVar25 = lVar13 + (ulonglong)uVar12 * 0x290;
                      auVar33 = vpcmpeqb_avx(auVar37._0_16_,auVar31);
                      uVar18 = (ushort)(SUB161(auVar33 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar33 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar33 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar33 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar33 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar33 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar33 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar33 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar33 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar33 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar33 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar33 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar33 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar33 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar33 >> 0x77,0) & 1) << 0xe |
                               (ushort)(byte)(auVar33[0xf] >> 7) << 0xf;
                      if (uVar18 != 0) {
                        uVar23 = (uint)uVar18;
LAB_143dc13a4:
                        uVar20 = 0;
                        for (uVar4 = uVar23; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
                          uVar20 = uVar20 + 1;
                        }
                        if (*(uint *)(lVar25 + 0x10 + (ulonglong)uVar20 * 0x28) != uVar6)
                        goto code_r0x000143dc13b7;
                        uVar20 = uVar20 | uVar12 << 4;
                        while ((uVar23 = uVar8 << 4, uVar20 != uVar8 << 4 &&
                               (uVar23 = uVar20,
                               SBORROW1('\0',*(char *)((ulonglong)(uVar20 & 0xf) +
                                                      (ulonglong)(uVar20 >> 4) * 0x290 + lVar13)))))
                        {
                          uVar20 = uVar20 + 1;
                        }
                        uVar11 = (ulonglong)(uVar23 & 0xf);
                        uVar9 = (ulonglong)(uVar23 >> 4);
                        goto LAB_143dc16bd;
                      }
LAB_143dc13be:
                      auVar31 = vpsignb_avx(auVar31,auVar31);
                      uVar18 = (ushort)(SUB161(auVar31 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar31 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar31 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar31 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar31 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar31 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar31 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar31 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar31 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar31 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar31 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar31 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar31 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar31 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar31 >> 0x77,0) & 1) << 0xe |
                               (ushort)(byte)(auVar31[0xf] >> 7) << 0xf;
                      if (uVar18 != 0) goto LAB_143dc13d0;
                      uVar12 = uVar12 + 1;
                    } while( true );
                  }
                  uVar8 = 0;
                  uVar23 = 0;
                  goto LAB_143dc13f5;
                }
                FUN_1457d1ec0(0x146cb4b88,1,0x860,0xbd80f29e);
              }
            }
            goto LAB_143dc0d07;
          }
          cVar5 = FUN_143dc1b80(&uStack_3c8,&uStack_503);
          auVar35 = auVar36._0_16_;
          auVar33 = auVar34._0_16_;
          auVar31 = auVar32._0_16_;
          if (cVar5 != '\0') goto LAB_143dc0bda;
          uVar38 = 8;
          uVar7 = 0xab9ab12;
          FUN_1402675a0(0x146cb4b88,4);
          uVar19 = 0x839;
          uVar22 = 0x1362dafe;
LAB_143dc1aca:
          FUN_1457d1ec0(0x146cb4b88,1,uVar19,uVar22,uVar7,uVar38);
          iVar28 = 0xe;
          uVar11 = 0;
          goto LAB_143dc1ad7;
        }
LAB_143dc19b0:
        if (*(char *)(param_1 + 0x10) == '\0') {
          if ((ulonglong)*(ushort *)(param_1 + 0x20) != 0) {
            FUN_143dc1c00(*(longlong *)(param_1 + 0x18),
                          (ulonglong)*(ushort *)(param_1 + 0x20) * 0x2c +
                          *(longlong *)(param_1 + 0x18));
          }
          *(undefined1 *)(param_1 + 0x10) = 1;
        }
        FUN_145db1c30(param_1 + 0x38,*(undefined4 *)(param_1 + 0x78));
        uVar11 = CONCAT71((int7)((ulonglong)plVar17 >> 8),1);
        iVar28 = 0;
        *(char *)(param_1 + 0x80) = cStack_502;
        *(undefined1 *)(param_1 + 0x81) = uStack_501;
LAB_143dc1ad7:
        if (plStack_480 != (longlong *)0x0) {
          LOCK();
          plVar17 = plStack_480 + 1;
          *(int *)plVar17 = (int)*plVar17 + -1;
          UNLOCK();
          if ((int)*plVar17 == 0) {
            (**(code **)(*plStack_480 + 8))(plStack_480);
            LOCK();
            piVar1 = (int *)((longlong)plStack_480 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plStack_480 + 0x10))(plStack_480);
            }
          }
        }
      }
      if (plStack_3e0 != (longlong *)0x0) {
        LOCK();
        plVar17 = plStack_3e0 + 1;
        *(int *)plVar17 = (int)*plVar17 + -1;
        UNLOCK();
        if ((int)*plVar17 == 0) {
          (**(code **)(*plStack_3e0 + 8))(plStack_3e0);
          LOCK();
          piVar1 = (int *)((longlong)plStack_3e0 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plStack_3e0 + 0x10))(plStack_3e0);
          }
        }
      }
    }
    if (plStack_440 != (longlong *)0x0) {
      LOCK();
      plVar17 = plStack_440 + 1;
      *(int *)plVar17 = (int)*plVar17 + -1;
      UNLOCK();
      if ((int)*plVar17 == 0) {
        (**(code **)(*plStack_440 + 8))(plStack_440);
        LOCK();
        piVar1 = (int *)((longlong)plStack_440 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plStack_440 + 0x10))(plStack_440);
        }
      }
    }
    if (iVar28 != 0) {
      uVar9 = CONCAT71((int7)((ulonglong)puVar15 >> 8),1);
      if (iVar28 != 0xe) goto LAB_143dc086c;
      goto LAB_143dc091b;
    }
  }
  uVar6 = 0;
  uVar9 = uVar11 & 0xffffffff;
  FUN_1457d2040(&uStack_328,0,0,0,0,0);
  FUN_1457d1fb0(auStack_1e8,&uStack_328);
  if (*(char *)(param_1 + 0x80) == '\x01') {
    uVar6 = FUN_145aaa710(auStack_1e8);
    uVar6 = uVar6 ^ 1;
  }
  func_0x000145f057e0(uVar6);
LAB_143dc086c:
  if (plStack_420 != (longlong *)0x0) {
    LOCK();
    plVar17 = plStack_420 + 1;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)*plVar17 == 0) {
      (**(code **)(*plStack_420 + 8))(plStack_420);
      LOCK();
      piVar1 = (int *)((longlong)plStack_420 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plStack_420 + 0x10))(plStack_420);
      }
    }
  }
  return uVar9 & 0xffffffff;
code_r0x000143dc13b7:
  uVar23 = uVar23 - 1 & uVar23;
  if (uVar23 == 0) goto LAB_143dc13be;
  goto LAB_143dc13a4;
LAB_143dc13d0:
  uVar23 = *(uint *)(param_1 + 0x2c);
  if (uVar23 == (uVar8 * 0x570) / 100) {
LAB_143dc13f5:
    uVar6 = uVar23 * 2;
    if (uVar23 * 2 < 0x11) {
      uVar6 = 0x10;
    }
    uVar11 = ((ulonglong)uVar6 * 100 + 0x56) / 0x57 - 1;
    uVar11 = uVar11 >> 1 | uVar11;
    uVar11 = uVar11 >> 2 | uVar11;
    uVar11 = uVar11 >> 4 | uVar11;
    uVar11 = uVar11 >> 8 | uVar11;
    uVar11 = (uVar11 >> 0x10 | uVar11) + 1 >> 4;
    lVar27 = uVar11 * 0x290;
    lStack_4b0 = lVar13;
    lVar13 = func_0x000144d9c140(0x10,lVar27);
    lVar25 = 0;
    *(longlong *)(param_1 + 0x30) = lVar13;
    *(int *)(param_1 + 0x28) = (int)uVar11;
    do {
      *(undefined1 (*) [16])(lVar13 + lVar25) = auVar34._0_16_;
      lVar25 = lVar25 + 0x290;
    } while (lVar27 - lVar25 != 0);
    param_1 = lStack_500;
    if ((ulonglong)uVar8 != 0) {
      lStack_4a8 = (ulonglong)uVar8 * 0x290 + lStack_4b0;
      lVar13 = lStack_4b0;
      do {
        lStack_4a0 = lVar13 + 0x10;
        lVar25 = 0;
        lStack_498 = lVar13;
        do {
          if (!SBORROW1('\0',*(char *)(lVar13 + lVar25))) {
            puVar26 = (uint *)(lStack_4a0 + lVar25 * 0x28);
            uStack_4dc = *puVar26 & 0xffffff7f;
            uVar6 = *(int *)(param_1 + 0x28) - 1U & *puVar26 >> 7;
            lStack_490 = lVar25;
            do {
              auVar31 = *(undefined1 (*) [16])
                         (*(longlong *)(param_1 + 0x30) + (ulonglong)uVar6 * 0x290);
              auVar31 = vpsignb_avx(auVar31,auVar31);
              uVar18 = (ushort)(SUB161(auVar31 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar31 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar31 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar31 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar31 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar31 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar31 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar31 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar31 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar31 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar31 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar31 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar31 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar31 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar31 >> 0x77,0) & 1) << 0xe |
                       (ushort)(byte)(auVar31[0xf] >> 7) << 0xf;
              plVar17 = (longlong *)(ulonglong)uVar18;
              if (uVar18 != 0) {
                lVar27 = *(longlong *)(param_1 + 0x30) + (ulonglong)uVar6 * 0x290;
                uVar8 = 0;
                for (uVar23 = (uint)uVar18; (uVar23 & 1) == 0; uVar23 = uVar23 >> 1 | 0x80000000) {
                  uVar8 = uVar8 + 1;
                }
                uVar11 = (ulonglong)uVar8;
                *(char *)(lVar27 + uVar11) = (char)uStack_4dc;
                *(uint *)(lVar27 + 0x10 + uVar11 * 0x28) = *puVar26;
                *(undefined8 *)(lVar27 + 0x18 + uVar11 * 0x28) = *(undefined8 *)(puVar26 + 2);
                *(uint *)(lVar27 + 0x20 + uVar11 * 0x28) = puVar26[4];
                puVar26[2] = 0;
                puVar26[3] = 0;
                puVar26[4] = 0;
                *(undefined8 *)(lVar27 + 0x28 + uVar11 * 0x28) = *(undefined8 *)(puVar26 + 6);
                *(uint *)(lVar27 + 0x30 + uVar11 * 0x28) = puVar26[8];
                puVar26[6] = 0;
                puVar26[7] = 0;
                puVar26[8] = 0;
                *(undefined1 *)(lVar13 + lVar25) = 0x80;
                uVar3 = *(ushort *)((longlong)puVar26 + 0x12);
                if (uVar3 == 0) break;
                plVar2 = *(longlong **)(puVar26 + 2);
                plVar17 = plVar2;
                uStack_4d8 = (uint)uVar18;
                do {
                  uVar18 = *(ushort *)((longlong)plVar17 + 10);
                  if (uVar18 != 0) {
                    lVar13 = *plVar17;
                    lVar25 = 0;
                    do {
                      if ((*(short *)(lVar13 + 0x12 + lVar25) != 0) &&
                         (*(longlong *)(lVar13 + 8 + lVar25) != 0)) {
                        func_0x000144d9c130();
                      }
                      lVar25 = lVar25 + 0x18;
                    } while ((ulonglong)uVar18 * 0x18 != lVar25);
                    if (lVar13 != 0) {
                      func_0x000144d9c130(lVar13);
                    }
                  }
                  lVar25 = lStack_490;
                  lVar13 = lStack_498;
                  param_1 = lStack_500;
                  plVar17 = plVar17 + 2;
                } while (plVar17 != plVar2 + (ulonglong)uVar3 * 2);
                plVar17 = (longlong *)(ulonglong)uStack_4d8;
                if (plVar2 != (longlong *)0x0) {
                  func_0x000144d9c130(plVar2);
                }
              }
              uVar6 = uVar6 + 1 & *(int *)(param_1 + 0x28) - 1U;
            } while ((short)plVar17 == 0);
          }
          lVar25 = lVar25 + 1;
        } while (lVar25 != 0x10);
        lVar13 = lVar13 + 0x290;
      } while (lVar13 != lStack_4a8);
    }
    uVar6 = uStack_4f4;
    if (lStack_4b0 != 0) {
      func_0x000144d9c130();
    }
    goto LAB_143dc1365;
  }
  uVar8 = 0;
  for (uVar23 = (uint)uVar18; (uVar23 & 1) == 0; uVar23 = uVar23 >> 1 | 0x80000000) {
    uVar8 = uVar8 + 1;
  }
  *(char *)(lVar25 + (ulonglong)uVar8) = (char)uStack_4e4;
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
  lVar13 = *(longlong *)(param_1 + 0x30);
  uVar8 = uVar12 << 4 | uVar8;
  uVar12 = *(int *)(param_1 + 0x28) << 4;
  uVar23 = uVar8;
  while ((uVar8 != uVar12 &&
         (uVar23 = uVar8,
         SBORROW1('\0',*(char *)((ulonglong)(uVar8 & 0xf) + (ulonglong)(uVar8 >> 4) * 0x290 + lVar13
                                ))))) {
    uVar8 = uVar8 + 1;
    uVar23 = uVar12;
  }
  uVar11 = (ulonglong)(uVar23 & 0xf);
  uVar9 = (ulonglong)(uVar23 >> 4);
  lVar25 = uVar9 * 0x290 + lVar13;
  *(uint *)(lVar25 + 0x10 + uVar11 * 0x28) = uVar6;
  *(undefined8 *)(lVar25 + 0x18 + uVar11 * 0x28) = 0;
  *(undefined4 *)(lVar25 + 0x20 + uVar11 * 0x28) = 0;
  *(undefined8 *)(lVar25 + 0x28 + uVar11 * 0x28) = 0;
  *(undefined4 *)(lVar25 + 0x30 + uVar11 * 0x28) = 0;
LAB_143dc16bd:
  plVar2 = (longlong *)(uVar9 * 0x290 + lVar13 + 0x18 + uVar11 * 0x28);
  if (((short)plVar2[1] != sStack_4e6) && (uVar18 = *(ushort *)((longlong)plVar2 + 10), uVar18 != 0)
     ) {
    plVar29 = (longlong *)*plVar2;
    plVar16 = plVar29;
    do {
      uVar3 = *(ushort *)((longlong)plVar16 + 10);
      if (uVar3 != 0) {
        plVar17 = (longlong *)*plVar16;
        lVar13 = 0;
        do {
          if ((*(short *)((longlong)plVar17 + lVar13 + 0x12) != 0) &&
             (*(longlong *)((longlong)plVar17 + lVar13 + 8) != 0)) {
            func_0x000144d9c130();
          }
          lVar13 = lVar13 + 0x18;
        } while ((ulonglong)uVar3 * 0x18 != lVar13);
        if (plVar17 != (longlong *)0x0) {
          func_0x000144d9c130(plVar17);
        }
      }
      plVar16 = plVar16 + 2;
    } while (plVar16 != plVar29 + (ulonglong)uVar18 * 2);
    if (plVar29 != (longlong *)0x0) {
      func_0x000144d9c130(plVar29);
    }
  }
  FUN_142097ed0(plVar2,&plStack_4d0);
  if (((short)plVar2[3] != (short)uStack_4b8) &&
     (uVar18 = *(ushort *)((longlong)plVar2 + 0x1a), uVar18 != 0)) {
    plVar29 = (longlong *)plVar2[2];
    plVar17 = plVar29;
    do {
      uVar3 = *(ushort *)((longlong)plVar17 + 10);
      if (uVar3 != 0) {
        lVar13 = *plVar17;
        lVar25 = 0;
        do {
          if ((*(short *)(lVar13 + 0x12 + lVar25) != 0) && (*(longlong *)(lVar13 + 8 + lVar25) != 0)
             ) {
            func_0x000144d9c130();
          }
          lVar25 = lVar25 + 0x18;
        } while ((ulonglong)uVar3 * 0x18 != lVar25);
        if (lVar13 != 0) {
          func_0x000144d9c130(lVar13);
        }
      }
      plVar17 = plVar17 + 2;
    } while (plVar17 != plVar29 + (ulonglong)uVar18 * 2);
    if (plVar29 != (longlong *)0x0) {
      func_0x000144d9c130(plVar29);
    }
  }
  FUN_142097ed0(plVar2 + 2,&plStack_4c0);
  param_1 = lStack_500;
LAB_143dc0d07:
  func_0x000140467f00(auStack_348);
  FUN_140467df0(auStack_488,&UNK_14677a6c7);
  uStack_468 = 0;
  uStack_460 = 0;
  uStack_458 = 0;
  uStack_450 = 0;
  auVar32 = ZEXT1664(auVar32._0_16_);
  auVar34 = ZEXT1664(auVar34._0_16_);
  auVar36 = ZEXT1664(auVar36._0_16_);
  cVar5 = FUN_140468000(auStack_348);
  while (cVar5 != '\0') {
    cVar5 = FUN_145292d40(auStack_348,&uStack_468,0x20,0);
    if ((cVar5 == '\0') || (uStack_308 == 6)) {
      FUN_1402675a0(0x146cb4b88,1);
    }
    else {
      uVar7 = func_0x000144fc2180(0,&uStack_468);
      lVar13 = (longlong)(int)uStack_308;
      uStack_308 = uStack_308 + 1;
      *(undefined4 *)(auStack_320 + lVar13 * 4) = uVar7;
    }
    cVar5 = FUN_140467f40(auStack_348);
  }
  uVar18 = *(ushort *)(param_1 + 0x20);
  puVar26 = *(uint **)(param_1 + 0x18);
  uVar11 = (ulonglong)uVar18;
  if (*(char *)(param_1 + 0x10) == '\0') {
    if (uVar18 != 0) {
      lVar13 = 0;
      do {
        if (*(uint *)((longlong)puVar26 + lVar13) == uVar6) goto LAB_143dc0e58;
        lVar13 = lVar13 + 0x2c;
      } while (uVar11 * 0x2c - lVar13 != 0);
    }
  }
  else {
    puVar10 = puVar26;
    uVar9 = uVar11;
    if (uVar18 != 0) {
      do {
        uVar14 = uVar9 >> 1;
        if (puVar10[uVar14 * 0xb] < uVar6) {
          puVar10 = puVar10 + uVar14 * 0xb + 0xb;
          uVar14 = ~uVar14 + uVar9;
        }
        uVar9 = uVar14;
      } while (0 < (longlong)uVar14);
      if ((puVar10 != puVar26 + uVar11 * 0xb) && (*puVar10 == uVar6)) {
LAB_143dc0e58:
        if (*(char *)(param_1 + 0x10) == '\0') {
          if (uVar18 != 0) {
            uVar9 = 0;
            puVar10 = puVar26;
            do {
              if (*puVar10 == uVar6) goto LAB_143dc0ec8;
              uVar9 = uVar9 + 1;
              puVar10 = puVar10 + 0xb;
            } while (uVar11 != uVar9);
          }
        }
        else {
          uVar9 = uVar11;
          puVar10 = puVar26;
          if (uVar18 != 0) {
            do {
              uVar14 = uVar9 >> 1;
              if (puVar10[uVar14 * 0xb] < uVar6) {
                puVar10 = puVar10 + uVar14 * 0xb + 0xb;
                uVar14 = ~uVar14 + uVar9;
              }
              uVar9 = uVar14;
            } while (0 < (longlong)uVar14);
            if ((puVar10 != puVar26 + uVar11 * 0xb) && (*puVar10 == uVar6)) {
              uVar9 = (ulonglong)((longlong)puVar10 - (longlong)puVar26) / 0x2c;
LAB_143dc0ec8:
              if (-1 < (int)(uint)uVar9) {
                puVar26 = puVar26 + (ulonglong)((uint)uVar9 & 0x7fffffff) * 0xb + 1;
                *(ulonglong *)puVar26 = CONCAT44(uStack_324,uStack_328);
                if (puVar26 != &uStack_328) {
                  puVar26[8] = uStack_308;
                  if ((longlong)(int)uStack_308 != 0) {
                    lVar13 = 0;
                    do {
                      *(undefined4 *)((longlong)puVar26 + lVar13 + 8) =
                           *(undefined4 *)(auStack_320 + lVar13);
                      lVar13 = lVar13 + 4;
                    } while ((longlong)(int)uStack_308 * 4 != lVar13);
                  }
                }
                *(undefined1 *)(puVar26 + 9) = uStack_304;
              }
            }
          }
        }
        goto LAB_143dc10df;
      }
    }
  }
  *(undefined1 *)(param_1 + 0x10) = 0;
  if (uVar18 == *(ushort *)(param_1 + 0x22)) {
    uStack_4f4 = uVar6;
    puVar10 = (uint *)func_0x000144d9c140(4,(uVar11 + 0x10) * 0x2c);
    if (uVar18 != 0) {
      lVar13 = 0;
      puVar21 = puVar26;
      puVar24 = puVar10;
      do {
        if (puVar24 != (uint *)0x0) {
          *puVar24 = *puVar21;
          *(undefined8 *)(puVar24 + 1) = *(undefined8 *)(puVar21 + 1);
          *(undefined1 (*) [16])(puVar10 + lVar13 * 0xb + 3) = auVar32._0_16_;
          (puVar10 + lVar13 * 0xb + 7)[0] = 0;
          (puVar10 + lVar13 * 0xb + 7)[1] = 0;
          uVar6 = puVar21[9];
          puVar24[9] = uVar6;
          if ((longlong)(int)uVar6 != 0) {
            lVar25 = 0;
            do {
              uVar8 = *(uint *)((longlong)puVar21 + lVar25 + 0xc);
              plVar17 = (longlong *)(ulonglong)uVar8;
              *(uint *)((longlong)puVar24 + lVar25 + 0xc) = uVar8;
              lVar25 = lVar25 + 4;
            } while ((longlong)(int)uVar6 * 4 != lVar25);
          }
          *(char *)(puVar24 + 10) = (char)puVar21[10];
        }
        puVar21 = puVar21 + 0xb;
        puVar24 = puVar24 + 0xb;
        lVar13 = lVar13 + 1;
      } while (puVar21 != puVar26 + uVar11 * 0xb);
    }
    lVar13 = 0;
    do {
      if ((longlong)puVar10 + lVar13 + uVar11 * 0x2c != 0) {
        *(undefined8 *)((longlong)puVar10 + lVar13 + uVar11 * 0x2c) = 0x3f80000000000000;
        *(undefined4 *)((longlong)puVar10 + lVar13 + uVar11 * 0x2c + 8) = 0;
        *(undefined1 (*) [16])((longlong)puVar10 + lVar13 + uVar11 * 0x2c + 0xc) = auVar32._0_16_;
        *(undefined8 *)((longlong)puVar10 + lVar13 + uVar11 * 0x2c + 0x1c) = 0;
        *(undefined4 *)((longlong)puVar10 + lVar13 + uVar11 * 0x2c + 0x24) = 0;
        *(undefined1 *)((longlong)puVar10 + lVar13 + uVar11 * 0x2c + 0x28) = 0;
      }
      lVar13 = lVar13 + 0x2c;
    } while (lVar13 != 0x2c0);
    if (puVar26 != (uint *)0x0) {
      func_0x000144d9c130(puVar26);
    }
    *(short *)(lStack_500 + 0x22) = (short)(uVar11 + 0x10);
    *(uint **)(lStack_500 + 0x18) = puVar10;
    uVar18 = *(ushort *)(lStack_500 + 0x20);
    puVar26 = puVar10;
    uVar6 = uStack_4f4;
  }
  *(ushort *)(lStack_500 + 0x20) = uVar18 + 1;
  uVar11 = (ulonglong)uVar18;
  puVar10 = puVar26 + uVar11 * 0xb + 1;
  puVar10[-1] = uVar6;
  *(ulonglong *)puVar10 = CONCAT44(uStack_324,uStack_328);
  if (puVar10 != &uStack_328) {
    puVar26[uVar11 * 0xb + 9] = uStack_308;
    if ((longlong)(int)uStack_308 != 0) {
      lVar13 = 0;
      do {
        *(undefined4 *)((longlong)puVar26 + lVar13 + uVar11 * 0x2c + 0xc) =
             *(undefined4 *)(auStack_320 + lVar13);
        lVar13 = lVar13 + 4;
      } while ((longlong)(int)uStack_308 * 4 != lVar13);
    }
  }
  *(undefined1 *)(puVar26 + uVar11 * 0xb + 10) = uStack_304;
  param_1 = lStack_500;
LAB_143dc10df:
  func_0x000140467f00(auStack_408);
  if ((uVar6 == 0x48275716) &&
     (cVar5 = FUN_140467df0(auStack_488,&UNK_146781378,auStack_408), cVar5 != '\0')) {
    func_0x0001441f0b80(auStack_408);
  }
  uVar6 = FUN_140467f40(auStack_488,auStack_488);
  plVar2 = plStack_400;
  puVar15 = (undefined1 *)(ulonglong)uVar6;
  if (plStack_400 != (longlong *)0x0) {
    LOCK();
    plVar29 = plStack_400 + 1;
    *(int *)plVar29 = (int)*plVar29 + -1;
    UNLOCK();
    if ((int)*plVar29 == 0) {
      (**(code **)(*plStack_400 + 8))(plStack_400);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  plVar2 = plStack_340;
  if (plStack_340 != (longlong *)0x0) {
    LOCK();
    plVar29 = plStack_340 + 1;
    *(int *)plVar29 = (int)*plVar29 + -1;
    UNLOCK();
    if ((int)*plVar29 == 0) {
      (**(code **)(*plStack_340 + 8))(plStack_340);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  plVar2 = plStack_4c0;
  if (uStack_4b8._2_2_ != 0) {
    plVar16 = plStack_4c0 + (ulonglong)uStack_4b8._2_2_ * 2;
    plVar29 = plStack_4c0;
    do {
      uVar18 = *(ushort *)((longlong)plVar29 + 10);
      if (uVar18 != 0) {
        lVar13 = *plVar29;
        lVar25 = 0;
        do {
          if ((*(short *)(lVar13 + 0x12 + lVar25) != 0) && (*(longlong *)(lVar13 + 8 + lVar25) != 0)
             ) {
            func_0x000144d9c130();
          }
          lVar25 = lVar25 + 0x18;
        } while ((ulonglong)uVar18 * 0x18 != lVar25);
        if (lVar13 != 0) {
          func_0x000144d9c130(lVar13);
        }
      }
      param_1 = lStack_500;
      plVar29 = plVar29 + 2;
    } while (plVar29 != plVar16);
    if (plVar2 != (longlong *)0x0) {
      func_0x000144d9c130(plVar2);
    }
  }
  plVar2 = plStack_4d0;
  if (uStack_4c8._2_2_ != 0) {
    plVar16 = plStack_4d0 + (ulonglong)uStack_4c8._2_2_ * 2;
    plVar29 = plStack_4d0;
    do {
      uVar18 = *(ushort *)((longlong)plVar29 + 10);
      if (uVar18 != 0) {
        lVar13 = *plVar29;
        lVar25 = 0;
        do {
          if ((*(short *)(lVar13 + 0x12 + lVar25) != 0) && (*(longlong *)(lVar13 + 8 + lVar25) != 0)
             ) {
            func_0x000144d9c130();
          }
          lVar25 = lVar25 + 0x18;
        } while ((ulonglong)uVar18 * 0x18 != lVar25);
        if (lVar13 != 0) {
          func_0x000144d9c130(lVar13);
        }
      }
      param_1 = lStack_500;
      plVar29 = plVar29 + 2;
    } while (plVar29 != plVar16);
    if (plVar2 != (longlong *)0x0) {
      func_0x000144d9c130(plVar2);
    }
  }
  plVar2 = plStack_360;
  if (plStack_360 != (longlong *)0x0) {
    LOCK();
    plVar29 = plStack_360 + 1;
    *(int *)plVar29 = (int)*plVar29 + -1;
    UNLOCK();
    if ((int)*plVar29 == 0) {
      (**(code **)(*plStack_360 + 8))(plStack_360);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if ((char)uVar6 == '\0') goto LAB_143dc19b0;
  goto LAB_143dc0b66;
}

