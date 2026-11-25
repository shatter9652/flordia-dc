// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140188430  size: 333 bytes
// Name:    FUN_140188430
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_142474c50, FUN_144f202c0, FUN_142474be0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140188430(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  bool bVar13;
  
  puVar12 = *(undefined8 **)(param_1 + 8);
  lVar1 = param_1 + -0x12780;
  if (puVar12 == (undefined8 *)0x0) {
    puVar6 = (undefined8 *)func_0x000144d9f400(lVar1,0x18,8);
    lVar11 = _DAT_1475df1c0;
    lVar7 = ((ulonglong)((longlong)puVar6 - _DAT_1475df1b8) / (ulonglong)_DAT_1475df1cc & 0xffffffff
            ) * 0x58;
    *(longlong *)(param_1 + 0x10) = _DAT_1475df1c0 + lVar7;
    *puVar6 = *(undefined8 *)(lVar11 + 0x48 + lVar7);
    *(undefined8 **)(lVar11 + 0x48 + lVar7) = puVar6;
    uVar10 = _DAT_1475df228;
    do {
      lVar11 = (uVar10 & 0xffffffff) * 0x30;
      LOCK();
      uVar8 = uVar10;
      uVar4 = ((ulonglong)*(uint *)(_DAT_1475df220 + 0x2c + lVar11) | uVar10 & 0xffffffff00000000) +
              0x100000000;
      if (uVar10 != _DAT_1475df228) {
        uVar8 = _DAT_1475df228;
        uVar4 = _DAT_1475df228;
      }
      _DAT_1475df228 = uVar4;
      UNLOCK();
      bVar13 = uVar10 != uVar8;
      uVar10 = uVar8;
    } while (bVar13);
    puVar12 = (undefined8 *)(_DAT_1475df220 + lVar11);
    (**(code **)(*(longlong *)*puVar12 + 0x48))((longlong *)*puVar12,FUN_14555df10,lVar1);
    puVar6[1] = puVar12;
    uVar5 = func_0x000144e9b520(puVar12);
    *(undefined4 *)(puVar6 + 2) = uVar5;
    *(undefined8 **)(param_1 + 8) = puVar12;
  }
  puVar6 = (undefined8 *)FUN_142474be0(_DAT_1475e7360,puVar12);
  lVar11 = _DAT_1475e7360;
  if (puVar6 == (undefined8 *)0x0) {
    puVar6 = (undefined8 *)FUN_142474c50(param_1 + 0x20,lVar1,puVar12);
    lVar11 = param_1 + 0x20;
  }
  uVar3 = *puVar6;
  *(undefined8 **)(param_1 + 0x50) = puVar6;
  *(undefined8 *)(param_1 + 0x48) = uVar3;
  puVar9 = (undefined1 *)FUN_144f202c0();
  *puVar9 = 0;
  *(undefined8 *)(puVar9 + 8) = uVar3;
  *(longlong *)(puVar9 + 0x18) = lVar11;
  *(undefined8 **)(puVar9 + 0x10) = puVar6;
  puVar9[0x28] = 0;
  *(undefined1 (*) [32])(param_1 + 0x35260) = ZEXT1232(ZEXT812(0));
  plVar2 = *(longlong **)(param_1 + 0x48);
  if ((plVar2 != (longlong *)0x0) && (*(longlong *)(param_1 + 0x352a8) != 0)) {
    (**(code **)(*plVar2 + 0x3f8))(plVar2,*(undefined8 *)(*(longlong *)(param_1 + 0x352a8) + 0x20));
  }
  *(undefined1 *)(param_1 + 0x35308) = 0xff;
  plVar2 = *(longlong **)(param_1 + 0x48);
  if ((plVar2 != (longlong *)0x0) && (*(char *)(param_1 + -0x4eb) != '\x03')) {
    (**(code **)(*plVar2 + 0x100))(plVar2,2,&stack0xffffffffffffffe8);
  }
  *(undefined1 (*) [32])(param_1 + 0x1fa00) = ZEXT1232(ZEXT812(0));
  *(undefined1 (*) [16])(param_1 + 0x1f9c8) = ZEXT416(0) << 0x20;
  func_0x000144e4cb00(param_1 + -0x12780);
  return;
}

