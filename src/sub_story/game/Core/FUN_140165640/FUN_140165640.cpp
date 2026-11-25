// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140165640  size: 1328 bytes
// Name:    FUN_140165640
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14242e420, FUN_1450499f0, FUN_144dd2ec0, FUN_144dd3550, FUN_144dd2dc0, FUN_144dd3870, FUN_14242de40, FUN_144dd3330, FUN_145049a70, FUN_144e66270, FUN_14242e160
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140165640(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  char cVar2;
  short sVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined1 uVar15;
  undefined7 uVar16;
  ulonglong unaff_RSI;
  undefined1 auVar17 [64];
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined1 auVar21 [64];
  undefined8 in_stack_fffffffffffffe30;
  float fStack_1b4;
  longlong lStack_1b0;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  int iStack_194;
  undefined8 uStack_190;
  ulonglong uStack_188;
  undefined8 *puStack_180;
  undefined1 auStack_178 [16];
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 auStack_148 [16];
  undefined1 auStack_130 [16];
  undefined1 auStack_118 [16];
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 auStack_e8 [16];
  undefined1 auStack_d0 [16];
  longlong lStack_b8;
  uint uStack_b0;
  ulonglong uStack_a8;
  uint uStack_a0;
  undefined1 auStack_98 [16];
  
  puStack_180 = param_3;
  uVar4 = func_0x000145021a50(*(undefined2 *)(param_2 + 0x56));
  uVar8 = (ulonglong)uVar4;
  auStack_98._0_12_ = ZEXT812(0);
  auStack_98._12_4_ = 0;
  lStack_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  func_0x000144dd2b90(param_1,&lStack_b8);
  uVar13 = uStack_a8;
  lVar1 = lStack_b8;
  uStack_188 = (ulonglong)uStack_b0;
  lStack_1b0 = *(longlong *)(param_2 + 0xa8);
  uVar7 = (ulonglong)uStack_a0;
  uVar15 = (undefined1)uVar4;
  if (uVar7 != 0) {
    if (lStack_1b0 == 0) {
      return;
    }
    lVar14 = 0;
    do {
      uVar5 = (undefined4)((ulonglong)in_stack_fffffffffffffe30 >> 0x20);
      if (*(char *)(uVar13 + 4 + lVar14) == '\0') {
        fStack_1b4 = *(float *)(uVar13 + 8 + lVar14);
        if (((*(int *)(uVar13 + lVar14) == -0xda3bf5c) && (*(int *)(param_2 + 0xa0) != 0)) &&
           (*(int *)(param_2 + 0xbc) != 0)) {
          uVar5 = func_0x000145021a50(*(undefined2 *)(param_2 + 0x56));
          uVar5 = FUN_145049a70((int *)(param_2 + 0x48),uVar5,0xffffffff);
          sVar3 = func_0x00014504a830(uVar5);
          uVar5 = (undefined4)((ulonglong)in_stack_fffffffffffffe30 >> 0x20);
          if (sVar3 != 7) goto LAB_1401658b0;
          uVar8 = FUN_14242de40(*(undefined4 *)(param_2 + 0xbc),*(undefined4 *)(param_2 + 0xa0));
          lVar9 = FUN_14242e160(*(undefined4 *)(param_2 + 0xbc),*(undefined4 *)(param_2 + 0xa0));
          FUN_14242e420(auStack_118,*(undefined4 *)(param_2 + 0xbc),*(undefined4 *)(param_2 + 0xa0))
          ;
          if (lVar9 == 0) {
            lVar10 = 0;
          }
          else {
            lVar10 = 0;
            if (auStack_118._0_4_ != 0) {
              lVar10 = func_0x000145124a90(uVar8,lVar9,auStack_118._0_8_);
            }
          }
          if (uVar8 != 0 && lVar10 == 0) {
            uVar11 = func_0x000144e7de50(uVar8,0xffffffff);
            uVar5 = (undefined4)((ulonglong)in_stack_fffffffffffffe30 >> 0x20);
            if (uVar11 != 0) {
              iVar6 = FUN_144e66270(*(undefined4 *)(uVar11 + 0xf0));
              uVar5 = (undefined4)((ulonglong)in_stack_fffffffffffffe30 >> 0x20);
              if (iVar6 != 0) {
                uVar4 = *(uint *)(uVar11 + 0xf0);
LAB_14016582c:
                uVar8 = (ulonglong)uVar4;
                uVar12 = func_0x000144ddb100(0);
                FUN_144dd3330(uVar8,auStack_178);
                lVar10 = FUN_144dd3550(uVar12,auStack_178._0_4_,10);
                goto LAB_14016585a;
              }
              uVar8 = uVar11;
              if (*(int *)(uVar11 + 0x198) != 0) {
                iVar6 = FUN_144e66270(*(undefined4 *)(uVar11 + 0x19c));
                uVar5 = (undefined4)((ulonglong)in_stack_fffffffffffffe30 >> 0x20);
                if (iVar6 != 0) {
                  iVar6 = FUN_144e66270(*(undefined4 *)(uVar11 + 0x1a0));
                  uVar5 = (undefined4)((ulonglong)in_stack_fffffffffffffe30 >> 0x20);
                  if (iVar6 != 0) {
                    uVar4 = *(uint *)(uVar11 + 0x1a0);
                    goto LAB_14016582c;
                  }
                }
              }
            }
LAB_1401658ab:
            uVar8 = CONCAT71((int7)(uVar8 >> 8),uVar15);
            goto LAB_1401658b0;
          }
LAB_14016585a:
          uVar5 = (undefined4)((ulonglong)in_stack_fffffffffffffe30 >> 0x20);
          if (lVar10 == 0) goto LAB_1401658ab;
          fStack_1b4 = *(float *)(lVar10 + 0x170);
          uVar8 = CONCAT71((int7)(uVar8 >> 8),uVar15);
        }
        else {
LAB_1401658b0:
          iStack_194 = *(int *)(param_2 + 0x48);
          if ((iStack_194 == 2) || (iStack_194 == 1)) {
            uStack_190 = CONCAT44(uStack_190._4_4_,*(undefined4 *)(param_2 + 0x4c));
          }
          else if (iStack_194 == 0) {
            uStack_190 = *(undefined8 *)(param_2 + 0x4c);
          }
          in_stack_fffffffffffffe30 = CONCAT44(uVar5,*(undefined4 *)(uVar13 + 8 + lVar14));
          cVar2 = FUN_1450499f0(lStack_1b0,*(undefined4 *)(uVar13 + lVar14),uVar8 & 0xffffffff,
                                &iStack_194,&fStack_1b4,in_stack_fffffffffffffe30);
          if (cVar2 == '\0') goto LAB_140165921;
        }
        if (*(int *)(uVar13 + lVar14) != 0x77930519) {
          (**(code **)(*(longlong *)*puStack_180 + 0x18))
                    ((longlong *)*puStack_180,*(int *)(uVar13 + lVar14),fStack_1b4);
        }
      }
LAB_140165921:
      lVar14 = lVar14 + 0xc;
      unaff_RSI = uVar13;
    } while (uVar7 * 0xc != lVar14);
  }
  if ((uStack_188 != 0) && (lStack_1b0 != 0)) {
    auVar17 = ZEXT464(_DAT_145fc6ed8);
    uVar18 = 0;
    lVar9 = 0;
    auVar21 = ZEXT1264(ZEXT812(0));
    lVar14 = uStack_188 * 0x18;
    uVar12 = _DAT_146159bc0;
    uVar19 = _DAT_14614f7f0;
    uVar20 = _UNK_14614f7f8;
    do {
      if ((*(char *)(lVar1 + 10 + lVar9) == '\0') && (*(char *)(lVar1 + 0xb + lVar9) != '\f')) {
        auStack_118 = auVar17._0_16_;
        auStack_e8 = auVar21._0_16_;
        uStack_108 = uVar12;
        uStack_100 = uVar18;
        uStack_f8 = uVar19;
        uStack_f0 = uVar20;
        auStack_d0 = auStack_e8;
        FUN_144dd3330(*(undefined4 *)(lVar1 + lVar9),&uStack_198);
        uVar13 = FUN_144dd2dc0(uStack_198,lStack_1b0,uVar8 & 0xffffffff);
        uVar7 = uVar8 & 0xffffffff;
        if (uVar13 != 0) {
          unaff_RSI = CONCAT71((int7)(unaff_RSI >> 8),*(undefined1 *)(lVar1 + 8 + lVar9));
          FUN_144dd3330(*(undefined4 *)(lVar1 + lVar9),&uStack_19c);
          FUN_144dd2ec0(uStack_19c,uVar7,unaff_RSI & 0xffffffff,auStack_118,uVar13);
          uVar8 = uVar13;
        }
        auStack_178 = auVar17._0_16_;
        auStack_148 = auVar21._0_16_;
        uStack_168 = uVar12;
        uStack_160 = uVar18;
        uStack_158 = uVar19;
        uStack_150 = uVar20;
        auStack_130 = auStack_148;
        FUN_144dd3330(*(undefined4 *)(lVar1 + 4 + lVar9),&uStack_1a0);
        uVar13 = FUN_144dd2dc0(uStack_1a0,lStack_1b0,uVar7);
        if (uVar13 != 0) {
          unaff_RSI = CONCAT71((int7)(unaff_RSI >> 8),*(undefined1 *)(lVar1 + 9 + lVar9));
          FUN_144dd3330(*(undefined4 *)(lVar1 + 4 + lVar9),&uStack_1a4);
          FUN_144dd2ec0(uStack_1a4,uVar7,unaff_RSI & 0xffffffff,auStack_178,uVar13);
          uVar8 = uVar13;
        }
        uVar16 = (undefined7)(uVar8 >> 8);
        if (auStack_d0._0_8_ == 0) {
          uVar8 = CONCAT71(uVar16,uVar15);
        }
        else {
          fStack_1b4 = -1.0;
          cVar2 = FUN_144dd3870(auStack_118,auStack_178,*(undefined1 *)(lVar1 + 0xb + lVar9),
                                *(undefined1 *)(lVar1 + 8 + lVar9),
                                *(undefined1 *)(lVar1 + 9 + lVar9),&fStack_1b4,
                                *(char *)(lVar1 + 0x10 + lVar9) != '\0',0);
          uVar8 = CONCAT71(uVar16,uVar15);
          if ((cVar2 != '\0') && (iVar6 = *(int *)(lVar1 + 0x14 + lVar9), iVar6 != 0x77930519)) {
            (**(code **)(*(longlong *)*puStack_180 + 0x18))
                      ((longlong *)*puStack_180,iVar6,fStack_1b4 * *(float *)(lVar1 + 0xc + lVar9));
          }
        }
      }
      lVar9 = lVar9 + 0x18;
    } while (lVar14 != lVar9);
  }
  return;
}

