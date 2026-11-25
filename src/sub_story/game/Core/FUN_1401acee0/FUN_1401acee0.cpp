// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401acee0  size: 712 bytes
// Name:    FUN_1401acee0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_143efa800, FUN_14024c4a0, FUN_140434c00
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1401acee0(longlong param_1,undefined8 param_2,uint *param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined7 uVar6;
  undefined7 extraout_var;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  uint *puVar11;
  float fVar12;
  float fVar13;
  undefined1 extraout_var_00 [56];
  undefined1 extraout_var_01 [56];
  undefined1 auVar14 [64];
  undefined1 auVar15 [64];
  float fVar16;
  undefined8 uStack_230;
  undefined1 *puStack_228;
  undefined1 auStack_220 [320];
  undefined8 uStack_e0;
  undefined8 uStack_b8;
  undefined1 uStack_b0;
  uint uStack_a4;
  uint *puStack_a0;
  longlong lStack_98;
  undefined4 uStack_90;
  
  if (*(int *)(param_1 + 0xcc) == 0) {
    uStack_230 = 0x80;
    puStack_228 = auStack_220;
    uVar5 = FUN_142bc3780(param_2,&uStack_230,1);
    iVar3 = uStack_230._4_4_;
    if (0 < uStack_230._4_4_) {
      _DAT_146df5b88 = (_DAT_146df5b88 & 0xffffffff) * 0x5cdcfaa7 + (_DAT_146df5b88 >> 0x20);
      uVar5 = (ulonglong)
              *(uint *)(puStack_228 +
                       (longlong)
                       (int)((float)uStack_230._4_4_ * _DAT_14615a3a8 *
                            (float)((uint)_DAT_146df5b88 & 0x7fff)) * 4);
      *param_3 = *(uint *)(puStack_228 +
                          (longlong)
                          (int)((float)uStack_230._4_4_ * _DAT_14615a3a8 *
                               (float)((uint)_DAT_146df5b88 & 0x7fff)) * 4);
    }
    uStack_230 = uStack_230 & 0xffffffff;
    uVar6 = (undefined7)(uVar5 >> 8);
    if (puStack_228 != (undefined1 *)0x0 && auStack_220 != puStack_228) {
      func_0x000144d9c130();
      uVar6 = extraout_var;
    }
    return CONCAT71(uVar6,0 < iVar3);
  }
  uStack_90 = 0;
  uStack_b0 = 0;
  uStack_b8 = 0;
  uStack_e0 = 0x1401acf5c;
  puStack_a0 = param_3;
  lStack_98 = param_1;
  FUN_14024c4a0(param_2,FUN_14398f0e0,&lStack_98,1);
  uStack_e0 = 0x1401acf6b;
  auVar14._0_8_ = func_0x00014503ff50(0,uStack_90);
  auVar14._8_56_ = extraout_var_00;
  lVar2 = *(longlong *)(param_1 + 0xd0);
  auVar14 = ZEXT1664(auVar14._0_16_);
  uVar8 = *(int *)(param_1 + 200) << 4;
  if (uVar8 == 0) {
    uVar4 = 0;
  }
  else {
    uVar10 = 0;
    do {
      uVar4 = uVar10;
      if (!SBORROW1('\0',*(char *)((ulonglong)(uVar10 & 0xf) +
                                  (ulonglong)(uVar10 >> 4) * 0x90 + lVar2))) break;
      uVar10 = uVar10 + 1;
      uVar4 = uVar8;
    } while (uVar8 != uVar10);
  }
  uVar5 = (ulonglong)(uint)(*(int *)(param_1 + 200) << 4);
  lVar9 = uVar5 * 9;
  lVar7 = (ulonglong)(uVar4 >> 4) * 0x90;
  if (lVar7 + (ulonglong)(uVar4 & 0xf) * 8 != lVar9) {
    lVar1 = uVar5 * 9 + 0x10;
    puVar11 = (uint *)(lVar7 + 0x10 + (ulonglong)(uVar4 & 0xf) * 8 + lVar2);
    if (param_4 == 0) {
      fVar16 = 0.0;
      do {
        uStack_e0 = 0x1401ad0f5;
        fVar13 = (float)func_0x0001455c2bf0(CONCAT71((int7)((ulonglong)lVar7 >> 8),(char)puVar11[1])
                                           );
        fVar16 = fVar13 + fVar16;
        uVar10 = uVar4;
        if (auVar14._0_4_ < fVar16) goto LAB_1401ad16f;
        while (uVar4 = uVar8, uVar10 != uVar8) {
          while (uVar4 = uVar10 + 1, uVar10 = uVar4, uVar4 < uVar8) {
            if (!SBORROW1('\0',*(char *)((ulonglong)(uVar4 & 0xf) +
                                        (ulonglong)(uVar4 >> 4) * 0x90 + lVar2)))
            goto LAB_1401ad135;
          }
        }
LAB_1401ad135:
        lVar7 = (ulonglong)(uVar4 >> 4) * 0x90;
        lVar9 = lVar7 + (ulonglong)(uVar4 & 0xf) * 8;
        lVar7 = lVar7 + 0x10 + (ulonglong)(uVar4 & 0xf) * 8;
        puVar11 = (uint *)(lVar2 + 0x10 + lVar9);
      } while (lVar7 != lVar1);
    }
    else {
      fVar16 = 0.0;
      fVar13 = _DAT_145fc6ed8;
      do {
        uStack_e0 = 0x1401ad048;
        auVar15._0_8_ =
             func_0x0001455c2bf0(CONCAT71((int7)((ulonglong)lVar7 >> 8),(char)puVar11[1]));
        auVar15._8_56_ = extraout_var_01;
        fVar12 = (float)auVar15._0_8_;
        auVar15 = ZEXT1664(auVar15._0_16_);
        if (fVar12 < fVar13) {
          uStack_e0 = 0x1401ad05f;
          FUN_143efa800(param_4,&uStack_a4);
          fVar12 = 0.0;
          if (uStack_a4 != *puVar11) {
            fVar12 = auVar15._0_4_;
          }
        }
        fVar16 = fVar16 + fVar12;
        uVar10 = uVar4;
        if (auVar14._0_4_ < fVar16) {
LAB_1401ad16f:
          uVar8 = *puVar11;
          *puStack_a0 = uVar8;
          return (ulonglong)uVar8;
        }
        while (uVar4 = uVar8, uVar10 != uVar8) {
          while (uVar4 = uVar10 + 1, uVar10 = uVar4, uVar4 < uVar8) {
            if (!SBORROW1('\0',*(char *)((ulonglong)(uVar4 & 0xf) +
                                        (ulonglong)(uVar4 >> 4) * 0x90 + lVar2)))
            goto LAB_1401ad0b8;
          }
        }
LAB_1401ad0b8:
        lVar7 = (ulonglong)(uVar4 >> 4) * 0x90;
        lVar9 = lVar7 + (ulonglong)(uVar4 & 0xf) * 8;
        lVar7 = lVar7 + 0x10 + (ulonglong)(uVar4 & 0xf) * 8;
        puVar11 = (uint *)(lVar2 + 0x10 + lVar9);
      } while (lVar7 != lVar1);
    }
  }
  uStack_e0 = 0x1401ad16d;
  uVar5 = FUN_140434c00(param_2,puStack_a0,CONCAT71((int7)((ulonglong)lVar9 >> 8),1));
  return uVar5;
}

