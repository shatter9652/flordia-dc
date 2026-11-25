// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14013e1a0  size: 380 bytes
// Name:    FUN_14013e1a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14013e1a0(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                       undefined1 (*param_5) [16],char param_6)

{
  undefined8 *puVar1;
  float fVar2;
  undefined1 auVar3 [16];
  longlong *plVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 uVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined4 uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  
  plVar4 = (longlong *)param_1[1];
  lVar12 = *plVar4;
  uVar13 = (undefined4)plVar4[6];
  lVar9 = func_0x0001401cfe60(lVar12,uVar13,param_2);
  if (lVar9 == 0) {
LAB_14013e220:
    uVar10 = 0;
    if (param_6 == '\0') goto LAB_14013e2fe;
  }
  else {
    uVar10 = (ulonglong)
             *(ushort *)
              (lVar12 + 10 +
              (ulonglong)(uint)((int)((ulonglong)(lVar9 - lVar12) >> 2) * -0x55555555) * 0xc);
    if (*(int *)(*param_1 + uVar10 * 4) == -1) goto LAB_14013e220;
    puVar1 = (undefined8 *)(*param_1 + uVar10 * 4);
    uVar8 = puVar1[1];
    *(undefined8 *)param_5[3] = *puVar1;
    *(undefined8 *)(param_5[3] + 8) = uVar8;
    lVar12 = *plVar4;
    uVar13 = (undefined4)plVar4[6];
    uVar10 = CONCAT71((int7)((ulonglong)plVar4 >> 8),1);
  }
  lVar9 = func_0x0001401cfe60(lVar12,uVar13,param_3,param_4);
  if (lVar9 != 0) {
    uVar11 = (ulonglong)(uint)((int)((ulonglong)(lVar9 - lVar12) >> 2) * -0x55555555);
    lVar9 = *param_1;
    if (*(int *)(lVar9 + (ulonglong)*(ushort *)(*(longlong *)param_1[1] + 10 + uVar11 * 0xc) * 4) !=
        -1) {
      uVar11 = (ulonglong)*(ushort *)(lVar12 + 10 + uVar11 * 0xc);
      uVar10 = CONCAT71((int7)(uVar10 >> 8),1);
      auVar3 = *(undefined1 (*) [16])(lVar9 + uVar11 * 4);
      fVar2 = *(float *)(lVar9 + 0xc + uVar11 * 4);
      auVar14._0_4_ = auVar3._0_4_ + auVar3._0_4_;
      auVar14._4_4_ = auVar3._4_4_ + auVar3._4_4_;
      auVar14._8_4_ = auVar3._8_4_ + auVar3._8_4_;
      auVar14._12_4_ = auVar3._12_4_ + auVar3._12_4_;
      auVar5 = vshufps_avx(auVar3,auVar3,0xc9);
      auVar3 = vshufps_avx(auVar3,auVar3,0xd2);
      auVar6 = vshufps_avx(auVar14,auVar14,0xc9);
      auVar7 = vshufps_avx(auVar14,auVar14,0xd2);
      auVar16._0_4_ = auVar3._0_4_ * auVar14._0_4_ + auVar6._0_4_ * fVar2;
      auVar16._4_4_ = auVar3._4_4_ * auVar14._4_4_ + auVar6._4_4_ * fVar2;
      auVar16._8_4_ = auVar3._8_4_ * auVar14._8_4_ + auVar6._8_4_ * fVar2;
      auVar16._12_4_ = auVar3._12_4_ * auVar14._12_4_ + auVar6._12_4_ * fVar2;
      auVar15._0_4_ = -(fVar2 * auVar7._0_4_) + auVar5._0_4_ * auVar14._0_4_;
      auVar15._4_4_ = -(fVar2 * auVar7._4_4_) + auVar5._4_4_ * auVar14._4_4_;
      auVar15._8_4_ = -(fVar2 * auVar7._8_4_) + auVar5._8_4_ * auVar14._8_4_;
      auVar15._12_4_ = -(fVar2 * auVar7._12_4_) + auVar5._12_4_ * auVar14._12_4_;
      auVar17._0_4_ =
           -(auVar7._0_4_ * auVar3._0_4_) - (auVar5._0_4_ * auVar6._0_4_ - _DAT_145fc6ed8);
      auVar17._4_4_ =
           -(auVar7._4_4_ * auVar3._4_4_) - (auVar5._4_4_ * auVar6._4_4_ - _DAT_145fc6ed8);
      auVar17._8_4_ =
           -(auVar7._8_4_ * auVar3._8_4_) - (auVar5._8_4_ * auVar6._8_4_ - _DAT_145fc6ed8);
      auVar17._12_4_ =
           -(auVar7._12_4_ * auVar3._12_4_) - (auVar5._12_4_ * auVar6._12_4_ - _DAT_145fc6ed8);
      auVar3 = vblendps_avx(auVar16,auVar15,2);
      auVar5 = vblendps_avx(auVar17,auVar16,2);
      auVar6 = vblendps_avx(auVar15,auVar17,2);
      auVar5 = vblendps_avx(auVar15,auVar5,3);
      auVar6 = vblendps_avx(auVar16,auVar6,3);
      auVar3 = vblendps_avx(auVar17,auVar3,3);
      *param_5 = auVar5;
      param_5[1] = auVar6;
      param_5[2] = auVar3;
    }
  }
LAB_14013e2fe:
  return uVar10 & 0xffffffff;
}

