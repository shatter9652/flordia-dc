// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140130720  size: 118 bytes
// Name:    FUN_140130720
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14012f6f0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


bool FUN_140130720(longlong param_1)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  bool bVar6;
  
  uVar4 = (ulonglong)*(ushort *)(param_1 + 0x20);
  if (uVar4 == 0) {
    bVar6 = false;
  }
  else {
    cVar1 = FUN_14012f6f0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0xb0));
    if (cVar1 == '\0') {
      lVar5 = 0x168;
      uVar2 = 0;
      do {
        uVar3 = uVar4;
        if (uVar4 - 1 == uVar2) break;
        cVar1 = FUN_14012f6f0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + lVar5));
        lVar5 = lVar5 + 0xb8;
        uVar2 = uVar2 + 1;
        uVar3 = uVar2;
      } while (cVar1 == '\0');
      bVar6 = uVar3 < uVar4;
    }
    else {
      bVar6 = true;
    }
  }
  return bVar6;
}

