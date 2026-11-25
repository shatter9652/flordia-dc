// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14011a8a0  size: 315 bytes
// Name:    FUN_14011a8a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1454b5ec0, FUN_14011a080, FUN_144fd9d80, FUN_144fc9930
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14011a8a0(uint *param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uStack_60;
  longlong lStack_58;
  longlong lStack_50;
  longlong lStack_48;
  
  FUN_144fc9930(&uStack_60,0);
  lVar3 = func_0x000144d9c140(8,(ulonglong)param_2 * 0x28);
  FUN_144fd9d80(uStack_60);
  if ((ulonglong)param_1[1] != 0) {
    lVar5 = *(longlong *)(param_1 + 2);
    lStack_50 = lVar3 + 4;
    lVar4 = 0;
    lVar1 = (ulonglong)param_1[1] * 0x28;
    lStack_58 = lVar5 + lVar1;
    lStack_48 = lVar5 + 4;
    do {
      if (lVar3 + lVar4 != 0) {
        *(undefined4 *)(lVar3 + lVar4) = *(undefined4 *)(lVar5 + lVar4);
        FUN_1454b5ec0(lStack_50 + lVar4,lStack_48 + lVar4);
        *(undefined8 *)(lVar3 + 8 + lVar4) = *(undefined8 *)(lVar5 + 8 + lVar4);
        *(undefined8 *)(lVar3 + 0x10 + lVar4) = *(undefined8 *)(lVar5 + 0x10 + lVar4);
        *(undefined1 *)(lVar3 + 0x20 + lVar4) = *(undefined1 *)(lVar5 + 0x20 + lVar4);
        *(undefined8 *)(lVar3 + 0x18 + lVar4) = *(undefined8 *)(lVar5 + 0x18 + lVar4);
      }
      lVar2 = lStack_58;
      lVar4 = lVar4 + 0x28;
    } while (lVar1 != lVar4);
    do {
      FUN_14011a080(lVar5);
      func_0x000144fefc30(lVar5 + 4);
      lVar5 = lVar5 + 0x28;
    } while (lVar5 != lVar2);
  }
  lVar5 = *(longlong *)(param_1 + 2);
  FUN_144fc9930(&uStack_60,0);
  if (lVar5 != 0) {
    func_0x000144d9c130(lVar5);
  }
  FUN_144fd9d80(uStack_60);
  *(longlong *)(param_1 + 2) = lVar3;
  *param_1 = param_2;
  return;
}

