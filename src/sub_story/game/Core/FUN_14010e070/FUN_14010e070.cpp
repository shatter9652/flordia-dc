// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14010e070  size: 63 bytes
// Name:    FUN_14010e070
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14010e070(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  *(undefined1 *)(param_1 + 0xc) = 0;
  lVar1 = *(longlong *)(param_1 + 0x121f0);
  uVar2 = func_0x0001455ac2f0(param_1 + 0x121b0);
  auVar3._0_12_ = ZEXT812(0);
  auVar3._12_4_ = 0;
  *(undefined8 *)(lVar1 + 8) = uVar2;
  *(undefined1 (*) [16])(param_1 + 0x121f0) = auVar3;
  *(undefined1 (*) [16])(param_1 + 0x121fc) = auVar3;
  return;
}

