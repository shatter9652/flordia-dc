// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401307a0  size: 173 bytes
// Name:    FUN_1401307a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401307a0(undefined4 *param_1,char param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 unaff_RBX;
  undefined8 unaff_RDI;
  longlong lVar6;
  longlong lVar7;
  undefined8 in_stack_ffffffffffffffe0;
  undefined4 uVar8;
  
  uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffffe0 >> 0x20);
  func_0x000144fde940(&stack0xffffffffffffffe4);
  *param_1 = uVar8;
  if (param_2 != '\0') {
    _DAT_146df5b88 = (_DAT_146df5b88 & 0xffffffff) * 0x5cdcfaa7 + (_DAT_146df5b88 >> 0x20);
    func_0x00014285b6b0(param_1,(longlong)
                                (*(float *)(*(longlong *)(param_1 + 4) + 0x3c) * _DAT_14615d3e4 *
                                (float)((uint)_DAT_146df5b88 & 0x7fff)));
  }
  param_1[2] = param_1[2] + 1;
  if (*(longlong *)(*(longlong *)(param_1 + 0x2c) + 0x18) != 0) {
    piVar1 = (int *)(*(longlong *)(*(longlong *)(param_1 + 0x2c) + 0x18) + 0x88);
    *piVar1 = *piVar1 + 1;
  }
  uVar8 = *param_1;
  cVar3 = func_0x000144d9e3f0(uVar8,param_1[1]);
  if (cVar3 != '\0') {
    param_1[1] = uVar8;
  }
  lVar6 = *(longlong *)(param_1 + 4);
  if ((lVar6 != 0) && (lVar5 = *(longlong *)(param_1 + 6), lVar5 != 0)) {
    if (((0 < *(int *)(lVar6 + 100)) || (0 < *(int *)(lVar6 + 0x54))) &&
       (lVar5 = func_0x000144fdec40(*(undefined8 *)(lVar5 + 0x30),*(undefined4 *)(lVar5 + 0x38),
                                    param_3,param_4,unaff_RBX,unaff_RDI), lVar5 != 0)) {
      uVar4 = func_0x0001424d7fb0(lVar5);
      lVar6 = *(longlong *)(param_1 + 4);
      uVar2 = *(uint *)(lVar6 + 0x54);
      if ((ulonglong)uVar2 != 0) {
        lVar6 = *(longlong *)(lVar6 + 0x58);
        lVar5 = 0;
        do {
          func_0x000142d9e230(uVar4,*(undefined4 *)(lVar6 + lVar5));
          lVar5 = lVar5 + 4;
        } while ((ulonglong)uVar2 << 2 != lVar5);
        lVar6 = *(longlong *)(param_1 + 4);
      }
      uVar2 = *(uint *)(lVar6 + 100);
      if ((ulonglong)uVar2 != 0) {
        lVar6 = *(longlong *)(lVar6 + 0x68);
        lVar5 = 0;
        do {
          func_0x000142d9e290(uVar4,*(undefined4 *)(lVar6 + lVar5));
          lVar5 = lVar5 + 4;
        } while ((ulonglong)uVar2 << 2 != lVar5);
        lVar6 = *(longlong *)(param_1 + 4);
      }
    }
    uVar2 = *(uint *)(lVar6 + 0x84);
    if (((0 < (int)uVar2) &&
        (lVar5 = func_0x000144fdec40(*(undefined8 *)(*(longlong *)(param_1 + 6) + 0x30),
                                     *(undefined4 *)(*(longlong *)(param_1 + 6) + 0x38),param_3,
                                     param_4,unaff_RBX,unaff_RDI), lVar5 != 0)) &&
       (lVar5 = func_0x0001424d9310(*(undefined4 *)(lVar5 + 0x9c)), lVar5 != 0)) {
      lVar6 = *(longlong *)(lVar6 + 0x88);
      lVar7 = 0;
      do {
        func_0x000142d9e250(lVar5,*(undefined4 *)(lVar6 + lVar7));
        lVar7 = lVar7 + 4;
      } while ((ulonglong)uVar2 << 2 != lVar7);
    }
  }
  return;
}

