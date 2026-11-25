// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14015b110  size: 296 bytes
// Name:    FUN_14015b110
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1420ae5e0, FUN_144ef4040, FUN_14098cf30, FUN_140c41920, FUN_1412f1610, FUN_1402e5b80
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14015b110(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined7 uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined4 uStack_40;
  undefined1 uStack_3c;
  undefined1 uStack_3b;
  undefined4 *puStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  
  uVar5 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffff0;
  if ((0x1cU >> (*(uint *)(uVar5 + 0x30) & 0x1f) & 1) != 0) {
    *(byte *)(uVar5 + 0xee) = *(byte *)(uVar5 + 0xee) & 0xfb;
  }
  *(undefined1 *)(param_1 + 0xba) = 0;
  FUN_1420ae5e0(param_1);
  lVar2 = func_0x000144e63d10(*(undefined4 *)(uVar5 + 0x9c));
  if (lVar2 != 0) {
    param_2 = 0x9f279f61;
    FUN_1412f1610(lVar2,0x9f279f61);
  }
  lVar2 = *(longlong *)(uVar5 + 0x38);
  if (lVar2 == 0) goto LAB_14015b1d8;
  cVar1 = FUN_144ef4040(uVar5);
  if (cVar1 != '\0') goto LAB_14015b1d8;
  if (*(char *)(param_1 + 0xcb) == '\0') {
    lVar3 = func_0x000144e63d10(*(undefined4 *)(uVar5 + 0x9c));
    if (lVar3 != 0) {
      param_2 = lVar2;
      cVar1 = FUN_140c41920(lVar3,lVar2,2,1);
      if (cVar1 != '\0') goto LAB_14015b1a5;
    }
    cVar1 = *(char *)(uVar5 + 0x30);
    if ((*(byte *)(lVar2 + 0x1c) & 8) != 0) {
      uStack_40 = *(undefined4 *)(lVar2 + 0x10);
      puStack_38 = &uStack_40;
      uStack_3b = cVar1 == '\x02';
      pcStack_30 = FUN_1440d4820;
      puStack_28 = &UNK_1401167b0;
      puStack_20 = &SUB_140004380;
      uStack_3c = 0;
      FUN_1402e5b80(8);
      goto LAB_14015b1d8;
    }
    uVar4 = (undefined7)((ulonglong)param_2 >> 8);
    uVar6 = 0;
  }
  else {
LAB_14015b1a5:
    cVar1 = *(char *)(uVar5 + 0x30);
    uVar4 = (undefined7)((ulonglong)param_2 >> 8);
    uVar6 = 1;
  }
  FUN_14098cf30(lVar2,CONCAT71(uVar4,2),uVar6,1,cVar1 == '\x02');
LAB_14015b1d8:
  if (*(char *)(uVar5 + 0x30) == '\x04') {
    *(byte *)(uVar5 + 0x101) = *(byte *)(uVar5 + 0x101) | 0x20;
  }
  return;
}

