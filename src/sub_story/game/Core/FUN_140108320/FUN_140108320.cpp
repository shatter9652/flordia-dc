// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140108320  size: 194 bytes
// Name:    FUN_140108320
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140108320(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong unaff_GS_OFFSET;
  undefined8 auStack_80 [8];
  undefined8 uStack_40;
  
  *param_1 = &UNK_14633a540;
  puVar1 = (undefined8 *)param_1[2];
  if (puVar1 != (undefined8 *)0x0) {
    uStack_40 = 0x140108346;
    (**(code **)*puVar1)(puVar1,1);
  }
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  if (param_1[10] != 0) {
    uStack_40 = 0x1401083cb;
    func_0x000144d9c130();
  }
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  if (param_1[8] != 0) {
    uStack_40 = 0x1401083d2;
    func_0x000144d9c130();
  }
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  if (param_1[6] != 0) {
    uStack_40 = 0x1401083d9;
    func_0x000144d9c130();
  }
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  if (param_1[4] != 0) {
    uStack_40 = 0x1401083e0;
    func_0x000144d9c130();
  }
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  *param_1 = &UNK_146209118;
  if (param_1[1] != 0) {
    auStack_80[0] = 0;
    FUN_140108550(param_1[1],auStack_80);
    FUN_144faf900(auStack_80);
    *(undefined8 **)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x880) = param_1;
  }
  return;
}

