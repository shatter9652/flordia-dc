// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401b5620  size: 133 bytes
// Name:    FUN_1401b5620
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401b5dc0, FUN_1401b57c0, FUN_1401b65e0, FUN_1450782d0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


bool FUN_1401b5620(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  longlong lVar1;
  uint uStack_2c;
  
  *param_2 = 0;
  FUN_1450782d0(*(undefined8 *)(*param_1 + 0x20),&uStack_2c);
  if ((7 < uStack_2c) || ((0xa8U >> (uStack_2c & 0x1f) & 1) == 0)) {
    lVar1 = FUN_1401b65e0(param_1);
    *param_2 = lVar1;
    if (lVar1 == 0) {
      return false;
    }
  }
  lVar1 = FUN_1401b5dc0(param_1);
  *param_3 = lVar1;
  if (lVar1 == 0) {
    return false;
  }
  lVar1 = FUN_1401b57c0(param_1);
  *param_4 = lVar1;
  return lVar1 != 0;
}

