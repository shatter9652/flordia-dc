// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1426ed7e0  size: 175 bytes
// Name:    rlHttpTaskHelper::ReadUns
// Subsystem: core
// Class:   rlHttpTaskHelper
//
// Evidence:
//   GTAVSRC: rlHttpTaskHelper::ReadUns  (rage/base/src/rline/rltelemetry.cpp)
//   literal: SecsUntilNextWrite
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1452dfc40, FUN_1446e9200, FUN_14004c030
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"
#include "gta6decomp/rlHttpTaskHelper.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong rlHttpTaskHelper__ReadUns(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  uint *puVar1;
  code *pcVar2;
  longlong *plVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  bool bVar10;
  
  plVar3 = _DAT_14ab56668;
  uVar6 = _DAT_14ab56668[4];
  do {
    iVar4 = (int)uVar6;
    if (iVar4 == 0x1fffe) goto LAB_1426ed863;
    uVar9 = uVar6 & 0xffffffff;
    LOCK();
    uVar5 = plVar3[4];
    bVar10 = uVar6 == uVar5;
    if (bVar10) {
      plVar3[4] = (ulonglong)(*(uint *)(plVar3[5] + uVar9 * 4) & 0x1ffff) |
                  uVar6 & 0xffffffff00000000;
      uVar5 = uVar6;
    }
    UNLOCK();
    uVar6 = uVar5;
  } while (!bVar10);
  LOCK();
  *(int *)(plVar3 + 2) = (int)plVar3[2] + 1;
  UNLOCK();
  puVar1 = (uint *)(plVar3[5] + uVar9 * 4);
  *puVar1 = *puVar1 | *(uint *)(plVar3 + 6);
  if (*plVar3 != 0) {
    lVar8 = *plVar3 + (ulonglong)(uint)((int)plVar3[1] * iVar4);
    if (plVar3[3] != 0) {
      FUN_14004c030(plVar3,lVar8);
    }
    FUN_1446e9200(lVar8);
    uVar7 = FUN_1452dfc40(param_3,lVar8);
    *(undefined1 *)((longlong)param_3 + 0x15) = 0;
    *(undefined4 *)(param_3 + 2) = 0x175;
    return CONCAT71((int7)((ulonglong)uVar7 >> 8),*param_3 != 0 | *(byte *)(param_3 + 3)) &
           0xffffffffffffff01;
  }
LAB_1426ed863:
  pcVar2 = (code *)swi(3);
  uVar6 = (*pcVar2)();
  return uVar6;
}

