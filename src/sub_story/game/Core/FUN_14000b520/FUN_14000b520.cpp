// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14000b520  size: 130 bytes
// Name:    FUN_14000b520
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14000b520(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  
  auVar2._0_12_ = ZEXT812(0);
  auVar2._12_4_ = 0;
  *(undefined2 *)(param_1 + 0x1a) = 0;
  *(undefined1 (*) [16])(param_1 + 0x17) = auVar2;
  param_1[0x19] = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0xd2) = 0;
  *param_1 = 0xffffffff00000000;
  *(undefined4 *)((longlong)param_1 + 0xd3) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  puVar1 = (undefined8 *)param_1[2];
  if (puVar1 != (undefined8 *)0x0 && param_1 + 3 != puVar1) {
    func_0x000144d9c130(puVar1);
  }
  param_1[2] = param_1 + 3;
  *(undefined4 *)(param_1 + 1) = 10;
  return;
}

