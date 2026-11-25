// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401b0dc0  size: 35 bytes
// Name:    FUN_1401b0dc0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1451dc740
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


ulonglong FUN_1401b0dc0(void)

{
  longlong lVar1;
  ulonglong uVar2;
  
  lVar1 = func_0x00014546afb0();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_1451dc740(lVar1,0);
    uVar2 = uVar2 ^ 1;
  }
  return uVar2;
}

