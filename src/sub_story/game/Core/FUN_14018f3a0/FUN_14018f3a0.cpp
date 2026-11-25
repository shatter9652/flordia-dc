// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14018f3a0  size: 151 bytes
// Name:    FUN_14018f3a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14018f440
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14018f3a0(longlong param_1)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  undefined1 auVar4 [64];
  undefined1 auVar5 [16];
  undefined1 extraout_var [56];
  
  auVar4._0_8_ = FUN_14018f440(*(undefined8 *)(param_1 + 0x40));
  auVar4._8_56_ = extraout_var;
  fVar2 = _DAT_145fc6ed8 - (float)auVar4._0_8_;
  fVar3 = (float)((uint)fVar2 & 0x7fffff | 0x3f800000);
  auVar1 = vcmpss_avx(auVar4._0_16_,ZEXT416(_DAT_14615bf5c),2);
  auVar5._4_4_ = _DAT_14615af00;
  auVar5._0_4_ = _DAT_14615af00;
  auVar5._8_4_ = _DAT_14615af00;
  auVar5._12_4_ = _DAT_14615af00;
  auVar1 = vblendvps_avx(auVar5,ZEXT416((uint)((fVar3 * (fVar3 * _DAT_14615b748 + _DAT_14615b710) +
                                               (float)(int)(((uint)fVar2 >> 0x17) - 0x7f) +
                                               _DAT_14615b718) * _DAT_14615b71c)),auVar1);
  *(float *)(param_1 + 0xad0) = auVar1._0_4_;
  *(float *)(param_1 + 0x614) = auVar1._0_4_ + *(float *)(param_1 + 0x614);
  return;
}

