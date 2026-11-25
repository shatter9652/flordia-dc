// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401457e0  size: 441 bytes
// Name:    FUN_1401457e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_141c86590, FUN_1412ec1f0, FUN_141c864b0, FUN_141704e20, FUN_1401459a0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1401457e0(longlong param_1,byte param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lStack_70;
  byte bStack_68;
  longlong *plStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  longlong *plStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x18) + (ulonglong)param_2 * 0x14);
  uVar3 = FUN_141704e20();
  puVar1[2] = uVar3;
  if ((*(char *)(puVar1 + 4) < '\0') && ((puVar1[1] & 4) == 0)) {
    if ((puVar1[1] & 1) == 0) {
      plStack_60 = &lStack_70;
      puStack_58 = &UNK_140004870;
      puStack_50 = &UNK_145955790;
      puStack_48 = &SUB_140004380;
      FUN_141c86590(&plStack_60,*puVar1,0);
      lVar5 = FUN_1412ec1f0();
      lVar4 = *(longlong *)(lVar5 + 0xe8);
      if (lVar4 != 0) {
        if (*(code **)(lVar4 + 0x60) != (code *)0x0) {
          (**(code **)(lVar4 + 0x60))(lVar4 + 0xfU & 0xfffffffffffffff0);
        }
        func_0x000144d9c130(lVar4,0x68);
      }
      lVar4 = func_0x000144f97130(0x68);
      if (lVar4 != 0) {
        *(undefined **)(lVar4 + 0x50) = &UNK_140004810;
        *(undefined **)(lVar4 + 0x58) = &SUB_140004380;
        *(undefined **)(lVar4 + 0x60) = &SUB_140004380;
      }
      *(longlong *)(lVar5 + 0xe8) = lVar4;
    }
    else {
      FUN_1401459a0(*puVar1);
    }
  }
  else {
    plStack_40 = &lStack_70;
    pcStack_38 = FUN_141f65830;
    puStack_30 = &UNK_1459aa0d0;
    puStack_28 = &SUB_140004380;
    lStack_70 = param_1;
    bStack_68 = param_2;
    FUN_141c86590(&plStack_40,*puVar1,0);
    uVar2 = puVar1[1];
    if ((uVar2 & 1) != 0) {
      lVar4 = FUN_1412ec1f0();
      *(undefined1 *)(lVar4 + 0xe0) = 2;
    }
    if ((uVar2 & 8) != 0) {
      lVar4 = FUN_1412ec1f0();
      *(undefined1 *)(lVar4 + 0x73) = 1;
    }
  }
  lVar4 = FUN_1412ec1f0();
  *(byte *)(lVar4 + 0xd9) = *(byte *)(lVar4 + 0xd9) & 0x7f;
  lVar4 = FUN_1412ec1f0();
  *(byte *)(lVar4 + 0xd9) = *(byte *)(lVar4 + 0xd9) & 0xfb;
  lVar4 = FUN_1412ec1f0();
  *(byte *)(lVar4 + 0xd9) = *(byte *)(lVar4 + 0xd9) | 0x40;
  lVar4 = FUN_1412ec1f0();
  *(byte *)(lVar4 + 0xd8) = *(byte *)(lVar4 + 0xd8) | 0x80;
  lVar4 = FUN_1412ec1f0();
  *(byte *)(lVar4 + 0xd9) = *(byte *)(lVar4 + 0xd9) | 1;
  FUN_141c864b0();
  uVar3 = puVar1[2];
  if (*(int *)(param_1 + 0x30) < 0) {
    *(undefined4 *)(param_1 + 0x30) = uVar3;
  }
  *(undefined4 *)(param_1 + 0x34) = uVar3;
  return;
}

