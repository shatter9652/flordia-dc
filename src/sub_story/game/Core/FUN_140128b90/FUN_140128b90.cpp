// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140128b90  size: 202 bytes
// Name:    FUN_140128b90
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144fd5630, FUN_140128c60, FUN_1402096b0, FUN_140083460, FUN_144ef6160
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140128b90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 unaff_RBP;
  
  iVar3 = FUN_140128c60(param_3);
  uVar4 = (uint)CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
  uVar2 = 1;
  if (0 < iVar3) {
    if (iVar3 != 1) {
      uVar2 = 0;
      uVar4 = 0;
      goto LAB_140128bc7;
    }
    uVar2 = FUN_144ef6160(param_3);
  }
  cVar1 = FUN_144ef6160(param_3);
  if (cVar1 == '\0') {
    lVar5 = FUN_1402096b0(param_2,0,0);
    if (lVar5 != 0) {
      cVar1 = FUN_140083460(lVar5);
      if (cVar1 != '\0') {
        lVar6 = FUN_1402096b0(param_3,0,0);
        if (lVar5 != lVar6 && lVar6 != 0) {
          uVar4 = FUN_140083460(lVar6);
          uVar4 = uVar4 ^ 1;
        }
      }
    }
  }
LAB_140128bc7:
  FUN_144fd5630(param_1,param_2,iVar3,uVar4,uVar2);
  return;
}

