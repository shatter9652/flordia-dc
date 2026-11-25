// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140114e40  size: 453 bytes
// Name:    FUN_140114e40
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144ed0150, FUN_140114e40
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140114e40(longlong *param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
                  longlong param_5)

{
  ushort uVar1;
  uint uVar2;
  longlong *plVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined1 auVar8 [16];
  undefined2 uStack_a20;
  undefined1 uStack_a1e;
  undefined1 auStack_a18 [32];
  undefined1 auStack_9f8 [32];
  undefined2 uStack_9d8;
  longlong *plStack_9d0;
  undefined1 auStack_9c8 [12];
  undefined4 uStack_9bc;
  undefined1 auStack_9b8 [12];
  undefined1 *puStack_9a8;
  undefined1 auStack_9a0 [32];
  undefined1 auStack_980 [32];
  undefined1 auStack_960 [32];
  undefined1 auStack_940 [32];
  undefined2 uStack_920;
  undefined1 auStack_918 [2264];
  
  func_0x000140114e20(param_5);
  uVar2 = *(uint *)(param_3 + 2);
  lVar5 = func_0x0001450af430(param_1);
  if ((*(uint *)(lVar5 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) != 0) {
    uVar4 = func_0x0001451c44a0(param_1[1],(short)param_1[2],uVar2);
    if (-1 < (int)uVar4) {
      auVar8._0_12_ = ZEXT812(0);
      auVar8._12_4_ = 0;
      auStack_9c8 = ZEXT812(0);
      uStack_a20 = 0;
      uStack_a1e = 1;
      auStack_a18 = ZEXT1632(auVar8);
      uStack_9d8 = 0;
      uStack_9bc = 0;
      auStack_9b8._8_4_ = 0;
      auStack_9b8._0_8_ = auStack_9c8._4_8_;
      auStack_9a0 = ZEXT1632(auVar8);
      uStack_920 = 0;
      auStack_9f8 = auStack_a18;
      plStack_9d0 = param_3;
      auStack_980 = auStack_9a0;
      auStack_960 = auStack_9a0;
      auStack_940 = auStack_9a0;
      func_0x000144ed0120(&uStack_a20,0,param_2);
      uVar6 = (**(code **)(*param_3 + 0x1c8))(param_3);
      func_0x000144ed0120(&uStack_a20,1,uVar6);
      uVar6 = (**(code **)(*param_3 + 0x1e8))(param_3);
      func_0x000144ed0120(&uStack_a20,2,uVar6);
      FUN_144ed0150(auStack_918);
      uVar1 = *(ushort *)(param_1 + 2);
      puStack_9a8 = auStack_918;
      if (uVar4 < uVar1) {
        uVar7 = (ulonglong)uVar4;
        do {
          if (*(uint *)(param_1[1] + uVar7 * 4) != uVar2) break;
          plVar3 = *(longlong **)(param_1[3] + uVar7 * 8);
          if ((plVar3 != (longlong *)0x0) &&
             ((**(code **)(*plVar3 + 8))(plVar3,param_2,param_3,param_4,param_5,&uStack_a20),
             *(longlong *)(param_5 + 8) != 0)) {
            return;
          }
          uVar7 = uVar7 + 1;
        } while ((int)uVar7 < (int)(uint)uVar1);
      }
    }
    if (*param_1 != 0) {
      FUN_140114e40(*param_1,param_2,param_3,param_4,param_5);
    }
  }
  return;
}

