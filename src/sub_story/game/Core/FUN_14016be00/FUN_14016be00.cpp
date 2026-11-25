// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14016be00  size: 132 bytes
// Name:    FUN_14016be00
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14007b220, FUN_145026b20
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14016be00(longlong param_1)

{
  longlong *plVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  undefined2 *puVar8;
  undefined *apuStack_70 [4];
  undefined *puStack_50;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined *puStack_30;
  
  uStack_40 = 0x14016be15;
  FUN_145026b20(param_1 + 0x2e);
  uStack_40 = 0x14016be1d;
  FUN_14007b220(param_1 + 0x2e);
  plVar4 = *(longlong **)(param_1 + 0x50);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 0xb;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      if (*plVar4 != 0) {
        uStack_40 = 0x14016be39;
        func_0x000144d9c130();
      }
      uStack_40 = 0x14016be41;
      func_0x000141903260(plVar4);
      *(undefined4 *)((longlong)plVar4 + 0x34) = 0;
      if ((plVar4 + 8 != (longlong *)plVar4[7]) && ((longlong *)plVar4[7] != (longlong *)0x0)) {
        uStack_40 = 0x14016be82;
        func_0x000144d9c130();
      }
      uStack_40 = 0x14016be62;
      func_0x000144d9c130(plVar4,0x60);
    }
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  puStack_30 = &UNK_14502685d;
  FUN_145026900();
  if (*(short *)(param_1 + 8) != -1) {
    puStack_30 = &UNK_1450268aa;
    func_0x000144e59e70(_DAT_14a923120);
    *(undefined2 *)(param_1 + 8) = 0xffff;
  }
  if (*(short *)(param_1 + 10) != -1) {
    puStack_30 = &UNK_1450268be;
    func_0x000144e59e70(_DAT_14a923120);
    *(undefined2 *)(param_1 + 10) = 0xffff;
  }
  if (*(short *)(param_1 + 0xc) != -1) {
    puStack_30 = &UNK_1450268d2;
    func_0x000144e59e70(_DAT_14a923120);
    *(undefined2 *)(param_1 + 0xc) = 0xffff;
  }
  if (*(short *)(param_1 + 0xe) != -1) {
    puStack_30 = &UNK_1450268e6;
    func_0x000144e59e70(_DAT_14a923120);
    *(undefined2 *)(param_1 + 0xe) = 0xffff;
  }
  puVar8 = (undefined2 *)(param_1 + 0x34);
  apuStack_70[0] = &UNK_14502694b;
  cVar5 = func_0x000144ddb170(*puVar8);
  if (cVar5 != '\0') {
    puStack_50 = &UNK_145026964;
    lVar6 = FUN_145647140();
    lVar6 = -lVar6;
    *(undefined **)((longlong)apuStack_70 + lVar6) = &UNK_145026982;
    FUN_144e52aa0(auStack_48,0xf0a244ef,auStack_48 + lVar6,0x1000);
    uVar2 = *puVar8;
    *(undefined **)((longlong)apuStack_70 + lVar6) = &UNK_145026994;
    lVar7 = FUN_1451d3c50(uVar2);
    if (lVar7 != 0) {
      uVar3 = *(undefined2 *)(lVar7 + 0x45e);
      *(undefined **)((longlong)apuStack_70 + lVar6) = &UNK_1450269b0;
      FUN_14016b6e0(uVar3,uVar2);
    }
    *puVar8 = 0xffff;
    *(undefined **)((longlong)apuStack_70 + lVar6) = &UNK_1450269c6;
    FUN_144e529a0(auStack_48);
  }
  return;
}

