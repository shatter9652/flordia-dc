// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140101200  size: 196 bytes
// Name:    FUN_140101200
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1415003e0, FUN_1415a7cf0, FUN_14093e920
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140101200(ulonglong param_1,undefined1 *param_2)

{
  byte bVar1;
  longlong lVar2;
  char cVar3;
  undefined8 unaff_RBP;
  undefined8 uVar4;
  ulonglong uVar5;
  
  cVar3 = func_0x000140d65f10();
  if (cVar3 == '\0') {
    return 0;
  }
  cVar3 = func_0x000140d8dc90(param_1 & 0xffffffff);
  if (cVar3 != '\0') {
    return 0;
  }
  cVar3 = FUN_1415a7cf0(_DAT_1492e3320);
  lVar2 = _DAT_14a922f90;
  uVar4 = CONCAT71((int7)((param_1 & 0xffffffff) >> 8),1);
  if (cVar3 == '\0') {
    return uVar4;
  }
  bVar1 = *(byte *)(_DAT_14a922f90 + 0x48);
  uVar5 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),bVar1) & 0xffffff02;
  cVar3 = FUN_1415003e0(_DAT_14a922f90,0x1bad7d5,CONCAT71((int7)(uVar5 >> 8),(byte)uVar5 >> 1));
  if (cVar3 != '\0') {
    cVar3 = FUN_14093e920(lVar2,0x1bad7d5,2);
    if (cVar3 != '\0') goto LAB_1401012b3;
    bVar1 = *(byte *)(lVar2 + 0x48);
  }
  cVar3 = FUN_1415003e0(lVar2,0x4746fc61,(bVar1 & 2) != 0);
  if (cVar3 == '\0') {
    return uVar4;
  }
  cVar3 = FUN_14093e920(lVar2,0x4746fc61,2);
  if (cVar3 == '\0') {
    return uVar4;
  }
LAB_1401012b3:
  if (param_2 != (undefined1 *)0x0) {
    *param_2 = 1;
  }
  return 0;
}

