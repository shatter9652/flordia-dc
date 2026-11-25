// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400fb700  size: 898 bytes
// Name:    FUN_1400fb700
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140644b10, FUN_1454bfed0, FUN_140644ef0, FUN_14131d9d0, FUN_1437d2f70, FUN_1457903b0, FUN_142059720, FUN_140645130, FUN_144f61f30, FUN_140644920
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400fb700(longlong param_1,uint param_2,undefined1 param_3)

{
  int *piVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined8 uVar9;
  byte bVar10;
  uint uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  longlong lVar15;
  uint uVar16;
  uint uVar17;
  undefined8 *puVar18;
  undefined1 auVar19 [16];
  undefined1 auVar21 [64];
  int iStack_148;
  uint uStack_144;
  undefined1 auStack_140 [16];
  undefined1 auStack_130 [72];
  undefined1 auStack_e8 [16];
  code *pcStack_d8;
  undefined1 auStack_d0 [80];
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  byte bVar11;
  undefined1 auVar20 [64];
  
  if (*(int *)(param_1 + 0x134) == 0) {
    return;
  }
  piVar1 = (int *)(param_1 + 0x130);
  if (*piVar1 == 0) {
    return;
  }
  lVar15 = *(longlong *)(param_1 + 0x138);
  uVar12 = (param_2 >> 0x10 ^ param_2) * -0x7a143595;
  uVar12 = (uVar12 >> 0xd ^ uVar12) * -0x3d4d51cb;
  uVar12 = uVar12 >> 0x10 ^ uVar12;
  uVar16 = uVar12 >> 7;
  bVar11 = (byte)uVar12;
  bVar10 = bVar11 & 0x7f;
  auVar19._0_8_ =
       CONCAT17(bVar11,CONCAT16(bVar11,CONCAT15(bVar11,CONCAT14(bVar11,CONCAT13(bVar11,CONCAT12(
                                                  bVar11,CONCAT11(bVar11,bVar11))))))) &
       0x7f7f7f7f7f7f7f7f;
  auVar19[8] = bVar10;
  auVar19[9] = bVar10;
  auVar19[10] = bVar10;
  auVar19[0xb] = bVar10;
  auVar19[0xc] = bVar10;
  auVar19[0xd] = bVar10;
  auVar19[0xe] = bVar10;
  auVar19[0xf] = bVar10;
  auVar20 = ZEXT1664(auVar19);
  uVar12 = uVar16;
  do {
    uVar12 = uVar12 & *piVar1 - 1U;
    auVar2 = *(undefined1 (*) [16])(lVar15 + (ulonglong)uVar12 * 400);
    auVar3 = vpcmpeqb_avx(auVar2,auVar19);
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
            (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe | (ushort)(byte)(auVar3[0xf] >> 7) << 0xf;
    if (uVar4 != 0) {
      uVar17 = (uint)uVar4;
      do {
        uVar5 = 0;
        for (uVar6 = uVar17; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar5 = uVar5 + 1;
        }
        if (*(uint *)((ulonglong)uVar12 * 400 + lVar15 + 0x10 + (ulonglong)uVar5 * 0x18) == param_2)
        {
          uVar12 = uVar12 << 4 | uVar5;
          if (uVar12 == 0xffffffff) {
            return;
          }
          lVar15 = lVar15 + (ulonglong)(uVar12 >> 4) * 400;
          uStack_144 = param_2;
          FUN_140644b10(auStack_140,2);
          FUN_140644ef0();
          auVar19 = auVar20._0_16_;
          uVar7 = (ulonglong)*(uint *)(lVar15 + 0x1c + (ulonglong)(uVar5 & 0xf) * 0x18);
          if (uVar7 == 0) goto LAB_1400fb9b7;
          lVar15 = lVar15 + 0x18 + (ulonglong)(uVar5 & 0xf) * 0x18;
          auVar21 = ZEXT1264(ZEXT812(0));
          puVar18 = *(undefined8 **)(lVar15 + 8);
          puVar14 = puVar18 + uVar7 * 3;
          goto LAB_1400fb84c;
        }
        uVar17 = uVar17 - 1 & uVar17;
      } while (uVar17 != 0);
    }
    auVar2 = vpsignb_avx(auVar2,auVar2);
    if ((((((((((((((((SUB161(auVar2 >> 7,0) & 1) != 0 || (SUB161(auVar2 >> 0xf,0) & 1) != 0) ||
                    (SUB161(auVar2 >> 0x17,0) & 1) != 0) || (SUB161(auVar2 >> 0x1f,0) & 1) != 0) ||
                  (SUB161(auVar2 >> 0x27,0) & 1) != 0) || (SUB161(auVar2 >> 0x2f,0) & 1) != 0) ||
                (SUB161(auVar2 >> 0x37,0) & 1) != 0) || (SUB161(auVar2 >> 0x3f,0) & 1) != 0) ||
              (SUB161(auVar2 >> 0x47,0) & 1) != 0) || (SUB161(auVar2 >> 0x4f,0) & 1) != 0) ||
            (SUB161(auVar2 >> 0x57,0) & 1) != 0) || (SUB161(auVar2 >> 0x5f,0) & 1) != 0) ||
          (SUB161(auVar2 >> 0x67,0) & 1) != 0) || (SUB161(auVar2 >> 0x6f,0) & 1) != 0) ||
        (SUB161(auVar2 >> 0x77,0) & 1) != 0) || auVar2[0xf] < '\0') {
      return;
    }
    uVar12 = uVar12 + 1;
  } while( true );
LAB_1400fb84c:
  uVar12 = (uint)uVar7;
  if (puVar18[2] == 0) {
    puVar13 = puVar18 + 3;
    if (puVar13 != puVar14) {
      do {
        puVar13[-3] = *puVar13;
        puVar13[-2] = puVar13[1];
        puVar13[-1] = puVar13[2];
        puVar13 = puVar13 + 3;
      } while (puVar13 != puVar14);
LAB_1400fb92f:
      uVar12 = *(uint *)(lVar15 + 4);
    }
LAB_1400fb932:
    uVar12 = uVar12 - 1;
    *(uint *)(lVar15 + 4) = uVar12;
  }
  else {
    FUN_1454bfed0(&iStack_148,*(undefined4 *)(puVar18[2] + 4));
    if (((((iStack_148 == 0) || (lVar8 = FUN_144f61f30(), lVar8 == 0)) ||
         (*(char *)(lVar8 + 0x344) == '\a')) ||
        ((lVar8 = FUN_144f61f30(iStack_148), *(char *)(lVar8 + 0x344) == '\x04' ||
         (*(char *)(lVar8 + 0x344) == '\x05')))) || (*(char *)(lVar8 + 0x344) == '\x06')) {
      lVar8 = puVar18[2];
      if (lVar8 != 0) {
        FUN_14131d9d0(lVar8);
        func_0x000144d9c130(lVar8,8);
      }
      puVar18[2] = 0;
      puVar14 = puVar18 + 3;
      uVar12 = *(uint *)(lVar15 + 4);
      puVar13 = (undefined8 *)((ulonglong)uVar12 * 0x18 + *(longlong *)(lVar15 + 8));
      if (puVar14 != puVar13) {
        do {
          puVar14[-3] = *puVar14;
          puVar14[-2] = puVar14[1];
          puVar14[-1] = puVar14[2];
          puVar14 = puVar14 + 3;
        } while (puVar14 != puVar13);
        goto LAB_1400fb92f;
      }
      goto LAB_1400fb932;
    }
    uVar9 = FUN_144f61f30(iStack_148);
    pcStack_d8 = (code *)0x0;
    auStack_e8 = auVar21._0_16_;
    uStack_70 = 0;
    auStack_80 = auStack_e8;
    FUN_1457903b0(uVar9,*(undefined4 *)puVar18[2],auStack_d0,param_3);
    if (pcStack_d8 != (code *)0x0) {
      (*pcStack_d8)(auStack_130);
    }
    uVar12 = *(uint *)(lVar15 + 4);
    puVar18 = puVar18 + 3;
  }
  uVar7 = (ulonglong)uVar12;
  auVar19 = auVar20._0_16_;
  puVar14 = (undefined8 *)(uVar7 * 0x18 + *(longlong *)(lVar15 + 8));
  if (puVar18 == puVar14) {
    if (uVar12 == 0) {
LAB_1400fb9b7:
      if (*piVar1 != 0) {
        while( true ) {
          uVar16 = uVar16 & *piVar1 - 1U;
          auVar2 = *(undefined1 (*) [16])(*(longlong *)(param_1 + 0x138) + (ulonglong)uVar16 * 400);
          auVar3 = vpcmpeqb_avx(auVar2,auVar19);
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
          if (uVar4 != 0) {
            uVar12 = (uint)uVar4;
            do {
              uVar17 = 0;
              for (uVar5 = uVar12; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
                uVar17 = uVar17 + 1;
              }
              if (*(uint *)((ulonglong)uVar16 * 400 + *(longlong *)(param_1 + 0x138) + 0x10 +
                           (ulonglong)uVar17 * 0x18) == uStack_144) {
                if ((uVar17 | uVar16 << 4) != 0xffffffff) {
                  FUN_142059720(piVar1);
                }
                goto LAB_1400fba2a;
              }
              uVar12 = uVar12 - 1 & uVar12;
            } while (uVar12 != 0);
          }
          auVar2 = vpsignb_avx(auVar2,auVar2);
          if ((((((((((((((((SUB161(auVar2 >> 7,0) & 1) != 0 || (SUB161(auVar2 >> 0xf,0) & 1) != 0)
                          || (SUB161(auVar2 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar2 >> 0x1f,0) & 1) != 0) || (SUB161(auVar2 >> 0x27,0) & 1) != 0
                        ) || (SUB161(auVar2 >> 0x2f,0) & 1) != 0) ||
                      (SUB161(auVar2 >> 0x37,0) & 1) != 0) || (SUB161(auVar2 >> 0x3f,0) & 1) != 0)
                    || (SUB161(auVar2 >> 0x47,0) & 1) != 0) || (SUB161(auVar2 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar2 >> 0x57,0) & 1) != 0) || (SUB161(auVar2 >> 0x5f,0) & 1) != 0) ||
                (SUB161(auVar2 >> 0x67,0) & 1) != 0) || (SUB161(auVar2 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar2 >> 0x77,0) & 1) != 0) || auVar2[0xf] < '\0') break;
          uVar16 = uVar16 + 1;
        }
      }
    }
LAB_1400fba2a:
    FUN_140645130();
    FUN_140644920(auStack_140);
    if (((*(int *)(param_1 + 0x134) == 0) && (*(int *)(param_1 + 0x124) == 0)) &&
       (*(int *)(param_1 + 0x114) == 0)) {
      FUN_1437d2f70(param_1);
    }
    return;
  }
  goto LAB_1400fb84c;
}

