// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400c2390  size: 107 bytes
// Name:    FUN_1400c2390
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f5b4e0, FUN_145035af0, FUN_1450354d0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


longlong FUN_1400c2390(longlong *param_1)

{
  byte *pbVar1;
  ushort uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  lVar5 = (**(code **)(*param_1 + 0x20))(param_1,0);
  FUN_1450354d0(lVar5);
  FUN_145035af0(lVar5);
  if (*(char *)((longlong)param_1 + 0x15) == '\0') {
    FUN_144f5b4e0(lVar5);
  }
  uVar2 = *(ushort *)(lVar5 + 0x9a);
  if ((ulonglong)uVar2 != 0) {
    lVar3 = *(longlong *)(lVar5 + 0x70);
    uVar6 = 0;
    do {
      lVar4 = *(longlong *)(lVar3 + uVar6 * 8);
      if (lVar4 != 0) {
        pbVar1 = (byte *)(lVar4 + 0x11);
        *pbVar1 = *pbVar1 | 8;
      }
      uVar6 = uVar6 + 1;
    } while (uVar2 != uVar6);
  }
  return lVar5;
}

