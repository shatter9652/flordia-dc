// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14008bea0  size: 1273 bytes
// Name:    FUN_14008bea0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_142578830, FUN_145647140
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14008bea0(ulonglong param_1,uint *param_2)

{
  undefined2 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  byte bVar4;
  ushort uVar5;
  longlong lVar6;
  short *psVar7;
  bool bVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  ulonglong uVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  uint uVar24;
  undefined8 *puVar25;
  ushort uVar26;
  uint uVar27;
  ulonglong uVar28;
  short *psVar29;
  ulonglong uVar30;
  uint uVar31;
  undefined2 uVar32;
  int iVar33;
  undefined2 *puVar34;
  undefined2 uVar35;
  undefined2 *puVar36;
  undefined8 auStack_80 [3];
  undefined4 uStack_68;
  undefined8 uStack_60;
  ushort auStack_58 [2];
  undefined1 uStack_54;
  byte bStack_53;
  undefined8 uStack_50;
  uint *puStack_48;
  
  lVar6 = *(longlong *)(param_1 + 0x28);
  uVar28 = (ulonglong)*param_2;
  puVar2 = (undefined8 *)(lVar6 + 0x10280);
  uVar30 = param_1;
  if (0 < (int)*param_2) {
    do {
      uStack_50._4_4_ = 0;
      uVar30 = uVar28;
      do {
        psVar7 = *(short **)(param_1 + 8);
        lVar21 = (longlong)puVar2 + (ulonglong)((uint)(ushort)psVar7[uVar30 - 1] * 0x50);
        bVar4 = *(byte *)(lVar6 + 0x10282 + (ulonglong)((uint)(ushort)psVar7[uVar30 - 1] * 0x50));
        if (((bVar4 & 2) == 0) && ((bVar4 & 1) == 0)) {
LAB_14008befb:
          if (((*(byte *)(lVar21 + 6) & 2) != 0) || ((*(byte *)(lVar21 + 6) & 1) != 0)) {
            puStack_48 = (uint *)CONCAT44(puStack_48._4_4_,(int)uVar28);
            uStack_68 = *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0x10274);
            uStack_60 = CONCAT44(uStack_60._4_4_,*(undefined4 *)(param_1 + 0x20));
            FUN_142578830(&uStack_54,1,lVar21,*(longlong *)(param_1 + 0x28) + 0x10280);
            uVar20 = (ulonglong)*(uint *)(param_1 + 4);
            if ((bStack_53 & 0x3e) == 0) {
              uVar24 = 0xffffffff;
              if (*(uint *)(param_1 + 4) == 0) {
                uVar27 = 0xffffffff;
              }
              else {
                lVar22 = uVar20 * 2;
                psVar29 = psVar7;
                lVar23 = lVar22;
                do {
                  if (*psVar29 == *(short *)(lVar21 + 0x48)) {
                    uVar27 = (uint)((ulonglong)((longlong)psVar29 - (longlong)psVar7) >> 1);
                    goto LAB_14008c069;
                  }
                  psVar29 = psVar29 + 1;
                  lVar23 = lVar23 + -2;
                } while (lVar23 != 0);
                uVar27 = 0xffffffff;
LAB_14008c069:
                psVar29 = psVar7;
                do {
                  if (*psVar29 == *(short *)(lVar21 + 0x4a)) {
                    uVar24 = (uint)((ulonglong)((longlong)psVar29 - (longlong)psVar7) >> 1);
                    break;
                  }
                  psVar29 = psVar29 + 1;
                  lVar22 = lVar22 + -2;
                } while (lVar22 != 0);
              }
              if (((-1 < (int)(uVar24 | uVar27)) && ((int)uVar27 < (int)puStack_48)) &&
                 (uVar28 = (ulonglong)puStack_48 & 0xffffffff, (int)uVar24 < (int)puStack_48))
              goto LAB_14008bf10;
            }
            goto LAB_14008c0aa;
          }
        }
        else {
          puStack_48 = (uint *)CONCAT44(puStack_48._4_4_,(int)uVar28);
          uStack_68 = *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0x10274);
          uStack_60 = CONCAT44(uStack_60._4_4_,*(undefined4 *)(param_1 + 0x20));
          FUN_142578830(&uStack_50,0,lVar21,*(longlong *)(param_1 + 0x28) + 0x10280);
          uVar20 = (ulonglong)*(uint *)(param_1 + 4);
          if ((uStack_50._1_1_ & 0x3e) == 0) {
            uVar24 = 0xffffffff;
            if (*(uint *)(param_1 + 4) == 0) {
              uVar27 = 0xffffffff;
            }
            else {
              lVar22 = uVar20 * 2;
              psVar29 = psVar7;
              lVar23 = lVar22;
              do {
                if (*psVar29 == *(short *)(lVar21 + 0x10)) {
                  uVar27 = (uint)((ulonglong)((longlong)psVar29 - (longlong)psVar7) >> 1);
                  goto LAB_14008c020;
                }
                psVar29 = psVar29 + 1;
                lVar23 = lVar23 + -2;
              } while (lVar23 != 0);
              uVar27 = 0xffffffff;
LAB_14008c020:
              psVar29 = psVar7;
              do {
                if (*psVar29 == *(short *)(lVar21 + 0x12)) {
                  uVar24 = (uint)((ulonglong)((longlong)psVar29 - (longlong)psVar7) >> 1);
                  break;
                }
                psVar29 = psVar29 + 1;
                lVar22 = lVar22 + -2;
              } while (lVar22 != 0);
            }
            if (((-1 < (int)(uVar24 | uVar27)) && ((int)uVar27 < (int)puStack_48)) &&
               (uVar28 = (ulonglong)puStack_48 & 0xffffffff, (int)uVar24 < (int)puStack_48))
            goto LAB_14008befb;
          }
LAB_14008c0aa:
          psVar29 = psVar7 + (uVar30 - 1);
          auStack_80[0] = 0x14008c0c5;
          func_0x000145f40570(psVar29,psVar29 + 1,
                              (longlong)psVar7 + (uVar20 * 2 - (longlong)(psVar29 + 1)));
          *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
          uStack_50._4_4_ = uStack_50._4_4_ + 1;
          uVar28 = (ulonglong)(*param_2 - 1);
          *param_2 = *param_2 - 1;
        }
LAB_14008bf10:
        bVar8 = 1 < (longlong)uVar30;
        uVar30 = uVar30 - 1;
      } while (bVar8);
      bVar8 = 0 < (int)uVar28;
      uVar30 = (ulonglong)bVar8;
    } while (uStack_50._4_4_ != 0 && bVar8);
  }
  uVar24 = *(uint *)(lVar6 + 0x10274);
  uStack_60 = 0x14008c11f;
  puStack_48 = param_2;
  lVar21 = FUN_145647140(uVar30,uVar28,(ulonglong)uVar24 * 2);
  lVar21 = -lVar21;
  *(undefined8 *)((longlong)auStack_80 + lVar21) = 0x14008c133;
  func_0x000145f40580((longlong)auStack_58 + lVar21);
  uVar27 = *(uint *)(param_1 + 4);
  if (uVar27 != 0) {
    lVar22 = *(longlong *)(param_1 + 8);
    uVar26 = 1;
    do {
      *(ushort *)
       ((longlong)auStack_58 +
       (ulonglong)*(ushort *)(lVar22 + (ulonglong)(ushort)(uVar26 - 1) * 2) * 2 + lVar21) =
           uVar26 - 1;
      uVar31 = (uint)uVar26;
      uVar26 = uVar26 + 1;
    } while (uVar31 < uVar27);
  }
  if (0 < (int)uVar28) {
    lVar22 = *(longlong *)(param_1 + 8);
    uVar30 = 0;
    do {
      uVar35 = 0xff;
      uVar20 = (ulonglong)((uint)*(ushort *)(lVar22 + uVar30 * 2) * 0x50);
      uVar26 = *(ushort *)(lVar6 + 0x10290 + uVar20);
      uVar32 = 0xff;
      if (uVar26 < uVar24 && uVar26 != 0xffff) {
        uVar35 = *(undefined2 *)((longlong)auStack_58 + (ulonglong)uVar26 * 2 + lVar21);
      }
      *(undefined2 *)((longlong)puVar2 + uVar20 + 0x10) = uVar35;
      uVar26 = *(ushort *)((longlong)puVar2 + uVar20 + 0x48);
      if (uVar26 < uVar24 && uVar26 != 0xffff) {
        uVar32 = *(undefined2 *)((longlong)auStack_58 + (ulonglong)uVar26 * 2 + lVar21);
      }
      *(undefined2 *)((longlong)puVar2 + uVar20 + 0x48) = uVar32;
      puVar34 = (undefined2 *)(lVar6 + 0x10290 + uVar20);
      puVar1 = (undefined2 *)((longlong)puVar2 + uVar20 + 0x48);
      uVar26 = *(ushort *)((longlong)puVar2 + uVar20 + 0x12);
      uVar5 = *(ushort *)((longlong)puVar2 + uVar20 + 0x4a);
      puVar36 = (undefined2 *)((longlong)auStack_58 + (ulonglong)uVar26 * 2 + lVar21);
      if (uVar24 <= uVar26) {
        puVar36 = puVar34;
      }
      if (uVar26 == 0xffff) {
        puVar36 = puVar34;
      }
      *(undefined2 *)((longlong)puVar2 + uVar20 + 0x12) = *puVar36;
      puVar34 = (undefined2 *)((longlong)auStack_58 + (ulonglong)uVar5 * 2 + lVar21);
      if (uVar24 <= uVar5) {
        puVar34 = puVar1;
      }
      if (uVar5 == 0xffff) {
        puVar34 = puVar1;
      }
      uVar30 = uVar30 + 1;
      *(undefined2 *)((longlong)puVar2 + uVar20 + 0x4a) = *puVar34;
    } while (uVar28 != uVar30);
  }
  *(undefined8 *)((longlong)auStack_58 + lVar21 + -8) = 0x14008c259;
  lVar22 = FUN_145647140();
  lVar22 = -lVar22;
  *(undefined8 *)((longlong)auStack_80 + lVar22 + lVar21) = 0x14008c26e;
  func_0x000145f40560((longlong)auStack_58 + lVar22 + lVar21);
  *(undefined4 *)(lVar6 + 0x10274) = 0;
  if ((int)*puStack_48 < 1) {
    lVar23 = 0;
  }
  else {
    lVar23 = 0;
    puVar25 = puVar2;
    do {
      uVar26 = *(ushort *)(*(longlong *)(param_1 + 8) + lVar23 * 2);
      lVar23 = lVar23 + 1;
      *(int *)(lVar6 + 0x10274) = (int)lVar23;
      uVar30 = (ulonglong)((uint)uVar26 * 0x50);
      puVar3 = (undefined8 *)((longlong)auStack_58 + uVar30 + lVar22 + lVar21);
      uVar9 = *puVar3;
      uVar10 = puVar3[1];
      uVar11 = puVar3[2];
      uVar12 = puVar3[3];
      puVar3 = (undefined8 *)(&stack0xffffffffffffffc8 + uVar30 + lVar22 + lVar21);
      uVar13 = *puVar3;
      uVar14 = puVar3[1];
      uVar15 = puVar3[2];
      uVar16 = puVar3[3];
      puVar3 = (undefined8 *)(&stack0xffffffffffffffd8 + uVar30 + lVar22 + lVar21);
      uVar17 = puVar3[1];
      uVar18 = puVar3[2];
      uVar19 = puVar3[3];
      puVar25[6] = *puVar3;
      puVar25[7] = uVar17;
      puVar25[8] = uVar18;
      puVar25[9] = uVar19;
      puVar25[4] = uVar13;
      puVar25[5] = uVar14;
      puVar25[6] = uVar15;
      puVar25[7] = uVar16;
      *puVar25 = uVar9;
      puVar25[1] = uVar10;
      puVar25[2] = uVar11;
      puVar25[3] = uVar12;
      puVar25 = puVar25 + 10;
    } while (lVar23 < (int)*puStack_48);
  }
  *puStack_48 = (uint)lVar23;
  if (*(int *)(param_1 + 0x14) != 0) {
    uVar24 = *(uint *)(lVar6 + 0x10274);
    uVar30 = 0;
    do {
      uVar20 = (ulonglong)uVar24;
      uVar24 = uVar24 + 1;
      lVar23 = uVar20 * 0x50;
      uVar26 = *(ushort *)(*(longlong *)(param_1 + 0x18) + uVar30 * 2);
      *(uint *)(lVar6 + 0x10274) = uVar24;
      uVar30 = uVar30 + 1;
      uVar28 = (ulonglong)((uint)uVar26 * 0x50);
      puVar25 = (undefined8 *)((longlong)auStack_58 + uVar28 + lVar22 + lVar21);
      uVar9 = *puVar25;
      uVar10 = puVar25[1];
      uVar11 = puVar25[2];
      uVar12 = puVar25[3];
      puVar25 = (undefined8 *)(&stack0xffffffffffffffc8 + uVar28 + lVar22 + lVar21);
      uVar13 = *puVar25;
      uVar14 = puVar25[1];
      uVar15 = puVar25[2];
      uVar16 = puVar25[3];
      puVar25 = (undefined8 *)(&stack0xffffffffffffffd8 + uVar28 + lVar22 + lVar21);
      uVar17 = puVar25[1];
      uVar18 = puVar25[2];
      uVar19 = puVar25[3];
      puVar3 = (undefined8 *)(lVar6 + 0x102b0 + lVar23);
      *puVar3 = *puVar25;
      puVar3[1] = uVar17;
      puVar3[2] = uVar18;
      puVar3[3] = uVar19;
      puVar25 = (undefined8 *)(lVar6 + 0x102a0 + lVar23);
      *puVar25 = uVar13;
      puVar25[1] = uVar14;
      puVar25[2] = uVar15;
      puVar25[3] = uVar16;
      puVar25 = puVar2 + uVar20 * 10;
      *puVar25 = uVar9;
      puVar25[1] = uVar10;
      puVar25[2] = uVar11;
      puVar25[3] = uVar12;
    } while (uVar30 < *(uint *)(param_1 + 0x14));
  }
  lVar21 = *(longlong *)(param_1 + 0x28);
  uVar24 = *(uint *)(lVar21 + 0x1a284);
  if ((ulonglong)uVar24 != 0) {
    lVar22 = 0;
    do {
      if (*(char *)(lVar21 + 0x1a294 + lVar22) == '\x01') {
        iVar33 = *(int *)(lVar6 + 0x10274) + -1;
        if (0 < *(int *)(lVar6 + 0x10274)) {
          iVar33 = 0;
        }
        *(int *)(lVar21 + 0x1a290 + lVar22) = iVar33;
      }
      lVar22 = lVar22 + 0x10;
    } while ((ulonglong)uVar24 << 4 != lVar22);
  }
  return;
}

