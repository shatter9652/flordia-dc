// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140072380  size: 153 bytes
// Name:    FUN_140072380
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140072380(longlong param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  
  (**(code **)(*param_2 + 0x78))(param_2,0);
  uVar1 = *(uint *)(param_1 + 0x4c);
  if (uVar1 == *(uint *)(param_1 + 0x48)) {
    uVar3 = 1;
    if (1 < uVar1) {
      uVar3 = uVar1 >> 1;
    }
    lVar2 = func_0x000144d9c140(8,(ulonglong)(uVar3 + uVar1) * 8);
    if ((ulonglong)*(uint *)(param_1 + 0x4c) != 0) {
      func_0x000145f40560(lVar2,*(undefined8 *)(param_1 + 0x50),
                          (ulonglong)*(uint *)(param_1 + 0x4c) << 3);
    }
    if (*(longlong *)(param_1 + 0x50) != 0) {
      func_0x000144d9c130();
    }
    *(longlong *)(param_1 + 0x50) = lVar2;
    *(uint *)(param_1 + 0x48) = uVar3 + uVar1;
    uVar1 = *(uint *)(param_1 + 0x4c);
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x50);
  }
  *(uint *)(param_1 + 0x4c) = uVar1 + 1;
  *(longlong **)(lVar2 + (ulonglong)uVar1 * 8) = param_2;
  return;
}

