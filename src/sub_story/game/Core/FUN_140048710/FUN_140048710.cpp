// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140048710  size: 95 bytes
// Name:    FUN_140048710
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e665b0, FUN_1412a9840
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140048710(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  iVar1 = func_0x000140c8a050(6);
  if (iVar1 == param_2) {
    param_2 = FUN_1412a9840(param_1);
    uVar2 = 0x14ab73a30;
    uVar3 = 0;
  }
  else {
    uVar2 = 0x149e72860;
    uVar3 = 3;
  }
  FUN_144e665b0(uVar2,param_1,param_2,uVar3,0);
  return;
}

