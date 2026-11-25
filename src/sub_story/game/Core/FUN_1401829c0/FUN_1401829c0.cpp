// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401829c0  size: 414 bytes
// Name:    FUN_1401829c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140183190, FUN_140182b60, FUN_14503e0d0, FUN_14503e140, FUN_140183970
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1401829c0(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                      longlong param_5,undefined2 param_6)

{
  ushort uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 in_stack_ffffffffffffff98;
  undefined4 uVar8;
  
  uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
  lVar3 = *(longlong *)(param_5 + 0x28);
  if (lVar3 != 0) goto LAB_140182ac2;
  lVar3 = FUN_14503e0d0();
  lVar3 = *(longlong *)(lVar3 + 0x90);
  iVar2 = (**(code **)(*(longlong *)(lVar3 + 0x10) + 0x48))(lVar3 + 0x10);
  uVar1 = *(ushort *)(param_1 + 10);
  if (param_3 == 0) {
    uVar5 = (uint)_DAT_0000004a;
    uVar6 = 4;
LAB_140182a3c:
    uVar7 = uVar1 & 0xc;
    if ((uVar1 & 0xc) == 0) {
      uVar7 = uVar6;
    }
  }
  else {
    uVar5 = (uint)*(ushort *)(param_3 + 0x4a);
    uVar6 = *(ushort *)(param_3 + 0x4a) & 0xc;
    if (uVar6 != 0xc) goto LAB_140182a3c;
    uVar7 = 0xc;
  }
  uVar6 = uVar1 & 0x21 | uVar1 & 0x200 | (uint)uVar1 + (uint)uVar1 & 0x40 | uVar5 & 0xc0 | uVar7;
  lVar4 = FUN_14503e140(param_1 + 0x40,2);
  uVar5 = uVar6 | 0x80;
  if (lVar4 == 0) {
    uVar5 = uVar6;
  }
  if (iVar2 == 1) {
    lVar3 = FUN_140182b60(param_2,param_3,lVar3,0,CONCAT44(uVar8,uVar5),param_5,
                          *(undefined4 *)(param_1 + 0x98));
    if (lVar3 == 0) {
      return 0;
    }
  }
  else {
    lVar3 = (**(code **)(*_DAT_14abcc310 + 0x70))(_DAT_14abcc310,param_3,0xa0);
    if (lVar3 == 0) {
      return 0;
    }
    FUN_140183970(lVar3,param_5,uVar5);
  }
  *(longlong *)(param_5 + 0x28) = lVar3;
LAB_140182ac2:
  FUN_140183190(lVar3,param_2,param_3,param_4,param_1,param_6);
  return lVar3;
}

