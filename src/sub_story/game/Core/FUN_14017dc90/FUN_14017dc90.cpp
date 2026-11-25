// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14017dc90  size: 713 bytes
// Name:    FUN_14017dc90
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140793860, FUN_1413b86f0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14017dc90(longlong param_1,ushort param_2,uint param_3)

{
  undefined1 auVar1 [16];
  int *piVar2;
  undefined1 auVar3 [16];
  ushort uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  uint uVar13;
  byte bVar14;
  uint uVar16;
  int iVar17;
  int iVar18;
  longlong lVar19;
  longlong lVar20;
  ulonglong uVar21;
  undefined1 auVar22 [16];
  uint uStack_64;
  int *piStack_60;
  longlong lStack_58;
  uint uStack_4c;
  char cStack_48;
  byte bVar15;
  
  lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x70) + (ulonglong)param_2 * 8);
  if (lVar7 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *(uint *)(lVar7 + 0x18);
  }
  if (uVar9 == param_3) {
    return;
  }
  uStack_64 = uVar9;
  if ((param_3 != 0) && (*(longlong *)(param_1 + 0x90) != 0)) {
    FUN_140793860(param_1,*(longlong *)(param_1 + 0x90),0);
    piVar2 = *(int **)(param_1 + 0x90);
    iVar18 = *piVar2;
    if (iVar18 != 0) {
      lVar7 = *(longlong *)(piVar2 + 2);
      uVar8 = param_3 >> 7;
      bVar15 = (byte)param_3;
      bVar14 = bVar15 & 0x7f;
      auVar22._0_8_ =
           CONCAT17(bVar15,CONCAT16(bVar15,CONCAT15(bVar15,CONCAT14(bVar15,CONCAT13(bVar15,CONCAT12(
                                                  bVar15,CONCAT11(bVar15,bVar15))))))) &
           0x7f7f7f7f7f7f7f7f;
      auVar22[8] = bVar14;
      auVar22[9] = bVar14;
      auVar22[10] = bVar14;
      auVar22[0xb] = bVar14;
      auVar22[0xc] = bVar14;
      auVar22[0xd] = bVar14;
      auVar22[0xe] = bVar14;
      auVar22[0xf] = bVar14;
      while( true ) {
        uVar8 = uVar8 & iVar18 - 1U;
        auVar1 = *(undefined1 (*) [16])(lVar7 + (ulonglong)uVar8 * 0x90);
        auVar3 = vpcmpeqb_avx(auVar1,auVar22);
        uVar4 = (ushort)(SUB161(auVar3 >> 7,0) & 1) | (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar3[0xf] >> 7) << 0xf;
        uVar13 = (uint)uVar4;
        if (uVar4 != 0) {
          do {
            uVar16 = 0;
            for (uVar5 = uVar13; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
              uVar16 = uVar16 + 1;
            }
            if (*(uint *)((ulonglong)uVar8 * 0x90 + lVar7 + 0x10 + (ulonglong)uVar16 * 8) == param_3
               ) {
              uVar8 = uVar8 << 4 | uVar16;
              if (uVar8 == 0xffffffff) goto LAB_14017dedc;
              uVar8 = uVar8 >> 4;
              uVar16 = uVar16 & 0xf;
              uVar9 = uVar8;
              goto LAB_14017dd9b;
            }
            uVar13 = uVar13 - 1 & uVar13;
          } while (uVar13 != 0);
        }
        auVar1 = vpsignb_avx(auVar1,auVar1);
        if ((((((((((((((((SUB161(auVar1 >> 7,0) & 1) != 0 || (SUB161(auVar1 >> 0xf,0) & 1) != 0) ||
                        (SUB161(auVar1 >> 0x17,0) & 1) != 0) || (SUB161(auVar1 >> 0x1f,0) & 1) != 0)
                      || (SUB161(auVar1 >> 0x27,0) & 1) != 0) || (SUB161(auVar1 >> 0x2f,0) & 1) != 0
                     ) || (SUB161(auVar1 >> 0x37,0) & 1) != 0) ||
                   (SUB161(auVar1 >> 0x3f,0) & 1) != 0) || (SUB161(auVar1 >> 0x47,0) & 1) != 0) ||
                 (SUB161(auVar1 >> 0x4f,0) & 1) != 0) || (SUB161(auVar1 >> 0x57,0) & 1) != 0) ||
               (SUB161(auVar1 >> 0x5f,0) & 1) != 0) || (SUB161(auVar1 >> 0x67,0) & 1) != 0) ||
             (SUB161(auVar1 >> 0x6f,0) & 1) != 0) || (SUB161(auVar1 >> 0x77,0) & 1) != 0) ||
            auVar1[0xf] < '\0') break;
        uVar8 = uVar8 + 1;
      }
    }
  }
  goto LAB_14017dedc;
code_r0x00014017de15:
  uVar21 = uVar21 + 1;
  if (uVar12 == uVar21) goto LAB_14017dea4;
  goto LAB_14017dde1;
