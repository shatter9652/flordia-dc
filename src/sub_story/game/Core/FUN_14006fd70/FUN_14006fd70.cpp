// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14006fd70  size: 115 bytes
// Name:    FUN_14006fd70
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140522430, FUN_1400fd6e0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


ulonglong FUN_14006fd70(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  bool bVar4;
  
  FUN_1400fd6e0(param_1 + 0x50);
  if ((ulonglong)*(uint *)(param_1 + 0x44) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
    if (*(longlong *)(*(longlong *)(param_1 + 0x48) + 0x230) != param_2) {
      lVar2 = 0;
      do {
        bVar4 = (ulonglong)*(uint *)(param_1 + 0x44) * 0x240 + -0x240 != lVar2;
        uVar3 = CONCAT71((int7)(uVar3 >> 8),bVar4);
        if (!bVar4) break;
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x48) + 0x470 + lVar2);
        lVar2 = lVar2 + 0x240;
      } while (*plVar1 != param_2);
    }
  }
  FUN_140522430(param_1 + 0x50);
  return uVar3 & 0xffffffff;
}

