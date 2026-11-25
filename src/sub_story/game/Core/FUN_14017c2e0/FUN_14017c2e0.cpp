// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14017c2e0  size: 40 bytes
// Name:    FUN_14017c2e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145033fd0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Removing unreachable block (ram,0x000145033db8) */
/* WARNING: Removing unreachable block (ram,0x000145033dc0) */
/* WARNING: Removing unreachable block (ram,0x000145033dca) */
/* WARNING: Removing unreachable block (ram,0x000145033de8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14017c2e0(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  
  *(undefined4 *)(param_1 + 0xb0) = _DAT_14abbef40;
  FUN_145033fd0();
  if (((*param_1 != 0) &&
      (lVar2 = func_0x000144d9f7c0(*(undefined4 *)(*param_1 + 0x9c)), lVar2 != 0)) &&
     (uVar1 = *(uint *)((longlong)param_1 + 0xac), (ulonglong)uVar1 != 0)) {
    lVar3 = 0;
    do {
      (**(code **)((longlong)param_1 + lVar3 + 0xb8))
                (param_1,*(undefined8 *)((longlong)param_1 + lVar3 + 0xb0),lVar2);
      lVar3 = lVar3 + 0x18;
    } while ((ulonglong)uVar1 * 0x18 != lVar3);
  }
  return;
}

