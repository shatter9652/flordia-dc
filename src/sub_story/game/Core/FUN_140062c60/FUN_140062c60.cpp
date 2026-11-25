// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140062c60  size: 84 bytes
// Name:    FUN_140062c60
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144ea2f50
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140062c60(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_RSI;
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  
  *param_1 = &UNK_14668b1a0;
  FUN_144ea2f50(param_1,0);
  func_0x000144e2aa90(param_1 + 0x11);
  func_0x000144e2aa90(param_1 + 0x10);
  func_0x000144e2aa90(param_1 + 0xf);
  func_0x000144e2aa90(param_1 + 0xe);
  puVar1 = param_1 + 1;
  if (*(char *)((longlong)param_1 + 0x4e) == '\x01') {
    FUN_14521d2f0(puVar1,*puVar1,param_3,param_4,unaff_RSI);
    FUN_140370630(*puVar1);
  }
  auVar2._0_12_ = ZEXT812(0);
  auVar2._12_4_ = 0;
  *puVar1 = 0;
  param_1[8] = 0;
  *(undefined8 *)((longlong)param_1 + 0x46) = 0;
  *(undefined1 *)((longlong)param_1 + 0x4e) = 1;
  *(undefined1 (*) [16])(param_1 + 6) = auVar2;
  return;
}

