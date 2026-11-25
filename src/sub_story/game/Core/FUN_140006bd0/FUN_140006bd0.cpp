// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140006bd0  size: 62 bytes
// Name:    FUN_140006bd0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_140006bd0(longlong param_1,int param_2)

{
  longlong lVar1;
  char cVar2;
  undefined1 uVar3;
  undefined7 uVar5;
  undefined8 uVar4;
  
  lVar1 = param_1 + 0x4e0 + (longlong)param_2 * 0x10;
  cVar2 = *(char *)(lVar1 + 0xc);
  if (cVar2 == '\x03') {
    uVar5 = (undefined7)((ulonglong)((longlong)param_2 * 0x10) >> 8);
    uVar3 = 1;
    if (*(char *)(lVar1 + 0xf) != '\0') goto LAB_140006c01;
  }
  else {
    uVar4 = func_0x000144da9890();
    uVar5 = (undefined7)((ulonglong)uVar4 >> 8);
    uVar3 = 2;
  }
  *(undefined1 *)(lVar1 + 0xc) = uVar3;
LAB_140006c01:
  return CONCAT71(uVar5,cVar2 == '\x03');
}

