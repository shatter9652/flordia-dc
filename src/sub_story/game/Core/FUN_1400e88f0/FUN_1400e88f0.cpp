// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400e88f0  size: 112 bytes
// Name:    FUN_1400e88f0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f65910
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_1400e88f0(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  
  func_0x000140f2c460(param_2 + 0x38);
  if (*(int *)(param_2 + 100) != 0) {
    uVar1 = *(uint *)(param_2 + 0x6c);
    if ((ulonglong)uVar1 != 0) {
      lVar2 = *(longlong *)(param_2 + 0x70);
      lVar3 = 0;
      do {
        FUN_144f65910(*(undefined4 *)(lVar2 + lVar3),1);
        lVar3 = lVar3 + 4;
      } while ((ulonglong)uVar1 << 2 != lVar3);
    }
    (**(code **)(**(longlong **)(param_2 + 0x18) + 0x20))
              (*(longlong **)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x30),0);
    *(int *)(param_2 + 100) = *(int *)(param_2 + 100) + 1;
    (**(code **)(**(longlong **)(param_2 + 0x18) + 0x30))();
  }
  *(undefined1 *)(param_2 + 0x78) = 1;
  return 1;
}

