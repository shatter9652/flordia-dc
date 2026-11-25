// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14007a8f0  size: 66 bytes
// Name:    FUN_14007a8f0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14007a8f0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  ulonglong uVar4;
  sbyte sVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 auStack_28 [8];
  int in_stack_ffffffffffffffe0;
  
  func_0x000144de5390(param_1,auStack_28);
  if (in_stack_ffffffffffffffe0 < 1) {
    return;
  }
  lVar1 = *(longlong *)(param_1 + 0x90);
  uVar6 = ~*(uint *)(lVar1 + 0x1b0) & *(uint *)(lVar1 + 0x180) & 0x38000000;
  uVar7 = (ulonglong)uVar6;
  if (uVar6 != 0) {
    uVar8 = 0;
    for (uVar4 = uVar7; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x8000000000000000) {
      uVar8 = uVar8 + 1;
    }
    do {
      sVar5 = ((byte)uVar8 < 0x41) * ('@' - (byte)uVar8);
      plVar2 = *(longlong **)
                (*(longlong *)(lVar1 + 0x188) +
                POPCOUNT((ulonglong)(*(longlong *)(lVar1 + 0x180) << sVar5) >> sVar5) * 8);
      pcVar3 = *(code **)(*plVar2 + 0x78);
      if (pcVar3 == FUN_1404a9b80) {
        FUN_1404a9b80();
      }
      else if (pcVar3 == FUN_1404aa040) {
        FUN_1404aa040();
      }
      else if (pcVar3 == FUN_1404aa530) {
        FUN_1404aa530();
      }
      else {
        (*pcVar3)(plVar2,param_2,param_1);
      }
      uVar4 = uVar8 & 0x3f;
      uVar8 = 0;
      uVar7 = uVar7 & ~(1L << uVar4);
      for (uVar4 = uVar7; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x8000000000000000) {
        uVar8 = uVar8 + 1;
      }
    } while (uVar7 != 0);
  }
  return;
}

