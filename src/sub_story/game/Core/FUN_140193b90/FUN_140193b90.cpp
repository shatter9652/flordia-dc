// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140193b90  size: 67 bytes
// Name:    FUN_140193b90
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined4 * FUN_140193b90(longlong param_1,undefined4 *param_2,int param_3)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_1c [4];
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  iVar2 = func_0x000144e05fa0(uVar1);
  if (iVar2 == param_3) {
    uVar3 = 0xde7ecd51;
  }
  else {
    lVar4 = func_0x000144da1090(uVar1,param_3,auStack_1c);
    uVar3 = *(undefined4 *)(lVar4 + 0x1c);
  }
  *param_2 = uVar3;
  return param_2;
}

