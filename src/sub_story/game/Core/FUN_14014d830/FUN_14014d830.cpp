// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14014d830  size: 111 bytes
// Name:    FUN_14014d830
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14014e6e0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_14014d830(longlong param_1)

{
  byte bVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 unaff_RBX;
  undefined7 uVar5;
  undefined4 *puVar6;
  
  bVar1 = *(byte *)(param_1 + 0x71);
  uVar5 = (undefined7)((ulonglong)unaff_RBX >> 8);
  uVar3 = CONCAT71(uVar5,bVar1);
  if ((bVar1 & 0x40) == 0) {
    uVar3 = uVar3 & 0xffffff3f | 0x40;
    *(char *)(param_1 + 0x71) = (char)uVar3;
    if (((*(longlong *)(param_1 + 0x10) == 0) || (*(longlong *)(param_1 + 0x28) != 0)) ||
       (*(longlong *)(param_1 + 0x38) != 0)) goto LAB_14014d842;
    puVar6 = (undefined4 *)(*(longlong *)(param_1 + 0x10) + 100);
    cVar2 = FUN_14014e6e0(puVar6,1);
    if ((cVar2 == '\0') || (lVar4 = func_0x00014041e240(*puVar6), lVar4 == 0)) goto LAB_14014d842;
    uVar3 = CONCAT71(uVar5,bVar1) | 0xc0;
    *(char *)(param_1 + 0x71) = (char)uVar3;
  }
  uVar3 = uVar3 & 0xffffffff;
LAB_14014d842:
  return CONCAT71((int7)(uVar3 >> 8),(byte)uVar3 >> 7);
}

