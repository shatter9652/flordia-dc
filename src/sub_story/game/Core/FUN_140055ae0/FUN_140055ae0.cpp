// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140055ae0  size: 66 bytes
// Name:    FUN_140055ae0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140047dc0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined * FUN_140055ae0(longlong param_1)

{
  char cVar1;
  undefined *puVar2;
  
  cVar1 = FUN_140047dc0();
  if (cVar1 == '\0') {
    puVar2 = &UNK_146787ec8;
  }
  else {
    puVar2 = *(undefined **)(*(longlong *)(param_1 + 0x28) + -0x20);
  }
  return puVar2;
}

