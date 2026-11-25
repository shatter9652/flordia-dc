// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400fb030  size: 29 bytes
// Name:    FUN_1400fb030
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145245a70
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined4 FUN_1400fb030(void)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_145245a70();
  if (lVar2 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *(undefined4 *)(lVar2 + 0x70);
  }
  return uVar1;
}

