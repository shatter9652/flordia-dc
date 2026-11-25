// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400ef810  size: 294 bytes
// Name:    FUN_1400ef810
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1400ef810(float *param_1,float *param_2,float param_3,float param_4,float param_5,float param_6,
             float param_7,float param_8,float param_9,float param_10)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  
  fVar6 = (param_8 - param_10) * (param_5 - param_3) + (param_9 - param_7) * (param_6 - param_4);
  fVar3 = (float)((uint)fVar6 & _DAT_145fc6f4c);
  if (_DAT_14615af54 <= fVar3) {
    fVar5 = (param_3 - param_7) * (param_8 - param_10) + (param_9 - param_7) * (param_4 - param_8);
    fVar2 = (param_4 - param_8) * (param_5 - param_3) - (param_6 - param_4) * (param_3 - param_7);
    auVar1 = vcmpss_avx(ZEXT416((uint)fVar6),ZEXT816(0),2);
    auVar4._0_4_ = (uint)fVar5 ^ _DAT_145fc6f10;
    auVar4._4_4_ = _DAT_145fc6f10;
    auVar4._8_4_ = _DAT_145fc6f10;
    auVar4._12_4_ = _DAT_145fc6f10;
    auVar1 = vblendvps_avx(auVar4,ZEXT416((uint)fVar5),auVar1);
    if (0.0 < fVar6) {
      fVar2 = (float)((uint)fVar2 ^ _DAT_145fc6f10);
    }
    fVar6 = auVar1._0_4_;
    if (0.0 <= fVar6) {
      if (fVar3 < fVar2) {
        return 0;
      }
      if (fVar3 < fVar6) {
        return 0;
      }
      if (fVar2 < 0.0) {
        return 0;
      }
      fVar3 = _DAT_145fc6ed8 / fVar3;
      *param_1 = fVar6 * fVar3;
      *param_2 = fVar2 * fVar3;
      return 1;
    }
  }
  return 0;
}

