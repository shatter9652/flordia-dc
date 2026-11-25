// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140185010  size: 111 bytes
// Name:    FUN_140185010
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_140185010(longlong param_1,int param_2)

{
  longlong *plVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  uVar3 = *(ulonglong *)(param_1 + 0xa0);
  if (uVar3 != 0) {
    uVar4 = 1;
    uVar5 = 0;
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x98) + uVar5 * 8);
      if (plVar1 != (longlong *)0x0) {
        iVar2 = (**(code **)(*plVar1 + 8))();
        if (iVar2 == param_2) {
          return *(undefined8 *)(*(longlong *)(param_1 + 0x98) + uVar5 * 8);
        }
        uVar3 = *(ulonglong *)(param_1 + 0xa0);
      }
      uVar5 = (ulonglong)uVar4;
      uVar4 = uVar4 + 1;
    } while (uVar5 < uVar3);
  }
  return 0;
}

