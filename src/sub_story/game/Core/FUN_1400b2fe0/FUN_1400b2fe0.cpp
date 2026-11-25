// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400b2fe0  size: 339 bytes
// Name:    FUN_1400b2fe0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400b3140, FUN_1400b3550
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400b2fe0(longlong param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 uVar6;
  bool bVar7;
  char cStack_41;
  
  lVar4 = func_0x000144da6540(*(undefined4 *)(*(longlong *)(param_1 + 8) + 0x9c));
  if (lVar4 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(longlong *)(lVar4 + 0x10c8);
  }
  if (param_2 == 0) {
    iVar3 = FUN_1400b3550(lVar4,param_3,0);
    cStack_41 = '\0';
  }
  else {
    lVar5 = *(longlong *)(param_2 + 0x28);
    iVar3 = FUN_1400b3550(lVar4,param_3,param_2);
    cStack_41 = '\0';
    if ((lVar5 != 0) &&
       (cVar2 = FUN_1400b3140(lVar4,iVar3,param_3,param_2,&cStack_41), cVar2 != '\0')) {
      iVar3 = 1;
    }
  }
  iVar1 = *(int *)(param_1 + 0x18);
  *(int *)(param_1 + 0x14) = iVar1;
  *(int *)(param_1 + 0x18) = iVar3;
  lVar5 = func_0x000144da6540();
  if ((lVar5 == 0) || (*(longlong *)(lVar5 + 0x10b8) == 0)) {
    bVar7 = false;
  }
  else {
    bVar7 = (*(byte *)(*(longlong *)(lVar5 + 0x10b8) + 0x14) & 0xc) != 0;
  }
  if ((iVar3 == 3) && (*(char *)(param_1 + 0x48) != '\0')) {
    uVar6 = 1;
  }
  else {
    uVar6 = 0;
  }
  *(undefined1 *)(param_1 + 0x49) = uVar6;
  if ((!bVar7) || (uVar6 = 1, 1 < iVar3 - 1U)) {
    uVar6 = 0;
  }
  *(undefined1 *)(param_1 + 0x48) = uVar6;
  if ((iVar3 == 1) && (cStack_41 != '\0')) {
    *(undefined4 *)(lVar4 + 0x18) = 0;
    *(undefined1 *)(lVar4 + 0xf52) = 1;
  }
  else if (iVar3 == 2) {
    if (iVar1 == 0) {
      *(undefined4 *)(lVar4 + 0x18) = 0;
    }
  }
  else if (4 < iVar3) {
    *(undefined4 *)(lVar4 + 0x18) = 0xbf800000;
    *(undefined1 *)(lVar4 + 0xf52) = 0;
  }
  return;
}

