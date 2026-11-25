// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140136d20  size: 356 bytes
// Name:    FUN_140136d20
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1425cbf60, FUN_1409cee40, FUN_145440e10
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140136d20(undefined8 *param_1,int *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  if ((param_2[1] != 0) && (*param_2 == 0)) {
    FUN_1425cbf60(param_1,param_2[1]);
    uVar4 = (ulonglong)(uint)param_2[1];
    if (uVar4 != 0) {
      lVar1 = *(longlong *)(param_2 + 2);
      lVar3 = param_1[1];
      lVar5 = uVar4 * 0x140;
      lVar2 = lVar1;
      do {
        if (lVar3 != 0) {
          FUN_1409cee40(lVar3,lVar2);
        }
        lVar2 = lVar2 + 0x140;
        lVar3 = lVar3 + 0x140;
        lVar5 = lVar5 + -0x140;
      } while (lVar5 != 0);
      lVar3 = 0;
      do {
        func_0x000144fefc30(lVar1 + 0x134 + lVar3);
        FUN_145440e10(lVar1 + 0x130 + lVar3);
        FUN_145440e10(lVar1 + 300 + lVar3);
        FUN_145440e10(lVar1 + 0x128 + lVar3);
        FUN_145440e10(lVar1 + 0x124 + lVar3);
        lVar5 = lVar1 + 0x120 + lVar3;
        FUN_145440e10(lVar5);
        *(undefined4 *)(lVar5 + -0xc) = 0;
        if (*(longlong *)(lVar5 + -8) != 0) {
          func_0x000144d9c130();
        }
        *(undefined4 *)(lVar1 + 0x110 + lVar3) = 0;
        *(undefined8 *)(lVar1 + 0x118 + lVar3) = 0;
        lVar3 = lVar3 + 0x140;
      } while (uVar4 * 0x140 != lVar3);
    }
  }
  *param_1 = *(undefined8 *)param_2;
  param_2[0] = 0;
  param_2[1] = 0;
  if (param_1[1] != 0) {
    func_0x000144d9c130(param_1[1]);
  }
  param_1[1] = 0;
  param_1[1] = *(undefined8 *)(param_2 + 2);
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  return;
}

