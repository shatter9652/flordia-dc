// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400bccb0  size: 185 bytes
// Name:    FUN_1400bccb0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140006180
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400bccb0(int *param_1)

{
  longlong *plVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  bool bVar8;
  longlong lStack_28;
  
  iVar4 = *param_1;
  do {
    if (iVar4 == 0) {
      return;
    }
    LOCK();
    iVar2 = *param_1;
    bVar8 = iVar4 == iVar2;
    if (bVar8) {
      *param_1 = iVar4 + 1;
      iVar2 = iVar4;
    }
    iVar4 = iVar2;
    UNLOCK();
  } while (!bVar8);
  plVar1 = (longlong *)(param_1 + 2);
  uVar7 = (uint)(*(ulonglong *)(param_1 + 2) >> 7) & 0xffffff;
  lVar6 = *(longlong *)(param_1 + 2);
  if ((*(ulonglong *)(param_1 + 2) >> 7 & 0xffffff) != 0) {
    do {
      if (lVar6 < 0x100000000) {
        lVar5 = *plVar1;
      }
      else {
        LOCK();
        lVar5 = *plVar1;
        if (lVar6 == lVar5) {
          *plVar1 = lVar6 + -0x100000000;
          lVar5 = lVar6;
        }
        UNLOCK();
        if (lVar6 == lVar5) {
          return;
        }
      }
      uVar7 = uVar7 - 1;
      lVar6 = lVar5;
    } while (uVar7 != 0);
  }
  lStack_28 = *plVar1;
  do {
    while (lStack_28 < 0x100000000) {
      cVar3 = FUN_140006180(plVar1,1,&lStack_28);
      if (cVar3 != '\0') {
        return;
      }
    }
    LOCK();
    lVar6 = *plVar1;
    if (lStack_28 == lVar6) {
      *plVar1 = lStack_28 + -0x100000000;
      lVar6 = lStack_28;
    }
    UNLOCK();
    bVar8 = lStack_28 != lVar6;
    lStack_28 = lVar6;
  } while (bVar8);
  return;
}

