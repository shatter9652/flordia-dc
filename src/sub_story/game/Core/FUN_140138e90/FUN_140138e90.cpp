// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140138e90  size: 628 bytes
// Name:    FUN_140138e90
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145647140
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140138e90(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong lVar3;
  code *pcVar4;
  longlong *plVar5;
  undefined1 auVar6 [16];
  undefined *puVar7;
  char cVar8;
  int iVar9;
  undefined4 uVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  int *piVar15;
  longlong *plVar16;
  int iVar17;
  ulonglong uVar18;
  longlong lVar19;
  uint uVar20;
  int iVar21;
  longlong lVar22;
  undefined4 uVar23;
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined8 auStack_90 [5];
  undefined4 auStack_68 [2];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined4 uStack_48;
  undefined1 uStack_41;
  
  if (*(int *)(param_2 + 8) == 0x10004) {
    puStack_50 = (undefined *)param_1[1];
    lVar3 = *(longlong *)((longlong)puStack_50 + 0x28);
    auStack_90[2] = 0x140138ef6;
    uStack_58 = func_0x000144dc9f90();
    uStack_60 = 0x140138f11;
    lVar11 = FUN_145647140();
    lVar11 = -lVar11;
    uStack_48 = 0;
    piVar15 = (int *)param_1[7];
    iVar17 = *piVar15;
    if (iVar17 != 0) {
      iVar21 = -1;
      uVar23 = 0;
      uVar14 = 0;
      uStack_41 = (char)param_1[5];
      iVar9 = 0;
LAB_140138f48:
      lVar22 = (longlong)iVar21;
code_r0x000140138f4b:
      switch(iVar17) {
      case 1:
        goto code_r0x0001401390ab;
      case 2:
        iVar17 = piVar15[1];
        if (iVar17 == iVar9) {
          iVar17 = iVar9;
          if ((uVar14 & 1) == 0) {
            return;
          }
        }
        else {
          uVar13 = CONCAT71((int7)(uVar14 >> 8),uStack_41);
          *(undefined8 *)((longlong)auStack_90 + lVar11 + 0x10) = 0x140139006;
          uVar10 = func_0x000140139110(uVar13);
          uVar23 = *(undefined4 *)(lVar3 + 0x1c);
          uVar2 = *(undefined4 *)(lVar3 + 0x20);
          *(undefined4 *)((longlong)auStack_68 + lVar11) = uVar10;
          *(undefined4 **)((longlong)&uStack_60 + lVar11) = &uStack_48;
          uVar14 = uStack_58;
          *(undefined8 *)((longlong)auStack_90 + lVar11) = 0x140139030;
          cVar8 = FUN_144f808e0(uVar14,iVar17,uVar23,uVar2);
          uVar23 = uStack_48;
          if (cVar8 == '\0') {
            return;
          }
        }
        iVar21 = iVar21 + 1;
        uVar14 = CONCAT71((int7)(uVar14 >> 8),1);
        *(undefined4 *)((longlong)&uStack_58 + lVar22 * 4 + lVar11 + 4) = uVar23;
        iVar9 = iVar17;
        goto LAB_140139051;
      case 3:
        fVar24 = *(float *)((longlong)&uStack_58 + lVar22 * 4 + lVar11) +
                 *(float *)((longlong)&uStack_60 + lVar22 * 4 + lVar11 + 4);
        break;
      case 4:
        fVar24 = *(float *)((longlong)&uStack_58 + lVar22 * 4 + lVar11) *
                 *(float *)((longlong)&uStack_60 + lVar22 * 4 + lVar11 + 4);
        break;
      case 5:
        goto code_r0x000140138f62;
      default:
        goto LAB_140139051;
      }
      *(float *)((longlong)&uStack_60 + lVar22 * 4 + lVar11 + 4) = fVar24;
      iVar21 = iVar21 + -1;
      goto LAB_140139051;
    }
    iVar21 = -1;
LAB_140139081:
    puVar7 = puStack_50;
    lVar3 = param_1[9];
    pcVar4 = (code *)param_1[8];
    *(undefined8 *)((longlong)auStack_90 + lVar11 + 0x10) = 0x140139099;
    (*pcVar4)((longlong)&uStack_58 + (longlong)iVar21 * 4 + lVar11,puVar7,(short)lVar3);
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
         (plVar16 = (longlong *)plVar5[6], plVar16 != (longlong *)0x0)) {
        if (plVar16 == param_1) {
          plVar12 = plVar5 + 6;
        }
        else {
          do {
            plVar12 = plVar16;
            plVar16 = (longlong *)plVar12[2];
            if (plVar16 == (longlong *)0x0) {
              return;
            }
          } while (plVar16 != param_1);
          plVar12 = plVar12 + 2;
        }
        *plVar12 = plVar16[2];
        plVar16[2] = 0;
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
        plVar16[1] = 0;
        LOCK();
        plVar12 = plVar16 + 3;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)*plVar12 == 0) {
          puStack_50 = &UNK_144ea3978;
          (**(code **)*plVar16)(plVar16,1);
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
code_r0x000140138f62:
  lVar19 = (longlong)piVar15[1];
  lVar1 = (longlong)piVar15 + (longlong)*(int *)((longlong)piVar15 + lVar19 + 0x10) + lVar19 + 0x10;
  uVar20 = *(uint *)((longlong)piVar15 + lVar19 + 0xc);
  uVar18 = (ulonglong)uVar20;
  if (uVar18 != 0) {
    auVar26 = ZEXT416(*(uint *)((longlong)&uStack_58 + lVar22 * 4 + lVar11));
    auVar6 = vminss_avx(ZEXT416(*(uint *)((longlong)piVar15 + lVar19 + 8)),auVar26);
    auVar25 = ZEXT416(*(uint *)((longlong)piVar15 + lVar19 + 4));
    auVar26 = vcmpss_avx(auVar26,auVar25,1);
    auVar26 = vblendvps_avx(auVar6,auVar25,auVar26);
    lVar19 = lVar1;
    do {
      if (auVar26._0_4_ <= *(float *)(lVar19 + 4)) {
        *(float *)((longlong)&uStack_58 + lVar22 * 4 + lVar11) =
             auVar26._0_4_ * *(float *)(lVar19 + 8) + *(float *)(lVar19 + 0xc);
        break;
      }
      lVar19 = lVar19 + 0x10;
      uVar20 = uVar20 - 1;
    } while (uVar20 != 0);
  }
  lVar19 = uVar18 * 0x10;
  piVar15 = (int *)(lVar1 + lVar19);
  iVar17 = *(int *)(lVar1 + lVar19);
  if (iVar17 == 0) goto LAB_140139081;
  goto code_r0x000140138f4b;
code_r0x0001401390ab:
  iVar21 = iVar21 + 1;
  *(int *)((longlong)&uStack_58 + lVar22 * 4 + lVar11 + 4) = piVar15[1];
LAB_140139051:
  iVar17 = piVar15[2];
  piVar15 = piVar15 + 2;
  if (iVar17 == 0) goto LAB_140139081;
  goto LAB_140138f48;
}

