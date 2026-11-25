// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140063530  size: 100 bytes
// Name:    FUN_140063530
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140063090
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140063530(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puStack_38;
  undefined4 uStack_30;
  undefined8 uStack_28;
  undefined4 uStack_20;
  undefined8 uStack_18;
  
  FUN_140063090();
  uStack_28 = *(undefined8 *)(param_1 + 0x58);
  uStack_20 = *(undefined4 *)(param_1 + 0x54);
  uStack_18 = *(undefined8 *)(param_1 + 0x48);
  puStack_38 = &uStack_28;
  uStack_30 = 0x2b0015;
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x40) + 0x30);
  if (plVar2 != (longlong *)0x0) {
    do {
      plVar1 = (longlong *)plVar2[2];
      (**(code **)(*plVar2 + 0x10))(plVar2,&puStack_38);
      plVar2 = plVar1;
    } while (plVar1 != (longlong *)0x0);
  }
  return;
}

