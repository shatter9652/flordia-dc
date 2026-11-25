// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140054630  size: 127 bytes
// Name:    FUN_140054630
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140054630(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  if ((ulonglong)*(uint *)(param_1 + 4) != 0) {
    plVar1 = *(longlong **)(param_1 + 8);
    lVar2 = (ulonglong)*(uint *)(param_1 + 4) << 6;
    do {
      (**(code **)(*plVar1 + 8))(plVar1);
      plVar1 = plVar1 + 8;
      lVar2 = lVar2 + -0x40;
    } while (lVar2 != 0);
  }
  if ((ulonglong)*(uint *)(param_1 + 0x14) != 0) {
    plVar1 = *(longlong **)(param_1 + 0x18);
    lVar2 = (ulonglong)*(uint *)(param_1 + 0x14) * 0x30;
    do {
      (**(code **)(*plVar1 + 8))(plVar1);
      plVar1 = plVar1 + 6;
      lVar2 = lVar2 + -0x30;
    } while (lVar2 != 0);
  }
  if (*(int *)(param_1 + 0x28) == -1) {
    return;
  }
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_1 + 0x68);
  return;
}

