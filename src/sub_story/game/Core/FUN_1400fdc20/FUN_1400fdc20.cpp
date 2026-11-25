// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400fdc20  size: 126 bytes
// Name:    FUN_1400fdc20
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400fdc20(longlong param_1,longlong param_2,uint param_3,longlong param_4,int param_5)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (0 < *(int *)(param_1 + 0x4c)) {
    lVar3 = *(longlong *)(param_1 + 0x58);
    lVar1 = *(longlong *)(param_1 + 0x1d0);
    lVar2 = 0;
    do {
      (**(code **)(lVar1 + 0x18 + lVar2 * 8))
                (param_1,lVar3,*(longlong *)(param_2 + lVar2 * 8) + (ulonglong)param_3 * 8,
                 (ulonglong)(uint)(*(int *)(lVar3 + 0xc) * param_5) * 8 +
                 *(longlong *)(param_4 + lVar2 * 8));
      lVar2 = lVar2 + 1;
      lVar3 = lVar3 + 0x60;
    } while (lVar2 < *(int *)(param_1 + 0x4c));
  }
  return;
}

