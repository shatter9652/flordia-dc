// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140187c20  size: 740 bytes
// Name:    FUN_140187c20
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_142ef26a0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


ulonglong FUN_140187c20(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined1 auVar16 [64];
  undefined8 *puStack_110;
  undefined1 auStack_108 [16];
  longlong lStack_f8;
  undefined *puStack_f0;
  undefined1 auStack_e8 [16];
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined1 auStack_c8 [16];
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [16];
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [16];
  undefined8 uStack_78;
  code *pcStack_70;
  
  iVar6 = (**(code **)(*param_1 + 0x10))();
  iVar7 = (**(code **)(*param_2 + 0x10))(param_2);
  if (iVar6 == iVar7) {
    auStack_e8._0_12_ = ZEXT812(0);
    auStack_e8._12_4_ = 0;
    auVar16 = ZEXT1664(auStack_e8);
    lStack_f8 = 0;
    puStack_f0 = &UNK_140187f10;
    uStack_d8 = 0;
    puStack_d0 = &UNK_140187f10;
    uStack_b8 = 0;
    puStack_b0 = &UNK_142ef2630;
    uStack_98 = 0;
    puStack_90 = &UNK_142c29920;
    uStack_78 = 0;
    pcStack_70 = FUN_142ef2660;
    auStack_c8 = auStack_e8;
    auStack_a8 = auStack_e8;
    auStack_88 = auStack_e8;
    uVar8 = (**(code **)(*param_1 + 0x10))(param_1);
    if (uVar8 < 5) {
      uVar8 = (**(code **)(*param_1 + 0x10))(param_1);
      if ((&lStack_f8)[(ulonglong)uVar8 * 4] == 0) {
        uVar8 = (**(code **)(auStack_e8 + (ulonglong)uVar8 * 0x20 + -8))(param_1,param_2);
      }
      else {
        uVar8 = (**(code **)(auStack_e8 + (ulonglong)uVar8 * 0x20 + -8))
                          ((&lStack_f8)[(ulonglong)uVar8 * 4],param_1,param_2);
      }
      uVar12 = (ulonglong)uVar8;
    }
    else {
      auStack_108 = auVar16._0_16_;
      FUN_142ef26a0(auStack_108);
      uVar14 = 1;
      *(longlong **)auStack_108._8_8_ = param_1;
      puStack_110 = (undefined8 *)auStack_108._8_8_;
      *(longlong **)(auStack_108._8_8_ + 8) = param_2;
      do {
        uVar14 = (ulonglong)((int)uVar14 - 1);
        uVar12 = 0;
        plVar1 = (longlong *)puStack_110[uVar14 * 2];
        if ((plVar1 == (longlong *)0x0) ||
           (plVar2 = (longlong *)puStack_110[uVar14 * 2 + 1], plVar2 == (longlong *)0x0))
        goto LAB_140187ee5;
        iVar6 = (**(code **)(*plVar1 + 0x10))(plVar1);
        iVar7 = (**(code **)(*plVar2 + 0x10))(plVar2);
        if (iVar6 != iVar7) {
LAB_140187ee3:
          uVar12 = 0;
          goto LAB_140187ee5;
        }
        uVar8 = (**(code **)(*plVar1 + 0x10))(plVar1);
        uVar12 = (ulonglong)uVar8;
        uVar9 = (**(code **)(*plVar1 + 0x10))(plVar1);
        if (uVar8 < 5) {
          if ((&lStack_f8)[(ulonglong)uVar9 * 4] == 0) {
            cVar5 = (**(code **)(auStack_e8 + (ulonglong)uVar9 * 0x20 + -8))(plVar1,plVar2);
          }
          else {
            cVar5 = (**(code **)(auStack_e8 + (ulonglong)uVar9 * 0x20 + -8))
                              ((&lStack_f8)[(ulonglong)uVar9 * 4],plVar1,plVar2);
          }
          if (cVar5 == '\0') goto LAB_140187ee3;
        }
        else if (uVar9 == 5) {
          if (*(int *)((longlong)plVar1 + 0xc) != *(int *)((longlong)plVar2 + 0xc))
          goto LAB_140187ee3;
          if (*(int *)((longlong)plVar1 + 0xc) != 0) {
            uVar13 = 0;
            uVar11 = (ulonglong)(uint)auStack_108._0_4_;
            do {
              uVar8 = (uint)uVar11;
              uVar3 = *(undefined8 *)(plVar1[2] + uVar13 * 8);
              uVar4 = *(undefined8 *)(plVar2[2] + uVar13 * 8);
              uVar12 = uVar11;
              uVar15 = uVar14;
              if ((uint)uVar14 == uVar8) {
                iVar6 = (int)(uVar11 >> 1);
                if (uVar8 < 2) {
                  iVar6 = 1;
                }
                uVar12 = (ulonglong)(iVar6 + uVar8);
                puVar10 = (undefined8 *)func_0x000144d9c140(8,uVar12 << 4);
                if (uVar8 != 0) {
                  func_0x000145f40560(puVar10,puStack_110,uVar11 << 4);
                }
                func_0x000144d9c130(puStack_110);
                uVar15 = uVar11;
                puStack_110 = puVar10;
              }
              uVar14 = (ulonglong)((int)uVar15 + 1);
              uVar13 = uVar13 + 1;
              puStack_110[uVar15 * 2] = uVar3;
              puStack_110[uVar15 * 2 + 1] = uVar4;
              uVar11 = uVar12;
            } while (uVar13 < *(uint *)((longlong)plVar1 + 0xc));
            auStack_108._0_4_ = (int)uVar12;
            auStack_108._8_8_ = puStack_110;
          }
        }
      } while ((int)uVar14 != 0);
      uVar12 = CONCAT71((int7)(uVar12 >> 8),1);
      if (puStack_110 != (undefined8 *)0x0) {
LAB_140187ee5:
        func_0x000144d9c130(puStack_110);
      }
    }
  }
  else {
    uVar12 = 0;
  }
  return uVar12;
}

