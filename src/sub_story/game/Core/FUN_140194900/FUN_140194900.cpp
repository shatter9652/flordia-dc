// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140194900  size: 133 bytes
// Name:    FUN_140194900
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140194900(longlong param_1)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  (**(code **)(**(longlong **)(param_1 + 0x40) + 200))(*(longlong **)(param_1 + 0x40),&uStack_28);
  *(undefined8 *)(param_1 + 0x80) = uStack_28;
  *(undefined8 *)(param_1 + 0x88) = uStack_20;
  (**(code **)(**(longlong **)(param_1 + 0x40) + 0xd0))(*(longlong **)(param_1 + 0x40),&uStack_28);
  *(undefined8 *)(param_1 + 0x94) = uStack_28;
  _DAT_14ab7ef38 = (_DAT_14ab7ef38 & 0xffffffff) * 0x5cdcfaa7 + (_DAT_14ab7ef38 >> 0x20);
  *(float *)(param_1 + 0x70) = (float)((uint)_DAT_14ab7ef38 & 0x7fffff) * _DAT_14615af54;
  return;
}

