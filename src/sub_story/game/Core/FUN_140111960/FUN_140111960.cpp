// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140111960  size: 80 bytes
// Name:    FUN_140111960
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140111960(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  if (((*(byte *)(param_1 + 0x234) & 0x80) == 0) && ((*(byte *)(param_1 + 0x225) & 0x80) == 0)) {
    lVar2 = func_0x000144d9f7c0(*(undefined4 *)
                                 ((*(ulonglong *)(param_1 + 8) & 0xfffffffffffffff0) + 0x9c));
    if (lVar2 != 0) {
      cVar1 = func_0x000144f14c70(*(undefined4 *)(lVar2 + 0x14),2);
      if (cVar1 != '\0') {
        *(byte *)(param_1 + 0x229) = *(byte *)(param_1 + 0x229) | 1;
      }
    }
  }
  return;
}

