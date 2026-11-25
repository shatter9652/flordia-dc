// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400b8040  size: 140 bytes
// Name:    FUN_1400b8040
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400b62d0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1400b8040(undefined8 *param_1,longlong *param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  FUN_1400b62d0(param_1,param_2,param_3,2);
  auVar1._4_4_ = _DAT_145fc6f50;
  auVar1._0_4_ = _DAT_145fc6f50;
  auVar1._8_4_ = _DAT_145fc6f50;
  auVar1._12_4_ = _DAT_145fc6f50;
  auVar2._4_4_ = _DAT_145fc6f54;
  auVar2._0_4_ = _DAT_145fc6f54;
  auVar2._8_4_ = _DAT_145fc6f54;
  auVar2._12_4_ = _DAT_145fc6f54;
  *param_1 = &UNK_14646cee0;
  *(undefined1 (*) [16])(param_1 + 0x2a) = auVar1;
  *(undefined1 (*) [16])(param_1 + 0x2c) = auVar2;
  (**(code **)(*param_2 + 0x238))(param_2,&uStack_38);
  param_1[0x2a] = uStack_38;
  param_1[0x2b] = uStack_30;
  param_1[0x2c] = uStack_28;
  param_1[0x2d] = uStack_20;
  *(float *)(param_1 + 0x2e) = (float)*(ushort *)(param_2 + 0x11);
  return param_1;
}

