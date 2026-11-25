// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140048060  size: 292 bytes
// Name:    FUN_140048060
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1456a3610, FUN_140047fb0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 (*) [16] FUN_140048060(longlong *param_1,undefined1 (*param_2) [16],char param_3)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  short sVar5;
  longlong lVar6;
  int iVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 (*pauStack_90) [16];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  
  auVar8._0_12_ = ZEXT812(0);
  auVar8._12_4_ = 0;
  *param_2 = auVar8;
  lVar6 = (**(code **)(*param_1 + 0x80))();
  if (lVar6 == 0) {
    lVar6 = (**(code **)(*param_1 + 0x78))(param_1);
    if (lVar6 != 0) {
      (**(code **)(**(longlong **)(lVar6 + 8) + 0x38))(*(longlong **)(lVar6 + 8),&fStack_58);
      auVar8 = vshufps_avx(*(undefined1 (*) [16])(lVar6 + 0x60),*(undefined1 (*) [16])(lVar6 + 0x70)
                           ,0x33);
      auVar8 = vshufps_avx(*(undefined1 (*) [16])(lVar6 + 0x60),auVar8,0x2f);
      auVar9._0_4_ = auVar8._0_4_ + _DAT_145fc6ed8;
      auVar9._4_4_ = auVar8._4_4_ + _DAT_145fc6ed8;
      auVar9._8_4_ = auVar8._8_4_ + _DAT_145fc6ed8;
      auVar9._12_4_ = auVar8._12_4_ + _DAT_145fc6ed8;
      auVar8 = vshufps_avx(auVar9,auVar9,0x55);
      auVar1 = vshufps_avx(auVar9,auVar9,0xaa);
      auVar10._0_4_ = auVar8._0_4_ * fStack_58 * auVar9._0_4_ * auVar1._0_4_;
      auVar10._4_4_ = auVar8._4_4_ * fStack_54 * auVar9._0_4_ * auVar1._4_4_;
      auVar10._8_4_ = auVar8._8_4_ * fStack_50 * auVar9._0_4_ * auVar1._8_4_;
      auVar10._12_4_ = auVar8._12_4_ * fStack_4c * auVar9._0_4_ * auVar1._12_4_;
      *param_2 = auVar10;
    }
  }
  else {
    pauStack_90 = param_2;
    sVar5 = (**(code **)(*param_1 + 0x28))(param_1,0);
    if (0 < sVar5) {
      iVar7 = 0;
      do {
        (**(code **)(*param_1 + 0x30))(param_1,&uStack_78,iVar7);
        uStack_88 = uStack_78;
        uStack_80 = uStack_70;
        FUN_1456a3610(&pauStack_90,&uStack_88);
        iVar7 = iVar7 + 1;
      } while (sVar5 != (short)iVar7);
    }
  }
  if (param_3 != '\0') {
    FUN_140047fb0(param_1,&fStack_68);
    fVar2 = *(float *)(*param_2 + 4);
    fVar3 = *(float *)(*param_2 + 8);
    fVar4 = *(float *)(*param_2 + 0xc);
    *(float *)*param_2 = fStack_68 + *(float *)*param_2;
    *(float *)(*param_2 + 4) = fStack_64 + fVar2;
    *(float *)(*param_2 + 8) = fStack_60 + fVar3;
    *(float *)(*param_2 + 0xc) = fStack_5c + fVar4;
  }
  return param_2;
}

