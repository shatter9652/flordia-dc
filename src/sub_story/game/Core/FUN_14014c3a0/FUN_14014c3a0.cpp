// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14014c3a0  size: 104 bytes
// Name:    FUN_14014c3a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_141424f50
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14014c3a0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  uint uVar1;
  longlong *plVar2;
  code *pcVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (param_2 == 0) {
    return;
  }
  lVar5 = *(longlong *)(param_2 + 0x10);
  if (lVar5 == 0) {
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x10);
  }
  if (lVar5 == 0) {
    lVar5 = *(longlong *)(param_1 + 0x60);
  }
  if (lVar5 != 0) {
    FUN_141424f50(param_1);
  }
  uVar1 = *(uint *)(*(longlong *)(param_1 + 0x58) + 0x1dc);
  lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 0x1e0);
  if (uVar1 != 0) {
    lVar6 = 0;
    do {
      plVar2 = *(longlong **)(lVar5 + lVar6);
      pcVar3 = *(code **)*plVar2;
      if (pcVar3 == (code *)&SUB_1450141d0) {
        iVar4 = func_0x0001450141d0(plVar2);
      }
      else if (pcVar3 == (code *)&SUB_1450141d0) {
        iVar4 = func_0x0001450141d0(plVar2);
      }
      else {
        iVar4 = (*pcVar3)();
      }
      if (iVar4 == param_4) {
        (**(code **)(*plVar2 + 0x18))(plVar2,param_3);
      }
      lVar6 = lVar6 + 8;
    } while ((ulonglong)uVar1 << 3 != lVar6);
  }
  return;
}

