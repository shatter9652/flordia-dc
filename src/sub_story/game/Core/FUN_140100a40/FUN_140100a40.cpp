// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140100a40  size: 397 bytes
// Name:    FUN_140100a40
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_141a8ab40, FUN_140100030
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140100a40(undefined8 param_1,uint param_2,longlong *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  uint *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint *puVar8;
  
  *param_4 = 0;
  uVar6 = (ulonglong)_DAT_14a9b3e78;
  puVar8 = _DAT_14a9b3e70;
  uVar5 = uVar6;
  if (uVar6 == 0) {
    return 0;
  }
  do {
    uVar7 = uVar5 >> 1;
    if ((puVar8 + uVar7 * 10 + 10)[-10] < param_2) {
      puVar8 = puVar8 + uVar7 * 10 + 10;
      uVar7 = ~uVar7 + uVar5;
    }
    uVar5 = uVar7;
  } while (0 < (longlong)uVar7);
  if (puVar8 == _DAT_14a9b3e70 + uVar6 * 10) {
    return 0;
  }
  if (*puVar8 != param_2) {
    return 0;
  }
  uVar5 = (ulonglong)(ushort)puVar8[8];
  if (uVar5 != 0) {
    puVar4 = *(uint **)(puVar8 + 6);
    do {
      uVar6 = uVar5 >> 1;
      uVar7 = ~uVar6 + uVar5;
      uVar5 = uVar6;
      if ((puVar4 + uVar6 * 4 + 4)[-4] < *(uint *)((longlong)param_3 + 0x24)) {
        puVar4 = puVar4 + uVar6 * 4 + 4;
        uVar5 = uVar7;
      }
    } while (0 < (longlong)uVar5);
    if ((puVar4 != *(uint **)(puVar8 + 6) + (ulonglong)(ushort)puVar8[8] * 4) &&
       (*puVar4 == *(uint *)((longlong)param_3 + 0x24))) goto LAB_140100b9a;
  }
  cVar2 = (**(code **)(*param_3 + 8))(param_3,0xed54a967);
  if (cVar2 == '\0') {
    return 0;
  }
  lVar3 = FUN_140100030(param_3);
  if (lVar3 == 0) {
    return 0;
  }
  uVar5 = (ulonglong)(ushort)puVar8[8];
  if (uVar5 == 0) {
    return 0;
  }
  puVar4 = *(uint **)(puVar8 + 6);
  do {
    uVar6 = uVar5 >> 1;
    uVar7 = ~uVar6 + uVar5;
    uVar5 = uVar6;
    if ((puVar4 + uVar6 * 4 + 4)[-4] < *(uint *)(lVar3 + 8)) {
      puVar4 = puVar4 + uVar6 * 4 + 4;
      uVar5 = uVar7;
    }
  } while (0 < (longlong)uVar5);
  if (puVar4 == *(uint **)(puVar8 + 6) + (ulonglong)(ushort)puVar8[8] * 4) {
    return 0;
  }
  if (*puVar4 != *(uint *)(lVar3 + 8)) {
    return 0;
  }
LAB_140100b9a:
  uVar1 = *(undefined8 *)(puVar4 + 2);
  cVar2 = FUN_141a8ab40(uVar1,param_1,param_3);
  if (cVar2 == '\0') {
    return 0;
  }
  *param_4 = puVar8 + 2;
  return uVar1;
}

