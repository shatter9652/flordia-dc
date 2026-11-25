// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140060780  size: 55 bytes
// Name:    FUN_140060780
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144da9e70, FUN_1402a42d0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140060780(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = *(char *)(param_1 + 0xc);
  if (cVar1 == '\x01') {
    uVar2 = FUN_144da9e70(param_1,1);
    FUN_1402a42d0(uVar2);
  }
  *(undefined1 *)(param_1 + 0x47a20) = 1;
  *(char *)(param_1 + 0x47a21) = cVar1;
  return;
}

