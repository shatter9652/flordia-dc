// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400bcb20  size: 193 bytes
// Name:    FUN_1400bcb20
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144ed4d10, FUN_144f4cd00, FUN_143b669f0, FUN_144f4c940, FUN_144f4c870, FUN_144e37090
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400bcb20(longlong param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  
  iVar2 = _DAT_14a94378c;
  LOCK();
  iVar1 = *(int *)(param_1 + 0x68);
  *(int *)(param_1 + 0x68) = _DAT_14a94378c;
  UNLOCK();
  if (iVar1 == iVar2) {
    return;
  }
  uVar4 = *(uint *)(param_1 + 0x44);
  if ((ulonglong)uVar4 != 0) {
    lVar5 = *(longlong *)(param_1 + 0x48);
    lVar6 = 0;
    do {
      FUN_144f4c870(*(undefined8 *)(lVar5 + lVar6));
      lVar6 = lVar6 + 8;
    } while ((ulonglong)uVar4 << 3 != lVar6);
    uVar4 = *(uint *)(param_1 + 0x44);
    if ((ulonglong)uVar4 != 0) {
      lVar5 = *(longlong *)(param_1 + 0x48);
      lVar6 = 0;
      do {
        FUN_144f4cd00(*(undefined8 *)(lVar5 + lVar6));
        lVar6 = lVar6 + 8;
      } while ((ulonglong)uVar4 << 3 != lVar6);
    }
  }
  cVar3 = FUN_143b669f0(param_1);
  if (cVar3 != '\0') {
    uVar4 = *(uint *)(param_1 + 0x44);
    lVar5 = *(longlong *)(param_1 + 0x48);
    cVar3 = FUN_144e37090(uVar4,lVar5);
    if (cVar3 == '\0') goto LAB_1400bcbb9;
    FUN_144ed4d10(param_1);
  }
  uVar4 = *(uint *)(param_1 + 0x44);
  lVar5 = *(longlong *)(param_1 + 0x48);
LAB_1400bcbb9:
  if (uVar4 != 0) {
    lVar6 = 0;
    do {
      FUN_144f4c940(*(undefined8 *)(lVar5 + lVar6));
      lVar6 = lVar6 + 8;
    } while ((ulonglong)uVar4 << 3 != lVar6);
  }
  return;
}

