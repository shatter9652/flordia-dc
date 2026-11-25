// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140139150  size: 1100 bytes
// Name:    FUN_140139150
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145647140
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140139150(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  longlong *plVar5;
  undefined1 auVar6 [16];
  bool bVar7;
  undefined *puVar8;
  char cVar9;
  undefined4 uVar10;
  longlong lVar11;
  longlong *plVar12;
  int iVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  int iVar16;
  longlong lVar17;
  longlong *plVar18;
  longlong lVar19;
  uint uVar20;
  int *piVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  undefined1 auVar25 [16];
  float fVar26;
  undefined1 auVar27 [16];
  undefined8 auStack_a0 [5];
  undefined4 auStack_78 [2];
  undefined8 uStack_70;
  float fStack_68;
  int iStack_64;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined *puStack_50;
  int iStack_48;
  undefined1 uStack_41;
  
  if (*(int *)(param_2 + 8) == 0x10004) {
    puStack_50 = (undefined *)param_1[1];
    puStack_58 = *(undefined8 **)((longlong)puStack_50 + 0x28);
    auStack_a0[2] = 0x140139192;
    uStack_60 = func_0x000144dc9f90(*puStack_58);
    uStack_70 = 0x1401391ad;
    lVar11 = FUN_145647140();
    lVar11 = -lVar11;
    iStack_48 = 0;
    piVar21 = (int *)param_1[7];
    iVar13 = *piVar21;
    if (iVar13 == 0) {
      bVar7 = false;
      iVar16 = -1;
      iVar23 = 0;
    }
    else {
      iVar23 = 0;
      iVar24 = 0;
      bVar7 = false;
      uStack_41 = (char)param_1[5];
      iVar16 = -1;
      do {
        lVar17 = (longlong)iVar16;
code_r0x0001401391e9:
        if (iVar13 - 1U < 5) {
          switch(iVar13) {
          case 1:
            iVar16 = iVar16 + 1;
            *(int *)((longlong)&iStack_64 + lVar17 * 4 + lVar11) = piVar21[1];
            goto LAB_1401392ee;
          case 2:
            iVar22 = piVar21[1];
            if (iVar22 == iVar23) {
              iVar22 = iVar23;
              if (!bVar7) {
                bVar7 = false;
                goto code_r0x00014013936b;
              }
            }
            else {
              uVar14 = CONCAT71((int7)((ulonglong)
                                       (&UNK_14676cb64 +
                                       *(int *)(&UNK_14676cb64 + (ulonglong)(iVar13 - 1U) * 4)) >> 8
                                      ),uStack_41);
              *(undefined8 *)((longlong)auStack_a0 + lVar11 + 0x10) = 0x1401392a1;
              uVar10 = func_0x000140139110(uVar14);
              uVar2 = *(undefined4 *)((longlong)puStack_58 + 0x1c);
              uVar3 = *(undefined4 *)(puStack_58 + 4);
              *(undefined4 *)((longlong)auStack_78 + lVar11) = uVar10;
              *(int **)((longlong)&uStack_70 + lVar11) = &iStack_48;
              uVar14 = uStack_60;
              *(undefined8 *)((longlong)auStack_a0 + lVar11) = 0x1401392cd;
              cVar9 = FUN_144f808e0(uVar14,iVar22,uVar2,uVar3);
              iVar24 = iStack_48;
              if (cVar9 == '\0') {
                bVar7 = false;
                iVar23 = iVar22;
                goto code_r0x00014013936b;
              }
            }
            iVar16 = iVar16 + 1;
            bVar7 = true;
            *(int *)((longlong)&iStack_64 + lVar17 * 4 + lVar11) = iVar24;
            iVar23 = iVar22;
            goto LAB_1401392ee;
          case 3:
            fVar26 = *(float *)((longlong)&fStack_68 + lVar17 * 4 + lVar11) +
                     *(float *)((longlong)&uStack_70 + lVar17 * 4 + lVar11 + 4);
            break;
          case 4:
            fVar26 = *(float *)((longlong)&fStack_68 + lVar17 * 4 + lVar11) *
                     *(float *)((longlong)&uStack_70 + lVar17 * 4 + lVar11 + 4);
            break;
          case 5:
            goto code_r0x0001401391fd;
          }
          *(float *)((longlong)&uStack_70 + lVar17 * 4 + lVar11 + 4) = fVar26;
          iVar16 = iVar16 + -1;
        }
LAB_1401392ee:
        iVar13 = piVar21[2];
        piVar21 = piVar21 + 2;
      } while (iVar13 != 0);
    }
LAB_140139342:
    puVar8 = puStack_50;
    lVar17 = param_1[9];
    pcVar4 = (code *)param_1[8];
    *(undefined8 *)((longlong)auStack_a0 + lVar11 + 0x10) = 0x14013935c;
    (*pcVar4)((longlong)&fStack_68 + (longlong)iVar16 * 4 + lVar11,puVar8,(short)lVar17);
    puStack_50 = (undefined *)param_1[1];
code_r0x00014013936b:
    piVar21 = (int *)param_1[10];
    iVar13 = *piVar21;
    if (iVar13 == 0) {
      iVar16 = -1;
    }
    else {
      puStack_58 = (undefined8 *)CONCAT71(puStack_58._1_7_,(char)param_1[5]);
      iVar16 = -1;
      do {
        lVar17 = (longlong)iVar16;
code_r0x000140139392:
        if (iVar13 - 1U < 5) {
          switch(iVar13) {
          case 1:
            iVar13 = piVar21[1];
            break;
          case 2:
            iVar24 = piVar21[1];
            if (iVar24 == iVar23) {
              if (!bVar7) {
                return;
              }
            }
            else {
              lVar1 = *(longlong *)((longlong)puStack_50 + 0x28);
              uVar14 = CONCAT71((int7)((ulonglong)
                                       (&UNK_14676cb78 +
                                       *(int *)(&UNK_14676cb78 + (ulonglong)(iVar13 - 1U) * 4)) >> 8
                                      ),puStack_58._0_1_);
              *(undefined8 *)((longlong)auStack_a0 + lVar11 + 0x10) = 0x140139453;
              uVar10 = func_0x000140139110(uVar14);
              uVar2 = *(undefined4 *)(lVar1 + 0x1c);
              uVar3 = *(undefined4 *)(lVar1 + 0x20);
              *(undefined4 *)((longlong)auStack_78 + lVar11) = uVar10;
              *(int **)((longlong)&uStack_70 + lVar11) = &iStack_48;
              uVar14 = uStack_60;
              *(undefined8 *)((longlong)auStack_a0 + lVar11) = 0x14013947b;
              cVar9 = FUN_144f808e0(uVar14,iVar24,uVar2,uVar3);
              iVar23 = iVar24;
              if (cVar9 == '\0') {
                return;
              }
            }
            bVar7 = true;
            iVar13 = iStack_48;
            break;
          case 3:
            fVar26 = *(float *)((longlong)&fStack_68 + lVar17 * 4 + lVar11) +
                     *(float *)((longlong)&uStack_70 + lVar17 * 4 + lVar11 + 4);
            goto code_r0x000140139548;
          case 4:
            fVar26 = *(float *)((longlong)&fStack_68 + lVar17 * 4 + lVar11) *
                     *(float *)((longlong)&uStack_70 + lVar17 * 4 + lVar11 + 4);
code_r0x000140139548:
            *(float *)((longlong)&uStack_70 + lVar17 * 4 + lVar11 + 4) = fVar26;
            iVar16 = iVar16 + -1;
            goto LAB_140139498;
          case 5:
            goto code_r0x0001401393a6;
          }
          iVar16 = iVar16 + 1;
          *(int *)((longlong)&iStack_64 + lVar17 * 4 + lVar11) = iVar13;
        }
LAB_140139498:
        iVar13 = piVar21[2];
        piVar21 = piVar21 + 2;
      } while (iVar13 != 0);
    }
LAB_1401394af:
    puVar8 = puStack_50;
    lVar17 = param_1[0xc];
    pcVar4 = (code *)param_1[0xb];
    *(undefined8 *)((longlong)auStack_a0 + lVar11 + 0x10) = 0x1401394c6;
    (*pcVar4)((longlong)&fStack_68 + (longlong)iVar16 * 4 + lVar11,puVar8,(short)lVar17);
  }
  else {
    switch(*(int *)(param_2 + 8)) {
    case 0x1000000:
    case 0x1000004:
      plVar5 = (longlong *)param_1[1];
      if (plVar5 == (longlong *)0x0) {
        return;
      }
      if (((longlong *)param_1[1] == plVar5) &&
         (plVar18 = (longlong *)plVar5[6], plVar18 != (longlong *)0x0)) {
        if (plVar18 == param_1) {
          plVar12 = plVar5 + 6;
        }
        else {
          do {
            plVar12 = plVar18;
            plVar18 = (longlong *)plVar12[2];
            if (plVar18 == (longlong *)0x0) {
              return;
            }
          } while (plVar18 != param_1);
          plVar12 = plVar12 + 2;
        }
        *plVar12 = plVar18[2];
        plVar18[2] = 0;
        if ((*(byte *)((longlong)plVar5 + 0x16) & 4) != 0) {
          if (*(code **)(*param_1 + 0x10) == (code *)&UNK_144ea3280) {
            puStack_50 = &UNK_144ea39df;
            func_0x000144ea3280(param_1,&stack0xffffffffffffffe0);
          }
          else {
            puStack_50 = &UNK_144ea39cd;
            (**(code **)(*param_1 + 0x10))(param_1,&stack0xffffffffffffffe0);
          }
        }
        plVar18[1] = 0;
        LOCK();
        plVar12 = plVar18 + 3;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)*plVar12 == 0) {
          puStack_50 = &UNK_144ea3978;
          (**(code **)*plVar18)(plVar18,1);
        }
        if (*(code **)(*plVar5 + 0x58) == FUN_144ea32a0) {
          puStack_50 = &UNK_144ea3993;
          FUN_144ea32a0(plVar5);
        }
        else {
          puStack_50 = &UNK_144ea39e9;
          (**(code **)(*plVar5 + 0x58))(plVar5);
        }
      }
      return;
    case 0x1000001:
      *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 1;
      break;
    case 0x1000003:
      *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 2;
    }
  }
  return;
