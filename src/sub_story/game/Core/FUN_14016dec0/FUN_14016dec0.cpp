// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14016dec0  size: 51 bytes
// Name:    FUN_14016dec0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145028490
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_14016dec0(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 unaff_RSI;
  int iVar3;
  
  cVar1 = FUN_145028490(*param_1);
  if (cVar1 == '\0') {
    return 6;
  }
  lVar2 = func_0x000145028480(*(undefined8 *)(*param_1 + 400));
  if (lVar2 == 0) {
    return 6;
  }
  FUN_1400bd8b0(lVar2,&stack0xfffffffffffffffc);
  iVar3 = (int)((ulonglong)unaff_RSI >> 0x20);
  if (iVar3 < 0x4f9baf1b) {
    if (iVar3 == -0x27acdb6e) {
      return 3;
    }
    if (iVar3 == 0x37a6f369) {
      return 0;
    }
  }
  else {
    if (iVar3 == 0x5dacd4fa) {
      return 2;
    }
    if (iVar3 == 0x56f2584a) {
      return 4;
    }
    if (iVar3 == 0x4f9baf1b) {
      return 1;
    }
  }
  return 6;
}

