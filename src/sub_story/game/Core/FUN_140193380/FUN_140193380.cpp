// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140193380  size: 429 bytes
// Name:    FUN_140193380
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140da0300, FUN_144dee900, FUN_140037af0, FUN_1454f0e50, FUN_144f66960
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_140193380(longlong param_1,uint param_2,ulonglong param_3)

{
  undefined1 auVar1 [16];
  char cVar2;
  undefined4 uVar3;
  uint *puVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong unaff_RSI;
  ulonglong uVar10;
  undefined1 auVar11 [16];
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar15;
  
  if ((int)param_3 != 0) {
    uVar10 = (ulonglong)param_2;
    lVar7 = *(longlong *)(param_1 + 8 + uVar10 * 8);
    if (lVar7 != 0) {
      uVar8 = *(uint *)(param_1 + 0x120 + uVar10 * 4);
      if ((uVar8 & 0x1fffffff) == 0) {
        lVar7 = FUN_144f66960(lVar7);
        if (lVar7 != 0) goto LAB_14019351b;
      }
      else {
        unaff_RSI = param_3 & 0xffffffff;
        puVar4 = (uint *)FUN_140037af0(uVar8);
        uVar6 = (ulonglong)*puVar4 & 0x3ffff;
        if ((*puVar4 & 0x3ffff) == 0) {
          lVar7 = 0x1498cc220;
        }
        else {
          uVar9 = (ulonglong)(uint)((int)uVar6 * 0x30);
          while (uVar8 = (*(byte *)(_DAT_1498cc2d8 + -0xc + uVar9) & 3) << 0x10 |
                         (uint)*(ushort *)(_DAT_1498cc2d8 + -0x10 + uVar9), uVar8 != 0) {
            uVar6 = (ulonglong)uVar8;
            uVar9 = uVar6 * 0x30;
          }
          lVar7 = _DAT_1498cc2d8 + -10 + uVar6 * 0x30;
        }
        puVar5 = (undefined4 *)FUN_144dee900(lVar7);
        if (puVar5 == (undefined4 *)0x0) {
LAB_14019351b:
          uVar10 = 0;
          goto LAB_140193505;
        }
        auVar14._0_12_ = ZEXT812(0);
        auVar14._12_4_ = 0;
        lVar7 = param_1 + 0x120 + uVar10 * 4;
        auVar13._0_4_ = *(float *)(param_1 + 0xf0) * *(float *)(param_1 + 0xf0);
        auVar13._4_4_ = *(float *)(param_1 + 0xf4) * *(float *)(param_1 + 0xf4);
        auVar13._8_4_ = *(float *)(param_1 + 0xf8) * *(float *)(param_1 + 0xf8);
        auVar13._12_4_ = *(float *)(param_1 + 0xfc) * *(float *)(param_1 + 0xfc);
        auVar11 = vblendps_avx(auVar13,auVar14,8);
        auVar11 = vhaddps_avx(auVar11,auVar11);
        auVar1 = vhaddps_avx(auVar11,auVar11);
        auVar13 = vrsqrtss_avx(auVar1,auVar1);
        auVar11._0_4_ = *(float *)(param_1 + 0xe0) * *(float *)(param_1 + 0xe0);
        auVar11._4_4_ = *(float *)(param_1 + 0xe4) * *(float *)(param_1 + 0xe4);
        auVar11._8_4_ = *(float *)(param_1 + 0xe8) * *(float *)(param_1 + 0xe8);
        auVar11._12_4_ = *(float *)(param_1 + 0xec) * *(float *)(param_1 + 0xec);
        auVar11 = vblendps_avx(auVar11,auVar14,8);
        auVar11 = vhaddps_avx(auVar11,auVar11);
        fVar15 = auVar13._0_4_;
        auVar14 = vhaddps_avx(auVar11,auVar11);
        auVar11 = vcmpss_avx(ZEXT416(_DAT_146159bfc),auVar1,2);
        auVar13 = vrsqrtss_avx(auVar14,auVar14);
        fVar12 = auVar13._0_4_;
        auVar13 = vcmpss_avx(ZEXT416(_DAT_146159bfc),auVar14,2);
        uVar3 = FUN_1454f0e50(*puVar5,unaff_RSI,
                              _DAT_145fc6ed8 /
                              (float)(auVar13._0_4_ &
                                     (uint)(((_DAT_145fc6f08 * fVar12 * fVar12 * auVar14._0_4_ +
                                             _DAT_145fc6edc) * fVar12 + fVar12) * auVar14._0_4_)),
                              _DAT_145fc6ed8 /
                              (float)(auVar11._0_4_ &
                                     (uint)(((_DAT_145fc6f08 * fVar15 * fVar15 * auVar1._0_4_ +
                                             _DAT_145fc6edc) * fVar15 + fVar15) * auVar1._0_4_)));
        cVar2 = FUN_140da0300(lVar7,uVar3);
        if (cVar2 == '\0') {
          uVar10 = 0;
          FUN_140da0300(lVar7,0);
          goto LAB_140193505;
        }
      }
    }
  }
  uVar10 = CONCAT71((int7)(unaff_RSI >> 8),1);
LAB_140193505:
  return uVar10 & 0xffffffff;
}

