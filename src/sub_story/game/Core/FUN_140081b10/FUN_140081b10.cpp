// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140081b10  size: 217 bytes
// Name:    FUN_140081b10
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144ef6960
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_140081b10(longlong param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 unaff_RBX;
  ulonglong uVar5;
  
  iVar1 = 0;
  if (param_1 != 0) {
    lVar4 = func_0x00014534c940(*(undefined4 *)(param_1 + 0x9c));
    iVar1 = 0;
    if (lVar4 != 0) {
      uVar5 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),*(undefined1 *)(lVar4 + 0x10));
      iVar1 = FUN_144ef6960(uVar5 & 0xffffffff,0x10010,0,0,0xbf800000,0x40000000,param_2);
      iVar2 = FUN_144ef6960(uVar5 & 0xffffffff,0x10020,0,0,0xbf800000,0x40000000,param_2);
      iVar3 = FUN_144ef6960(uVar5 & 0xffffffff,0x10040,0,0,0xbf800000,0x40000000,param_2);
      iVar1 = iVar3 * _DAT_14aaf40d0 + iVar2 * _DAT_14aaf40cc + iVar1 * _DAT_14aaf40c8;
    }
  }
  return iVar1;
}

