// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140027150  size: 70 bytes
// Name:    FUN_140027150
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140026790
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140027150(longlong param_1,undefined8 param_2)

{
  char cVar1;
  byte bVar2;
  
  FUN_140026790();
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x30))
                    (*(longlong **)(param_1 + 0x30),param_2,param_1 + 0x40);
  bVar2 = 2;
  if (cVar1 == '\0') {
    bVar2 = *(byte *)(param_1 + 0x28) & 2;
  }
  *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) & 0xfd | bVar2;
  return;
}

