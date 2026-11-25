// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400c3f20  size: 259 bytes
// Name:    FUN_1400c3f20
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1448b6a20, FUN_1448b6ad0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400c3f20(longlong param_1,undefined8 *param_2,undefined1 param_3)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  
  LOCK();
  *(int *)(param_2 + 3) = *(int *)(param_2 + 3) + 1;
  UNLOCK();
  uVar3 = *(uint *)(param_1 + 0x34);
  if (uVar3 == *(uint *)(param_1 + 0x30)) {
    uVar2 = 1;
    if (1 < uVar3) {
      uVar2 = uVar3 >> 1;
    }
    FUN_1448b6a20(param_1 + 0x30,uVar2 + uVar3);
    uVar3 = *(uint *)(param_1 + 0x34);
  }
  *(uint *)(param_1 + 0x34) = uVar3 + 1;
  if (*(longlong *)(param_1 + 0x38) == 0) {
    piVar1 = (int *)(param_2 + 3);
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*param_2)(param_2,1);
    }
  }
  else {
    *(undefined8 **)(*(longlong *)(param_1 + 0x38) + (ulonglong)uVar3 * 8) = param_2;
  }
  uVar3 = *(uint *)(param_1 + 0x84);
  if (uVar3 == *(uint *)(param_1 + 0x80)) {
    uVar2 = 1;
    if (1 < uVar3) {
      uVar2 = uVar3 >> 1;
    }
    FUN_1448b6ad0(param_1 + 0x80,uVar2 + uVar3);
    uVar3 = *(uint *)(param_1 + 0x84);
  }
  *(uint *)(param_1 + 0x84) = uVar3 + 1;
  *(undefined1 *)(*(longlong *)(param_1 + 0x88) + (ulonglong)uVar3) = param_3;
  return;
}

