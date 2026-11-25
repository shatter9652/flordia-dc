// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140192d90  size: 551 bytes
// Name:    FUN_140192d90
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1452b3070, FUN_144ec35b0, FUN_140191490, FUN_14018e5b0, FUN_140192fc0, FUN_1453b65a0, FUN_140192a50
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140192d90(longlong param_1,ulonglong param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_3c8 [744];
  undefined8 uStack_e0;
  undefined4 uStack_d0;
  char cStack_4f;
  undefined1 auStack_4e [22];
  undefined1 uStack_38;
  undefined1 uStack_34;
  byte bStack_32;
  
  if (*(longlong *)(param_1 + 400) == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x198) == 0) {
    return;
  }
  param_2 = param_2 & 0xffffffff;
  FUN_140192a50(param_1);
  if (*(char *)(param_1 + 0x64c) != '\x01') {
    return;
  }
  FUN_1452b3070(auStack_3c8);
  uStack_38 = 0;
  bStack_32 = bStack_32 | 2;
  if ((char)param_2 != '\0') {
    uStack_d0 = 2000;
  }
  lVar2 = func_0x000144da3240(*(undefined8 *)(param_1 + 0x40));
  lVar2 = func_0x0001450572a0(*(undefined4 *)(lVar2 + 0x9c));
  if ((lVar2 == 0) || ((*(byte *)(lVar2 + 0x11) & 0x40) == 0)) {
    uVar3 = func_0x000144da3240(*(undefined8 *)(param_1 + 0x40));
    cVar1 = FUN_1453b65a0(uVar3,0x1b);
    if (cVar1 == '\0') goto LAB_140192e2e;
  }
  uStack_d0 = 5000;
LAB_140192e2e:
  if (((lVar2 != 0) && ((*(byte *)(lVar2 + 0x11) & 0x40) != 0)) ||
     (*(char *)(param_1 + 0x64f) == '\x01')) {
    param_2 = CONCAT71((int7)(param_2 >> 8),1);
  }
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x10);
  FUN_140192fc0(param_1,6,*(undefined8 *)(lVar2 + 0x28),param_1 + 0xb4,auStack_3c8);
  FUN_140192fc0(param_1,9,*(undefined8 *)(lVar2 + 0xf8),param_1 + 0xcc,auStack_3c8);
  FUN_140192fc0(param_1,2,*(undefined8 *)(lVar2 + 0xac),param_1 + 0x94,auStack_3c8);
  FUN_140192fc0(param_1,5,*(undefined8 *)(lVar2 + 0xb4),param_1 + 0xac,auStack_3c8);
  FUN_14018e5b0(param_1,param_2);
  FUN_140192fc0(param_1,8,*(undefined8 *)(lVar2 + 0x20),param_1 + 0xc4,auStack_3c8);
  uStack_e0 = 0;
  uStack_34 = *(undefined1 *)(*(longlong *)(param_1 + 0x198) + 0x10);
  cStack_4f = (*(byte *)(*(longlong *)(param_1 + 0x40) + 0x120) & 1) * '\x02';
  FUN_140192fc0(param_1,7,*(undefined8 *)(lVar2 + 0x18),param_1 + 0xbc,auStack_3c8);
  FUN_140191490(param_1,uStack_d0);
  uVar3 = func_0x000144da3240(*(undefined8 *)(param_1 + 0x40));
  FUN_144ec35b0(uVar3,0x1b,0);
  func_0x000144de1380(auStack_4e);
  return;
}

