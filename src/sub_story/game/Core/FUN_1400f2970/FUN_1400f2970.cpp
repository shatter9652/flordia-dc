// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400f2970  size: 225 bytes
// Name:    FUN_1400f2970
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144eca860, FUN_1400f2a60
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


longlong * FUN_1400f2970(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  undefined8 uVar5;
  uint uVar6;
  
  plVar4 = (longlong *)((ulonglong)(*(int *)(param_1 + 4) - 1) * 8 + *(longlong *)(param_1 + 8));
  if (plVar4 != param_2) {
    lVar1 = *param_2;
    lVar2 = *plVar4;
    if (lVar1 != lVar2) {
      *plVar4 = 0;
      *param_2 = lVar2;
      if (lVar1 != 0) {
        FUN_1400f2a60(lVar1);
        cVar3 = func_0x000144eca830(0x149fee680,lVar1);
        if (cVar3 == '\0') {
          uVar5 = func_0x000144fc99c0(0,0);
          func_0x000140093420(uVar5,lVar1);
        }
        else {
          FUN_144eca860(0x149fee680,lVar1);
        }
      }
    }
  }
  uVar6 = *(int *)(param_1 + 4) - 1;
  *(uint *)(param_1 + 4) = uVar6;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + (ulonglong)uVar6 * 8);
  if (lVar1 != 0) {
    FUN_1400f2a60(lVar1);
    cVar3 = func_0x000144eca830(0x149fee680,lVar1);
    if (cVar3 == '\0') {
      uVar5 = func_0x000144fc99c0(0,0);
      func_0x000140093420(uVar5,lVar1);
    }
    else {
      FUN_144eca860(0x149fee680,lVar1);
    }
  }
  return param_2;
}