LAB_14017dd9b:
  lVar19 = (ulonglong)uVar9 * 0x90;
  lVar20 = lVar7 + lVar19;
  auVar22 = vpsignb_avx(*(undefined1 (*) [16])(lVar7 + lVar19),
                        *(undefined1 (*) [16])(lVar7 + lVar19));
  uVar13 = 0;
  uVar10 = (uint)(ushort)((ushort)(SUB161(auVar22 >> 7,0) & 1) |
                          (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
                          (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
                          (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
                          (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
                          (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
                          (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
                          (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7 |
                          (ushort)(SUB161(auVar22 >> 0x47,0) & 1) << 8 |
                          (ushort)(SUB161(auVar22 >> 0x4f,0) & 1) << 9 |
                          (ushort)(SUB161(auVar22 >> 0x57,0) & 1) << 10 |
                          (ushort)(SUB161(auVar22 >> 0x5f,0) & 1) << 0xb |
                          (ushort)(SUB161(auVar22 >> 0x67,0) & 1) << 0xc |
                          (ushort)(SUB161(auVar22 >> 0x6f,0) & 1) << 0xd |
                          (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe |
                         (ushort)(byte)(auVar22[0xf] >> 7) << 0xf);
  for (uVar5 = uVar10; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
    uVar13 = uVar13 + 1;
  }
  uVar12 = (ulonglong)uVar13;
  if (uVar10 == 0) {
    uVar12 = 0x10;
  }
  iVar11 = (int)uVar12;
  if (uVar9 == uVar8) {
    uVar21 = (ulonglong)uVar16;
LAB_14017de74:
    uVar13 = iVar11 - 1;
    uVar16 = (uint)uVar21;
    uVar8 = uVar9;
    if (uVar13 != uVar16) {
      *(undefined1 *)(lVar20 + (uVar21 & 0xffffffff)) = *(undefined1 *)(lVar20 + (ulonglong)uVar13);
      *(undefined8 *)(lVar20 + 0x10 + (uVar21 & 0xffffffff) * 8) =
           *(undefined8 *)(lVar20 + 0x10 + (ulonglong)uVar13 * 8);
      lVar7 = *(longlong *)(piVar2 + 2);
      uVar16 = uVar13;
    }
LAB_14017dea4:
    if (iVar11 != 0x10) goto LAB_14017deba;
    iVar18 = *piVar2;
    uVar9 = uVar9 + 1 & iVar18 - 1U;
    goto LAB_14017dd9b;
  }
  if (iVar11 != 0) {
    uVar21 = 0;
LAB_14017dde1:
    uVar13 = *(uint *)(lVar20 + 0x10 + uVar21 * 8) >> 7 & iVar18 + 0x1ffffffU;
    iVar6 = 0;
    if (uVar8 < uVar13) {
      iVar6 = iVar18;
    }
    iVar17 = 0;
    if (uVar9 < uVar13) {
      iVar17 = iVar18;
    }
    if (iVar17 + (uVar9 - uVar13) < iVar6 + (uVar8 - uVar13)) goto code_r0x00014017de15;
    lVar7 = lVar7 + (ulonglong)uVar8 * 0x90;
    *(undefined1 *)((ulonglong)uVar16 + lVar7) = *(undefined1 *)(lVar20 + uVar21);
    *(undefined8 *)(lVar7 + 0x10 + (ulonglong)uVar16 * 8) =
         *(undefined8 *)(lVar20 + 0x10 + uVar21 * 8);
    lVar7 = *(longlong *)(piVar2 + 2);
    lVar20 = lVar7 + lVar19;
    auVar22 = vpsignb_avx(*(undefined1 (*) [16])(lVar7 + lVar19),
                          *(undefined1 (*) [16])(lVar7 + lVar19));
    iVar11 = 0;
    uVar13 = (uint)(ushort)((ushort)(SUB161(auVar22 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar22 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar22 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar22 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar22 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar22 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar22 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar22[0xf] >> 7) << 0xf);
    for (uVar8 = uVar13; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
      iVar11 = iVar11 + 1;
    }
    if (uVar13 == 0) {
      iVar11 = 0x10;
    }
    goto LAB_14017de74;
  }
LAB_14017deba:
  *(undefined1 *)((ulonglong)uVar16 + (ulonglong)uVar8 * 0x90 + lVar7) = 0x80;
  piVar2[1] = piVar2[1] + -1;
  uVar9 = uStack_64;
  piStack_60 = piVar2;
LAB_14017dedc:
  if (uVar9 != 0) {
    func_0x000140793840(param_1,0);
    FUN_1413b86f0(*(undefined8 *)(param_1 + 0x90),&lStack_58,&uStack_64);
    if (cStack_48 == '\0') {
      uVar12 = (ulonglong)(uStack_4c & 0xf);
      uVar21 = (ulonglong)(uStack_4c >> 4);
    }
    else {
      uVar12 = (ulonglong)(uStack_4c & 0xf);
      uVar21 = (ulonglong)(uStack_4c >> 4);
      *(uint *)(uVar21 * 0x90 + lStack_58 + 0x10 + uVar12 * 8) = uVar9;
    }
    *(ushort *)(uVar21 * 0x90 + lStack_58 + 0x14 + uVar12 * 8) = param_2;
  }
  return;
}

