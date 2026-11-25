// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140071900  size: 53 bytes
// Name:    FUN_140071900
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140071940
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140071900(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 unaff_RBX;
  undefined8 unaff_RSI;
  undefined8 unaff_RDI;
  
  lVar2 = FUN_140071940();
  lVar3 = FUN_140071940(param_1,param_3);
  if (lVar2 != lVar3) {
    iVar1 = *(int *)(lVar2 + 0x30);
    lVar4 = lVar2;
    if (*(int *)(lVar3 + 0x30) < iVar1) {
      func_0x0001456a39f0(param_1,lVar3,lVar2,param_4,unaff_RBX,unaff_RDI,unaff_RSI);
    }
    else if (iVar1 < *(int *)(lVar3 + 0x30)) {
      func_0x0001456a39f0(param_1,lVar2,lVar3,param_4,unaff_RBX,unaff_RDI,unaff_RSI);
      lVar4 = lVar3;
    }
    else {
      func_0x0001456a39f0(param_1,lVar3,lVar2,param_4,unaff_RBX,unaff_RDI,unaff_RSI);
      func_0x000144ed2fd0(lVar2,iVar1 + 1);
    }
    *(int *)(lVar4 + 0x34) = *(int *)(lVar3 + 0x34) + *(int *)(lVar2 + 0x34);
    return;
  }
  return;
}

