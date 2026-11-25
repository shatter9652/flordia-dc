// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140108ef0  size: 146 bytes
// Name:    FUN_140108ef0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140108f90
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140108ef0(undefined8 *param_1)

{
  longlong unaff_GS_OFFSET;
  undefined8 auStack_80 [10];
  undefined8 uStack_30;
  
  *param_1 = &UNK_1466d0b08;
  if ((*(short *)((longlong)param_1 + 0x20a) != 0) && (param_1[0x40] != 0)) {
    uStack_30 = 0x140108f1d;
    func_0x000144d9c130();
  }
  uStack_30 = 0x140108f29;
  func_0x000144fb0760(param_1 + 0x38);
  uStack_30 = 0x140108f35;
  func_0x000144fb0760(param_1 + 0x30);
  uStack_30 = 0x140108f41;
  func_0x000144fb0760(param_1 + 0x28);
  uStack_30 = 0x140108f4d;
  func_0x000144fb0760(param_1 + 0x20);
  uStack_30 = 0x140108f59;
  func_0x000144fb0760(param_1 + 0x18);
  uStack_30 = 0x140108f62;
  FUN_140108f90(param_1 + 6);
  uStack_30 = 0x140108f6b;
  func_0x000144fb0750(param_1[4]);
  *param_1 = &UNK_146209118;
  if (param_1[1] != 0) {
    auStack_80[0] = 0;
    FUN_140108550(param_1[1],auStack_80);
    FUN_144faf900(auStack_80);
    *(undefined8 **)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x880) = param_1;
  }
  return;
}

