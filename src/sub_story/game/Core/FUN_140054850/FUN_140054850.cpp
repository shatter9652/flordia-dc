// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140054850  size: 109 bytes
// Name:    FUN_140054850
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140054850(uint *param_1,uint param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)func_0x000144d9c140(4,(ulonglong)param_2 << 2);
  uVar1 = param_1[1];
  if ((ulonglong)uVar1 != 0) {
    if (uVar1 == 1) {
      *puVar2 = **(undefined4 **)(param_1 + 2);
    }
    else {
      func_0x000145f40560(puVar2,*(undefined4 **)(param_1 + 2),(ulonglong)uVar1 << 2);
    }
  }
  if (*(longlong *)(param_1 + 2) != 0) {
    func_0x000144d9c130();
  }
  *(undefined4 **)(param_1 + 2) = puVar2;
  *param_1 = param_2;
  return;
}

