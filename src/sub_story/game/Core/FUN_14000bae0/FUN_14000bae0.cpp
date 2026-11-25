// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14000bae0  size: 86 bytes
// Name:    FUN_14000bae0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1451bc060
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14000bae0(longlong param_1,uint *param_2,longlong param_3)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  ulonglong uVar11;
  undefined8 uVar12;
  char cVar13;
  ulonglong uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  
  if (((*(char *)(param_3 + 0x20) != '\x01') || (*(int *)(param_3 + 0x34) < 0)) &&
     (cVar13 = FUN_1451bc060(param_1,param_3,1), uVar12 = _UNK_14614f7f8, cVar13 == '\0')) {
    *(undefined8 *)param_2 = _DAT_14614f7f0;
    *(undefined8 *)(param_2 + 2) = uVar12;
    return;
  }
  uVar12 = _UNK_146723398;
  uVar1 = *(uint *)(param_3 + 0x34);
  if ((*(byte *)(param_1 + 0xae + (longlong)(int)uVar1 * 0xa0) & 0x10) == 0) {
    if (*(char *)(param_3 + 0x30) != '\x01') {
      *(undefined8 *)param_2 = _UNK_146723390;
      *(undefined8 *)(param_2 + 2) = uVar12;
      if (1 < *(int *)(param_1 + 0x15f0)) {
        auVar16._0_12_ = ZEXT812(0);
        auVar16._12_4_ = 0;
        uVar14 = (ulonglong)uVar1;
        uVar11 = (ulonglong)(uVar1 - 1);
        if (*(int *)(param_1 + 0x15f0) - 1U != uVar1) {
          uVar14 = (longlong)(int)(uVar1 + 1);
          uVar11 = (longlong)(int)uVar1;
        }
        auVar10 = vsubps_avx(*(undefined1 (*) [16])(param_1 + 0x30 + uVar14 * 0xa0),
                             *(undefined1 (*) [16])(param_1 + 0x30 + uVar11 * 0xa0));
        fVar2 = auVar10._0_4_;
        auVar15._0_4_ = fVar2 * fVar2;
        fVar4 = auVar10._4_4_;
        auVar15._4_4_ = fVar4 * fVar4;
        fVar6 = auVar10._8_4_;
        auVar15._8_4_ = fVar6 * fVar6;
        fVar8 = auVar10._12_4_;
        auVar15._12_4_ = fVar8 * fVar8;
        auVar10 = vblendps_avx(auVar15,auVar16,8);
        auVar10 = vhaddps_avx(auVar10,auVar10);
        auVar10 = vhaddps_avx(auVar10,auVar10);
        auVar15 = vrsqrtps_avx(auVar10);
        fVar3 = auVar15._0_4_;
        fVar5 = auVar15._4_4_;
        fVar7 = auVar15._8_4_;
        fVar9 = auVar15._12_4_;
        auVar16 = vcmpps_avx(auVar16,auVar10,1);
        fVar17 = fVar5 * fVar5 * auVar10._4_4_ * _DAT_145fc6f08 - _DAT_145fc6f08;
        fVar18 = fVar7 * fVar7 * auVar10._8_4_ * _DAT_145fc6f08 - _DAT_145fc6f08;
        fVar19 = fVar9 * fVar9 * auVar10._12_4_ * _DAT_145fc6f08 - _DAT_145fc6f08;
        *param_2 = auVar16._0_4_ &
                   (uint)(((fVar3 * fVar3 * auVar10._0_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar3
                          + fVar3) * fVar2);
        param_2[1] = auVar16._4_4_ & (uint)((fVar17 * fVar5 + fVar5) * fVar4);
        param_2[2] = auVar16._8_4_ & (uint)((fVar18 * fVar7 + fVar7) * fVar6);
        param_2[3] = auVar16._12_4_ & (uint)((fVar19 * fVar9 + fVar9) * fVar8);
      }
      return;
    }
    FUN_1451ba8a0(param_1 + 0x1750 + (longlong)*(int *)(param_3 + 0x38) * 0x50,param_2);
  }
  else {
    *(undefined8 *)param_2 = _UNK_146723390;
    *(undefined8 *)(param_2 + 2) = uVar12;
    FUN_1451bab30(CONCAT44(*(undefined4 *)(param_3 + 0x40),*(undefined4 *)(param_3 + 0x40)),uVar1);
  }
  return;
}

