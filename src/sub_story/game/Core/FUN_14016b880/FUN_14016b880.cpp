// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14016b880  size: 308 bytes
// Name:    FUN_14016b880
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14016b9c0, FUN_145026900, FUN_14016bbd0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14016b880(longlong param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  char cVar7;
  longlong lVar8;
  undefined2 *puVar9;
  longlong lVar10;
  undefined *apuStack_70 [4];
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  uVar6 = _DAT_149aea518;
  uVar3 = *(uint *)(param_1 + 0x17c);
  if ((ulonglong)uVar3 != 0) {
    lVar8 = *(longlong *)(param_1 + 0x180);
    lVar10 = 0;
    do {
      puVar4 = *(undefined8 **)(lVar8 + lVar10);
      if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = 8;
        apuStack_70[2] = (undefined *)0x14016b8c8;
        func_0x000144ea5b80(uVar6);
      }
      lVar10 = lVar10 + 8;
    } while ((ulonglong)uVar3 << 3 != lVar10);
  }
  uVar3 = *(uint *)(param_1 + 0x10c);
  if ((ulonglong)uVar3 != 0) {
    lVar8 = *(longlong *)(param_1 + 0x110);
    lVar10 = 0;
    do {
      lVar5 = *(longlong *)(lVar8 + lVar10);
      if (lVar5 != 0) {
        apuStack_70[2] = (undefined *)0x14016b8fc;
        FUN_14016b9c0(lVar5);
        uVar6 = _DAT_149aea520;
        apuStack_70[2] = (undefined *)0x14016b90b;
        FUN_14016bbd0(lVar5);
        apuStack_70[2] = (undefined *)0x14016b916;
        func_0x000144ea5b80(uVar6,lVar5);
      }
      lVar10 = lVar10 + 8;
    } while ((ulonglong)uVar3 << 3 != lVar10);
  }
  *(undefined4 *)(param_1 + 0x17c) = 0;
  if ((param_1 + 0x188 != *(longlong *)(param_1 + 0x180)) && (*(longlong *)(param_1 + 0x180) != 0))
  {
    apuStack_70[2] = (undefined *)0x14016b9b2;
    func_0x000144d9c130();
  }
  *(longlong *)(param_1 + 0x180) = param_1 + 0x188;
  *(undefined4 *)(param_1 + 0x178) = 0xc;
  *(undefined4 *)(param_1 + 0x10c) = 0;
  if (*(longlong *)(param_1 + 0x110) != 0 && param_1 + 0x118 != *(longlong *)(param_1 + 0x110)) {
    apuStack_70[2] = (undefined *)0x14016b97a;
    func_0x000144d9c130();
  }
  *(longlong *)(param_1 + 0x110) = param_1 + 0x118;
  *(undefined4 *)(param_1 + 0x108) = 0xc;
  apuStack_70[2] = (undefined *)0x14016b993;
  FUN_145026900(param_1);
  FUN_145026900();
  if (*(short *)(param_1 + 8) != -1) {
    func_0x000144e59e70(_DAT_14a923120);
    *(undefined2 *)(param_1 + 8) = 0xffff;
  }
  if (*(short *)(param_1 + 10) != -1) {
    func_0x000144e59e70(_DAT_14a923120);
    *(undefined2 *)(param_1 + 10) = 0xffff;
  }
  if (*(short *)(param_1 + 0xc) != -1) {
    func_0x000144e59e70(_DAT_14a923120);
    *(undefined2 *)(param_1 + 0xc) = 0xffff;
  }
  if (*(short *)(param_1 + 0xe) != -1) {
    func_0x000144e59e70(_DAT_14a923120);
    *(undefined2 *)(param_1 + 0xe) = 0xffff;
  }
  puVar9 = (undefined2 *)(param_1 + 0x34);
  apuStack_70[0] = &UNK_14502694b;
  cVar7 = func_0x000144ddb170(*puVar9);
  if (cVar7 != '\0') {
    puStack_50 = &UNK_145026964;
    lVar8 = FUN_145647140();
    lVar8 = -lVar8;
    *(undefined **)((longlong)apuStack_70 + lVar8) = &UNK_145026982;
    FUN_144e52aa0(auStack_48,0xf0a244ef,auStack_48 + lVar8,0x1000);
    uVar1 = *puVar9;
    *(undefined **)((longlong)apuStack_70 + lVar8) = &UNK_145026994;
    lVar10 = FUN_1451d3c50(uVar1);
    if (lVar10 != 0) {
      uVar2 = *(undefined2 *)(lVar10 + 0x45e);
      *(undefined **)((longlong)apuStack_70 + lVar8) = &UNK_1450269b0;
      FUN_14016b6e0(uVar2,uVar1);
    }
    *puVar9 = 0xffff;
    *(undefined **)((longlong)apuStack_70 + lVar8) = &UNK_1450269c6;
    FUN_144e529a0(auStack_48);
  }
  return;
}

