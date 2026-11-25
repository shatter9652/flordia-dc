// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401a35e0  size: 300 bytes
// Name:    FUN_1401a35e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_143b58ea0, FUN_142d01fa0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


ulonglong FUN_1401a35e0(longlong *param_1,longlong param_2,longlong param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  bool bVar7;
  undefined1 *puVar8;
  longlong lVar9;
  int *piVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  undefined8 *puVar15;
  uint uVar16;
  undefined4 *puVar17;
  undefined8 auStack_c0 [4];
  undefined *puStack_a0;
  longlong alStack_98 [3];
  undefined *puStack_80;
  uint auStack_78 [2];
  undefined8 uStack_70;
  undefined1 *puStack_68;
  uint uStack_60;
  undefined1 auStack_5c [4];
  longlong lStack_58;
  longlong lStack_50;
  uint auStack_44 [7];
  
  if (*(int *)((longlong)param_1 + 0xfc) == 0) {
    return 0;
  }
  lStack_58 = *(longlong *)(param_3 + 0x20);
  if ((lStack_58 != 0) && (*(int *)(lStack_58 + 4) != 0)) {
    uVar16 = *(uint *)(param_2 + 8);
    lVar9 = *param_1;
    if (lVar9 == 0) {
      uVar13 = 0;
    }
    else {
      uStack_60 = 0x3fffff;
      uVar13 = 0;
      puStack_a0 = &UNK_143b58ef0;
      FUN_1400bf810(lVar9,&uStack_60,0);
      uVar16 = uVar16 & 0x3fffff;
      bVar7 = uVar16 == 0x3fffff;
      if ((uStack_60 & 0x3fffff) != 0x3fffff) {
        bVar7 = uVar16 == (uStack_60 & 0x3fffff) && uVar16 != 0x3fffff;
      }
      if (bVar7) {
        uVar12 = (ulonglong)*(int *)((longlong)param_1 + 0xfc);
        puStack_80 = &UNK_143b58f43;
        lVar11 = FUN_145647140();
        lVar11 = -lVar11;
        puStack_68 = (undefined1 *)((longlong)auStack_78 + lVar11);
        uStack_70 = CONCAT44(uStack_70._4_4_,(int)uVar12);
        puVar8 = (undefined1 *)((longlong)auStack_78 + lVar11);
        if (uVar12 != 0) {
          lVar5 = param_1[0x20];
          uVar13 = 0;
          lStack_50 = param_3;
          do {
            uVar6 = *(undefined8 *)(lVar5 + uVar13 * 8);
            *(undefined **)((longlong)alStack_98 + lVar11 + -8) = &UNK_143b58f79;
            func_0x000140fb5800(uVar6,auStack_44);
            *(uint *)((longlong)auStack_78 + uVar13 * 4 + lVar11) = auStack_44[0];
            uVar13 = uVar13 + 1;
            param_3 = lStack_50;
            puVar8 = puStack_68;
          } while ((uVar12 & 0xffffffff) != uVar13);
        }
        puStack_68 = puVar8;
        lVar5 = lStack_58;
        uStack_70 = CONCAT44((int)uVar13,(uint)uStack_70);
        auStack_44[0] = 0xffffffff;
        *(uint **)((longlong)alStack_98 + lVar11 + 0x10) = auStack_44;
        *(longlong *)((longlong)alStack_98 + lVar11) = param_3;
        *(longlong *)((longlong)alStack_98 + lVar11 + 8) = lVar5;
        *(undefined **)((longlong)auStack_c0 + lVar11) = &UNK_143b58fc9;
        FUN_143b59010(auStack_5c,lVar9,param_1);
        uVar13 = (ulonglong)auStack_44[0] * 8 + param_1[0x20];
        if (*(uint *)((longlong)param_1 + 0xfc) <= auStack_44[0]) {
          uVar13 = 0;
        }
        if ((int)auStack_44[0] < 0) {
          uVar13 = 0;
        }
      }
    }
    return uVar13;
  }
  if ((ulonglong)*(uint *)((longlong)param_1 + 0x84) != 0) {
    uStack_70 = 0x10;
    puVar17 = (undefined4 *)param_1[0x11];
    puVar1 = puVar17 + *(uint *)((longlong)param_1 + 0x84);
    do {
      puStack_a0 = (undefined *)0x1401a3652;
      lVar9 = FUN_142d01fa0(*puVar17);
      if (lVar9 != 0) {
        puStack_a0 = (undefined *)0x1401a3663;
        lVar9 = func_0x000142d02070(lVar9,*(undefined8 *)(param_3 + 0x70));
        if ((lVar9 != 0) && ((ulonglong)*(uint *)(lVar9 + 4) != 0)) {
          piVar10 = *(int **)(lVar9 + 8);
          uVar16 = (uint)uStack_70;
          piVar2 = piVar10 + *(uint *)(lVar9 + 4);
          uVar14 = uStack_70._4_4_;
          do {
            iVar3 = *piVar10;
            if (iVar3 != 0) {
              uVar13 = (ulonglong)uVar14;
              if (uVar14 != 0) {
                lVar9 = 0;
                do {
                  if (*(int *)((longlong)&puStack_68 + lVar9) == iVar3) goto LAB_1401a36ba;
                  lVar9 = lVar9 + 4;
                } while (uVar13 * 4 != lVar9);
              }
              if (uVar14 == uVar16) break;
              uVar14 = uVar14 + 1;
              uStack_70 = CONCAT44(uVar14,(uint)uStack_70);
              *(int *)((longlong)&puStack_68 + uVar13 * 4) = iVar3;
            }
LAB_1401a36ba:
            piVar10 = piVar10 + 1;
          } while (piVar10 != piVar2);
        }
      }
      puVar17 = puVar17 + 1;
    } while (puVar17 != puVar1);
    if (uStack_70._4_4_ != 0) {
      uVar4 = *(undefined4 *)(param_2 + 8);
      puVar15 = &uStack_70;
      goto LAB_1401a36fa;
    }
  }
  uVar4 = *(undefined4 *)(param_2 + 8);
  puVar15 = (undefined8 *)0x0;
LAB_1401a36fa:
  puStack_a0 = (undefined *)0x1401a36ff;
  uVar13 = FUN_143b58ea0(param_1,uVar4,param_3,puVar15);
  return uVar13;
}

