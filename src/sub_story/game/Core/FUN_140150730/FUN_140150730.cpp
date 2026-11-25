// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140150730  size: 273 bytes
// Name:    FUN_140150730
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140ba2f00, FUN_1401ddb60, FUN_144d9d7a0, FUN_145270110, FUN_1452ca400, FUN_14509c0b0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1
FUN_140150730(longlong *param_1,byte param_2,undefined8 param_3,ulonglong param_4,longlong param_5)

{
  ushort *puVar1;
  undefined1 uVar2;
  ushort uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  byte bVar7;
  char cVar8;
  ushort uVar9;
  longlong lVar10;
  ushort *puVar11;
  bool bVar12;
  
  if (-1 < (char)param_2) {
    FUN_145270110(param_1,param_3,1,1,0);
  }
  cVar8 = FUN_1452ca400(7,param_1);
  bVar7 = param_2 | 2;
  if (cVar8 == '\0') {
    bVar7 = param_2;
  }
  if (param_5 == 0) {
    cVar8 = FUN_144d9d7a0(param_4 & 0xffffffff,(param_4 & 0xffffffff) >> 0x10);
    if (cVar8 != '\0') {
      FUN_14509c0b0(param_1,param_4 & 0xffffffff,1,1);
    }
  }
  else {
    func_0x00014509c330(param_5,param_1);
  }
  if ((bVar7 & 0x20) != 0) {
    *(uint *)((longlong)param_1 + 0xec) = *(uint *)((longlong)param_1 + 0xec) & 0xfffe7fff;
  }
  if ((bVar7 & 2) == 0) {
    if ((*(uint *)((longlong)param_1 + 0xa4) & 0xfffe) != 0x7ffe) {
      FUN_1401ddb60(param_1,4);
    }
  }
  else {
    FUN_140ba2f00(param_1,9,0,0);
    *(byte *)((longlong)param_1 + 0x34) = *(byte *)((longlong)param_1 + 0x34) & 0xfd;
    (**(code **)(*param_1 + 0x1a0))(param_1);
  }
  lVar10 = func_0x000144eb0080(*(undefined4 *)((longlong)param_1 + 0x9c));
  if (lVar10 == 0) {
    return 0;
  }
  lVar5 = *plRam00000001499ab038;
  uVar4 = *(uint *)(plRam00000001499ab038 + 1);
  lVar6 = *(longlong *)(*(longlong *)(_DAT_1499aad40 + 0x440) + 0x48);
  uVar9 = FUN_1455ae4b0(CONCAT71((uint7)(uint3)(uVar4 >> 8),3));
  *(short *)(_DAT_147649c28 + 2 + (ulonglong)uVar9 * 6) =
       (short)((ulonglong)(lVar10 - lVar5) / (ulonglong)uVar4);
  puVar11 = (ushort *)(lVar6 + 0x186);
  do {
    while (*puVar11 != 0xffff) {
      puVar1 = (ushort *)(_DAT_147649c28 + (ulonglong)*puVar11 * 6);
      LOCK();
      bVar12 = *puVar1 == 0xfffe;
      if (bVar12) {
        *puVar1 = uVar9;
      }
      UNLOCK();
      if (bVar12) {
LAB_140054dbc:
        LOCK();
        *puVar11 = uVar9;
        UNLOCK();
        LOCK();
        uVar2 = *(undefined1 *)(lVar6 + 0x188);
        *(undefined1 *)(lVar6 + 0x188) = 1;
        UNLOCK();
        return uVar2;
      }
    }
    LOCK();
    uVar3 = *puVar11;
    if (uVar3 == 0xffff) {
      *puVar11 = uVar9;
    }
    UNLOCK();
  } while (uVar3 != 0xffff);
  puVar11 = (ushort *)(lVar6 + 0x184);
  goto LAB_140054dbc;
}

