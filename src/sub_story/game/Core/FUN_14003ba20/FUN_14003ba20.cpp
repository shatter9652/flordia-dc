// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14003ba20  size: 108 bytes
// Name:    FUN_14003ba20
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14003ba90
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14003ba20(longlong param_1,longlong param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_14678d1bb;
  if (*(undefined **)(param_2 + 0x110) != (undefined *)0x0) {
    puVar1 = *(undefined **)(param_2 + 0x110);
  }
  if (*(char *)(param_2 + 0x11f) < '\0') {
    puVar1 = (undefined *)(param_2 + 0x110);
  }
  FUN_14003ba90(param_1,puVar1,&UNK_14677ed7a,&UNK_14677ed7a);
  FUN_14003ba90(param_1,puVar1,&UNK_146789eba,&UNK_14677f9d7);
  *(undefined1 *)(param_1 + 0xa2) = 1;
  return;
}

