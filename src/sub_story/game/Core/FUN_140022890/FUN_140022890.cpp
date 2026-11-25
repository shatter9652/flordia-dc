// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140022890  size: 184 bytes
// Name:    FUN_140022890
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140024f50, FUN_140024a60
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140022890(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined1 auStack_138 [16];
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined1 auStack_118 [16];
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 auStack_e8 [16];
  undefined1 auStack_d8 [168];
  
  auStack_118 = ZEXT416(_DAT_145fc6ed8);
  uStack_108 = _DAT_146159bc0;
  uStack_100 = 0;
  uStack_f8 = _DAT_14614f7f0;
  uStack_f0 = _UNK_14614f7f8;
  auStack_e8 = ZEXT816(0) << 0x20;
  (**(code **)(*param_2 + 0x18))(param_2,&uStack_128);
  func_0x000144f13810(auStack_d8);
  FUN_140024a60(param_1,auStack_118,auStack_d8);
  uStack_148 = uStack_128;
  uStack_140 = uStack_120;
  FUN_140024f50(auStack_138,param_3,auStack_118,auStack_d8,param_4,&uStack_148);
  return;
}

