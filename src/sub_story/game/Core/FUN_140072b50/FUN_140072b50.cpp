// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140072b50  size: 237 bytes
// Name:    FUN_140072b50
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140072b50(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  
  uVar2 = *(uint *)(param_1 + 0xa4);
  if (uVar2 == *(uint *)(param_1 + 0xa0)) {
    uVar4 = 1;
    if (1 < uVar2) {
      uVar4 = uVar2 >> 1;
    }
    lVar3 = func_0x000144d9c140(4,(ulonglong)(uVar4 + uVar2) * 0x14);
    if ((ulonglong)*(uint *)(param_1 + 0xa4) != 0) {
      func_0x000145f40560(lVar3,*(undefined8 *)(param_1 + 0xa8),
                          (ulonglong)*(uint *)(param_1 + 0xa4) * 0x14);
    }
    if (*(longlong *)(param_1 + 0xa8) != 0) {
      func_0x000144d9c130();
    }
    *(longlong *)(param_1 + 0xa8) = lVar3;
    *(uint *)(param_1 + 0xa0) = uVar4 + uVar2;
    uVar2 = *(uint *)(param_1 + 0xa4);
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0xa8);
  }
  *(uint *)(param_1 + 0xa4) = uVar2 + 1;
  puVar1 = (undefined4 *)(lVar3 + (ulonglong)uVar2 * 0x14);
  if (lVar3 != 0) {
    *(undefined8 *)((longlong)puVar1 + 9) = 0;
    *(undefined8 *)(puVar1 + 1) = 0;
  }
  *puVar1 = param_2;
  puVar1[2] = param_3;
  puVar1[3] = _DAT_14abbef40;
  *(undefined1 *)(puVar1 + 4) = 0;
  return;
}

