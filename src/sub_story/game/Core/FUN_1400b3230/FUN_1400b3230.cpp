// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400b3230  size: 657 bytes
// Name:    FUN_1400b3230
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14352f730, FUN_143508040, FUN_143517f00, FUN_142027b90, FUN_1404b7d40, FUN_144e737c0, FUN_14094d800, FUN_140c46fc0, FUN_1440f8000
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400b3230(longlong param_1,longlong param_2)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  undefined4 uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 uStack_48;
  
  lVar10 = *(longlong *)(param_1 + 8);
  *(undefined1 *)(param_1 + 0xe35) = 0;
  uVar5 = *(undefined4 *)(lVar10 + 0x9c);
  lVar7 = func_0x000144da6540(uVar5);
  if (lVar7 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = *(longlong *)(lVar7 + 0x10a8);
  }
  cVar1 = func_0x0001440f7fe0(*(undefined1 *)(lVar7 + 0xcb2));
  cVar2 = FUN_140c46fc0(lVar10);
  lVar8 = func_0x000144da6540(uVar5);
  if (lVar8 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *(undefined8 *)(lVar8 + 0x10c8);
  }
  uVar5 = FUN_143508040(lVar10);
  cVar3 = FUN_14352f730(uVar9,param_2,uVar5);
  if (cVar3 == '\0') {
    if ((char)uVar5 == '\0' && cVar1 == '\0') {
      *(undefined1 *)(param_1 + 0xe36) = 0;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0xe33) = 1;
    *(undefined1 *)(param_1 + 0xe36) = 1;
    *(char *)(param_1 + 0xe34) = (char)uVar5;
  }
  if (*(char *)(param_1 + 0xe33) != '\x01') goto LAB_1400b3467;
  cVar4 = FUN_143517f00(lVar10);
  if (cVar4 == '\0') {
    *(undefined2 *)(param_1 + 0xe33) = 0;
  }
  if ((((param_2 != 0) && (*(short *)(*(longlong *)(param_2 + 0x28) + 0x118) != 0)) &&
      (lVar8 = **(longlong **)(*(longlong *)(param_2 + 0x28) + 0x110), lVar8 != 0)) &&
     ((*(uint *)(*(longlong *)(lVar8 + 0x10) + 0x1c) & 0xfffffffe) == 2)) {
    cVar4 = func_0x0001450e1330(param_2,0x17);
    if (cVar4 == '\0') {
      cVar4 = FUN_142027b90(lVar10,param_2,0);
      if (cVar4 == '\0') {
        *(undefined2 *)(param_1 + 0xe33) = 0;
      }
    }
  }
  cVar4 = FUN_142027b90(lVar10,param_2,0);
  if (cVar4 != '\0') {
    lVar8 = func_0x0001450718b0(lVar10,1);
    if (lVar8 != 0) {
      FUN_1440f8000(lVar7,&uStack_48);
      uVar5 = _DAT_14a9b3f50;
      uVar9 = func_0x00014501bc50(uStack_48);
      cVar4 = FUN_1404b7d40(uVar9,0,200,_DAT_145fc6edc,uVar5,1);
      if (cVar4 != '\0') {
        *(undefined2 *)(param_1 + 0xe33) = 0;
      }
    }
  }
  lVar8 = func_0x000144da6540(*(undefined4 *)(lVar10 + 0x9c));
  if (lVar8 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *(undefined8 *)(lVar8 + 0x10b0);
  }
  if (cVar2 != '\0') {
    FUN_14094d800(uVar9);
  }
  if ((((*(byte *)(param_1 + 0x10) & 2) == 0) && (*(char *)(lVar7 + 0xcb2) < '\0')) &&
     (*(char *)(param_1 + 0xe34) == '\0')) {
    *(undefined1 *)(param_1 + 0xe33) = 0;
  }
  lVar7 = func_0x00014504fd40(lVar10);
  if (lVar7 == 0) {
LAB_1400b343a:
    lVar10 = func_0x00014504fd40(lVar10);
    if (lVar10 == 0) goto LAB_1400b3467;
    cVar4 = FUN_144e737c0(*(undefined8 *)(lVar10 + 0x70),*(undefined8 *)(lVar10 + 0x78),9);
    if (cVar4 == '\0') goto LAB_1400b3467;
  }
  else {
    cVar4 = FUN_144e737c0(*(undefined8 *)(lVar7 + 0x70),*(undefined8 *)(lVar7 + 0x78),2);
    if (cVar4 == '\0') goto LAB_1400b343a;
  }
  *(undefined2 *)(param_1 + 0xe33) = 0;
LAB_1400b3467:
  func_0x000144ec8b40();
  cVar4 = func_0x00014012ac20();
  if (cVar4 == '\0') {
    if ((*(char *)(param_1 + 0xe33) == '\0') && (*(char *)(param_1 + 0xe34) != '\x01')) {
      if (cVar1 != '\0') {
        *(byte *)(param_1 + 0x14) = *(byte *)(param_1 + 0x14) | 2;
      }
    }
    else {
      if (cVar3 != '\0') {
        *(undefined1 *)(param_1 + 0xe35) = 1;
      }
      if (cVar2 == '\0') {
        uVar6 = *(uint *)(param_1 + 0x14) | 5;
      }
      else {
        uVar6 = *(uint *)(param_1 + 0x14) | 9;
      }
      *(uint *)(param_1 + 0x14) = uVar6;
    }
  }
  return;
}

