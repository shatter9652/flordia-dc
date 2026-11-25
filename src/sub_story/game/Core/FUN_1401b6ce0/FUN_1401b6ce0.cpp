// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401b6ce0  size: 192 bytes
// Name:    FUN_1401b6ce0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401b6dc0, FUN_14436c500, FUN_14436c460, FUN_140092790, FUN_14436c310, FUN_1401b6da0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


ulonglong FUN_1401b6ce0(undefined8 param_1,char param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined8 unaff_RBX;
  undefined8 unaff_RDI;
  uint *puVar5;
  uint auStack_24 [3];
  
  iVar2 = FUN_1401b6da0();
  if (iVar2 == 3) {
    puVar5 = auStack_24 + 2;
    FUN_1401b6dc0(param_1,puVar5);
  }
  else {
    cVar1 = func_0x000145078490(iVar2);
    if (cVar1 == '\0') {
      return 0xffffffff;
    }
    cVar1 = func_0x000144f21610(iVar2);
    if (cVar1 == '\0') {
      cVar1 = func_0x0001401b5d00(iVar2);
      if (cVar1 == '\0') {
        if (1 < iVar2 - 0xbU) {
          uVar3 = FUN_140092790(param_1,0xf6c6abd6,0x53a83bf);
          func_0x000140092750(&stack0xfffffffffffffff0,uVar3);
          FUN_140092760(unaff_RDI);
          return 0xffffffff;
        }
        uVar3 = FUN_140092790(param_1,0x13b19567,0x53a83bf);
        func_0x000140092750(&stack0xffffffffffffffe8,uVar3);
        cVar1 = FUN_1401b5d90(unaff_RBX);
        if (cVar1 == '\0') {
          uVar4 = 2;
        }
        else {
          FUN_140014c20(unaff_RBX,auStack_24 + 2,0);
          uVar4 = func_0x0001401b5d70(auStack_24[2]);
        }
        return uVar4;
      }
      if (param_2 != '\0') {
        FUN_14436c500(param_1);
        return 0xffffffff;
      }
      puVar5 = auStack_24;
      FUN_14436c460(param_1,puVar5);
    }
    else {
      puVar5 = auStack_24 + 1;
      FUN_14436c310(param_1,puVar5);
    }
  }
  return (ulonglong)*puVar5;
}

