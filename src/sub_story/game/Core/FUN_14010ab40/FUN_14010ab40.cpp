// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14010ab40  size: 245 bytes
// Name:    FUN_14010ab40
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400f9df0, FUN_14010ac60, FUN_140276630, FUN_144dd1b90, FUN_144da54f0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14010ab40(longlong param_1)

{
  ushort uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  ushort uVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ushort uVar9;
  longlong lVar10;
  uint uVar11;
  undefined8 in_stack_ffffffffffffffb8;
  undefined4 uVar12;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uVar12 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x128);
  uVar6 = FUN_14010ac60(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x38) + 0x98))
  ;
  FUN_144da54f0(uVar2,uVar6,0,0x14abbebc8);
  puVar3 = (undefined8 *)(*(undefined8 **)(param_1 + 0x128))[1];
  FUN_1400f9df0(**(undefined8 **)(param_1 + 0x128),*puVar3,*(undefined4 *)(puVar3 + 6),0x2deefadd,
                CONCAT44(uVar12,0xfa019324),0);
  uStack_38 = _DAT_145fc6ee0;
  uStack_30 = _UNK_145fc6ee8;
  FUN_140276630(*(undefined8 *)(param_1 + 0x128),0x70977dd5,0x70d27729,0,&uStack_38,1);
  FUN_144dd1b90(*(longlong *)(param_1 + 0x130) + 0x18);
  lVar7 = func_0x00014010ac40(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x38) + 0x98));
  if (lVar7 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x130);
    FUN_144da2e30(lVar4 + 0x18,*(undefined2 *)(lVar7 + 0x3e));
    func_0x000145f40560(((ulonglong)*(ushort *)(lVar4 + 0x40) + *(longlong *)(lVar4 + 0x20)) -
                        (ulonglong)*(ushort *)(lVar4 + 0x3e),
                        ((ulonglong)*(ushort *)(lVar7 + 0x40) + *(longlong *)(lVar7 + 0x20)) -
                        (ulonglong)*(ushort *)(lVar7 + 0x3e));
    if (((*(byte *)(lVar7 + 0x43) & 0x10) != 0) &&
       (uVar11 = (uint)*(ushort *)(lVar7 + 0x3c), *(ushort *)(lVar7 + 0x3c) != 0)) {
      lVar10 = ((ulonglong)*(ushort *)(lVar7 + 0x40) + *(longlong *)(lVar7 + 0x20)) -
               (ulonglong)*(ushort *)(lVar7 + 0x3e);
      do {
        if ((*(byte *)(lVar10 + 0xd) & 0x10) != 0) {
          func_0x000144fb2290(lVar10);
        }
        lVar10 = lVar10 + (ulonglong)*(byte *)(lVar10 + 0xe);
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    *(short *)(lVar4 + 0x3c) = *(short *)(lVar4 + 0x3c) + *(short *)(lVar7 + 0x3c);
    *(ulonglong *)(lVar4 + 0x30) = *(ulonglong *)(lVar4 + 0x30) | *(ulonglong *)(lVar7 + 0x30);
    *(uint *)(lVar4 + 0x38) = *(uint *)(lVar4 + 0x38) | *(uint *)(lVar7 + 0x38);
    uVar1 = *(ushort *)(lVar4 + 0x42);
    uVar5 = *(ushort *)(lVar7 + 0x42) & 0x1000;
    *(ushort *)(lVar4 + 0x42) = uVar5 | uVar1;
    uVar9 = (*(ushort *)(lVar7 + 0x42) | uVar1) & 0x2000;
    *(ushort *)(lVar4 + 0x42) = uVar5 | uVar1 & 0xdfff | uVar9;
    *(ushort *)(lVar4 + 0x42) =
         uVar5 | uVar1 & 0x5fff | uVar9 | (*(ushort *)(lVar7 + 0x42) | uVar1) & 0x8000;
    uVar8 = (*(longlong *)(lVar4 + 0x28) + 0x651e95c4d06fbfb1U ^ *(ulonglong *)(lVar7 + 0x28)) *
            -0x622015f714c7d297;
    uVar8 = (uVar8 >> 0x2f ^ *(ulonglong *)(lVar7 + 0x28) ^ uVar8) * -0x622015f714c7d297;
    *(ulonglong *)(lVar4 + 0x28) = (uVar8 >> 0x2f ^ uVar8) * -0x622015f714c7d297;
    return;
  }
  return;
}

