// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14002fbc0  size: 78 bytes
// Name:    FUN_14002fbc0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_14002fbc0(longlong param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  func_0x00014002fc10();
  func_0x00014002fc10(param_1 + 0x20);
  func_0x00014002fc10(param_1 + 0x40);
  func_0x00014002fc20(param_1 + 0x60);
  func_0x00014002fc10(param_1 + 0xa0);
  auVar2._4_4_ = _DAT_145fc6ed8;
  auVar2._0_4_ = _DAT_145fc6ed8;
  auVar2._8_4_ = _DAT_145fc6ed8;
  auVar2._12_4_ = _DAT_145fc6ed8;
  uVar1 = vmovlps_avx(auVar2);
  *(undefined8 *)(param_1 + 0xc0) = uVar1;
  return param_1;
}

