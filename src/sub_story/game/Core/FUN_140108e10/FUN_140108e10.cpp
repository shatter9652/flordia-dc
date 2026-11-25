// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140108e10  size: 168 bytes
// Name:    FUN_140108e10
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14111faa0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140108e10(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong unaff_GS_OFFSET;
  undefined8 auStack_80 [10];
  undefined8 uStack_30;
  
  *param_1 = &UNK_1466236e8;
  puVar1 = (undefined8 *)param_1[0xd];
  if (puVar1 != (undefined8 *)0x0) {
    uStack_30 = 0x140108e35;
    (**(code **)*puVar1)(puVar1,1);
  }
  uStack_30 = 0x140108e3d;
  FUN_14111faa0(param_1);
  if ((*(int *)((longlong)param_1 + 100) != 0) && (param_1[0xb] != 0)) {
    uStack_30 = 0x140108e51;
    func_0x000144d9c130();
  }
  if ((*(int *)((longlong)param_1 + 0x54) != 0) && (param_1[9] != 0)) {
    uStack_30 = 0x140108e65;
    func_0x000144d9c130();
  }
  if ((*(int *)((longlong)param_1 + 0x44) != 0) && (param_1[7] != 0)) {
    uStack_30 = 0x140108e79;
    func_0x000144d9c130();
  }
  if ((*(int *)((longlong)param_1 + 0x34) != 0) && (param_1[5] != 0)) {
    uStack_30 = 0x140108e8d;
    func_0x000144d9c130();
  }
  if ((*(int *)((longlong)param_1 + 0x24) != 0) && (param_1[3] != 0)) {
    uStack_30 = 0x140108ea1;
    func_0x000144d9c130();
  }
  *param_1 = &UNK_146209118;
  if (param_1[1] != 0) {
    auStack_80[0] = 0;
    FUN_140108550(param_1[1],auStack_80);
    FUN_144faf900(auStack_80);
    *(undefined8 **)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x880) = param_1;
  }
  return;
}

