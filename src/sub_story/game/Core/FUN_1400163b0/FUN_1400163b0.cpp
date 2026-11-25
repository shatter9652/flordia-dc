// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400163b0  size: 86 bytes
// Name:    FUN_1400163b0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400163b0(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  
  uVar2 = *(uint *)(*(longlong *)(param_1 + 0x28) + 0x28);
  uVar4 = *(uint *)(param_1 + 0x18);
  if (uVar2 < *(uint *)(param_1 + 0x18)) {
    uVar4 = uVar2;
  }
  if (uVar4 != 0) {
    uVar5 = (ulonglong)uVar4;
    func_0x000145f40560(*(undefined8 *)(param_1 + 0x10),
                        *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x20),uVar5);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + uVar5;
    lVar3 = *(longlong *)(param_1 + 0x28);
    *(longlong *)(lVar3 + 0x20) = *(longlong *)(lVar3 + 0x20) + uVar5;
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + uVar4;
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) - uVar4;
    piVar1 = (int *)(lVar3 + 0x28);
    *piVar1 = *piVar1 - uVar4;
    if (*piVar1 == 0) {
      *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)(lVar3 + 0x10);
    }
  }
  return;
}

