// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140068220  size: 156 bytes
// Name:    FUN_140068220
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14522e220
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140068220(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  (**(code **)(*param_3 + 0x20))(param_3,&uStack_58);
  uVar2 = *(undefined8 *)(param_2 + 8);
  uStack_48 = uStack_58;
  uStack_40 = uStack_50;
  iVar4 = func_0x00014523cda0(uVar2);
  if (iVar4 != 0) {
    uStack_38 = uStack_58;
    uStack_30 = uStack_50;
    uVar5 = FUN_14522e220(uVar2,&uStack_38,2 - (uint)*(byte *)(param_1 + 0x40),iVar4);
    if (uVar5 != 0xffffffff) {
      plVar1 = (longlong *)
               (*(longlong *)(*(longlong *)(param_2 + 8) + 0x18) + 0x20 + (ulonglong)uVar5 * 0x50);
      lVar3 = plVar1[1];
      param_3[0x18] = *plVar1;
      param_3[0x19] = lVar3;
    }
  }
  return;
}

