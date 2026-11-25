// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14010e4d0  size: 101 bytes
// Name:    FUN_14010e4d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14010e4d0(longlong param_1,undefined8 param_2)

{
  ushort uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  uVar1 = func_0x000144fb4ea0(*(undefined4 *)(param_1 + 0x3c),*(undefined8 *)(param_1 + 0x40));
  if (uVar1 != 0xffff) {
    auVar3 = vcvtps2ph_f16c(ZEXT416((uint)param_2),3);
    auVar2 = vcvtps2ph_f16c(ZEXT416((uint)((ulonglong)param_2 >> 0x20)),3);
    *(uint *)(*(longlong *)(param_1 + 0x30) + 0xc + (ulonglong)uVar1 * 0x1c) =
         auVar2._0_4_ << 0x10 | (uint)auVar3._0_2_;
  }
  return;
}

