// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14006f610  size: 170 bytes
// Name:    FUN_14006f610
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144ecb320
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14006f610(undefined1 *param_1,undefined8 *param_2,longlong param_3)

{
  byte bVar1;
  longlong lVar2;
  byte bVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 *puStack_28;
  code *pcStack_20;
  undefined *puStack_18;
  undefined *puStack_10;
  
  lVar2 = *(longlong *)(param_3 + 0x18);
  if (*(longlong *)(lVar2 + 0x70) != 0) {
    uStack_40 = *param_2;
    bVar1 = *(byte *)(lVar2 + 0xb8);
    if ((bVar1 & 10) == 0) {
      if (-1 < (char)bVar1) goto LAB_14006f625;
      bVar3 = 0;
    }
    else {
      bVar3 = 0x80;
    }
    puStack_28 = &uStack_40;
    *(byte *)(lVar2 + 0xb8) = bVar1 & 0x7f | bVar3;
    uStack_38 = param_2[1];
    uStack_30 = param_2[2];
    pcStack_20 = FUN_141c0fc20;
    puStack_18 = &UNK_141b7b630;
    puStack_10 = &SUB_140004380;
    FUN_144ecb320(*(longlong *)(lVar2 + 0x70),1,CONCAT71((int7)((ulonglong)lVar2 >> 8),1));
  }
LAB_14006f625:
  *param_1 = 1;
  *(undefined8 *)(param_1 + 8) = 0;
  param_1[0x10] = 1;
  param_1[0x18] = 1;
  return;
}

