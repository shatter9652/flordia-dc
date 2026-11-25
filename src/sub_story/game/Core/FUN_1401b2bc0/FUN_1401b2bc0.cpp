// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401b2bc0  size: 267 bytes
// Name:    FUN_1401b2bc0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1443c50a0, FUN_144f9a3d0, FUN_1420cf7b0, FUN_143e43980, FUN_1420cf700
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401b2bc0(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  if ((((_DAT_1498d26b4 != 0) || (_DAT_1498d26b0 != 0)) || (_DAT_1498d26ac != 0)) ||
     (_DAT_1498d26a8 != 0)) {
    lVar3 = func_0x00014067e510();
    lVar4 = func_0x00014067e520();
    lVar3 = FUN_1420cf700(lVar3 - lVar4);
    if (lVar3 != 0) {
      uStack_14 = 0;
      uStack_18 = 0;
      uStack_1c = 0;
      uStack_20 = 0;
      cVar1 = FUN_144f9a3d0(&uStack_14,lVar3,3,param_1);
      if (cVar1 != '\0') {
        cVar1 = FUN_144f9a3d0(&uStack_18,lVar3,2,param_1);
        if (cVar1 != '\0') {
          cVar1 = FUN_144f9a3d0(&uStack_1c,lVar3,0,param_1);
          if (cVar1 != '\0') {
            FUN_144f9a3d0(&uStack_20,lVar3,1,param_1);
          }
        }
      }
      iVar2 = FUN_1443c50a0(lVar3);
      if (iVar2 == -1) {
        FUN_1420cf7b0(lVar3);
      }
      else {
        FUN_143e43980(uStack_14,3);
        FUN_143e43980(uStack_18,2);
        FUN_143e43980(uStack_1c,0);
        FUN_143e43980(uStack_20,1);
      }
    }
  }
  return;
}

