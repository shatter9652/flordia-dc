// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140183a20  size: 185 bytes
// Name:    FUN_140183a20
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14503e0d0, FUN_140183ae0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140183a20(longlong param_1,undefined8 param_2,longlong param_3,undefined2 param_4)

{
  ulonglong uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  
  FUN_140183ae0();
  uVar6 = 0;
  uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x78) + 0x10);
  while( true ) {
    uVar1 = *(ulonglong *)(param_3 + 0x90);
    if (uVar1 == 0) {
      uVar4 = 0;
    }
    else if ((uVar1 & 1) == 0) {
      uVar4 = 2 - (ulonglong)(*(longlong *)(param_3 + 0x98) == 0);
    }
    else {
      uVar4 = *(ulonglong *)((uVar1 & 0xfffffffffffffffe) + 8);
    }
    if (uVar4 <= uVar6) break;
    puVar5 = (ulonglong *)((uVar1 & 0xfffffffffffffffe) + 0x10);
    if ((uVar1 & 1) == 0) {
      puVar5 = (ulonglong *)(param_3 + 0x90);
    }
    uVar1 = puVar5[uVar6];
    plVar2 = (longlong *)FUN_14503e0d0(uVar1);
    uVar3 = (**(code **)(*plVar2 + 0x28))(plVar2,param_2,param_1,uVar3,uVar1,param_4);
    uVar6 = uVar6 + 1;
  }
  return;
}

