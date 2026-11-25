// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140026790  size: 97 bytes
// Name:    FUN_140026790
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140026790(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  
  cVar2 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0xb0))();
  *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) & 0xfd | cVar2 * '\x02';
  plVar1 = *(longlong **)(param_1 + 0x20);
  if (plVar1 != (longlong *)0x0) {
    cVar2 = (**(code **)(*plVar1 + 0xb0))(plVar1,param_2);
    bVar3 = 2;
    if (cVar2 == '\0') {
      bVar3 = *(byte *)(param_1 + 0x28) & 2;
    }
    *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) & 0xfd | bVar3;
  }
  return;
}

