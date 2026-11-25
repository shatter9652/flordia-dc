// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400ef700  size: 268 bytes
// Name:    FUN_1400ef700
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14535deb0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1400ef700(undefined8 param_1,undefined8 param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_1c;
  
  fVar1 = (float)FUN_14535deb0();
  if (fVar1 < 0.0) {
    auVar6._0_12_ = ZEXT812(0);
    auVar6._12_4_ = 0;
    auVar3._0_4_ = uStack_28 * uStack_28;
    auVar3._4_4_ = uStack_24 * uStack_24;
    auVar3._8_4_ = 0;
    auVar3._12_4_ = uStack_1c * uStack_1c;
    auVar3 = vblendps_avx(auVar3,auVar6,8);
    auVar3 = vhaddps_avx(auVar3,auVar3);
    auVar6 = vhaddps_avx(auVar3,auVar3);
    auVar3 = vrsqrtss_avx(auVar6,auVar6);
    fVar4 = auVar3._0_4_;
    auVar3 = vcmpss_avx(ZEXT416(_DAT_146159bfc),auVar6,2);
    fVar4 = (float)(auVar3._0_4_ &
                   (uint)(((fVar4 * fVar4 * auVar6._0_4_ * _DAT_145fc6f08 + _DAT_145fc6edc) * fVar4
                          + fVar4) * auVar6._0_4_));
    fVar2 = 0.0;
    if (_DAT_145fc6f00 < fVar4) {
      fVar4 = fVar1 / fVar4;
      fVar5 = (float)((uint)fVar4 & _DAT_145fc6f4c);
      fVar2 = _DAT_1461661d0 - fVar5;
      auVar3 = vrsqrtss_avx(ZEXT416((uint)fVar2),ZEXT416((uint)fVar2));
      fVar2 = auVar3._0_4_ * fVar2 * fVar4 * _DAT_146177294 +
              fVar2 * fVar5 * fVar5 * fVar4 * _DAT_146177290 +
              fVar5 * fVar4 * _DAT_14617728c + fVar4 * _DAT_146177288 + _DAT_146159bdc;
    }
    *param_3 = fVar2;
  }
  return fVar1 < 0.0;
}

