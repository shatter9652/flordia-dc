// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140116200  size: 86 bytes
// Name:    FUN_140116200
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_140116200(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  bool bVar5;
  
  uVar2 = 0;
  if ((*(longlong *)(param_1 + 0x18) != 0) && (*(char *)(param_1 + 0x3c) != '\x02')) {
    lVar1 = *(longlong *)(param_1 + 0x70);
    uVar4 = (ulonglong)*(uint *)(lVar1 + 4);
    if (uVar4 == 0) {
      uVar2 = 0;
    }
    else {
      lVar3 = 8;
      do {
        uVar2 = func_0x000144f48c60(*(undefined1 *)(*(longlong *)(lVar1 + lVar3) + 0x8c));
        if ((char)uVar2 != '\0') {
          return uVar2;
        }
        bVar5 = uVar4 << 3 != lVar3;
        lVar3 = lVar3 + 8;
      } while (bVar5);
    }
  }
  return uVar2;
}

