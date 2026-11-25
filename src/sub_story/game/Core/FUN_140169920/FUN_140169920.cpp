// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140169920  size: 1767 bytes
// Name:    FUN_140169920
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140169920(ulonglong *param_1,longlong *param_2,int *param_3)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auVar8 [16];
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  int *piVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  int *piVar16;
  int iVar17;
  uint uVar18;
  ulonglong uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar24;
  undefined1 auVar25 [64];
  undefined1 auVar26 [64];
  undefined1 auVar27 [64];
  undefined1 auStack_118 [16];
  undefined1 auStack_108 [16];
  undefined1 auStack_f8 [16];
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 auStack_d8 [16];
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [16];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 aauStack_98 [5] [16];
  
  uVar2 = *(undefined4 *)((longlong)param_1 + 0x4c);
  uVar3 = *(undefined4 *)((longlong)param_1 + 0x3c);
  uVar19 = param_1[8];
  uVar4 = *(undefined4 *)((longlong)param_1 + 0x44);
  uVar9 = param_1[9];
  uVar10 = param_1[10];
  uVar5 = *(undefined4 *)((longlong)param_1 + 0x54);
  cVar13 = (**(code **)(*param_2 + 8))(param_2);
  cVar14 = (**(code **)(*param_2 + 0x10))(param_2);
  piVar12 = piRam000000014ab5d230;
  uVar11 = uRam000000014ab5d228;
  if (*(uint *)((longlong)param_1 + 0x34) < 4) {
    iVar17 = POPCOUNT(uVar5) + POPCOUNT((int)uVar10) + POPCOUNT(uVar2) +
             POPCOUNT((int)uVar9) + POPCOUNT(uVar4) + POPCOUNT((int)uVar19) + POPCOUNT(uVar3);
    switch(*(uint *)((longlong)param_1 + 0x34)) {
    case 0:
      uVar19 = 0;
      piVar16 = piRam000000014ab5d230;
      if ((ulonglong)uRam000000014ab5d228 == 0) {
code_r0x000140169d5a:
        if ((uint)uVar19 != uRam000000014ab5d228) {
          do {
            lVar6 = *(longlong *)(piVar12 + (uVar19 & 0xffffffff) * 4 + 2);
            if ((lVar6 != 0) &&
               (((((iVar17 == 0xd1 ||
                   ((*(uint *)(lVar6 + 0x54) & *(uint *)((longlong)param_1 + 0x3c)) != 0)) ||
                  (((*(uint *)(lVar6 + 0x58) & (uint)param_1[8]) != 0 ||
                   ((((*(uint *)(lVar6 + 0x5c) & *(uint *)((longlong)param_1 + 0x44)) != 0 ||
                     ((*(uint *)(lVar6 + 0x60) & (uint)param_1[9]) != 0)) ||
                    ((*(uint *)(lVar6 + 100) & *(uint *)((longlong)param_1 + 0x4c)) != 0)))))) ||
                 (((*(uint *)(lVar6 + 0x68) & (uint)param_1[10]) != 0 ||
                  ((*(uint *)(lVar6 + 0x6c) & *(uint *)((longlong)param_1 + 0x54)) != 0)))) &&
                (((cVar13 == '\0' ||
                  (cVar15 = (**(code **)(*param_2 + 0x18))(param_2,lVar6), cVar15 != '\0')) &&
                 (((plVar7 = *(longlong **)(lVar6 + 0x18), plVar7 != (longlong *)0x0 &&
                   (cVar15 = (**(code **)(*plVar7 + 0x40))(plVar7,param_1 + 4), cVar15 != '\0')) &&
                  ((cVar14 == '\0' ||
                   (cVar15 = (**(code **)(*param_2 + 0x20))(param_2,lVar6), cVar15 != '\0'))))))))))
            {
              *param_3 = *param_3 + 1;
              cVar15 = (**(code **)(*param_2 + 0x28))(param_2,lVar6);
              if (cVar15 != '\0') {
                return;
              }
            }
            do {
              while( true ) {
                uVar18 = (int)uVar19 + 1;
                uVar19 = (ulonglong)uVar18;
                if (uVar18 < uVar11) break;
                if (uVar11 == uVar18) {
                  return;
                }
              }
            } while (piVar12[uVar19 * 4] == 0);
          } while( true );
        }
      }
      else {
        do {
          if (*piVar16 != 0) goto code_r0x000140169d5a;
          uVar19 = uVar19 + 1;
          piVar16 = piVar16 + 4;
        } while (uRam000000014ab5d228 != uVar19);
      }
      break;
    case 1:
      fVar1 = *(float *)(param_1 + 6);
      auVar21._4_4_ = fVar1;
      auVar21._0_4_ = fVar1;
      auVar21._8_4_ = fVar1;
      auVar21._12_4_ = fVar1;
      auVar20 = *(undefined1 (*) [16])(param_1 + 4);
      uVar19 = 0;
      piVar16 = piRam000000014ab5d230;
      if ((ulonglong)uRam000000014ab5d228 == 0) {
code_r0x000140169e50:
        if ((uint)uVar19 != uRam000000014ab5d228) {
          fVar24 = fVar1 * fVar1;
          auVar23 = vsubps_avx(auVar20,auVar21);
          auVar25 = ZEXT1664(auVar23);
          auVar26 = ZEXT1664(CONCAT412(auVar20._12_4_ + fVar1,
                                       CONCAT48(auVar20._8_4_ + fVar1,
                                                CONCAT44(auVar20._4_4_ + fVar1,auVar20._0_4_ + fVar1
                                                        ))));
          auVar27 = ZEXT1264(ZEXT812(0));
          do {
            lVar6 = *(longlong *)(piVar12 + (uVar19 & 0xffffffff) * 4 + 2);
            if ((lVar6 != 0) &&
               (((((iVar17 == 0xd1 ||
                   ((*(uint *)(lVar6 + 0x54) & *(uint *)((longlong)param_1 + 0x3c)) != 0)) ||
                  ((*(uint *)(lVar6 + 0x58) & (uint)param_1[8]) != 0)) ||
                 (((*(uint *)(lVar6 + 0x5c) & *(uint *)((longlong)param_1 + 0x44)) != 0 ||
                  ((*(uint *)(lVar6 + 0x60) & (uint)param_1[9]) != 0)))) ||
                (((*(uint *)(lVar6 + 100) & *(uint *)((longlong)param_1 + 0x4c)) != 0 ||
                 (((*(uint *)(lVar6 + 0x68) & (uint)param_1[10]) != 0 ||
                  ((*(uint *)(lVar6 + 0x6c) & *(uint *)((longlong)param_1 + 0x54)) != 0)))))))) {
              uStack_e8 = *(undefined8 *)(lVar6 + 0x90);
              uStack_e0 = *(undefined8 *)(lVar6 + 0x98);
              auStack_f8 = *(undefined1 (*) [16])(lVar6 + 0xa0);
              auStack_108 = auVar25._0_16_;
              auStack_118 = auVar26._0_16_;
              cVar15 = func_0x000144ea88c0(&uStack_e8,auStack_f8,auStack_108,auStack_118);
              if ((cVar15 != '\0') &&
                 (((cVar13 == '\0' ||
                   (cVar15 = (**(code **)(*param_2 + 0x18))(param_2,lVar6), cVar15 != '\0')) &&
                  (cVar15 = (**(code **)(**(longlong **)(lVar6 + 0x18) + 0x68))
                                      (*(longlong **)(lVar6 + 0x18),
                                       (undefined1 (*) [16])(param_1 + 4),aauStack_98),
                  cVar15 != '\0')))) {
                auVar20 = vsubps_avx(aauStack_98[0],*(undefined1 (*) [16])(param_1 + 4));
                auVar22._0_4_ = auVar20._0_4_ * auVar20._0_4_;
                auVar22._4_4_ = auVar20._4_4_ * auVar20._4_4_;
                auVar22._8_4_ = auVar20._8_4_ * auVar20._8_4_;
                auVar22._12_4_ = auVar20._12_4_ * auVar20._12_4_;
                auVar20 = vblendps_avx(auVar22,auVar27._0_16_,8);
                auVar20 = vhaddps_avx(auVar20,auVar20);
                auVar20 = vhaddps_avx(auVar20,auVar20);
                if ((auVar20._0_4_ < fVar24) &&
                   ((cVar14 == '\0' ||
                    (cVar15 = (**(code **)(*param_2 + 0x20))(param_2,lVar6), cVar15 != '\0')))) {
                  *param_3 = *param_3 + 1;
                  cVar15 = (**(code **)(*param_2 + 0x28))(param_2,lVar6);
                  if (cVar15 != '\0') {
                    return;
                  }
                }
              }
            }
            do {
              while( true ) {
                uVar18 = (int)uVar19 + 1;
                uVar19 = (ulonglong)uVar18;
                if (uVar18 < uVar11) break;
                if (uVar11 == uVar18) {
                  return;
                }
              }
            } while (piVar12[uVar19 * 4] == 0);
          } while( true );
        }
      }
      else {
        do {
          if (*piVar16 != 0) goto code_r0x000140169e50;
          uVar19 = uVar19 + 1;
          piVar16 = piVar16 + 4;
        } while (uRam000000014ab5d228 != uVar19);
      }
      break;
    case 2:
      auVar20._8_8_ = 0;
      auVar20._0_8_ = *param_1;
      auVar23._8_8_ = 0;
      auVar23._0_8_ = param_1[2];
      uVar19 = 0;
      piVar16 = piRam000000014ab5d230;
      if ((ulonglong)uRam000000014ab5d228 == 0) {
code_r0x000140169ad2:
        if ((uint)uVar19 != uRam000000014ab5d228) {
          auVar22 = vminps_avx(auVar20,auVar23);
          auVar8 = vminss_avx(ZEXT416((uint)param_1[1]),ZEXT416((uint)param_1[3]));
          auVar23 = vmaxps_avx(auVar20,auVar23);
          auVar21 = vmaxss_avx(ZEXT416((uint)param_1[1]),ZEXT416((uint)param_1[3]));
          auVar20 = vinsertps_avx(auVar22,auVar8,0x28);
          auVar25 = ZEXT1664(auVar20);
          auVar20 = vinsertps_avx(auVar23,auVar21,0x28);
          auVar26 = ZEXT1664(auVar20);
          do {
            lVar6 = *(longlong *)(piVar12 + (uVar19 & 0xffffffff) * 4 + 2);
            if ((lVar6 != 0) &&
               ((((iVar17 == 0xd1 ||
                  ((*(uint *)(lVar6 + 0x54) & *(uint *)((longlong)param_1 + 0x3c)) != 0)) ||
                 (((*(uint *)(lVar6 + 0x58) & (uint)param_1[8]) != 0 ||
                  ((((*(uint *)(lVar6 + 0x5c) & *(uint *)((longlong)param_1 + 0x44)) != 0 ||
                    ((*(uint *)(lVar6 + 0x60) & (uint)param_1[9]) != 0)) ||
                   ((*(uint *)(lVar6 + 100) & *(uint *)((longlong)param_1 + 0x4c)) != 0)))))) ||
                (((*(uint *)(lVar6 + 0x68) & (uint)param_1[10]) != 0 ||
                 ((*(uint *)(lVar6 + 0x6c) & *(uint *)((longlong)param_1 + 0x54)) != 0)))))) {
              uStack_a8 = *(undefined8 *)(lVar6 + 0x90);
              uStack_a0 = *(undefined8 *)(lVar6 + 0x98);
              auStack_b8 = *(undefined1 (*) [16])(lVar6 + 0xa0);
              auStack_c8 = auVar25._0_16_;
              auStack_d8 = auVar26._0_16_;
              cVar15 = func_0x000144ea88c0(&uStack_a8,auStack_b8,auStack_c8,auStack_d8);
              if ((cVar15 != '\0') &&
                 (((cVar13 == '\0' ||
                   (cVar15 = (**(code **)(*param_2 + 0x18))(param_2,lVar6), cVar15 != '\0')) &&
                  ((cVar14 == '\0' ||
                   (cVar15 = (**(code **)(*param_2 + 0x20))(param_2,lVar6), cVar15 != '\0')))))) {
                *param_3 = *param_3 + 1;
                cVar15 = (**(code **)(*param_2 + 0x28))(param_2,lVar6);
                if (cVar15 != '\0') {
                  return;
                }
              }
            }
            do {
              while( true ) {
                uVar18 = (int)uVar19 + 1;
                uVar19 = (ulonglong)uVar18;
                if (uVar18 < uVar11) break;
                if (uVar11 == uVar18) {
                  return;
                }
              }
            } while (piVar12[uVar19 * 4] == 0);
          } while( true );
        }
      }
      else {
        do {
          if (*piVar16 != 0) goto code_r0x000140169ad2;
          uVar19 = uVar19 + 1;
          piVar16 = piVar16 + 4;
        } while (uRam000000014ab5d228 != uVar19);
      }
      break;
    case 3:
      uVar19 = 0;
      piVar16 = piRam000000014ab5d230;
      if ((ulonglong)uRam000000014ab5d228 == 0) {
code_r0x000140169c34:
        if ((uint)uVar19 != uRam000000014ab5d228) {
          do {
            lVar6 = *(longlong *)(piVar12 + (uVar19 & 0xffffffff) * 4 + 2);
            if (((lVar6 != 0) &&
                ((((((iVar17 == 0xd1 ||
                     ((*(uint *)(lVar6 + 0x54) & *(uint *)((longlong)param_1 + 0x3c)) != 0)) ||
                    ((*(uint *)(lVar6 + 0x58) & (uint)param_1[8]) != 0)) ||
                   (((*(uint *)(lVar6 + 0x5c) & *(uint *)((longlong)param_1 + 0x44)) != 0 ||
                    ((*(uint *)(lVar6 + 0x60) & (uint)param_1[9]) != 0)))) ||
                  ((*(uint *)(lVar6 + 100) & *(uint *)((longlong)param_1 + 0x4c)) != 0)) ||
                 (((*(uint *)(lVar6 + 0x68) & (uint)param_1[10]) != 0 ||
                  ((*(uint *)(lVar6 + 0x6c) & *(uint *)((longlong)param_1 + 0x54)) != 0)))))) &&
               (((((cVar13 == '\0' ||
                   (cVar15 = (**(code **)(*param_2 + 0x18))(param_2,lVar6), cVar15 != '\0')) &&
                  (plVar7 = *(longlong **)(lVar6 + 0x18), plVar7 != (longlong *)0x0)) &&
                 (((cVar15 = (**(code **)(*plVar7 + 0x40))(plVar7,param_1), cVar15 != '\0' ||
                   (cVar15 = (**(code **)(*plVar7 + 0x40))(plVar7,param_1 + 2), cVar15 != '\0')) ||
                  (cVar15 = (**(code **)(*plVar7 + 0x78))(plVar7,param_1,param_1 + 2,0),
                  cVar15 != '\0')))) &&
                ((cVar14 == '\0' ||
                 (cVar15 = (**(code **)(*param_2 + 0x20))(param_2,lVar6), cVar15 != '\0')))))) {
              *param_3 = *param_3 + 1;
              cVar15 = (**(code **)(*param_2 + 0x28))(param_2,lVar6);
              if (cVar15 != '\0') {
                return;
              }
            }
            do {
              while( true ) {
                uVar18 = (int)uVar19 + 1;
                uVar19 = (ulonglong)uVar18;
                if (uVar18 < uVar11) break;
                if (uVar11 == uVar18) {
                  return;
                }
              }
            } while (piVar12[uVar19 * 4] == 0);
          } while( true );
        }
      }
      else {
        do {
          if (*piVar16 != 0) goto code_r0x000140169c34;
          uVar19 = uVar19 + 1;
          piVar16 = piVar16 + 4;
        } while (uRam000000014ab5d228 != uVar19);
      }
    }
  }
  return;
}

