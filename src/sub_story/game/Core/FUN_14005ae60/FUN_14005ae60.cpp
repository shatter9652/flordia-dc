// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14005ae60  size: 137 bytes
// Name:    FUN_14005ae60
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14005ae60(longlong param_1,float *param_2,float *param_3)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  fVar4 = (float)func_0x00014005ae10(*(undefined4 *)(param_1 + 0xc0),
                                     *(undefined1 *)(param_1 + 0x103));
  fVar3 = _DAT_145fc6ed8;
  lVar1 = *(longlong *)(param_1 + 0x20);
  auVar8._0_12_ = ZEXT812(0);
  auVar8._12_4_ = 0;
  auVar5 = ZEXT416((uint)(fVar4 * *(float *)(lVar1 + 0x10)));
  auVar6 = ZEXT416((uint)_DAT_145fc6ed8);
  auVar2 = vminss_avx(auVar6,auVar5);
  auVar5 = vcmpss_avx(auVar5,auVar8,1);
  auVar7._4_4_ = _DAT_145fc6f48;
  auVar7._0_4_ = _DAT_145fc6f48;
  auVar7._8_4_ = _DAT_145fc6f48;
  auVar7._12_4_ = _DAT_145fc6f48;
  *param_2 = (float)(~auVar5._0_4_ & auVar2._0_4_) * *(float *)(param_1 + 0xdc);
  auVar5 = ZEXT416((uint)(fVar4 * *(float *)(lVar1 + 0x14)));
  auVar2 = vminss_avx(auVar6,auVar5);
  auVar5 = vcmpss_avx(auVar5,auVar8,1);
  auVar5 = vblendvps_avx(ZEXT416((uint)(auVar2._0_4_ + _DAT_145fc6f48)),auVar7,auVar5);
  *param_3 = auVar5._0_4_ * *(float *)(param_1 + 0xdc) + fVar3;
  return;
}

