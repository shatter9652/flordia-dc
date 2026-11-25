// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401160e0  size: 21 bytes
// Name:    FUN_1401160e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined1 FUN_1401160e0(void)

{
  undefined1 uVar1;
  longlong lVar2;
  
  lVar2 = func_0x000145047900();
  if (*(char *)(lVar2 + 0xd0) != '\0') {
    return 0;
  }
  if (*(char *)(lVar2 + 0xdc) == '\x01') {
    uVar1 = *(undefined1 *)(lVar2 + 0xdb);
  }
  else {
    if (*(char *)(lVar2 + 0xe7) != '\0') {
      return 0;
    }
    if (*(char *)(lVar2 + 0xe6) == '\0') {
      uVar1 = *(undefined1 *)(lVar2 + 0xd9);
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}

