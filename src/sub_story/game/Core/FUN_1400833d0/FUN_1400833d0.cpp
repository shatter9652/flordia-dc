// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400833d0  size: 76 bytes
// Name:    FUN_1400833d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140081770
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1400833d0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  if (*(char *)(param_1 + 0x30) == '\x02') {
    lVar2 = func_0x000144ec8c40(*(undefined4 *)(param_1 + 0x9c));
    if ((lVar2 != 0) && (_DAT_14615ada8 < *(float *)(lVar2 + 0xac))) {
      return 1;
    }
  }
  else if ((*(char *)(param_1 + 0x30) == '\x03') &&
          (cVar1 = FUN_140081770(param_1,0), cVar1 != '\0')) {
    return 1;
  }
  return 0;
}

