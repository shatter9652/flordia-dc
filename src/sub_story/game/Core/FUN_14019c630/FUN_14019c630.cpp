// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14019c630  size: 1738 bytes
// Name:    FUN_14019c630
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145063f40, FUN_144977340, FUN_145063db0, FUN_144976e90, FUN_14019c630
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14019c630(uint *param_1,uint *param_2,ulonglong param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  uint *puVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint *puVar14;
  uint *puVar15;
  uint *puVar16;
  ulonglong uVar17;
  uint *puVar18;
  uint *puVar19;
  undefined1 auStack_1b0 [8];
  uint uStack_1a8;
  undefined1 auStack_1a0 [8];
  uint uStack_198;
  uint *puStack_190;
  undefined8 *puStack_188;
  uint *puStack_180;
  uint uStack_178;
  uint uStack_174;
  uint *puStack_170;
  uint auStack_130 [38];
  undefined8 auStack_98 [11];
  
  uVar12 = (longlong)param_2 - (longlong)param_1;
  if ((longlong)uVar12 < 0x2730) {
LAB_14019c659:
    if ((param_1 != param_2) && (param_1 + 0x4c != param_2)) {
      puVar19 = param_1 + 0x38;
      puStack_190 = param_1 + 0x12;
      puStack_188 = auStack_98;
      puVar14 = param_1 + 0x4c;
      puVar16 = param_1;
      puStack_180 = param_2;
      do {
        puVar11 = puVar14;
        FUN_145063db0(&uStack_178,puVar11);
        func_0x000144dfa150(&uStack_178,auStack_1a0);
        uVar3 = uStack_198;
        func_0x000144dfa150(param_1,auStack_1b0);
        if (uVar3 < uStack_1a8) {
          puVar14 = puVar11;
          puVar16 = puVar16 + 0x98;
          do {
            puVar16[-0x4b] = 0;
            puVar15 = puVar16 + -0x4c;
            uVar3 = puVar14[-0x4b];
            if ((ulonglong)uVar3 != 0) {
              if (*puVar15 < uVar3) {
                *puVar15 = uVar3;
              }
              lVar13 = (ulonglong)uVar3 * 0x48;
              puVar18 = puVar16 + -0x4a;
              do {
                FUN_145063f40(puVar18,puVar18 + -0x4c);
                *(undefined8 *)(puVar18 + 8) = *(undefined8 *)(puVar18 + -0x44);
                *(undefined8 *)(puVar18 + 10) = *(undefined8 *)(puVar18 + -0x42);
                *(undefined8 *)(puVar18 + 0xb) = *(undefined8 *)(puVar18 + -0x41);
                *(undefined8 *)(puVar18 + 0xd) = *(undefined8 *)(puVar18 + -0x3f);
                func_0x000144df8490(puVar18 + 0xf,puVar18[-0x3d]);
                lVar13 = lVar13 + -0x48;
                puVar18[0x10] = puVar18[-0x3c];
                *(char *)(puVar18 + 0x11) = (char)puVar18[-0x3b];
                puVar18 = puVar18 + 0x12;
              } while (lVar13 != 0);
              puVar16[-0x4b] = uVar3;
            }
            uVar3 = uStack_174;
            puVar16[-4] = puVar14[-4];
            puVar18 = puVar14 + -0x4c;
            uVar4 = *(undefined8 *)(puVar14 + -0x14);
            uVar5 = *(undefined8 *)(puVar14 + -0x12);
            uVar6 = *(undefined8 *)(puVar14 + -0x10);
            uVar7 = *(undefined8 *)(puVar14 + -0xe);
            uVar8 = *(undefined8 *)(puVar14 + -10);
            uVar9 = *(undefined8 *)(puVar14 + -8);
            uVar10 = *(undefined8 *)(puVar14 + -6);
            *(undefined8 *)(puVar16 + -0xc) = *(undefined8 *)(puVar14 + -0xc);
            *(undefined8 *)(puVar16 + -10) = uVar8;
            *(undefined8 *)(puVar16 + -8) = uVar9;
            *(undefined8 *)(puVar16 + -6) = uVar10;
            *(undefined8 *)(puVar16 + -0x14) = uVar4;
            *(undefined8 *)(puVar16 + -0x12) = uVar5;
            *(undefined8 *)(puVar16 + -0x10) = uVar6;
            *(undefined8 *)(puVar16 + -0xe) = uVar7;
            puVar14 = puVar18;
            puVar16 = puVar15;
          } while (puVar18 != param_1);
          puVar14 = puVar19;
          if (&uStack_178 != param_1) {
            param_1[1] = 0;
            if ((ulonglong)uStack_174 != 0) {
              if (*param_1 < uStack_174) {
                *param_1 = uStack_174;
              }
              puVar16 = auStack_130;
              lVar13 = (ulonglong)uStack_174 * 0x48;
              puVar15 = puStack_190;
              do {
                FUN_145063f40(puVar15 + -0x10,puVar16 + -0x10);
                uVar4 = *(undefined8 *)(puVar16 + -6);
                uVar5 = *(undefined8 *)(puVar16 + -5);
                uVar6 = *(undefined8 *)(puVar16 + -3);
                *(undefined8 *)(puVar15 + -8) = *(undefined8 *)(puVar16 + -8);
                *(undefined8 *)(puVar15 + -6) = uVar4;
                *(undefined8 *)(puVar15 + -5) = uVar5;
                *(undefined8 *)(puVar15 + -3) = uVar6;
                func_0x000144df8490(puVar15 + -1,puVar16[-1]);
                *puVar15 = *puVar16;
                puVar18 = puVar16 + 1;
                puVar16 = puVar16 + 0x12;
                *(char *)(puVar15 + 1) = (char)*puVar18;
                puVar15 = puVar15 + 0x12;
                lVar13 = lVar13 + -0x48;
              } while (lVar13 != 0);
              param_1[1] = uVar3;
            }
          }
        }
        else {
          func_0x000144dfa150(&uStack_178,auStack_1a0);
          uVar3 = uStack_198;
          func_0x000144dfa150(puVar11 + -0x4c,auStack_1b0);
          puVar16 = puVar11;
          puVar14 = puVar11;
          puVar15 = puVar11 + -0x4c;
          if (uVar3 < uStack_1a8) {
            do {
              puVar14 = puVar15;
              puVar16[1] = 0;
              uVar3 = puVar16[-0x4b];
              if ((ulonglong)uVar3 != 0) {
                if (*puVar16 < uVar3) {
                  *puVar16 = uVar3;
                }
                lVar13 = (ulonglong)uVar3 * 0x48;
                puVar15 = puVar16 + 2;
                do {
                  FUN_145063f40(puVar15,puVar15 + -0x4c);
                  *(undefined8 *)(puVar15 + 8) = *(undefined8 *)(puVar15 + -0x44);
                  *(undefined8 *)(puVar15 + 10) = *(undefined8 *)(puVar15 + -0x42);
                  *(undefined8 *)(puVar15 + 0xb) = *(undefined8 *)(puVar15 + -0x41);
                  *(undefined8 *)(puVar15 + 0xd) = *(undefined8 *)(puVar15 + -0x3f);
                  func_0x000144df8490(puVar15 + 0xf,puVar15[-0x3d]);
                  lVar13 = lVar13 + -0x48;
                  puVar15[0x10] = puVar15[-0x3c];
                  *(char *)(puVar15 + 0x11) = (char)puVar15[-0x3b];
                  puVar15 = puVar15 + 0x12;
                } while (lVar13 != 0);
                puVar16[1] = uVar3;
              }
              puVar16[0x48] = puVar16[-4];
              *(undefined8 *)(puVar16 + 0x40) = *(undefined8 *)(puVar16 + -0xc);
              *(undefined8 *)(puVar16 + 0x42) = *(undefined8 *)(puVar16 + -10);
              *(undefined8 *)(puVar16 + 0x44) = *(undefined8 *)(puVar16 + -8);
              *(undefined8 *)(puVar16 + 0x46) = *(undefined8 *)(puVar16 + -6);
              *(undefined8 *)(puVar16 + 0x38) = *(undefined8 *)(puVar16 + -0x14);
              *(undefined8 *)(puVar16 + 0x3a) = *(undefined8 *)(puVar16 + -0x12);
              *(undefined8 *)(puVar16 + 0x3c) = *(undefined8 *)(puVar16 + -0x10);
              *(undefined8 *)(puVar16 + 0x3e) = *(undefined8 *)(puVar16 + -0xe);
              func_0x000144dfa150(&uStack_178,auStack_1a0);
              uVar3 = uStack_198;
              func_0x000144dfa150(puVar14 + -0x4c,auStack_1b0);
              puVar16 = puVar14;
              puVar15 = puVar14 + -0x4c;
            } while (uVar3 < uStack_1a8);
          }
          uVar3 = uStack_174;
          if (&uStack_178 != puVar14) {
            puVar14[1] = 0;
            if ((ulonglong)uStack_174 != 0) {
              if (*puVar14 < uStack_174) {
                *puVar14 = uStack_174;
              }
              puVar16 = auStack_130;
              lVar13 = (ulonglong)uStack_174 * 0x48;
              puVar15 = puVar14;
              do {
                FUN_145063f40(puVar15 + 2,puVar16 + -0x10);
                uVar4 = *(undefined8 *)(puVar16 + -6);
                uVar5 = *(undefined8 *)(puVar16 + -5);
                uVar6 = *(undefined8 *)(puVar16 + -3);
                *(undefined8 *)(puVar15 + 10) = *(undefined8 *)(puVar16 + -8);
                *(undefined8 *)(puVar15 + 0xc) = uVar4;
                *(undefined8 *)(puVar15 + 0xd) = uVar5;
                *(undefined8 *)(puVar15 + 0xf) = uVar6;
                func_0x000144df8490(puVar15 + 0x11,puVar16[-1]);
                puVar15[0x12] = *puVar16;
                puVar18 = puVar16 + 1;
                puVar16 = puVar16 + 0x12;
                *(char *)(puVar15 + 0x13) = (char)*puVar18;
                lVar13 = lVar13 + -0x48;
                puVar15 = puVar15 + 0x12;
              } while (lVar13 != 0);
              puVar14[1] = uVar3;
            }
          }
          puVar14 = puVar14 + 0x38;
        }
        puVar14[0x10] = *(uint *)(puStack_188 + 8);
        uVar4 = *puStack_188;
        uVar5 = puStack_188[1];
        uVar6 = puStack_188[2];
        uVar7 = puStack_188[3];
        uVar8 = puStack_188[5];
        uVar9 = puStack_188[6];
        uVar10 = puStack_188[7];
        *(undefined8 *)(puVar14 + 8) = puStack_188[4];
        *(undefined8 *)(puVar14 + 10) = uVar8;
        *(undefined8 *)(puVar14 + 0xc) = uVar9;
        *(undefined8 *)(puVar14 + 0xe) = uVar10;
        *(undefined8 *)puVar14 = uVar4;
        *(undefined8 *)(puVar14 + 2) = uVar5;
        *(undefined8 *)(puVar14 + 4) = uVar6;
        *(undefined8 *)(puVar14 + 6) = uVar7;
        puVar14 = puVar11 + 0x4c;
        puVar16 = puVar11;
      } while (puVar11 + 0x4c != puStack_180);
    }
  }
  else {
    if (0 < (longlong)param_3) {
      puVar19 = param_2;
      do {
        FUN_144977340(&uStack_178,param_1,puVar19);
        puVar14 = puStack_170;
        param_2 = (uint *)CONCAT44(uStack_174,uStack_178);
        param_3 = (param_3 >> 2) + (param_3 >> 1);
        if ((longlong)param_2 - (longlong)param_1 < (longlong)puVar19 - (longlong)puStack_170) {
          FUN_14019c630(param_1,param_2,param_3);
          param_1 = puVar14;
          param_2 = puVar19;
        }
        else {
          FUN_14019c630(puStack_170,puVar19,param_3);
        }
        uVar12 = (longlong)param_2 - (longlong)param_1;
        if ((longlong)uVar12 < 0x2730) goto LAB_14019c659;
        puVar19 = param_2;
      } while (param_3 != 0);
    }
    uVar17 = uVar12 / 0x260 + 1;
    puVar19 = param_1 + (uVar12 / 0x260) * 0x4c + -0x4c;
    do {
      FUN_145063db0(&uStack_178,puVar19);
      FUN_144976e90(param_1,uVar17 - 2,uVar12 / 0x130,&uStack_178);
      uVar17 = uVar17 - 1;
      puVar19 = puVar19 + -0x4c;
    } while (1 < uVar17);
    if (0x130 < (longlong)param_2 - (longlong)param_1) {
      do {
        puVar19 = param_2 + -0x4c;
        FUN_145063db0(&uStack_178,puVar19);
        if (param_1 != puVar19) {
          param_2[-0x4b] = 0;
          uVar3 = param_1[1];
          if ((ulonglong)uVar3 != 0) {
            if (*puVar19 < uVar3) {
              *puVar19 = uVar3;
            }
            lVar13 = 0;
            do {
              lVar1 = (longlong)param_1 + lVar13 + 8;
              lVar2 = (longlong)param_2 + lVar13 + -0x128;
              FUN_145063f40(lVar2,lVar1);
              uVar4 = *(undefined8 *)(lVar1 + 0x28);
              uVar5 = *(undefined8 *)(lVar1 + 0x2c);
              uVar6 = *(undefined8 *)(lVar1 + 0x34);
              *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(lVar1 + 0x20);
              *(undefined8 *)(lVar2 + 0x28) = uVar4;
              *(undefined8 *)(lVar2 + 0x2c) = uVar5;
              *(undefined8 *)(lVar2 + 0x34) = uVar6;
              lVar2 = (longlong)param_2 + lVar13 + -0xec;
              func_0x000144df8490(lVar2,*(undefined4 *)(lVar1 + 0x3c));
              lVar13 = lVar13 + 0x48;
              *(undefined4 *)(lVar2 + 4) = *(undefined4 *)(lVar1 + 0x40);
              *(undefined1 *)(lVar2 + 8) = *(undefined1 *)(lVar1 + 0x44);
            } while ((ulonglong)uVar3 * 0x48 != lVar13);
            param_2[-0x4b] = uVar3;
          }
        }
        param_2[-4] = param_1[0x48];
        uVar4 = *(undefined8 *)(param_1 + 0x38);
        uVar5 = *(undefined8 *)(param_1 + 0x3a);
        uVar6 = *(undefined8 *)(param_1 + 0x3c);
        uVar7 = *(undefined8 *)(param_1 + 0x3e);
        uVar8 = *(undefined8 *)(param_1 + 0x42);
        uVar9 = *(undefined8 *)(param_1 + 0x44);
        uVar10 = *(undefined8 *)(param_1 + 0x46);
        *(undefined8 *)(param_2 + -0xc) = *(undefined8 *)(param_1 + 0x40);
        *(undefined8 *)(param_2 + -10) = uVar8;
        *(undefined8 *)(param_2 + -8) = uVar9;
        *(undefined8 *)(param_2 + -6) = uVar10;
        *(undefined8 *)(param_2 + -0x14) = uVar4;
        *(undefined8 *)(param_2 + -0x12) = uVar5;
        *(undefined8 *)(param_2 + -0x10) = uVar6;
        *(undefined8 *)(param_2 + -0xe) = uVar7;
        FUN_144976e90(param_1,0,((longlong)puVar19 - (longlong)param_1 >> 4) * -0x79435e50d79435e5,
                      &uStack_178);
        param_2 = puVar19;
      } while (0x130 < (longlong)puVar19 - (longlong)param_1);
    }
  }
  return;
}