code_r0x0001401391fd:
  lVar19 = (longlong)piVar21[1];
  lVar1 = (longlong)piVar21 + (longlong)*(int *)((longlong)piVar21 + lVar19 + 0x10) + lVar19 + 0x10;
  uVar20 = *(uint *)((longlong)piVar21 + lVar19 + 0xc);
  uVar15 = (ulonglong)uVar20;
  if (uVar15 != 0) {
    auVar27 = ZEXT416(*(uint *)((longlong)&fStack_68 + lVar17 * 4 + lVar11));
    auVar6 = vminss_avx(ZEXT416(*(uint *)((longlong)piVar21 + lVar19 + 8)),auVar27);
    auVar25 = ZEXT416(*(uint *)((longlong)piVar21 + lVar19 + 4));
    auVar27 = vcmpss_avx(auVar27,auVar25,1);
    auVar27 = vblendvps_avx(auVar6,auVar25,auVar27);
    lVar19 = lVar1;
    do {
      if (auVar27._0_4_ <= *(float *)(lVar19 + 4)) {
        *(float *)((longlong)&fStack_68 + lVar17 * 4 + lVar11) =
             auVar27._0_4_ * *(float *)(lVar19 + 8) + *(float *)(lVar19 + 0xc);
        break;
      }
      lVar19 = lVar19 + 0x10;
      uVar20 = uVar20 - 1;
    } while (uVar20 != 0);
  }
  lVar19 = uVar15 * 0x10;
  piVar21 = (int *)(lVar1 + lVar19);
  iVar13 = *(int *)(lVar1 + lVar19);
  if (iVar13 == 0) goto LAB_140139342;
  goto code_r0x0001401391e9;
