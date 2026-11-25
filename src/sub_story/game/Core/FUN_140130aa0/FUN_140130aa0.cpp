// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140130aa0  size: 6298 bytes
// Name:    FUN_140130aa0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140130aa0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140130aa0(ulonglong *param_1,ulonglong *param_2,ulonglong param_3,
                  undefined1 (*param_4) [16])

{
  ulonglong *puVar1;
  longlong *plVar2;
  ulonglong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  byte bVar6;
  byte bVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  ulonglong *puVar10;
  ulonglong uVar11;
  ulonglong *puVar12;
  ulonglong *puVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  bool bVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
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
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [64];
  ulonglong *puStack_b0;
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [16];
  ulonglong *puStack_80;
  ulonglong *puStack_78;
  ulonglong *puStack_70;
  ulonglong *puStack_68;
  ulonglong uStack_60;
  
  uVar9 = (longlong)param_2 - (longlong)param_1;
  puStack_b0 = param_1;
  if (0x100 < (longlong)uVar9) {
    auVar77 = ZEXT1264(ZEXT812(0));
LAB_140130ae5:
    puStack_80 = param_2;
    if ((longlong)param_3 < 1) {
      uStack_60 = uVar9 >> 3;
      auVar77 = ZEXT1264(ZEXT812(0));
      puStack_68 = (ulonglong *)(uStack_60 - 1);
      uVar16 = (ulonglong)puStack_68 >> 1;
      puVar8 = (ulonglong *)(uVar9 >> 4);
      puStack_78 = (ulonglong *)uVar9;
      do {
        uVar11 = param_1[(longlong)puVar8 - 1];
        uVar9 = (longlong)puVar8 - 1;
        puVar10 = (ulonglong *)uVar9;
        puStack_70 = (ulonglong *)uVar9;
        if ((longlong)puVar8 <= (longlong)uVar16) {
          do {
            uVar15 = param_1[uVar9 * 2 + 2];
            uVar17 = param_1[uVar9 * 2 + 1];
            plVar2 = *(longlong **)(uVar15 + 0x18);
            if (plVar2 == (longlong *)0x0) {
              bVar6 = 0;
            }
            else {
              bVar6 = (**(code **)(*plVar2 + 0x68))(plVar2,param_4,auStack_98);
            }
            plVar2 = *(longlong **)(uVar17 + 0x18);
            puVar10 = (ulonglong *)(uVar9 * 2 + 2);
            if (plVar2 == (longlong *)0x0) {
              bVar7 = 0;
LAB_140132081:
              if ((bVar6 != 0) || ((uVar15 < uVar17 && (bVar7 != 1)))) {
LAB_14013209b:
                puVar10 = (ulonglong *)(uVar9 * 2 + 1);
              }
            }
            else {
              bVar7 = (**(code **)(*plVar2 + 0x68))(plVar2,param_4,auStack_a8);
              if ((bVar7 & bVar6) != 1) goto LAB_140132081;
              auVar4 = vsubps_avx(*param_4,auStack_a8);
              auVar5 = vsubps_avx(*param_4,auStack_98);
              auVar74._0_4_ = auVar4._0_4_ * auVar4._0_4_;
              auVar74._4_4_ = auVar4._4_4_ * auVar4._4_4_;
              auVar74._8_4_ = auVar4._8_4_ * auVar4._8_4_;
              auVar74._12_4_ = auVar4._12_4_ * auVar4._12_4_;
              auVar45._0_4_ = auVar5._0_4_ * auVar5._0_4_;
              auVar45._4_4_ = auVar5._4_4_ * auVar5._4_4_;
              auVar45._8_4_ = auVar5._8_4_ * auVar5._8_4_;
              auVar45._12_4_ = auVar5._12_4_ * auVar5._12_4_;
              auVar4 = vblendps_avx(auVar74,auVar77._0_16_,8);
              auVar5 = vblendps_avx(auVar45,auVar77._0_16_,8);
              auVar4 = vhaddps_avx(auVar4,auVar4);
              auVar5 = vhaddps_avx(auVar5,auVar5);
              auVar4 = vhaddps_avx(auVar4,auVar4);
              auVar5 = vhaddps_avx(auVar5,auVar5);
              auVar4 = vcmpps_avx(auVar5,auVar4,5);
              if ((((SUB161(auVar4 >> 0x1f,0) & 1) == 0 && (SUB161(auVar4 >> 0x3f,0) & 1) == 0) &&
                  (SUB161(auVar4 >> 0x5f,0) & 1) == 0) && -1 < auVar4[0xf]) goto LAB_14013209b;
            }
            param_1[uVar9] = param_1[(longlong)puVar10];
            uVar9 = (ulonglong)puVar10;
          } while ((longlong)puVar10 < (longlong)uVar16);
        }
        if ((((ulonglong)puStack_78 & 8) == 0) && (puVar10 == (ulonglong *)uVar16)) {
          param_1[uVar16] = param_1[uStack_60 - 1];
          puVar10 = puStack_68;
        }
        while ((longlong)puVar8 <= (longlong)puVar10) {
          uVar15 = (longlong)((longlong)puVar10 - 1U) >> 1;
          uVar9 = param_1[uVar15];
          plVar2 = *(longlong **)(uVar9 + 0x18);
          if (plVar2 == (longlong *)0x0) {
            bVar6 = 0;
          }
          else {
            bVar6 = (**(code **)(*plVar2 + 0x68))(plVar2,param_4,auStack_98);
          }
          plVar2 = *(longlong **)(uVar11 + 0x18);
          if (plVar2 == (longlong *)0x0) {
            bVar7 = 0;
LAB_140131fb7:
            if ((bVar6 == 0) && (uVar11 <= uVar9 || bVar7 != 0)) break;
          }
          else {
            bVar7 = (**(code **)(*plVar2 + 0x68))(plVar2,param_4,auStack_a8);
            if ((bVar7 & bVar6) != 1) goto LAB_140131fb7;
            auVar4 = vsubps_avx(*param_4,auStack_a8);
            auVar5 = vsubps_avx(*param_4,auStack_98);
            auVar73._0_4_ = auVar4._0_4_ * auVar4._0_4_;
            auVar73._4_4_ = auVar4._4_4_ * auVar4._4_4_;
            auVar73._8_4_ = auVar4._8_4_ * auVar4._8_4_;
            auVar73._12_4_ = auVar4._12_4_ * auVar4._12_4_;
            auVar44._0_4_ = auVar5._0_4_ * auVar5._0_4_;
            auVar44._4_4_ = auVar5._4_4_ * auVar5._4_4_;
            auVar44._8_4_ = auVar5._8_4_ * auVar5._8_4_;
            auVar44._12_4_ = auVar5._12_4_ * auVar5._12_4_;
            auVar4 = vblendps_avx(auVar73,auVar77._0_16_,8);
            auVar5 = vblendps_avx(auVar44,auVar77._0_16_,8);
            auVar4 = vhaddps_avx(auVar4,auVar4);
            auVar5 = vhaddps_avx(auVar5,auVar5);
            auVar4 = vhaddps_avx(auVar4,auVar4);
            auVar5 = vhaddps_avx(auVar5,auVar5);
            auVar4 = vcmpps_avx(auVar5,auVar4,5);
            if ((((SUB161(auVar4 >> 0x1f,0) & 1) != 0 || (SUB161(auVar4 >> 0x3f,0) & 1) != 0) ||
                (SUB161(auVar4 >> 0x5f,0) & 1) != 0) || auVar4[0xf] < '\0') break;
          }
          param_1[(longlong)puVar10] = param_1[uVar15];
          puVar10 = (ulonglong *)uVar15;
        }
        param_1[(longlong)puVar10] = uVar11;
        bVar18 = 1 < (longlong)puVar8;
        puVar8 = puStack_70;
      } while (bVar18);
      if ((longlong)puStack_80 - (longlong)param_1 < 9) {
        return;
      }
      auVar77 = ZEXT1264(ZEXT812(0));
      do {
        uVar9 = puStack_80[-1];
        puStack_80[-1] = *param_1;
        puStack_80 = puStack_80 + -1;
        uVar16 = (longlong)puStack_80 - (longlong)param_1;
        puStack_70 = (ulonglong *)((longlong)uVar16 >> 3);
        puStack_78 = (ulonglong *)((longlong)puStack_70 - 1);
        uVar11 = (longlong)puStack_78 >> 1;
        if ((longlong)uVar11 < 1) {
          puVar8 = (ulonglong *)0x0;
        }
        else {
          uVar15 = 0;
          do {
            uVar17 = param_1[uVar15 * 2 + 2];
            uVar3 = param_1[uVar15 * 2 + 1];
            plVar2 = *(longlong **)(uVar17 + 0x18);
            if (plVar2 == (longlong *)0x0) {
              bVar6 = 0;
            }
            else {
              bVar6 = (**(code **)(*plVar2 + 0x68))(plVar2,param_4,auStack_98);
            }
            plVar2 = *(longlong **)(uVar3 + 0x18);
            puVar8 = (ulonglong *)(uVar15 * 2 + 2);
            if (plVar2 == (longlong *)0x0) {
              bVar7 = 0;
LAB_1401321db:
              if ((bVar6 != 0) || ((uVar17 < uVar3 && (bVar7 != 1)))) {
LAB_1401321f5:
                puVar8 = (ulonglong *)(uVar15 * 2 + 1);
              }
            }
            else {
              bVar7 = (**(code **)(*plVar2 + 0x68))(plVar2,param_4,auStack_a8);
              if ((bVar7 & bVar6) != 1) goto LAB_1401321db;
              auVar4 = vsubps_avx(*param_4,auStack_a8);
              auVar5 = vsubps_avx(*param_4,auStack_98);
              auVar75._0_4_ = auVar4._0_4_ * auVar4._0_4_;
              auVar75._4_4_ = auVar4._4_4_ * auVar4._4_4_;
              auVar75._8_4_ = auVar4._8_4_ * auVar4._8_4_;
              auVar75._12_4_ = auVar4._12_4_ * auVar4._12_4_;
              auVar46._0_4_ = auVar5._0_4_ * auVar5._0_4_;
              auVar46._4_4_ = auVar5._4_4_ * auVar5._4_4_;
              auVar46._8_4_ = auVar5._8_4_ * auVar5._8_4_;
              auVar46._12_4_ = auVar5._12_4_ * auVar5._12_4_;
              auVar4 = vblendps_avx(auVar75,auVar77._0_16_,8);
              auVar5 = vblendps_avx(auVar46,auVar77._0_16_,8);
              auVar4 = vhaddps_avx(auVar4,auVar4);
              auVar5 = vhaddps_avx(auVar5,auVar5);
              auVar4 = vhaddps_avx(auVar4,auVar4);
              auVar5 = vhaddps_avx(auVar5,auVar5);
              auVar4 = vcmpps_avx(auVar5,auVar4,5);
              if ((((SUB161(auVar4 >> 0x1f,0) & 1) == 0 && (SUB161(auVar4 >> 0x3f,0) & 1) == 0) &&
                  (SUB161(auVar4 >> 0x5f,0) & 1) == 0) && -1 < auVar4[0xf]) goto LAB_1401321f5;
            }
            param_1[uVar15] = param_1[(longlong)puVar8];
            uVar15 = (ulonglong)puVar8;
          } while ((longlong)puVar8 < (longlong)uVar11);
        }
        if (((uVar16 & 8) == 0) && (puVar8 == (ulonglong *)uVar11)) {
          param_1[uVar11] = param_1[(longlong)puStack_70 + -1];
          puVar8 = puStack_78;
        }
        if (0 < (longlong)puVar8) {
          do {
            uVar11 = (longlong)puVar8 - 1;
            uVar17 = uVar11 >> 1;
            uVar15 = param_1[uVar17];
            plVar2 = *(longlong **)(uVar15 + 0x18);
            if (plVar2 == (longlong *)0x0) {
              bVar6 = 0;
            }
            else {
              bVar6 = (**(code **)(*plVar2 + 0x68))(plVar2,param_4,auStack_98);
            }
            plVar2 = *(longlong **)(uVar9 + 0x18);
            if (plVar2 == (longlong *)0x0) {
              bVar7 = 0;
LAB_1401322d5:
              if ((bVar6 == 0) && (uVar9 <= uVar15 || bVar7 != 0)) goto LAB_140132308;
            }
            else {
              bVar7 = (**(code **)(*plVar2 + 0x68))(plVar2,param_4,auStack_a8);
              if ((bVar7 & bVar6) != 1) goto LAB_1401322d5;
              auVar4 = vsubps_avx(*param_4,auStack_a8);
              auVar5 = vsubps_avx(*param_4,auStack_98);
              auVar76._0_4_ = auVar4._0_4_ * auVar4._0_4_;
              auVar76._4_4_ = auVar4._4_4_ * auVar4._4_4_;
              auVar76._8_4_ = auVar4._8_4_ * auVar4._8_4_;
              auVar76._12_4_ = auVar4._12_4_ * auVar4._12_4_;
              auVar47._0_4_ = auVar5._0_4_ * auVar5._0_4_;
              auVar47._4_4_ = auVar5._4_4_ * auVar5._4_4_;
              auVar47._8_4_ = auVar5._8_4_ * auVar5._8_4_;
              auVar47._12_4_ = auVar5._12_4_ * auVar5._12_4_;
              auVar4 = vblendps_avx(auVar76,auVar77._0_16_,8);
              auVar5 = vblendps_avx(auVar47,auVar77._0_16_,8);
              auVar4 = vhaddps_avx(auVar4,auVar4);
              auVar5 = vhaddps_avx(auVar5,auVar5);
              auVar4 = vhaddps_avx(auVar4,auVar4);
              auVar5 = vhaddps_avx(auVar5,auVar5);
              auVar4 = vcmpps_avx(auVar5,auVar4,5);
              if ((((SUB161(auVar4 >> 0x1f,0) & 1) != 0 || (SUB161(auVar4 >> 0x3f,0) & 1) != 0) ||
                  (SUB161(auVar4 >> 0x5f,0) & 1) != 0) || auVar4[0xf] < '\0') goto LAB_140132308;
            }
            param_1[(longlong)puVar8] = param_1[uVar17];
            puVar8 = (ulonglong *)uVar17;
          } while (1 < uVar11);
          puVar8 = (ulonglong *)0x0;
        }
LAB_140132308:
        param_1[(longlong)puVar8] = uVar9;
        if ((longlong)uVar16 < 9) {
          return;
        }
      } while( true );
    }
    puStack_70 = param_2 + -1;
    puVar8 = param_1 + (uVar9 >> 4);
    lVar14 = (longlong)puStack_70 - (longlong)param_1 >> 3;
    puVar10 = puVar8;
    puStack_68 = param_2;
    uStack_60 = param_3;
    if (lVar14 < 0x29) {
      uVar9 = *puVar8;
      uVar16 = *param_1;
      plVar2 = *(longlong **)(uVar9 + 0x18);
      if (plVar2 == (longlong *)0x0) {
        bVar6 = 0;
      }
      else {
        bVar6 = (**(code **)(*plVar2 + 0x68))(plVar2,param_4,auStack_98);
      }
      puVar12 = puStack_70;
      plVar2 = *(longlong **)(uVar16 + 0x18);
      if (plVar2 == (longlong *)0x0) {
        bVar7 = 0;
LAB_140130c65:
        if (bVar6 == 0) {
          bVar18 = uVar9 < uVar16 && bVar7 == 0;
          goto LAB_140130d83;
        }
LAB_140130d88:
        uVar9 = *puVar8;
        *puVar8 = *param_1;
        *param_1 = uVar9;
      }
      else {
        bVar7 = (**(code **)(*plVar2 + 0x68))(plVar2,param_4,auStack_a8);
        if ((bVar7 & bVar6) != 1) goto LAB_140130c65;
        auVar4 = vsubps_avx(*param_4,auStack_a8);
        auVar5 = vsubps_avx(*param_4,auStack_98);
        auVar49._0_4_ = auVar4._0_4_ * auVar4._0_4_;
        auVar49._4_4_ = auVar4._4_4_ * auVar4._4_4_;
        auVar49._8_4_ = auVar4._8_4_ * auVar4._8_4_;
        auVar49._12_4_ = auVar4._12_4_ * auVar4._12_4_;
        auVar20._0_4_ = auVar5._0_4_ * auVar5._0_4_;
        auVar20._4_4_ = auVar5._4_4_ * auVar5._4_4_;
        auVar20._8_4_ = auVar5._8_4_ * auVar5._8_4_;
        auVar20._12_4_ = auVar5._12_4_ * auVar5._12_4_;
        auVar4 = vblendps_avx(auVar49,auVar77._0_16_,8);
        auVar5 = vblendps_avx(auVar20,auVar77._0_16_,8);
        auVar4 = vhaddps_avx(auVar4,auVar4);
        auVar5 = vhaddps_avx(auVar5,auVar5);
        auVar4 = vhaddps_avx(auVar4,auVar4);
        auVar5 = vhaddps_avx(auVar5,auVar5);
        auVar4 = vcmpps_avx(auVar5,auVar4,5);
        bVar18 = (((SUB161(auVar4 >> 0x1f,0) & 1) == 0 && (SUB161(auVar4 >> 0x3f,0) & 1) == 0) &&
                 (SUB161(auVar4 >> 0x5f,0) & 1) == 0) && -1 < auVar4[0xf];
LAB_140130d83:
        if (bVar18) goto LAB_140130d88;
      }
      uVar9 = *puVar12;
      uVar16 = *puVar8;
      plVar2 = *(longlong **)(uVar9 + 0x18);
      if (plVar2 == (longlong *)0x0) {
        bVar6 = 0;
      }
      else {
        bVar6 = (**(code **)(*plVar2 + 0x68))(plVar2,param_4,auStack_98);
      }
      plVar2 = *(longlong **)(uVar16 + 0x18);
      puVar13 = param_2;
      if (plVar2 == (longlong *)0x0) {
        bVar7 = 0;
LAB_140130e20:
        if ((bVar6 == 0) && (uVar16 <= uVar9 || bVar7 != 0)) goto LAB_1401315eb;
      }
      else {
        bVar7 = (**(code **)(*plVar2 + 0x68))(plVar2,param_4,auStack_a8);
        if ((bVar7 & bVar6) != 1) goto LAB_140130e20;
        auVar4 = vsubps_avx(*param_4,auStack_a8);
        auVar5 = vsubps_avx(*param_4,auStack_98);
        auVar51._0_4_ = auVar4._0_4_ * auVar4._0_4_;
        auVar51._4_4_ = auVar4._4_4_ * auVar4._4_4_;
        auVar51._8_4_ = auVar4._8_4_ * auVar4._8_4_;
        auVar51._12_4_ = auVar4._12_4_ * auVar4._12_4_;
        auVar22._0_4_ = auVar5._0_4_ * auVar5._0_4_;
        auVar22._4_4_ = auVar5._4_4_ * auVar5._4_4_;
        auVar22._8_4_ = auVar5._8_4_ * auVar5._8_4_;
        auVar22._12_4_ = auVar5._12_4_ * auVar5._12_4_;
        auVar4 = vblendps_avx(auVar51,auVar77._0_16_,8);
        auVar5 = vblendps_avx(auVar22,auVar77._0_16_,8);
        auVar4 = vhaddps_avx(auVar4,auVar4);
        auVar5 = vhaddps_avx(auVar5,auVar5);
        auVar4 = vhaddps_avx(auVar4,auVar4);
        auVar5 = vhaddps_avx(auVar5,auVar5);
        auVar4 = vcmpps_avx(auVar5,auVar4,5);
        if ((((SUB161(auVar4 >> 0x1f,0) & 1) != 0 || (SUB161(auVar4 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar4 >> 0x5f,0) & 1) != 0) || auVar4[0xf] < '\0') goto LAB_1401315eb;
      }
      uVar9 = *puVar12;
      *puVar12 = *puVar8;
      *puVar8 = uVar9;
      plVar2 = *(longlong **)(uVar9 + 0x18);
      uVar16 = *param_1;
      if (plVar2 == (longlong *)0x0) {
        bVar6 = 0;
      }
      else {
        bVar6 = (**(code **)(*plVar2 + 0x68))(plVar2,param_4,auStack_98);
      }
      plVar2 = *(longlong **)(uVar16 + 0x18);
      if (plVar2 == (longlong *)0x0) {
        bVar7 = 0;
LAB_1401310ff:
        puStack_78 = param_1;
        if (bVar6 == 0) {
          bVar18 = uVar9 < uVar16 && bVar7 == 0;
          goto LAB_1401315ce;
        }
      }
      else {
        bVar7 = (**(code **)(*plVar2 + 0x68))(plVar2,param_4,auStack_a8);
        if ((bVar7 & bVar6) != 1) goto LAB_1401310ff;
        auVar4 = vsubps_avx(*param_4,auStack_a8);
        auVar5 = vsubps_avx(*param_4,auStack_98);
        auVar53._0_4_ = auVar4._0_4_ * auVar4._0_4_;
        auVar53._4_4_ = auVar4._4_4_ * auVar4._4_4_;
        auVar53._8_4_ = auVar4._8_4_ * auVar4._8_4_;
        auVar53._12_4_ = auVar4._12_4_ * auVar4._12_4_;
        auVar24._0_4_ = auVar5._0_4_ * auVar5._0_4_;
        auVar24._4_4_ = auVar5._4_4_ * auVar5._4_4_;
        auVar24._8_4_ = auVar5._8_4_ * auVar5._8_4_;
        auVar24._12_4_ = auVar5._12_4_ * auVar5._12_4_;
        auVar4 = vblendps_avx(auVar53,auVar77._0_16_,8);
        auVar5 = vblendps_avx(auVar24,auVar77._0_16_,8);
        auVar4 = vhaddps_avx(auVar4,auVar4);
        auVar5 = vhaddps_avx(auVar5,auVar5);
        auVar4 = vhaddps_avx(auVar4,auVar4);
        auVar5 = vhaddps_avx(auVar5,auVar5);
        auVar4 = vcmpps_avx(auVar5,auVar4,5);
        bVar18 = (((SUB161(auVar4 >> 0x1f,0) & 1) == 0 && (SUB161(auVar4 >> 0x3f,0) & 1) == 0) &&
                 (SUB161(auVar4 >> 0x5f,0) & 1) == 0) && -1 < auVar4[0xf];
LAB_1401315ce:
        puStack_78 = param_1;
        if (!bVar18) goto LAB_1401315eb;
      }
    }
    else {
      uVar15 = lVar14 + 1;
      uVar11 = uVar15 & 0xfffffffffffffff8;
      uVar9 = *(ulonglong *)((longlong)param_1 + uVar11);
      uVar16 = *param_1;
      plVar2 = *(longlong **)(uVar9 + 0x18);
      if (plVar2 == (longlong *)0x0) {
        bVar6 = 0;
      }
      else {
        bVar6 = (**(code **)(*plVar2 + 0x68))(plVar2,param_4,auStack_98);
      }
      puVar12 = (ulonglong *)(uVar11 + (longlong)param_1);
      plVar2 = *(longlong **)(uVar16 + 0x18);
      if (plVar2 == (longlong *)0x0) {
        bVar7 = 0;
LAB_140130c57:
        if (bVar6 == 0) {
          bVar18 = uVar9 < uVar16 && bVar7 == 0;
          goto LAB_140130c7e;
        }
LAB_140130c85:
        uVar9 = *puVar12;
        *puVar12 = *param_1;
        *param_1 = uVar9;
      }
      else {
        bVar7 = (**(code **)(*plVar2 + 0x68))(plVar2,param_4,auStack_a8);
        if ((bVar7 & bVar6) != 1) goto LAB_140130c57;
        auVar4 = vsubps_avx(*param_4,auStack_a8);
        auVar5 = vsubps_avx(*param_4,auStack_98);
        auVar48._0_4_ = auVar4._0_4_ * auVar4._0_4_;
        auVar48._4_4_ = auVar4._4_4_ * auVar4._4_4_;
        auVar48._8_4_ = auVar4._8_4_ * auVar4._8_4_;
        auVar48._12_4_ = auVar4._12_4_ * auVar4._12_4_;
        auVar19._0_4_ = auVar5._0_4_ * auVar5._0_4_;
        auVar19._4_4_ = auVar5._4_4_ * auVar5._4_4_;
        auVar19._8_4_ = auVar5._8_4_ * auVar5._8_4_;
        auVar19._12_4_ = auVar5._12_4_ * auVar5._12_4_;
        auVar4 = vblendps_avx(auVar48,auVar77._0_16_,8);
        auVar5 = vblendps_avx(auVar19,auVar77._0_16_,8);
        auVar4 = vhaddps_avx(auVar4,auVar4);
        auVar5 = vhaddps_avx(auVar5,auVar5);
        auVar4 = vhaddps_avx(auVar4,auVar4);
        auVar5 = vhaddps_avx(auVar5,auVar5);
        auVar4 = vcmpps_avx(auVar5,auVar4,5);
        bVar18 = (((SUB161(auVar4 >> 0x1f,0) & 1) == 0 && (SUB161(auVar4 >> 0x3f,0) & 1) == 0) &&
                 (SUB161(auVar4 >> 0x5f,0) & 1) == 0) && -1 < auVar4[0xf];
LAB_140130c7e:
        if (bVar18) goto LAB_140130c85;
      }
      uVar15 = uVar15 >> 3;
      uVar9 = *puVar12;
      uVar16 = param_1[uVar15 * 2];
      plVar2 = *(longlong **)(uVar16 + 0x18);
      if (plVar2 == (longlong *)0x0) {
        bVar6 = 0;
      }
      else {
        bVar6 = (**(code **)(*plVar2 + 0x68))(plVar2,param_4,auStack_98);
      }
      plVar2 = *(longlong **)(uVar9 + 0x18);
      if (plVar2 == (longlong *)0x0) {
        bVar7 = 0;
LAB_140130d2e:
        if ((bVar6 != 0) || (uVar16 < uVar9 && bVar7 == 0)) {
LAB_140130d41:
          uVar9 = param_1[uVar15 * 2];
          param_1[uVar15 * 2] = *puVar12;
          *puVar12 = uVar9;
          uVar16 = *param_1;
          plVar2 = *(longlong **)(uVar9 + 0x18);
          if (plVar2 == (longlong *)0x0) {
            bVar6 = 0;
          }
          else {
            bVar6 = (**(code **)(*plVar2 + 0x68))(plVar2,param_4,auStack_98);
          }
          plVar2 = *(longlong **)(uVar16 + 0x18);
          if (plVar2 == (longlong *)0x0) {
            bVar7 = 0;
LAB_140130f49:
            if ((bVar6 == 0) && (uVar16 <= uVar9 || bVar7 != 0)) goto LAB_140130f66;
          }
          else {
            bVar7 = (**(code **)(*plVar2 + 0x68))(plVar2,param_4,auStack_a8);
            if ((bVar7 & bVar6) != 1) goto LAB_140130f49;
            auVar4 = vsubps_avx(*param_4,auStack_a8);
            auVar5 = vsubps_avx(*param_4,auStack_98);
            auVar52._0_4_ = auVar4._0_4_ * auVar4._0_4_;
            auVar52._4_4_ = auVar4._4_4_ * auVar4._4_4_;
            auVar52._8_4_ = auVar4._8_4_ * auVar4._8_4_;
            auVar52._12_4_ = auVar4._12_4_ * auVar4._12_4_;
            auVar23._0_4_ = auVar5._0_4_ * auVar5._0_4_;
            auVar23._4_4_ = auVar5._4_4_ * auVar5._4_4_;
            auVar23._8_4_ = auVar5._8_4_ * auVar5._8_4_;
            auVar23._12_4_ = auVar5._12_4_ * auVar5._12_4_;
            auVar4 = vblendps_avx(auVar52,auVar77._0_16_,8);
            auVar5 = vblendps_avx(auVar23,auVar77._0_16_,8);
            auVar4 = vhaddps_avx(auVar4,auVar4);
            auVar5 = vhaddps_avx(auVar5,auVar5);
            auVar4 = vhaddps_avx(auVar4,auVar4);
            auVar5 = vhaddps_avx(auVar5,auVar5);
            auVar4 = vcmpps_avx(auVar5,auVar4,5);
            if ((((SUB161(auVar4 >> 0x1f,0) & 1) != 0 || (SUB161(auVar4 >> 0x3f,0) & 1) != 0) ||
                (SUB161(auVar4 >> 0x5f,0) & 1) != 0) || auVar4[0xf] < '\0') goto LAB_140130f66;
          }
          uVar9 = *puVar12;
          *puVar12 = *param_1;
          *param_1 = uVar9;
        }
      }
      else {
        bVar7 = (**(code **)(*plVar2 + 0x68))(plVar2,param_4,auStack_a8);
        if ((bVar7 & bVar6) != 1) goto LAB_140130d2e;
        auVar4 = vsubps_avx(*param_4,auStack_a8);
        auVar5 = vsubps_avx(*param_4,auStack_98);
        auVar50._0_4_ = auVar4._0_4_ * auVar4._0_4_;
        auVar50._4_4_ = auVar4._4_4_ * auVar4._4_4_;
        auVar50._8_4_ = auVar4._8_4_ * auVar4._8_4_;
        auVar50._12_4_ = auVar4._12_4_ * auVar4._12_4_;
        auVar21._0_4_ = auVar5._0_4_ * auVar5._0_4_;
        auVar21._4_4_ = auVar5._4_4_ * auVar5._4_4_;
        auVar21._8_4_ = auVar5._8_4_ * auVar5._8_4_;
        auVar21._12_4_ = auVar5._12_4_ * auVar5._12_4_;
        auVar4 = vblendps_avx(auVar50,auVar77._0_16_,8);
        auVar5 = vblendps_avx(auVar21,auVar77._0_16_,8);
        auVar4 = vhaddps_avx(auVar4,auVar4);
        auVar5 = vhaddps_avx(auVar5,auVar5);
        auVar4 = vhaddps_avx(auVar4,auVar4);
        auVar5 = vhaddps_avx(auVar5,auVar5);
        auVar4 = vcmpps_avx(auVar5,auVar4,5);
        if ((((SUB161(auVar4 >> 0x1f,0) & 1) == 0 && (SUB161(auVar4 >> 0x3f,0) & 1) == 0) &&
            (SUB161(auVar4 >> 0x5f,0) & 1) == 0) && -1 < auVar4[0xf]) goto LAB_140130d41;
      }
LAB_140130f66:
      uVar9 = *puVar8;
      uVar16 = puVar8[-uVar15];
      plVar2 = *(longlong **)(uVar9 + 0x18);
      puStack_78 = puVar12;
      if (plVar2 == (longlong *)0x0) {
        bVar6 = 0;
      }
      else {
        bVar6 = (**(code **)(*plVar2 + 0x68))(plVar2,param_4,auStack_98);
      }
      plVar2 = *(longlong **)(uVar16 + 0x18);
      if (plVar2 == (longlong *)0x0) {
        bVar7 = 0;
LAB_140131004:
        if (bVar6 == 0) {
          bVar18 = uVar9 < uVar16 && bVar7 == 0;
          goto LAB_140131016;
        }
LAB_14013101b:
        uVar9 = *puVar8;
        *puVar8 = puVar8[-uVar15];
        puVar8[-uVar15] = uVar9;
      }
      else {
        bVar7 = (**(code **)(*plVar2 + 0x68))(plVar2,param_4,auStack_a8);
        if ((bVar7 & bVar6) != 1) goto LAB_140131004;
        auVar4 = vsubps_avx(*param_4,auStack_a8);
        auVar5 = vsubps_avx(*param_4,auStack_98);
        auVar54._0_4_ = auVar4._0_4_ * auVar4._0_4_;
        auVar54._4_4_ = auVar4._4_4_ * auVar4._4_4_;
        auVar54._8_4_ = auVar4._8_4_ * auVar4._8_4_;
        auVar54._12_4_ = auVar4._12_4_ * auVar4._12_4_;
        auVar25._0_4_ = auVar5._0_4_ * auVar5._0_4_;
        auVar25._4_4_ = auVar5._4_4_ * auVar5._4_4_;
        auVar25._8_4_ = auVar5._8_4_ * auVar5._8_4_;
        auVar25._12_4_ = auVar5._12_4_ * auVar5._12_4_;
        auVar4 = vblendps_avx(auVar54,auVar77._0_16_,8);
        auVar5 = vblendps_avx(auVar25,auVar77._0_16_,8);
        auVar4 = vhaddps_avx(auVar4,auVar4);
        auVar5 = vhaddps_avx(auVar5,auVar5);
        auVar4 = vhaddps_avx(auVar4,auVar4);
        auVar5 = vhaddps_avx(auVar5,auVar5);
        auVar4 = vcmpps_avx(auVar5,auVar4,5);
        bVar18 = (((SUB161(auVar4 >> 0x1f,0) & 1) == 0 && (SUB161(auVar4 >> 0x3f,0) & 1) == 0) &&
                 (SUB161(auVar4 >> 0x5f,0) & 1) == 0) && -1 < auVar4[0xf];
LAB_140131016:
        if (bVar18) goto LAB_14013101b;
      }
      param_2 = puStack_80;
      uVar9 = puVar8[uVar15];
      uVar16 = *puVar8;
      plVar2 = *(longlong **)(uVar9 + 0x18);
      if (plVar2 == (longlong *)0x0) {
        bVar6 = 0;
      }
      else {
        bVar6 = (**(code **)(*plVar2 + 0x68))(plVar2,param_4,auStack_98);
      }
      plVar2 = *(longlong **)(uVar16 + 0x18);
      if (plVar2 == (longlong *)0x0) {
        bVar7 = 0;
LAB_1401310bb:
        if ((bVar6 != 0) || (uVar9 < uVar16 && bVar7 == 0)) {
LAB_1401310ce:
          uVar9 = puVar8[uVar15];
          puVar8[uVar15] = *puVar8;
          *puVar8 = uVar9;
          uVar16 = puVar8[-uVar15];
          plVar2 = *(longlong **)(uVar9 + 0x18);
          if (plVar2 == (longlong *)0x0) {
            bVar6 = 0;
          }
          else {
            bVar6 = (**(code **)(*plVar2 + 0x68))(plVar2,param_4,auStack_98);
          }
          plVar2 = *(longlong **)(uVar16 + 0x18);
          if (plVar2 == (longlong *)0x0) {
            bVar7 = 0;
LAB_140131179:
            if ((bVar6 == 0) && (uVar16 <= uVar9 || bVar7 != 0)) goto LAB_140131198;
          }
          else {
            bVar7 = (**(code **)(*plVar2 + 0x68))(plVar2,param_4,auStack_a8);
            if ((bVar7 & bVar6) != 1) goto LAB_140131179;
            auVar4 = vsubps_avx(*param_4,auStack_a8);
            auVar5 = vsubps_avx(*param_4,auStack_98);
            auVar56._0_4_ = auVar4._0_4_ * auVar4._0_4_;
            auVar56._4_4_ = auVar4._4_4_ * auVar4._4_4_;
            auVar56._8_4_ = auVar4._8_4_ * auVar4._8_4_;
            auVar56._12_4_ = auVar4._12_4_ * auVar4._12_4_;
            auVar27._0_4_ = auVar5._0_4_ * auVar5._0_4_;
            auVar27._4_4_ = auVar5._4_4_ * auVar5._4_4_;
            auVar27._8_4_ = auVar5._8_4_ * auVar5._8_4_;
            auVar27._12_4_ = auVar5._12_4_ * auVar5._12_4_;
            auVar4 = vblendps_avx(auVar56,auVar77._0_16_,8);
            auVar5 = vblendps_avx(auVar27,auVar77._0_16_,8);
            auVar4 = vhaddps_avx(auVar4,auVar4);
            auVar5 = vhaddps_avx(auVar5,auVar5);
            auVar4 = vhaddps_avx(auVar4,auVar4);
            auVar5 = vhaddps_avx(auVar5,auVar5);
            auVar4 = vcmpps_avx(auVar5,auVar4,5);
            if ((((SUB161(auVar4 >> 0x1f,0) & 1) != 0 || (SUB161(auVar4 >> 0x3f,0) & 1) != 0) ||
                (SUB161(auVar4 >> 0x5f,0) & 1) != 0) || auVar4[0xf] < '\0') goto LAB_140131198;
          }
          uVar9 = *puVar8;
          *puVar8 = puVar8[-uVar15];
          puVar8[-uVar15] = uVar9;
        }
      }
      else {
        bVar7 = (**(code **)(*plVar2 + 0x68))(plVar2,param_4,auStack_a8);
        if ((bVar7 & bVar6) != 1) goto LAB_1401310bb;
        auVar4 = vsubps_avx(*param_4,auStack_a8);
        auVar5 = vsubps_avx(*param_4,auStack_98);
        auVar55._0_4_ = auVar4._0_4_ * auVar4._0_4_;
        auVar55._4_4_ = auVar4._4_4_ * auVar4._4_4_;
        auVar55._8_4_ = auVar4._8_4_ * auVar4._8_4_;
        auVar55._12_4_ = auVar4._12_4_ * auVar4._12_4_;
        auVar26._0_4_ = auVar5._0_4_ * auVar5._0_4_;
        auVar26._4_4_ = auVar5._4_4_ * auVar5._4_4_;
        auVar26._8_4_ = auVar5._8_4_ * auVar5._8_4_;
        auVar26._12_4_ = auVar5._12_4_ * auVar5._12_4_;
        auVar4 = vblendps_avx(auVar55,auVar77._0_16_,8);
        auVar5 = vblendps_avx(auVar26,auVar77._0_16_,8);
        auVar4 = vhaddps_avx(auVar4,auVar4);
        auVar5 = vhaddps_avx(auVar5,auVar5);
        auVar4 = vhaddps_avx(auVar4,auVar4);
        auVar5 = vhaddps_avx(auVar5,auVar5);
        auVar4 = vcmpps_avx(auVar5,auVar4,5);
        if ((((SUB161(auVar4 >> 0x1f,0) & 1) == 0 && (SUB161(auVar4 >> 0x3f,0) & 1) == 0) &&
            (SUB161(auVar4 >> 0x5f,0) & 1) == 0) && -1 < auVar4[0xf]) goto LAB_1401310ce;
      }
LAB_140131198:
      uVar9 = puStack_70[-uVar15];
      uVar16 = puStack_70[uVar15 * -2];
      plVar2 = *(longlong **)(uVar9 + 0x18);
      if (plVar2 == (longlong *)0x0) {
        bVar6 = 0;
      }
      else {
        bVar6 = (**(code **)(*plVar2 + 0x68))(plVar2,param_4,auStack_98);
      }
      plVar2 = *(longlong **)(uVar16 + 0x18);
      if (plVar2 == (longlong *)0x0) {
        bVar7 = 0;
LAB_14013123a:
        if (bVar6 == 0) {
          bVar18 = uVar9 < uVar16 && bVar7 == 0;
          goto LAB_14013124e;
        }
LAB_140131255:
        uVar9 = puStack_70[-uVar15];
        puStack_70[-uVar15] = puStack_70[uVar15 * -2];
        puStack_70[uVar15 * -2] = uVar9;
      }
      else {
        bVar7 = (**(code **)(*plVar2 + 0x68))(plVar2,param_4,auStack_a8);
        if ((bVar7 & bVar6) != 1) goto LAB_14013123a;
        auVar4 = vsubps_avx(*param_4,auStack_a8);
        auVar5 = vsubps_avx(*param_4,auStack_98);
        auVar57._0_4_ = auVar4._0_4_ * auVar4._0_4_;
        auVar57._4_4_ = auVar4._4_4_ * auVar4._4_4_;
        auVar57._8_4_ = auVar4._8_4_ * auVar4._8_4_;
        auVar57._12_4_ = auVar4._12_4_ * auVar4._12_4_;
        auVar28._0_4_ = auVar5._0_4_ * auVar5._0_4_;
        auVar28._4_4_ = auVar5._4_4_ * auVar5._4_4_;
        auVar28._8_4_ = auVar5._8_4_ * auVar5._8_4_;
        auVar28._12_4_ = auVar5._12_4_ * auVar5._12_4_;
        auVar4 = vblendps_avx(auVar57,auVar77._0_16_,8);
        auVar5 = vblendps_avx(auVar28,auVar77._0_16_,8);
        auVar4 = vhaddps_avx(auVar4,auVar4);
        auVar5 = vhaddps_avx(auVar5,auVar5);
        auVar4 = vhaddps_avx(auVar4,auVar4);
        auVar5 = vhaddps_avx(auVar5,auVar5);
        auVar4 = vcmpps_avx(auVar5,auVar4,5);
        bVar18 = (((SUB161(auVar4 >> 0x1f,0) & 1) == 0 && (SUB161(auVar4 >> 0x3f,0) & 1) == 0) &&
                 (SUB161(auVar4 >> 0x5f,0) & 1) == 0) && -1 < auVar4[0xf];
LAB_14013124e:
        if (bVar18) goto LAB_140131255;
      }
      puVar12 = puStack_70;
      uVar9 = *puStack_70;
      uVar16 = puStack_70[-uVar15];
      plVar2 = *(longlong **)(uVar9 + 0x18);
      if (plVar2 == (longlong *)0x0) {
        bVar6 = 0;
      }
      else {
        bVar6 = (**(code **)(*plVar2 + 0x68))(plVar2,param_4,auStack_98);
      }
      plVar2 = *(longlong **)(uVar16 + 0x18);
      if (plVar2 == (longlong *)0x0) {
        bVar7 = 0;
LAB_1401312f7:
        if ((bVar6 != 0) || (uVar9 < uVar16 && bVar7 == 0)) {
LAB_14013130a:
          uVar9 = *puVar12;
          *puVar12 = puVar12[-uVar15];
          puVar12[-uVar15] = uVar9;
          plVar2 = *(longlong **)(uVar9 + 0x18);
          uVar16 = puVar12[uVar15 * -2];
          if (plVar2 == (longlong *)0x0) {
            bVar6 = 0;
          }
          else {
            bVar6 = (**(code **)(*plVar2 + 0x68))(plVar2,param_4,auStack_98);
          }
          plVar2 = *(longlong **)(uVar16 + 0x18);
          if (plVar2 == (longlong *)0x0) {
            bVar7 = 0;
LAB_1401313a3:
            if ((bVar6 == 0) && (uVar16 <= uVar9 || bVar7 != 0)) goto LAB_1401313c7;
          }
          else {
            bVar7 = (**(code **)(*plVar2 + 0x68))(plVar2,param_4,auStack_a8);
            if ((bVar7 & bVar6) != 1) goto LAB_1401313a3;
            auVar4 = vsubps_avx(*param_4,auStack_a8);
            auVar5 = vsubps_avx(*param_4,auStack_98);
            auVar59._0_4_ = auVar4._0_4_ * auVar4._0_4_;
            auVar59._4_4_ = auVar4._4_4_ * auVar4._4_4_;
            auVar59._8_4_ = auVar4._8_4_ * auVar4._8_4_;
            auVar59._12_4_ = auVar4._12_4_ * auVar4._12_4_;
            auVar30._0_4_ = auVar5._0_4_ * auVar5._0_4_;
            auVar30._4_4_ = auVar5._4_4_ * auVar5._4_4_;
            auVar30._8_4_ = auVar5._8_4_ * auVar5._8_4_;
            auVar30._12_4_ = auVar5._12_4_ * auVar5._12_4_;
            auVar4 = vblendps_avx(auVar59,auVar77._0_16_,8);
            auVar5 = vblendps_avx(auVar30,auVar77._0_16_,8);
            auVar4 = vhaddps_avx(auVar4,auVar4);
            auVar5 = vhaddps_avx(auVar5,auVar5);
            auVar4 = vhaddps_avx(auVar4,auVar4);
            auVar5 = vhaddps_avx(auVar5,auVar5);
            auVar4 = vcmpps_avx(auVar5,auVar4,5);
            if ((((SUB161(auVar4 >> 0x1f,0) & 1) != 0 || (SUB161(auVar4 >> 0x3f,0) & 1) != 0) ||
                (SUB161(auVar4 >> 0x5f,0) & 1) != 0) || auVar4[0xf] < '\0') goto LAB_1401313c7;
          }
          uVar9 = puVar12[-uVar15];
          puVar12[-uVar15] = puVar12[uVar15 * -2];
          puVar12[uVar15 * -2] = uVar9;
        }
      }
      else {
        bVar7 = (**(code **)(*plVar2 + 0x68))(plVar2,param_4,auStack_a8);
        if ((bVar7 & bVar6) != 1) goto LAB_1401312f7;
        auVar4 = vsubps_avx(*param_4,auStack_a8);
        auVar5 = vsubps_avx(*param_4,auStack_98);
        auVar58._0_4_ = auVar4._0_4_ * auVar4._0_4_;
        auVar58._4_4_ = auVar4._4_4_ * auVar4._4_4_;
        auVar58._8_4_ = auVar4._8_4_ * auVar4._8_4_;
        auVar58._12_4_ = auVar4._12_4_ * auVar4._12_4_;
        auVar29._0_4_ = auVar5._0_4_ * auVar5._0_4_;
        auVar29._4_4_ = auVar5._4_4_ * auVar5._4_4_;
        auVar29._8_4_ = auVar5._8_4_ * auVar5._8_4_;
        auVar29._12_4_ = auVar5._12_4_ * auVar5._12_4_;
        auVar4 = vblendps_avx(auVar58,auVar77._0_16_,8);
        auVar5 = vblendps_avx(auVar29,auVar77._0_16_,8);
        auVar4 = vhaddps_avx(auVar4,auVar4);
        auVar5 = vhaddps_avx(auVar5,auVar5);
        auVar4 = vhaddps_avx(auVar4,auVar4);
        auVar5 = vhaddps_avx(auVar5,auVar5);
        auVar4 = vcmpps_avx(auVar5,auVar4,5);
        if ((((SUB161(auVar4 >> 0x1f,0) & 1) == 0 && (SUB161(auVar4 >> 0x3f,0) & 1) == 0) &&
            (SUB161(auVar4 >> 0x5f,0) & 1) == 0) && -1 < auVar4[0xf]) goto LAB_14013130a;
      }
LAB_1401313c7:
      uVar9 = *puVar8;
      uVar16 = *puStack_78;
      plVar2 = *(longlong **)(uVar9 + 0x18);
      if (plVar2 == (longlong *)0x0) {
        bVar6 = 0;
      }
      else {
        bVar6 = (**(code **)(*plVar2 + 0x68))(plVar2,param_4,auStack_98);
      }
      plVar2 = *(longlong **)(uVar16 + 0x18);
      if (plVar2 == (longlong *)0x0) {
        bVar7 = 0;
LAB_140131453:
        if (bVar6 == 0) {
          bVar18 = uVar9 < uVar16 && bVar7 == 0;
          goto LAB_140131465;
        }
LAB_14013146a:
        uVar9 = *puVar8;
        *puVar8 = *puStack_78;
        *puStack_78 = uVar9;
      }
      else {
        bVar7 = (**(code **)(*plVar2 + 0x68))(plVar2,param_4,auStack_a8);
        if ((bVar7 & bVar6) != 1) goto LAB_140131453;
        auVar4 = vsubps_avx(*param_4,auStack_a8);
        auVar5 = vsubps_avx(*param_4,auStack_98);
        auVar60._0_4_ = auVar4._0_4_ * auVar4._0_4_;
        auVar60._4_4_ = auVar4._4_4_ * auVar4._4_4_;
        auVar60._8_4_ = auVar4._8_4_ * auVar4._8_4_;
        auVar60._12_4_ = auVar4._12_4_ * auVar4._12_4_;
        auVar31._0_4_ = auVar5._0_4_ * auVar5._0_4_;
        auVar31._4_4_ = auVar5._4_4_ * auVar5._4_4_;
        auVar31._8_4_ = auVar5._8_4_ * auVar5._8_4_;
        auVar31._12_4_ = auVar5._12_4_ * auVar5._12_4_;
        auVar4 = vblendps_avx(auVar60,auVar77._0_16_,8);
        auVar5 = vblendps_avx(auVar31,auVar77._0_16_,8);
        auVar4 = vhaddps_avx(auVar4,auVar4);
        auVar5 = vhaddps_avx(auVar5,auVar5);
        auVar4 = vhaddps_avx(auVar4,auVar4);
        auVar5 = vhaddps_avx(auVar5,auVar5);
        auVar4 = vcmpps_avx(auVar5,auVar4,5);
        bVar18 = (((SUB161(auVar4 >> 0x1f,0) & 1) == 0 && (SUB161(auVar4 >> 0x3f,0) & 1) == 0) &&
                 (SUB161(auVar4 >> 0x5f,0) & 1) == 0) && -1 < auVar4[0xf];
LAB_140131465:
        if (bVar18) goto LAB_14013146a;
      }
      uVar9 = puVar12[-uVar15];
      uVar16 = *puVar8;
      plVar2 = *(longlong **)(uVar9 + 0x18);
      if (plVar2 == (longlong *)0x0) {
        bVar6 = 0;
      }
      else {
        bVar6 = (**(code **)(*plVar2 + 0x68))(plVar2,param_4,auStack_98);
      }
      plVar2 = *(longlong **)(uVar16 + 0x18);
      puVar13 = param_2;
      if (plVar2 == (longlong *)0x0) {
        bVar7 = 0;
LAB_140131508:
        if ((bVar6 == 0) && (uVar16 <= uVar9 || bVar7 != 0)) goto LAB_1401315eb;
      }
      else {
        bVar7 = (**(code **)(*plVar2 + 0x68))(plVar2,param_4,auStack_a8);
        if ((bVar7 & bVar6) != 1) goto LAB_140131508;
        auVar4 = vsubps_avx(*param_4,auStack_a8);
        auVar5 = vsubps_avx(*param_4,auStack_98);
        auVar61._0_4_ = auVar4._0_4_ * auVar4._0_4_;
        auVar61._4_4_ = auVar4._4_4_ * auVar4._4_4_;
        auVar61._8_4_ = auVar4._8_4_ * auVar4._8_4_;
        auVar61._12_4_ = auVar4._12_4_ * auVar4._12_4_;
        auVar32._0_4_ = auVar5._0_4_ * auVar5._0_4_;
        auVar32._4_4_ = auVar5._4_4_ * auVar5._4_4_;
        auVar32._8_4_ = auVar5._8_4_ * auVar5._8_4_;
        auVar32._12_4_ = auVar5._12_4_ * auVar5._12_4_;
        auVar4 = vblendps_avx(auVar61,auVar77._0_16_,8);
        auVar5 = vblendps_avx(auVar32,auVar77._0_16_,8);
        auVar4 = vhaddps_avx(auVar4,auVar4);
        auVar5 = vhaddps_avx(auVar5,auVar5);
        auVar4 = vhaddps_avx(auVar4,auVar4);
        auVar5 = vhaddps_avx(auVar5,auVar5);
        auVar4 = vcmpps_avx(auVar5,auVar4,5);
        if ((((SUB161(auVar4 >> 0x1f,0) & 1) != 0 || (SUB161(auVar4 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar4 >> 0x5f,0) & 1) != 0) || auVar4[0xf] < '\0') goto LAB_1401315eb;
      }
      uVar9 = puVar12[-uVar15];
      puVar12[-uVar15] = *puVar8;
      *puVar8 = uVar9;
      uVar16 = *puStack_78;
      plVar2 = *(longlong **)(uVar9 + 0x18);
      if (plVar2 == (longlong *)0x0) {
        bVar6 = 0;
      }
      else {
        bVar6 = (**(code **)(*plVar2 + 0x68))(plVar2,param_4,auStack_98);
      }
      plVar2 = *(longlong **)(uVar16 + 0x18);
      if (plVar2 == (longlong *)0x0) {
        bVar7 = 0;
      }
      else {
        bVar7 = (**(code **)(*plVar2 + 0x68))(plVar2,param_4,auStack_a8);
        if ((bVar7 & bVar6) == 1) {
          auVar4 = vsubps_avx(*param_4,auStack_a8);
          auVar5 = vsubps_avx(*param_4,auStack_98);
          auVar62._0_4_ = auVar4._0_4_ * auVar4._0_4_;
          auVar62._4_4_ = auVar4._4_4_ * auVar4._4_4_;
          auVar62._8_4_ = auVar4._8_4_ * auVar4._8_4_;
          auVar62._12_4_ = auVar4._12_4_ * auVar4._12_4_;
          auVar33._0_4_ = auVar5._0_4_ * auVar5._0_4_;
          auVar33._4_4_ = auVar5._4_4_ * auVar5._4_4_;
          auVar33._8_4_ = auVar5._8_4_ * auVar5._8_4_;
          auVar33._12_4_ = auVar5._12_4_ * auVar5._12_4_;
          auVar4 = vblendps_avx(auVar62,auVar77._0_16_,8);
          auVar5 = vblendps_avx(auVar33,auVar77._0_16_,8);
          auVar4 = vhaddps_avx(auVar4,auVar4);
          auVar5 = vhaddps_avx(auVar5,auVar5);
          auVar4 = vhaddps_avx(auVar4,auVar4);
          auVar5 = vhaddps_avx(auVar5,auVar5);
          auVar4 = vcmpps_avx(auVar5,auVar4,5);
          if ((((SUB161(auVar4 >> 0x1f,0) & 1) != 0 || (SUB161(auVar4 >> 0x3f,0) & 1) != 0) ||
              (SUB161(auVar4 >> 0x5f,0) & 1) != 0) || auVar4[0xf] < '\0') goto LAB_1401315eb;
          goto LAB_1401315d5;
        }
      }
      if ((bVar6 == 0) && (uVar16 <= uVar9 || bVar7 != 0)) goto LAB_1401315eb;
    }
LAB_1401315d5:
    uVar9 = *puVar8;
    *puVar8 = *puStack_78;
    *puStack_78 = uVar9;
    puVar13 = param_2;
LAB_1401315eb:
    do {
      uVar9 = puVar10[-1];
      uVar16 = *puVar10;
      plVar2 = *(longlong **)(uVar9 + 0x18);
      if (plVar2 == (longlong *)0x0) {
        bVar6 = 0;
      }
      else {
        bVar6 = (**(code **)(*plVar2 + 0x68))(plVar2,param_4,auStack_98);
      }
      plVar2 = *(longlong **)(uVar16 + 0x18);
      if (plVar2 == (longlong *)0x0) {
        bVar7 = 0;
LAB_140131677:
        if ((bVar6 != 0) || ((uVar9 < uVar16 & (bVar7 ^ 1)) != 0)) goto LAB_140131739;
      }
      else {
        bVar7 = (**(code **)(*plVar2 + 0x68))(plVar2,param_4,auStack_a8);
        if ((bVar7 & bVar6) != 1) goto LAB_140131677;
        auVar4 = vsubps_avx(*param_4,auStack_a8);
        auVar5 = vsubps_avx(*param_4,auStack_98);
        auVar63._0_4_ = auVar4._0_4_ * auVar4._0_4_;
        auVar63._4_4_ = auVar4._4_4_ * auVar4._4_4_;
        auVar63._8_4_ = auVar4._8_4_ * auVar4._8_4_;
        auVar63._12_4_ = auVar4._12_4_ * auVar4._12_4_;
        auVar34._0_4_ = auVar5._0_4_ * auVar5._0_4_;
        auVar34._4_4_ = auVar5._4_4_ * auVar5._4_4_;
        auVar34._8_4_ = auVar5._8_4_ * auVar5._8_4_;
        auVar34._12_4_ = auVar5._12_4_ * auVar5._12_4_;
        auVar4 = vblendps_avx(auVar63,auVar77._0_16_,8);
        auVar5 = vblendps_avx(auVar34,auVar77._0_16_,8);
        auVar4 = vhaddps_avx(auVar4,auVar4);
        auVar5 = vhaddps_avx(auVar5,auVar5);
        auVar4 = vhaddps_avx(auVar4,auVar4);
        auVar5 = vhaddps_avx(auVar5,auVar5);
        auVar4 = vcmpps_avx(auVar5,auVar4,5);
        if ((((SUB161(auVar4 >> 0x1f,0) & 1) == 0 && (SUB161(auVar4 >> 0x3f,0) & 1) == 0) &&
            (SUB161(auVar4 >> 0x5f,0) & 1) == 0) && -1 < auVar4[0xf]) goto LAB_140131739;
      }
      uVar9 = *puVar10;
      uVar16 = puVar10[-1];
      plVar2 = *(longlong **)(uVar9 + 0x18);
      if (plVar2 == (longlong *)0x0) {
        bVar6 = 0;
      }
      else {
        bVar6 = (**(code **)(*plVar2 + 0x68))(plVar2,param_4,auStack_98);
      }
      plVar2 = *(longlong **)(uVar16 + 0x18);
      if (plVar2 == (longlong *)0x0) {
        bVar7 = 0;
LAB_140131719:
        if ((bVar6 != 0) || ((uVar9 < uVar16 & (bVar7 ^ 1)) != 0)) goto LAB_140131739;
      }
      else {
        bVar7 = (**(code **)(*plVar2 + 0x68))(plVar2,param_4,auStack_a8);
        if ((bVar7 & bVar6) != 1) goto LAB_140131719;
        auVar4 = vsubps_avx(*param_4,auStack_a8);
        auVar5 = vsubps_avx(*param_4,auStack_98);
        auVar64._0_4_ = auVar4._0_4_ * auVar4._0_4_;
        auVar64._4_4_ = auVar4._4_4_ * auVar4._4_4_;
        auVar64._8_4_ = auVar4._8_4_ * auVar4._8_4_;
        auVar64._12_4_ = auVar4._12_4_ * auVar4._12_4_;
        auVar35._0_4_ = auVar5._0_4_ * auVar5._0_4_;
        auVar35._4_4_ = auVar5._4_4_ * auVar5._4_4_;
        auVar35._8_4_ = auVar5._8_4_ * auVar5._8_4_;
        auVar35._12_4_ = auVar5._12_4_ * auVar5._12_4_;
        auVar4 = vblendps_avx(auVar64,auVar77._0_16_,8);
        auVar5 = vblendps_avx(auVar35,auVar77._0_16_,8);
        auVar4 = vhaddps_avx(auVar4,auVar4);
        auVar5 = vhaddps_avx(auVar5,auVar5);
        auVar4 = vhaddps_avx(auVar4,auVar4);
        auVar5 = vhaddps_avx(auVar5,auVar5);
        auVar4 = vcmpps_avx(auVar5,auVar4,5);
        if ((((SUB161(auVar4 >> 0x1f,0) & 1) == 0 && (SUB161(auVar4 >> 0x3f,0) & 1) == 0) &&
            (SUB161(auVar4 >> 0x5f,0) & 1) == 0) && -1 < auVar4[0xf]) goto LAB_140131739;
      }
      puVar10 = puVar10 + -1;
      if (puVar10 <= param_1) goto LAB_140131739;
    } while( true );
  }
LAB_140131cf9:
  if ((puStack_b0 != param_2) && (puStack_b0 + 1 != param_2)) {
    auVar77 = ZEXT1264(ZEXT812(0));
    puVar8 = puStack_b0 + 1;
    puVar10 = puStack_b0;
    puStack_80 = param_2;
    do {
      puVar12 = puVar8;
      uVar9 = puVar10[1];
      uVar16 = *puStack_b0;
      plVar2 = *(longlong **)(uVar9 + 0x18);
      if (plVar2 == (longlong *)0x0) {
        bVar6 = 0;
      }
      else {
        bVar6 = (**(code **)(*plVar2 + 0x68))(plVar2,param_4,auStack_98);
      }
      plVar2 = *(longlong **)(uVar16 + 0x18);
      if (plVar2 == (longlong *)0x0) {
        bVar7 = 0;
LAB_140131dc2:
        if (bVar6 == 0) {
          bVar18 = uVar9 < uVar16 && bVar7 == 0;
          goto LAB_140131dd3;
        }
      }
      else {
        bVar7 = (**(code **)(*plVar2 + 0x68))(plVar2,param_4,auStack_a8);
        if ((bVar7 & bVar6) != 1) goto LAB_140131dc2;
        auVar4 = vsubps_avx(*param_4,auStack_a8);
        auVar5 = vsubps_avx(*param_4,auStack_98);
        auVar71._0_4_ = auVar4._0_4_ * auVar4._0_4_;
        auVar71._4_4_ = auVar4._4_4_ * auVar4._4_4_;
        auVar71._8_4_ = auVar4._8_4_ * auVar4._8_4_;
        auVar71._12_4_ = auVar4._12_4_ * auVar4._12_4_;
        auVar42._0_4_ = auVar5._0_4_ * auVar5._0_4_;
        auVar42._4_4_ = auVar5._4_4_ * auVar5._4_4_;
        auVar42._8_4_ = auVar5._8_4_ * auVar5._8_4_;
        auVar42._12_4_ = auVar5._12_4_ * auVar5._12_4_;
        auVar4 = vblendps_avx(auVar71,auVar77._0_16_,8);
        auVar5 = vblendps_avx(auVar42,auVar77._0_16_,8);
        auVar4 = vhaddps_avx(auVar4,auVar4);
        auVar5 = vhaddps_avx(auVar5,auVar5);
        auVar4 = vhaddps_avx(auVar4,auVar4);
        auVar5 = vhaddps_avx(auVar5,auVar5);
        auVar4 = vcmpps_avx(auVar5,auVar4,5);
        bVar18 = (((SUB161(auVar4 >> 0x1f,0) & 1) == 0 && (SUB161(auVar4 >> 0x3f,0) & 1) == 0) &&
                 (SUB161(auVar4 >> 0x5f,0) & 1) == 0) && -1 < auVar4[0xf];
LAB_140131dd3:
        puVar8 = puVar12;
        if (!bVar18) {
          do {
            uVar16 = puVar8[-1];
            plVar2 = *(longlong **)(uVar9 + 0x18);
            if (plVar2 == (longlong *)0x0) {
              bVar6 = 0;
            }
            else {
              bVar6 = (**(code **)(*plVar2 + 0x68))(plVar2,param_4,auStack_98);
            }
            plVar2 = *(longlong **)(uVar16 + 0x18);
            if (plVar2 == (longlong *)0x0) {
              bVar7 = 0;
LAB_140131e5f:
              if ((bVar6 == 0) && (uVar16 <= uVar9 || bVar7 != 0)) goto LAB_140131ea1;
            }
            else {
              bVar7 = (**(code **)(*plVar2 + 0x68))(plVar2,param_4,auStack_a8);
              if ((bVar7 & bVar6) != 1) goto LAB_140131e5f;
              auVar4 = vsubps_avx(*param_4,auStack_a8);
              auVar5 = vsubps_avx(*param_4,auStack_98);
              auVar72._0_4_ = auVar4._0_4_ * auVar4._0_4_;
              auVar72._4_4_ = auVar4._4_4_ * auVar4._4_4_;
              auVar72._8_4_ = auVar4._8_4_ * auVar4._8_4_;
              auVar72._12_4_ = auVar4._12_4_ * auVar4._12_4_;
              auVar43._0_4_ = auVar5._0_4_ * auVar5._0_4_;
              auVar43._4_4_ = auVar5._4_4_ * auVar5._4_4_;
              auVar43._8_4_ = auVar5._8_4_ * auVar5._8_4_;
              auVar43._12_4_ = auVar5._12_4_ * auVar5._12_4_;
              auVar4 = vblendps_avx(auVar72,auVar77._0_16_,8);
              auVar5 = vblendps_avx(auVar43,auVar77._0_16_,8);
              auVar4 = vhaddps_avx(auVar4,auVar4);
              auVar5 = vhaddps_avx(auVar5,auVar5);
              auVar4 = vhaddps_avx(auVar4,auVar4);
              auVar5 = vhaddps_avx(auVar5,auVar5);
              auVar4 = vcmpps_avx(auVar5,auVar4,5);
              if ((((SUB161(auVar4 >> 0x1f,0) & 1) != 0 || (SUB161(auVar4 >> 0x3f,0) & 1) != 0) ||
                  (SUB161(auVar4 >> 0x5f,0) & 1) != 0) || auVar4[0xf] < '\0') goto LAB_140131ea1;
            }
            *puVar8 = puVar8[-1];
            puVar8 = puVar8 + -1;
          } while( true );
        }
      }
      func_0x000140301860(puStack_b0,puVar12,puVar10 + 2);
      puVar8 = puStack_b0;
LAB_140131ea1:
      *puVar8 = uVar9;
      puVar8 = puVar12 + 1;
      puVar10 = puVar12;
    } while (puVar12 + 1 != puStack_80);
  }
  return;
LAB_140131739:
  puVar8 = puVar8 + 1;
  param_2 = puVar10;
  puStack_b0 = puVar8;
  if (puVar8 < puVar13) {
    do {
      uVar9 = *puVar8;
      uVar16 = *puVar10;
      plVar2 = *(longlong **)(uVar9 + 0x18);
      if (plVar2 == (longlong *)0x0) {
        bVar6 = 0;
      }
      else {
        bVar6 = (**(code **)(*plVar2 + 0x68))(plVar2,param_4,auStack_98);
      }
      plVar2 = *(longlong **)(uVar16 + 0x18);
      puStack_b0 = puVar8;
      if (plVar2 == (longlong *)0x0) {
        bVar7 = 0;
LAB_1401317d7:
        if ((bVar6 != 0) || ((uVar9 < uVar16 & (bVar7 ^ 1)) != 0)) break;
      }
      else {
        bVar7 = (**(code **)(*plVar2 + 0x68))(plVar2,param_4,auStack_a8);
        if ((bVar7 & bVar6) != 1) goto LAB_1401317d7;
        auVar4 = vsubps_avx(*param_4,auStack_a8);
        auVar5 = vsubps_avx(*param_4,auStack_98);
        auVar65._0_4_ = auVar4._0_4_ * auVar4._0_4_;
        auVar65._4_4_ = auVar4._4_4_ * auVar4._4_4_;
        auVar65._8_4_ = auVar4._8_4_ * auVar4._8_4_;
        auVar65._12_4_ = auVar4._12_4_ * auVar4._12_4_;
        auVar36._0_4_ = auVar5._0_4_ * auVar5._0_4_;
        auVar36._4_4_ = auVar5._4_4_ * auVar5._4_4_;
        auVar36._8_4_ = auVar5._8_4_ * auVar5._8_4_;
        auVar36._12_4_ = auVar5._12_4_ * auVar5._12_4_;
        auVar4 = vblendps_avx(auVar65,auVar77._0_16_,8);
        auVar5 = vblendps_avx(auVar36,auVar77._0_16_,8);
        auVar4 = vhaddps_avx(auVar4,auVar4);
        auVar5 = vhaddps_avx(auVar5,auVar5);
        auVar4 = vhaddps_avx(auVar4,auVar4);
        auVar5 = vhaddps_avx(auVar5,auVar5);
        auVar4 = vcmpps_avx(auVar5,auVar4,5);
        if ((((SUB161(auVar4 >> 0x1f,0) & 1) == 0 && (SUB161(auVar4 >> 0x3f,0) & 1) == 0) &&
            (SUB161(auVar4 >> 0x5f,0) & 1) == 0) && -1 < auVar4[0xf]) break;
      }
      uVar9 = *puVar10;
      uVar16 = *puVar8;
      plVar2 = *(longlong **)(uVar9 + 0x18);
      if (plVar2 == (longlong *)0x0) {
        bVar6 = 0;
      }
      else {
        bVar6 = (**(code **)(*plVar2 + 0x68))(plVar2,param_4,auStack_98);
      }
      plVar2 = *(longlong **)(uVar16 + 0x18);
      if (plVar2 == (longlong *)0x0) {
        bVar7 = 0;
LAB_140131878:
        if ((bVar6 != 0) || ((uVar9 < uVar16 & (bVar7 ^ 1)) != 0)) break;
      }
      else {
        bVar7 = (**(code **)(*plVar2 + 0x68))(plVar2,param_4,auStack_a8);
        if ((bVar7 & bVar6) != 1) goto LAB_140131878;
        auVar4 = vsubps_avx(*param_4,auStack_a8);
        auVar5 = vsubps_avx(*param_4,auStack_98);
        auVar66._0_4_ = auVar4._0_4_ * auVar4._0_4_;
        auVar66._4_4_ = auVar4._4_4_ * auVar4._4_4_;
        auVar66._8_4_ = auVar4._8_4_ * auVar4._8_4_;
        auVar66._12_4_ = auVar4._12_4_ * auVar4._12_4_;
        auVar37._0_4_ = auVar5._0_4_ * auVar5._0_4_;
        auVar37._4_4_ = auVar5._4_4_ * auVar5._4_4_;
        auVar37._8_4_ = auVar5._8_4_ * auVar5._8_4_;
        auVar37._12_4_ = auVar5._12_4_ * auVar5._12_4_;
        auVar4 = vblendps_avx(auVar66,auVar77._0_16_,8);
        auVar5 = vblendps_avx(auVar37,auVar77._0_16_,8);
        auVar4 = vhaddps_avx(auVar4,auVar4);
        auVar5 = vhaddps_avx(auVar5,auVar5);
        auVar4 = vhaddps_avx(auVar4,auVar4);
        auVar5 = vhaddps_avx(auVar5,auVar5);
        auVar4 = vcmpps_avx(auVar5,auVar4,5);
        if ((((SUB161(auVar4 >> 0x1f,0) & 1) == 0 && (SUB161(auVar4 >> 0x3f,0) & 1) == 0) &&
            (SUB161(auVar4 >> 0x5f,0) & 1) == 0) && -1 < auVar4[0xf]) break;
      }
      puVar8 = puVar8 + 1;
      puStack_b0 = puVar8;
      if (puVar13 <= puVar8) break;
    } while( true );
  }
LAB_1401318a9:
  do {
    puVar12 = puVar10;
    if (puVar13 <= puVar8) {
joined_r0x000140131a1e:
      puVar10 = puVar12;
      if (puVar10 <= param_1) break;
      uVar9 = puVar10[-1];
      uVar16 = *param_2;
      plVar2 = *(longlong **)(uVar9 + 0x18);
      if (plVar2 == (longlong *)0x0) {
        bVar6 = 0;
      }
      else {
        bVar6 = (**(code **)(*plVar2 + 0x68))(plVar2,param_4,auStack_98);
      }
      plVar2 = *(longlong **)(uVar16 + 0x18);
      puVar12 = puVar10 + -1;
      if (plVar2 == (longlong *)0x0) {
        bVar7 = 0;
LAB_140131abb:
        puVar13 = puStack_80;
        if ((bVar6 == 0) && ((uVar9 < uVar16 & (bVar7 ^ 1)) == 0)) goto LAB_140131acc;
        goto joined_r0x000140131a1e;
      }
      bVar7 = (**(code **)(*plVar2 + 0x68))(plVar2,param_4,auStack_a8);
      if ((bVar7 & bVar6) != 1) goto LAB_140131abb;
      auVar4 = vsubps_avx(*param_4,auStack_a8);
      auVar5 = vsubps_avx(*param_4,auStack_98);
      auVar69._0_4_ = auVar4._0_4_ * auVar4._0_4_;
      auVar69._4_4_ = auVar4._4_4_ * auVar4._4_4_;
      auVar69._8_4_ = auVar4._8_4_ * auVar4._8_4_;
      auVar69._12_4_ = auVar4._12_4_ * auVar4._12_4_;
      auVar40._0_4_ = auVar5._0_4_ * auVar5._0_4_;
      auVar40._4_4_ = auVar5._4_4_ * auVar5._4_4_;
      auVar40._8_4_ = auVar5._8_4_ * auVar5._8_4_;
      auVar40._12_4_ = auVar5._12_4_ * auVar5._12_4_;
      auVar4 = vblendps_avx(auVar69,auVar77._0_16_,8);
      auVar5 = vblendps_avx(auVar40,auVar77._0_16_,8);
      auVar4 = vhaddps_avx(auVar4,auVar4);
      auVar5 = vhaddps_avx(auVar5,auVar5);
      auVar4 = vhaddps_avx(auVar4,auVar4);
      auVar5 = vhaddps_avx(auVar5,auVar5);
      auVar4 = vcmpps_avx(auVar5,auVar4,5);
      puVar13 = puStack_80;
      if ((((SUB161(auVar4 >> 0x1f,0) & 1) == 0 && (SUB161(auVar4 >> 0x3f,0) & 1) == 0) &&
          (SUB161(auVar4 >> 0x5f,0) & 1) == 0) && -1 < auVar4[0xf]) goto joined_r0x000140131a1e;
LAB_140131acc:
      uVar9 = *param_2;
      uVar16 = *puVar12;
      plVar2 = *(longlong **)(uVar9 + 0x18);
      if (plVar2 == (longlong *)0x0) {
        bVar6 = 0;
      }
      else {
        bVar6 = (**(code **)(*plVar2 + 0x68))(plVar2,param_4,auStack_98);
      }
      plVar2 = *(longlong **)(uVar16 + 0x18);
      if (plVar2 == (longlong *)0x0) {
        bVar7 = 0;
      }
      else {
        bVar7 = (**(code **)(*plVar2 + 0x68))(plVar2,param_4,auStack_a8);
        if ((bVar7 & bVar6) == 1) {
          auVar4 = vsubps_avx(*param_4,auStack_a8);
          auVar5 = vsubps_avx(*param_4,auStack_98);
          auVar70._0_4_ = auVar4._0_4_ * auVar4._0_4_;
          auVar70._4_4_ = auVar4._4_4_ * auVar4._4_4_;
          auVar70._8_4_ = auVar4._8_4_ * auVar4._8_4_;
          auVar70._12_4_ = auVar4._12_4_ * auVar4._12_4_;
          auVar41._0_4_ = auVar5._0_4_ * auVar5._0_4_;
          auVar41._4_4_ = auVar5._4_4_ * auVar5._4_4_;
          auVar41._8_4_ = auVar5._8_4_ * auVar5._8_4_;
          auVar41._12_4_ = auVar5._12_4_ * auVar5._12_4_;
          auVar4 = vblendps_avx(auVar70,auVar77._0_16_,8);
          auVar5 = vblendps_avx(auVar41,auVar77._0_16_,8);
          auVar4 = vhaddps_avx(auVar4,auVar4);
          auVar5 = vhaddps_avx(auVar5,auVar5);
          auVar4 = vhaddps_avx(auVar4,auVar4);
          auVar5 = vhaddps_avx(auVar5,auVar5);
          auVar4 = vcmpps_avx(auVar5,auVar4,5);
          puVar13 = puStack_80;
          if ((((SUB161(auVar4 >> 0x1f,0) & 1) == 0 && (SUB161(auVar4 >> 0x3f,0) & 1) == 0) &&
              (SUB161(auVar4 >> 0x5f,0) & 1) == 0) && -1 < auVar4[0xf]) break;
          goto LAB_140131b8d;
        }
      }
      puVar13 = puStack_80;
      if ((bVar6 != 0) || ((uVar9 < uVar16 & (bVar7 ^ 1)) != 0)) break;
LAB_140131b8d:
      puVar1 = param_2 + -1;
      bVar18 = puVar10 != param_2;
      puVar13 = puStack_80;
      param_2 = puVar1;
      if (bVar18) {
        uVar9 = *puVar1;
        *puVar1 = *puVar12;
        *puVar12 = uVar9;
      }
      goto joined_r0x000140131a1e;
    }
    uVar9 = *param_2;
    uVar16 = *puVar8;
    plVar2 = *(longlong **)(uVar9 + 0x18);
    if (plVar2 == (longlong *)0x0) {
      bVar6 = 0;
    }
    else {
      bVar6 = (**(code **)(*plVar2 + 0x68))(plVar2,param_4,auStack_98);
    }
    plVar2 = *(longlong **)(uVar16 + 0x18);
    if (plVar2 == (longlong *)0x0) {
      bVar7 = 0;
LAB_14013193e:
      if ((bVar6 == 0) && ((uVar9 < uVar16 & (bVar7 ^ 1)) == 0)) {
LAB_140131957:
        uVar9 = *puVar8;
        uVar16 = *param_2;
        plVar2 = *(longlong **)(uVar9 + 0x18);
        if (plVar2 == (longlong *)0x0) {
          bVar6 = 0;
        }
        else {
          bVar6 = (**(code **)(*plVar2 + 0x68))(plVar2,param_4,auStack_98);
        }
        plVar2 = *(longlong **)(uVar16 + 0x18);
        if (plVar2 == (longlong *)0x0) {
          bVar7 = 0;
LAB_1401319e0:
          if ((bVar6 != 0) || ((uVar9 < uVar16 & (bVar7 ^ 1)) != 0)) goto joined_r0x000140131a1e;
        }
        else {
          bVar7 = (**(code **)(*plVar2 + 0x68))(plVar2,param_4,auStack_a8);
          if ((bVar7 & bVar6) != 1) goto LAB_1401319e0;
          auVar4 = vsubps_avx(*param_4,auStack_a8);
          auVar5 = vsubps_avx(*param_4,auStack_98);
          auVar68._0_4_ = auVar4._0_4_ * auVar4._0_4_;
          auVar68._4_4_ = auVar4._4_4_ * auVar4._4_4_;
          auVar68._8_4_ = auVar4._8_4_ * auVar4._8_4_;
          auVar68._12_4_ = auVar4._12_4_ * auVar4._12_4_;
          auVar39._0_4_ = auVar5._0_4_ * auVar5._0_4_;
          auVar39._4_4_ = auVar5._4_4_ * auVar5._4_4_;
          auVar39._8_4_ = auVar5._8_4_ * auVar5._8_4_;
          auVar39._12_4_ = auVar5._12_4_ * auVar5._12_4_;
          auVar4 = vblendps_avx(auVar68,auVar77._0_16_,8);
          auVar5 = vblendps_avx(auVar39,auVar77._0_16_,8);
          auVar4 = vhaddps_avx(auVar4,auVar4);
          auVar5 = vhaddps_avx(auVar5,auVar5);
          auVar4 = vhaddps_avx(auVar4,auVar4);
          auVar5 = vhaddps_avx(auVar5,auVar5);
          auVar4 = vcmpps_avx(auVar5,auVar4,5);
          if ((((SUB161(auVar4 >> 0x1f,0) & 1) == 0 && (SUB161(auVar4 >> 0x3f,0) & 1) == 0) &&
              (SUB161(auVar4 >> 0x5f,0) & 1) == 0) && -1 < auVar4[0xf]) goto joined_r0x000140131a1e;
        }
        if (puVar8 != puStack_b0) {
          uVar9 = *puStack_b0;
          *puStack_b0 = *puVar8;
          *puVar8 = uVar9;
        }
        puStack_b0 = puStack_b0 + 1;
      }
    }
    else {
      bVar7 = (**(code **)(*plVar2 + 0x68))(plVar2,param_4,auStack_a8);
      if ((bVar7 & bVar6) != 1) goto LAB_14013193e;
      auVar4 = vsubps_avx(*param_4,auStack_a8);
      auVar5 = vsubps_avx(*param_4,auStack_98);
      auVar67._0_4_ = auVar4._0_4_ * auVar4._0_4_;
      auVar67._4_4_ = auVar4._4_4_ * auVar4._4_4_;
      auVar67._8_4_ = auVar4._8_4_ * auVar4._8_4_;
      auVar67._12_4_ = auVar4._12_4_ * auVar4._12_4_;
      auVar38._0_4_ = auVar5._0_4_ * auVar5._0_4_;
      auVar38._4_4_ = auVar5._4_4_ * auVar5._4_4_;
      auVar38._8_4_ = auVar5._8_4_ * auVar5._8_4_;
      auVar38._12_4_ = auVar5._12_4_ * auVar5._12_4_;
      auVar4 = vblendps_avx(auVar67,auVar77._0_16_,8);
      auVar5 = vblendps_avx(auVar38,auVar77._0_16_,8);
      auVar4 = vhaddps_avx(auVar4,auVar4);
      auVar5 = vhaddps_avx(auVar5,auVar5);
      auVar4 = vhaddps_avx(auVar4,auVar4);
      auVar5 = vhaddps_avx(auVar5,auVar5);
      auVar4 = vcmpps_avx(auVar5,auVar4,5);
      if ((((SUB161(auVar4 >> 0x1f,0) & 1) != 0 || (SUB161(auVar4 >> 0x3f,0) & 1) != 0) ||
          (SUB161(auVar4 >> 0x5f,0) & 1) != 0) || auVar4[0xf] < '\0') goto LAB_140131957;
    }
    puVar8 = puVar8 + 1;
  } while( true );
  if ((puVar8 != puVar13) || (puVar10 != param_1)) {
    if (puVar10 == param_1) {
      if (puStack_b0 != puVar8) {
        uVar9 = *param_2;
        *param_2 = *puStack_b0;
        *puStack_b0 = uVar9;
      }
      uVar9 = *param_2;
      *param_2 = *puVar8;
      *puVar8 = uVar9;
      puVar8 = puVar8 + 1;
      param_2 = param_2 + 1;
      puStack_b0 = puStack_b0 + 1;
    }
    else {
      puVar12 = puVar10 + -1;
      if (puVar8 == puVar13) {
        puVar1 = param_2 + -1;
        uVar9 = param_2[-1];
        if (puVar10 != param_2) {
          uVar9 = *puVar12;
          *puVar12 = param_2[-1];
          *puVar1 = uVar9;
        }
        *puVar1 = puStack_b0[-1];
        puStack_b0[-1] = uVar9;
        puVar10 = puVar12;
        param_2 = puVar1;
        puStack_b0 = puStack_b0 + -1;
      }
      else {
        uVar9 = *puVar8;
        *puVar8 = *puVar12;
        *puVar12 = uVar9;
        puVar8 = puVar8 + 1;
        puVar10 = puVar12;
      }
    }
    goto LAB_1401318a9;
  }
  param_3 = (uStack_60 >> 2) + (uStack_60 >> 1);
  if ((longlong)param_2 - (longlong)param_1 < (longlong)puStack_68 - (longlong)puStack_b0) {
    FUN_140130aa0(param_1,param_2,param_3,param_4);
    param_2 = puVar13;
  }
  else {
    FUN_140130aa0(puStack_b0,puVar13,param_3,param_4);
    puStack_b0 = param_1;
  }
  uVar9 = (longlong)param_2 - (longlong)puStack_b0;
  param_1 = puStack_b0;
  if ((longlong)uVar9 < 0x101) goto LAB_140131cf9;
  goto LAB_140130ae5;
}

