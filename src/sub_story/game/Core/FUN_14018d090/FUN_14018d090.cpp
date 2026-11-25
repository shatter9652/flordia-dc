// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14018d090  size: 163 bytes
// Name:    FUN_14018d090
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144dd3330, FUN_140def700, FUN_144f3ce30, FUN_144ea5f40
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14018d090(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 auStack_28 [24];
  
  func_0x000140def400();
  *(longlong *)(param_1 + 0x118) = param_2;
  if (*(longlong *)(param_2 + 0x250) != 0) {
    FUN_144dd3330(*(undefined4 *)(*(longlong *)(param_2 + 0x250) + 0x18),&uStack_5c);
    FUN_140def700(param_1,uStack_5c);
  }
  *(byte *)(param_1 + 0x46) = *(byte *)(param_1 + 0x46) | 8;
  (**(code **)(**(longlong **)(param_1 + 0x48) + 200))(*(longlong **)(param_1 + 0x48),auStack_28);
  uVar1 = FUN_144ea5f40(auStack_28);
  *(undefined4 *)(param_1 + 0x60) = uVar1;
  (**(code **)(**(longlong **)(param_1 + 0x48) + 200))(*(longlong **)(param_1 + 0x48),&uStack_48);
  uStack_58 = uStack_48;
  uStack_50 = uStack_40;
  FUN_144f3ce30(&uStack_38);
  *(undefined8 *)(param_1 + 0x50) = uStack_38;
  *(undefined8 *)(param_1 + 0x58) = uStack_30;
  return;
}

