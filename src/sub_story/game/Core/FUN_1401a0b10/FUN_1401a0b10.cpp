// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401a0b10  size: 173 bytes
// Name:    FUN_1401a0b10
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401a0b10(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  longlong lVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uStack_68;
  undefined8 uStack_60;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  
  if (*(ushort *)(param_1 + 0x18) == 0) {
    fVar11 = 0.0;
    fVar12 = 0.0;
    fVar13 = 0.0;
    fVar14 = 0.0;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x10);
    lVar5 = (ulonglong)*(ushort *)(param_1 + 0x18) << 3;
    fVar11 = 0.0;
    fVar12 = 0.0;
    fVar13 = 0.0;
    fVar14 = 0.0;
    lVar4 = 0;
    do {
      lVar2 = **(longlong **)(lVar1 + lVar4 * 8);
      uStack_68 = *(undefined8 *)(lVar2 + 0x70);
      uStack_60 = *(undefined8 *)(lVar2 + 0x78);
      func_0x000144dc3790(&uStack_68,&fStack_58);
      fVar11 = fVar11 + fStack_58;
      fVar12 = fVar12 + fStack_54;
      fVar13 = fVar13 + fStack_50;
      fVar14 = fVar14 + fStack_4c;
      lVar4 = lVar4 + 1;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
    auVar6._0_4_ = (float)(int)lVar4;
    auVar6._4_4_ = auVar6._0_4_;
    auVar6._8_4_ = auVar6._0_4_;
    auVar6._12_4_ = auVar6._0_4_;
    auVar3 = vrcpps_avx(auVar6);
    fVar7 = auVar3._0_4_;
    fVar8 = auVar3._4_4_;
    fVar9 = auVar3._8_4_;
    fVar10 = auVar3._12_4_;
    fVar11 = (-((fVar7 * auVar6._0_4_ - _DAT_145fc6ed8) * fVar7) + fVar7) * fVar11;
    fVar12 = (-((fVar8 * auVar6._0_4_ - _DAT_145fc6ed8) * fVar8) + fVar8) * fVar12;
    fVar13 = (-((fVar9 * auVar6._0_4_ - _DAT_145fc6ed8) * fVar9) + fVar9) * fVar13;
    fVar14 = (-((fVar10 * auVar6._0_4_ - _DAT_145fc6ed8) * fVar10) + fVar10) * fVar14;
  }
  *(float *)(param_1 + 0x30) = fVar11;
  *(float *)(param_1 + 0x34) = fVar12;
  *(float *)(param_1 + 0x38) = fVar13;
  *(float *)(param_1 + 0x3c) = fVar14;
  return;
}

