// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400b9850  size: 150 bytes
// Name:    FUN_1400b9850
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1400b9850(longlong param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  auVar2._0_12_ = ZEXT812(0);
  auVar2._12_4_ = 0;
  *(undefined1 (*) [16])(param_1 + 8) = auVar2;
  *(undefined8 *)(param_1 + 0x18) = 0xffffffff;
  *(undefined1 (*) [16])(param_1 + 0x28) = auVar2;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
  func_0x0001400b98f0(param_1 + 0x50);
  uVar1 = vmovlps_avx(ZEXT416(_DAT_145fc6ed8));
  *(undefined8 *)(param_1 + 0x1d0) = uVar1;
  *(undefined4 *)(param_1 + 0x238) = 0;
  *(byte *)(param_1 + 0x240) = *(byte *)(param_1 + 0x240) & 0xfc;
  _DAT_146df5b88 = (_DAT_146df5b88 & 0xffffffff) * 0x5cdcfaa7 + (_DAT_146df5b88 >> 0x20);
  *(float *)(param_1 + 0x20) = (float)((uint)_DAT_146df5b88 & 0x7fff) * _DAT_14615a2ac;
  return param_1;
}

