// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14016b520  size: 54 bytes
// Name:    FUN_14016b520
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14016b560
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14016b520(longlong param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined2 *puVar6;
  undefined *apuStack_70 [4];
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  undefined *puStack_30;
  
  *(undefined8 *)(param_1 + 0x2d8) = 0;
  puStack_30 = (undefined *)0x14016b53e;
  FUN_14016b560(*(undefined4 *)(param_1 + 0x2d0));
  puStack_30 = (undefined *)0x14016b549;
  FUN_14016b560(*(undefined4 *)(param_1 + 0x2d4));
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
  puVar6 = (undefined2 *)(param_1 + 0x34);
  apuStack_70[0] = &UNK_14502694b;
  cVar3 = func_0x000144ddb170(*puVar6);
  if (cVar3 != '\0') {
    puStack_50 = &UNK_145026964;
    lVar4 = FUN_145647140();
    lVar4 = -lVar4;
    *(undefined **)((longlong)apuStack_70 + lVar4) = &UNK_145026982;
    FUN_144e52aa0(auStack_48,0xf0a244ef,auStack_48 + lVar4,0x1000);
    uVar1 = *puVar6;
    *(undefined **)((longlong)apuStack_70 + lVar4) = &UNK_145026994;
    lVar5 = FUN_1451d3c50(uVar1);
    if (lVar5 != 0) {
      uVar2 = *(undefined2 *)(lVar5 + 0x45e);
      *(undefined **)((longlong)apuStack_70 + lVar4) = &UNK_1450269b0;
      FUN_14016b6e0(uVar2,uVar1);
    }
    *puVar6 = 0xffff;
    *(undefined **)((longlong)apuStack_70 + lVar4) = &UNK_1450269c6;
    FUN_144e529a0(auStack_48);
  }
  return;
}

