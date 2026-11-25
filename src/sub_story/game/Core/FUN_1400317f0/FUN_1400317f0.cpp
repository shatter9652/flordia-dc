// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400317f0  size: 150 bytes
// Name:    FUN_1400317f0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140031890, FUN_144e31ea0, FUN_144e31d70
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Possible PIC construction at 0x000140031871: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000140031876) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400317f0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  bool bVar4;
  
  FUN_140031890();
  FUN_144e31d70(*(undefined8 *)(param_1 + 0x150));
  FUN_144e31ea0(*(undefined4 *)(param_1 + 400),*(undefined8 *)(param_1 + 0x198),
                *(undefined2 *)(param_1 + 0x18e));
  LOCK();
  iVar2 = _DAT_148d7a9b0 + -1;
  UNLOCK();
  bVar4 = _DAT_148d7a9b0 != -0x7fffffff;
  pvVar3 = _DAT_148d7a9b8;
  _DAT_148d7a9b0 = iVar2;
  if (bVar4) {
    LOCK();
    piVar1 = (int *)(param_1 + 0x20);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -0x80000000;
    UNLOCK();
    if (iVar2 != 0) {
      *(int *)(param_1 + 0x24) = iVar2;
      func_0x000144daa220(*(undefined8 *)(param_1 + 0x28));
    }
    LOCK();
    piVar1 = (int *)(param_1 + 0x10);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 != -0x7fffffff) {
      return;
    }
    pvVar3 = *(void **)(param_1 + 0x18);
  }
                    /* WARNING: Could not recover jumptable at 0x000140005930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetEvent(pvVar3);
  return;
}

