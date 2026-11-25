// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140051a10  size: 88 bytes
// Name:    FUN_140051a10
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144ead9e0, FUN_144e70f80
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


ulonglong FUN_140051a10(ulonglong param_1)

{
  undefined4 uVar1;
  char cVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(undefined4 *)((param_1 & 0xfffffffffffffff0) + 0x9c);
  lVar3 = func_0x000144ef6280(uVar1);
  if (((lVar3 == 0) ||
      (((*(byte *)(lVar3 + 0x82) & 2) == 0 && ((*(byte *)(lVar3 + 0x10e) & 2) == 0)))) &&
     (cVar2 = FUN_144ead9e0(*(undefined4 *)
                             (*(longlong *)((param_1 & 0xfffffffffffffff0) + 0x20) + 0x264)),
     cVar2 != '\0')) {
    uVar4 = FUN_144e70f80(uVar1);
    return uVar4 ^ 1;
  }
  return 0;
}

