// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140189280  size: 107 bytes
// Name:    FUN_140189280
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f02e30
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


longlong FUN_140189280(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_144f02e30(param_1,1);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = func_0x000144f3a220(*(undefined4 *)(lVar1 + 0xe80));
  }
  lVar2 = func_0x000144da6540(*(undefined4 *)
                               ((*(ulonglong *)(param_1 + 8) & 0xfffffffffffffff0) + 0x9c));
  if ((((lVar2 != 0) && (*(longlong *)(lVar2 + 0xb10) != 0)) &&
      (lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0xb10) + 0x78), lVar2 != 0)) &&
     (*(char *)(lVar2 + 0x30) == '\x03')) {
    lVar1 = lVar2;
  }
  return lVar1;
}

