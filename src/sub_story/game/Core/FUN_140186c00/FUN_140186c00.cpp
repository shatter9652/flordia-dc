// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140186c00  size: 245 bytes
// Name:    FUN_140186c00
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140182060, FUN_140181ff0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 *
FUN_140186c00(undefined8 *param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  longlong *plStack_48;
  undefined8 uStack_40;
  undefined1 auVar2 [64];
  
  param_1[1] = param_4;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &UNK_146630f40;
  FUN_140182060(&plStack_48,0xe,0);
  auVar1._0_12_ = ZEXT812(0);
  auVar1._12_4_ = 0;
  auVar2 = ZEXT1664(auVar1);
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined1 (*) [16])(param_1 + 3) = auVar1;
  param_1[6] = plStack_48;
  param_1[7] = uStack_40;
  (**(code **)(*plStack_48 + 8))();
  param_1[8] = 0;
  param_1[10] = param_2;
  *(undefined1 *)(param_1 + 9) = 0;
  (**(code **)(*plStack_48 + 0x10))(plStack_48,uStack_40);
  FUN_140182060(&plStack_48,0xf,0);
  *(undefined1 (*) [16])(param_1 + 0xb) = auVar2._0_16_;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0xe] = plStack_48;
  param_1[0xf] = uStack_40;
  (**(code **)(*plStack_48 + 8))();
  param_1[0x10] = 0;
  param_1[0x12] = param_2;
  *(undefined1 *)(param_1 + 0x11) = 0;
  (**(code **)(*plStack_48 + 0x10))(plStack_48,uStack_40);
  FUN_140181ff0(param_1,*(undefined8 *)(param_3 + 8));
  return param_1;
}

