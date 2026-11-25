// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400ff5d0  size: 182 bytes
// Name:    FUN_1400ff5d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401004e0, FUN_140100c00, FUN_144fa4c80, FUN_144fa45a0, FUN_1400ff930
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400ff5d0(longlong param_1)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  
  *(byte *)(param_1 + 0xbec) = *(byte *)(param_1 + 0xbec) & 0xfd;
  lVar4 = (**(code **)(**(longlong **)(_DAT_14aad3ce0 + 8) + 0x48))();
  bVar1 = (byte)*(undefined4 *)(param_1 + 0xbec);
  bVar2 = bVar1 & 0xfa;
  if (*(int *)(lVar4 + 0x2a8) == 1) {
    bVar2 = bVar1;
  }
  *(byte *)(param_1 + 0xbec) = bVar2 & 0xfb;
  lVar4 = _DAT_14ab56e38;
  if (((_DAT_14ab56e38 != 0) && (lVar5 = FUN_144fa45a0(param_1), lVar5 != 0)) &&
     (cVar3 = FUN_144fa4c80(lVar5,0x1a), cVar3 == '\0')) {
    cVar3 = FUN_140100c00(lVar4,lVar5);
    if (cVar3 == '\0') {
      cVar3 = FUN_1401004e0(lVar4,lVar5,0,0);
      if ((cVar3 == '\0') && (cVar3 = FUN_1400ff930(lVar4,lVar5,1), cVar3 != '\0')) {
        return;
      }
    }
    *(byte *)(param_1 + 0xbec) = *(byte *)(param_1 + 0xbec) | 4;
  }
  return;
}