code_r0x0001401393a6:
  lVar19 = (longlong)piVar21[1];
  lVar1 = (longlong)piVar21 + (longlong)*(int *)((longlong)piVar21 + lVar19 + 0x10) + lVar19 + 0x10;
  uVar20 = *(uint *)((longlong)piVar21 + lVar19 + 0xc);
  uVar15 = (ulonglong)uVar20;
  if (uVar15 != 0) {
    auVar27 = ZEXT416(*(uint *)((longlong)&fStack_68 + lVar17 * 4 + lVar11));
    auVar6 = vminss_avx(ZEXT416(*(uint *)((longlong)piVar21 + lVar19 + 8)),auVar27);
    auVar25 = ZEXT416(*(uint *)((longlong)piVar21 + lVar19 + 4));
    auVar27 = vcmpss_avx(auVar27,auVar25,1);
    auVar27 = vblendvps_avx(auVar6,auVar25,auVar27);
    lVar19 = lVar1;
    do {
      if (auVar27._0_4_ <= *(float *)(lVar19 + 4)) {
        *(float *)((longlong)&fStack_68 + lVar17 * 4 + lVar11) =
             auVar27._0_4_ * *(float *)(lVar19 + 8) + *(float *)(lVar19 + 0xc);
        break;
      }
      lVar19 = lVar19 + 0x10;
      uVar20 = uVar20 - 1;
    } while (uVar20 != 0);
  }
  lVar19 = uVar15 * 0x10;
  piVar21 = (int *)(lVar1 + lVar19);
  iVar13 = *(int *)(lVar1 + lVar19);
  if (iVar13 == 0) goto LAB_1401394af;
  goto code_r0x000140139392;
}

