// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140026b10  size: 81 bytes
// Name:    FUN_140026b10
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140026b70
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_140026b10(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 auStack_30 [3];
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 8) + 0x18);
  (**(code **)(*plVar1 + 0xa8))(plVar1,auStack_30);
  cVar2 = func_0x000140005970(*(undefined1 *)(param_1 + 0x1d));
  if (cVar2 == '\0') {
    uVar3 = FUN_140026b70(*(undefined8 *)(param_1 + 0x10),plVar1,auStack_30[0]);
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

