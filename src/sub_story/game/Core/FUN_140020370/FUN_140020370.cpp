// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140020370  size: 184 bytes
// Name:    FUN_140020370
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400231a0, FUN_140024850
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140020370(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [16];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [16];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [16];
  
  auStack_78 = ZEXT416(_DAT_145fc6ed8);
  uStack_68 = _DAT_146159bc0;
  uStack_60 = 0;
  uStack_58 = _DAT_14614f7f0;
  uStack_50 = _UNK_14614f7f8;
  auStack_48 = ZEXT816(0) << 0x20;
  (**(code **)(*param_2 + 0x18))(param_2,&uStack_a8);
  func_0x000144e0acd0(auStack_90);
  FUN_1400231a0(param_1,auStack_78,auStack_90);
  uStack_c8 = uStack_a8;
  uStack_c0 = uStack_a0;
  FUN_140024850(auStack_b8,param_3,auStack_78,auStack_90,param_4,&uStack_c8);
  return;
}

