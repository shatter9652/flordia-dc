// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14014fd20  size: 85 bytes
// Name:    FUN_14014fd20
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14052a850, FUN_144ef4040
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14014fd20(longlong param_1,longlong param_2,longlong param_3,undefined4 param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  byte bVar4;
  byte bVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  undefined8 unaff_RSI;
  undefined8 unaff_RDI;
  ulonglong uVar9;
  ulonglong in_stack_ffffffffffffffd8;
  
  uVar3 = *(undefined4 *)(param_3 + 0x9c);
  uVar6 = FUN_144ef4040(param_3);
  uVar7 = FUN_14052a850(param_2,uVar3,param_4,uVar6,in_stack_ffffffffffffffd8 & 0xffffffffffff0000);
  uVar9 = (ulonglong)
          ((uint)*(ushort *)(*(longlong *)(param_2 + 0x10) + 4 + (ulonglong)uVar7 * 0xc) -
          (uint)*(ushort *)(param_1 + 0x80));
  if (*(int *)(*(longlong *)(param_1 + 0x78) + 0xc + uVar9 * 0x18) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x78) + 8 + uVar9 * 0x18;
    uVar9 = 0;
    do {
      uVar2 = *(undefined2 *)(*(longlong *)(lVar1 + 8) + uVar9 * 2);
      uVar8 = FUN_14501c2d0(param_2,uVar2,uVar7);
      bVar4 = FUN_14501c400(param_2,uVar8,uVar2,uVar7,param_5,unaff_RBX,unaff_RBP,unaff_RDI,
                            unaff_RSI);
      bVar5 = FUN_14501c300(param_2,uVar8,uVar2,uVar7,param_5);
      if ((bVar4 & bVar5) == 0) {
        if (bVar4 == 0) {
          if (bVar5 != 0) {
            FUN_14014fe30(param_2,uVar2,uVar7,param_5);
          }
        }
        else {
          FUN_14501cc60(param_2,uVar8,uVar2,uVar7);
        }
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < *(uint *)(lVar1 + 4));
  }
  return;
}

