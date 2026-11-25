// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401b5b50  size: 224 bytes
// Name:    FUN_1401b5b50
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145079460, FUN_144390a80, FUN_144390ab0, FUN_1401b6910, FUN_14045a030
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1401b5b50(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 in_stack_ffffffffffffff88;
  undefined4 uVar6;
  undefined4 uStack_5c;
  undefined4 auStack_58 [8];
  
  uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffff88 >> 0x20);
  lVar2 = *param_1;
  uVar3 = *(undefined8 *)(lVar2 + 0x20);
  iVar1 = *(int *)(lVar2 + 0x40);
  uVar5 = FUN_1401b6910(lVar2,(int)param_1[1],param_2);
  if (iVar1 == 0) {
    lVar4 = param_1[1];
    if (*param_3 == 0) {
      (*(code *)param_3[1])(auStack_58,uVar3);
    }
    else {
      (*(code *)param_3[1])(auStack_58,*param_3,uVar3);
    }
    FUN_145079460(lVar2,uVar5,auStack_58,(int)lVar4,0);
  }
  else if (iVar1 - 1U < 2) {
    auStack_58[0] = 0;
    uStack_5c = 0;
    FUN_144390a80(uVar3,auStack_58);
    FUN_144390ab0(uVar3,&uStack_5c);
    FUN_14045a030(lVar2,0xf5d26b83,uVar5,auStack_58[0],CONCAT44(uVar6,uStack_5c),iVar1 == 1);
  }
  return;
}

