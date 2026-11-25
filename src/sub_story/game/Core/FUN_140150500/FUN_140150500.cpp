// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140150500  size: 282 bytes
// Name:    FUN_140150500
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145647140
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140150500(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined4 uVar1;
  code *pcVar2;
  char cVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined8 uStack_48;
  
  uStack_48 = 0x140150516;
  lVar4 = FUN_145647140();
  lVar4 = -lVar4;
  if (*(int *)(param_2 + 4) != 0) {
    uVar10 = 0;
    *(undefined8 *)(&stack0xffffffffffffffe8 + lVar4) = param_3;
    uVar13 = 0;
    uVar6 = 0;
    uVar8 = 0;
    do {
      uVar1 = *(undefined4 *)(param_2 + 8 + uVar10 * 4);
      lVar12 = (ulonglong)(uint)(int)(short)uVar1 * 0x150;
      lVar11 = *(longlong *)
                (*(longlong *)(*(longlong *)(&stack0xffffffffffffffe8 + lVar4) + 0x40) + 0x10 +
                (ulonglong)(uint)(int)(char)((uint)uVar1 >> 0x10) * 0x48);
      pcVar2 = *(code **)(lVar11 + 0x58 + lVar12);
      *(undefined8 *)((longlong)&uStack_48 + lVar4) = 0x140150576;
      cVar3 = (*pcVar2)(param_1);
      uVar5 = uVar13;
      uVar7 = uVar6;
      uVar9 = uVar8;
      if (cVar3 != '\0') {
        lVar11 = lVar11 + lVar12;
        if (*(longlong *)(lVar11 + 0x40) != 0) {
          uVar7 = (ulonglong)((int)uVar6 + 1);
          *(longlong *)(&stack0x00001008 + uVar6 * 8 + lVar4) = *(longlong *)(lVar11 + 0x40);
        }
        uVar5 = (ulonglong)((int)uVar13 + 1);
        *(undefined8 *)(&stack0x00000800 + uVar13 * 8 + lVar4) = *(undefined8 *)(lVar11 + 0x20);
        if (*(longlong *)(lVar11 + 0x48) != 0) {
          uVar9 = (ulonglong)((int)uVar8 + 1);
          *(longlong *)(&stack0xfffffffffffffff8 + uVar8 * 8 + lVar4) = *(longlong *)(lVar11 + 0x48)
          ;
        }
      }
      uVar10 = uVar10 + 1;
      uVar13 = uVar5;
      uVar6 = uVar7;
      uVar8 = uVar9;
    } while (uVar10 < *(uint *)(param_2 + 4));
    if ((int)uVar7 != 0) {
      uVar13 = 0;
      do {
        pcVar2 = *(code **)(&stack0x00001008 + uVar13 * 8 + lVar4);
        *(undefined8 *)((longlong)&uStack_48 + lVar4) = 0x1401505d5;
        (*pcVar2)(param_1);
        uVar13 = uVar13 + 1;
      } while (uVar7 != uVar13);
    }
    if ((int)uVar5 != 0) {
      uVar13 = 0;
      do {
        pcVar2 = *(code **)(&stack0x00000800 + uVar13 * 8 + lVar4);
        *(undefined8 *)((longlong)&uStack_48 + lVar4) = 0x1401505f1;
        (*pcVar2)(param_1);
        uVar13 = uVar13 + 1;
      } while (uVar5 != uVar13);
    }
    if ((int)uVar9 != 0) {
      uVar13 = 0;
      do {
        pcVar2 = *(code **)(&stack0xfffffffffffffff8 + uVar13 * 8 + lVar4);
        *(undefined8 *)((longlong)&uStack_48 + lVar4) = 0x14015060c;
        (*pcVar2)(param_1);
        uVar13 = uVar13 + 1;
      } while (uVar9 != uVar13);
    }
  }
  return;
}

