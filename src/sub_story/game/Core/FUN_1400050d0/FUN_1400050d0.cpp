// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400050d0  size: 477 bytes
// Name:    FUN_1400050d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400053d0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400050d0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  undefined4 uVar10;
  undefined8 *puStack_60;
  undefined8 auStack_58 [4];
  
  FUN_1400053d0();
  uVar8 = 4;
  uVar5 = *(uint *)(param_1 + 0x93c);
  puStack_60 = auStack_58;
  if (((ulonglong)uVar5 != 0) && (*(uint *)(param_1 + 0x938) < 5)) {
    if (4 < uVar5) {
      uVar10 = 0;
      puStack_60 = (undefined8 *)func_0x000144d9c140(8,(ulonglong)uVar5 << 3);
      if (puStack_60 == (undefined8 *)0x0) {
        puStack_60 = auStack_58;
      }
      uVar8 = CONCAT44(uVar10,uVar5);
      uVar5 = *(uint *)(param_1 + 0x93c);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x940);
    if (uVar5 == 1) {
      *puStack_60 = *puVar1;
    }
    else if (uVar5 == 2) {
      uVar8 = puVar1[1];
      *puStack_60 = *puVar1;
      puStack_60[1] = uVar8;
    }
    else {
      func_0x000145f40560(puStack_60,puVar1,(ulonglong)uVar5 << 3,param_4,uVar8);
    }
  }
  uVar9 = *(ulonglong *)(param_1 + 0x938);
  *(undefined8 *)(param_1 + 0x938) = 0;
  if ((auStack_58 != puStack_60) && (puStack_60 != (undefined8 *)0x0)) {
    func_0x000144d9c130();
  }
  puVar1 = *(undefined8 **)(param_1 + 0x940);
  puVar6 = auStack_58;
  if ((undefined8 *)(param_1 + 0x948) != puVar1) {
    *(undefined8 **)(param_1 + 0x940) = (undefined8 *)(param_1 + 0x948);
    puVar6 = puVar1;
  }
  *(undefined4 *)(param_1 + 0x938) = 4;
  if (uVar9 >> 0x20 != 0) {
    lVar7 = 0;
    do {
      plVar2 = *(longlong **)((longlong)puVar6 + lVar7);
      (**(code **)(*plVar2 + 0x38))(plVar2,param_1);
      lVar3 = plVar2[0x8e];
      cVar4 = (**(code **)(*plVar2 + 0x30))(plVar2);
      if ((lVar3 == 0) || (cVar4 != '\0')) {
        (**(code **)*plVar2)(plVar2,1);
      }
      else {
        (**(code **)*plVar2)(plVar2,0);
        func_0x000144d9c130(lVar3);
      }
      lVar7 = lVar7 + 8;
    } while ((uVar9 >> 0x20) << 3 != lVar7);
  }
  if (puVar6 != (undefined8 *)0x0 && auStack_58 != puVar6) {
    func_0x000144d9c130(puVar6);
  }
  return;
}

