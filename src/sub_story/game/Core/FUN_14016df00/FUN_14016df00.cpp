// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14016df00  size: 36 bytes
// Name:    FUN_14016df00
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_14016df00(void)

{
  longlong lVar1;
  int iStack_4;
  
  lVar1 = func_0x000145028480();
  if (lVar1 == 0) {
    return 6;
  }
  FUN_1400bd8b0(lVar1,&iStack_4);
  if (iStack_4 < 0x4f9baf1b) {
    if (iStack_4 == -0x27acdb6e) {
      return 3;
    }
    if (iStack_4 == 0x37a6f369) {
      return 0;
    }
  }
  else {
    if (iStack_4 == 0x5dacd4fa) {
      return 2;
    }
    if (iStack_4 == 0x56f2584a) {
      return 4;
    }
    if (iStack_4 == 0x4f9baf1b) {
      return 1;
    }
  }
  return 6;
}

