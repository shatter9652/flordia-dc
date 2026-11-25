// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401bb7b0  size: 198 bytes
// Name:    FUN_1401bb7b0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14436bf30, FUN_1401bb8a0, FUN_14436c100, FUN_1401bb880, FUN_14436c1a0, FUN_140092790
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


ulonglong FUN_1401bb7b0(undefined8 param_1,char param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  uint uVar5;
  undefined8 unaff_RDI;
  uint *puVar6;
  uint auStack_2c [3];
  
  iVar2 = FUN_1401bb880();
  if (iVar2 == 3) {
    puVar6 = auStack_2c + 2;
    FUN_14436bf30(param_1,puVar6);
  }
  else {
    cVar1 = func_0x000145078490(iVar2);
    uVar5 = 0xffffffff;
    if (cVar1 == '\0') goto LAB_1401bb7f6;
    cVar1 = func_0x000144f21610(iVar2);
    if (cVar1 == '\0') {
      cVar1 = func_0x0001401b5d00(iVar2);
      if (cVar1 == '\0') {
        if (1 < iVar2 - 0xbU) {
          uVar3 = FUN_140092790(param_1,0x60290edb,0x53a83bf);
          func_0x000140092750(&stack0xfffffffffffffff0,uVar3);
          FUN_140092760(unaff_RDI);
          return 0xffffffff;
        }
        uVar3 = FUN_140092790(param_1,0xbaf9502d,0x53a83bf);
        func_0x000140092750(&stack0xffffffffffffffe8,uVar3);
        cVar1 = FUN_1401b5d90(unaff_RBP);
        if (cVar1 == '\0') {
          uVar4 = 2;
        }
        else {
          FUN_140014c20(unaff_RBP,&stack0xffffffffffffffe4,0);
          uVar4 = func_0x0001401b5d70((int)((ulonglong)unaff_RBX >> 0x20));
        }
        return uVar4;
      }
      if (param_2 != '\0') {
        FUN_14436c1a0(param_1);
        goto LAB_1401bb7f6;
      }
      puVar6 = auStack_2c;
      FUN_14436c100(param_1,puVar6);
    }
    else {
      puVar6 = auStack_2c + 1;
      FUN_1401bb8a0(param_1,puVar6);
    }
  }
  uVar5 = *puVar6;
LAB_1401bb7f6:
  return (ulonglong)uVar5;
}

