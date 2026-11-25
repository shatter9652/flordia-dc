// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140138b70  size: 721 bytes
// Name:    FUN_140138b70
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145647140
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140138b70(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  float fVar7;
  char cVar8;
  undefined4 uVar9;
  longlong lVar10;
  longlong *plVar11;
  int iVar12;
  undefined8 uVar13;
  int *piVar14;
  longlong *plVar15;
  int iVar16;
  longlong lVar17;
  longlong *plVar18;
  longlong lVar19;
  uint uVar20;
  ulonglong uVar22;
  bool bVar23;
  int iVar24;
  longlong lVar25;
  int iVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined8 auStack_a0 [5];
  undefined4 auStack_78 [2];
  undefined8 uStack_70;
  undefined8 uStack_68;
  longlong *plStack_60;
  undefined8 uStack_58;
  longlong *plStack_50;
  int iStack_48;
  undefined1 uStack_41;
  ulonglong uVar21;
  
  if (*(int *)(param_2 + 8) == 0x10004) {
    auStack_a0[2] = 0x140138baa;
    uStack_58 = func_0x000144dc9f90(**(undefined8 **)(param_1[1] + 0x28));
    uStack_70 = 0x140138bc9;
    lVar10 = FUN_145647140();
    lVar10 = -lVar10;
    plVar15 = param_1 + 7;
    lVar17 = 0;
    iVar26 = 0;
    bVar23 = false;
    plStack_60 = param_1;
    iStack_48 = 0;
    plStack_50 = plVar15;
    do {
      lVar4 = plStack_60[1];
      piVar14 = (int *)plVar15[lVar17 * 3];
      uStack_68 = lVar17 * 3;
      iVar12 = *piVar14;
      if (iVar12 == 0) {
        iVar24 = -1;
      }
      else {
        uStack_41 = (char)plStack_60[5];
        iVar24 = -1;
        do {
          lVar25 = (longlong)iVar24;
code_r0x000140138c1b:
          if (iVar12 - 1U < 5) {
            switch(iVar12) {
            case 1:
              iVar12 = piVar14[1];
              break;
            case 2:
              iVar16 = piVar14[1];
              if (iVar16 == iVar26) {
                iVar16 = iVar26;
                if (!bVar23) {
                  bVar23 = false;
                  plVar15 = plStack_50;
                  goto code_r0x000140138d77;
                }
              }
              else {
                lVar1 = *(longlong *)(lVar4 + 0x28);
                uVar13 = CONCAT71((int7)((ulonglong)
                                         (&UNK_14676caf0 +
                                         *(int *)(&UNK_14676caf0 + (ulonglong)(iVar12 - 1U) * 4)) >>
                                        8),uStack_41);
                *(undefined8 *)((longlong)auStack_a0 + lVar10 + 0x10) = 0x140138d04;
                uVar9 = func_0x000140139110(uVar13);
                uVar2 = *(undefined4 *)(lVar1 + 0x1c);
                uVar3 = *(undefined4 *)(lVar1 + 0x20);
                *(undefined4 *)((longlong)auStack_78 + lVar10) = uVar9;
                *(int **)((longlong)&uStack_70 + lVar10) = &iStack_48;
                uVar13 = uStack_58;
                *(undefined8 *)((longlong)auStack_a0 + lVar10) = 0x140138d2c;
                cVar8 = FUN_144f808e0(uVar13,iVar16,uVar2,uVar3);
                if (cVar8 == '\0') {
                  bVar23 = false;
                  plVar15 = plStack_50;
                  iVar26 = iVar16;
                  goto code_r0x000140138d77;
                }
              }
              bVar23 = true;
              iVar26 = iVar16;
              iVar12 = iStack_48;
              break;
            case 3:
              fVar7 = *(float *)((longlong)&uStack_68 + lVar25 * 4 + lVar10) +
                      *(float *)((longlong)&uStack_70 + lVar25 * 4 + lVar10 + 4);
              goto code_r0x000140138e25;
            case 4:
              fVar7 = *(float *)((longlong)&uStack_68 + lVar25 * 4 + lVar10) *
                      *(float *)((longlong)&uStack_70 + lVar25 * 4 + lVar10 + 4);
code_r0x000140138e25:
              *(float *)((longlong)&uStack_70 + lVar25 * 4 + lVar10 + 4) = fVar7;
              iVar24 = iVar24 + -1;
              goto LAB_140138cdd;
            case 5:
              goto code_r0x000140138c2f;
            }
            iVar24 = iVar24 + 1;
            *(int *)((longlong)&uStack_68 + lVar25 * 4 + lVar10 + 4) = iVar12;
          }
LAB_140138cdd:
          iVar12 = piVar14[2];
          piVar14 = piVar14 + 2;
        } while (iVar12 != 0);
      }
LAB_140138d4a:
      plVar15 = plStack_50;
      lVar25 = plStack_50[uStack_68 + 2];
      pcVar5 = (code *)plStack_50[uStack_68 + 1];
      *(undefined8 *)((longlong)auStack_a0 + lVar10 + 0x10) = 0x140138d69;
      (*pcVar5)((longlong)&uStack_68 + (longlong)iVar24 * 4 + lVar10,lVar4,(short)lVar25);
code_r0x000140138d77:
      lVar17 = lVar17 + 1;
    } while (lVar17 != 5);
  }
  else {
    switch(*(int *)(param_2 + 8)) {
    case 0x1000000:
    case 0x1000004:
      plVar15 = (longlong *)param_1[1];
      if (plVar15 == (longlong *)0x0) {
        return;
      }
      if (((longlong *)param_1[1] == plVar15) &&
         (plVar18 = (longlong *)plVar15[6], plVar18 != (longlong *)0x0)) {
        if (plVar18 == param_1) {
          plVar11 = plVar15 + 6;
        }
        else {
          do {
            plVar11 = plVar18;
            plVar18 = (longlong *)plVar11[2];
            if (plVar18 == (longlong *)0x0) {
              return;
            }
          } while (plVar18 != param_1);
          plVar11 = plVar11 + 2;
        }
        *plVar11 = plVar18[2];
        plVar18[2] = 0;
        if ((*(byte *)((longlong)plVar15 + 0x16) & 4) != 0) {
          if (*(code **)(*param_1 + 0x10) == (code *)&UNK_144ea3280) {
            plStack_50 = (longlong *)&UNK_144ea39df;
            func_0x000144ea3280(param_1,&stack0xffffffffffffffe0);
          }
          else {
            plStack_50 = (longlong *)&UNK_144ea39cd;
            (**(code **)(*param_1 + 0x10))(param_1,&stack0xffffffffffffffe0);
          }
        }
        plVar18[1] = 0;
        LOCK();
        plVar11 = plVar18 + 3;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)*plVar11 == 0) {
          plStack_50 = (longlong *)&UNK_144ea3978;
          (**(code **)*plVar18)(plVar18,1);
        }
        if (*(code **)(*plVar15 + 0x58) == FUN_144ea32a0) {
          plStack_50 = (longlong *)&UNK_144ea3993;
          FUN_144ea32a0(plVar15);
        }
        else {
          plStack_50 = (longlong *)&UNK_144ea39e9;
          (**(code **)(*plVar15 + 0x58))(plVar15);
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
code_r0x000140138c2f:
  lVar19 = (longlong)piVar14[1];
  uVar22 = (ulonglong)*(uint *)((longlong)piVar14 + lVar19 + 0xc);
  lVar1 = (longlong)piVar14 + (longlong)*(int *)((longlong)piVar14 + lVar19 + 0x10) + lVar19 + 0x10;
  if (uVar22 != 0) {
    auVar28 = ZEXT416(*(uint *)((longlong)&uStack_68 + lVar25 * 4 + lVar10));
    auVar6 = vminss_avx(ZEXT416(*(uint *)((longlong)piVar14 + lVar19 + 8)),auVar28);
    auVar27 = ZEXT416(*(uint *)((longlong)piVar14 + lVar19 + 4));
    auVar28 = vcmpss_avx(auVar28,auVar27,1);
    auVar28 = vblendvps_avx(auVar6,auVar27,auVar28);
    lVar19 = lVar1;
    uVar21 = uVar22;
    do {
      if (auVar28._0_4_ <= *(float *)(lVar19 + 4)) {
        *(float *)((longlong)&uStack_68 + lVar25 * 4 + lVar10) =
             auVar28._0_4_ * *(float *)(lVar19 + 8) + *(float *)(lVar19 + 0xc);
        break;
      }
      lVar19 = lVar19 + 0x10;
      uVar20 = (int)uVar21 - 1;
      uVar21 = (ulonglong)uVar20;
    } while (uVar20 != 0);
  }
  piVar14 = (int *)(lVar1 + uVar22 * 0x10);
  iVar12 = *(int *)(lVar1 + uVar22 * 0x10);
  if (iVar12 == 0) goto LAB_140138d4a;
  goto code_r0x000140138c1b;
}

