// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14013e670  size: 344 bytes
// Name:    FUN_14013e670
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140018c20, FUN_142ba89d0, FUN_140612810, FUN_144ea2f50
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14013e670(longlong param_1,byte param_2,byte param_3,int param_4)

{
  byte bVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  int iStack_4c;
  undefined8 uStack_48;
  longlong lStack_40;
  undefined8 uStack_38;
  
  plVar4 = (longlong *)func_0x000144d9fa60(*(undefined4 *)(**(longlong **)(param_1 + 8) + 0x9c));
  if (param_3 == 0) {
    uVar5 = (**(code **)(*plVar4 + 0x68))(plVar4,*(undefined1 *)(param_1 + 0x10));
    puVar2 = *(undefined8 **)(param_1 + 0x18);
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
    *(undefined8 *)(param_1 + 0x18) = uVar5;
  }
  if (param_4 == 0) {
    iStack_4c = param_4;
    (**(code **)(*plVar4 + 0x90))(plVar4,&uStack_48,*(undefined1 *)(param_1 + 0x10));
    param_4 = (int)uStack_48;
  }
  if (param_4 != *(int *)(param_1 + 0x20)) {
    *(int *)(param_1 + 0x20) = param_4;
    iStack_4c = param_4;
    uVar5 = FUN_140612810(&iStack_4c);
    uStack_48 = func_0x000145007fc0(*(undefined8 *)(param_1 + 8),*(undefined1 *)(param_1 + 0x10));
    if (param_3 != 0) {
      FUN_144ea2f50(uStack_48,0);
      FUN_140018c20(*(undefined8 *)(param_1 + 0x18));
      FUN_142ba89d0(*(undefined8 *)(param_1 + 0x18));
    }
    lStack_40 = param_1;
    uStack_38 = uVar5;
    (**(code **)(**(longlong **)(param_1 + 0x18) + 8))();
    *(byte *)(param_1 + 0x12) =
         (*(byte *)(param_1 + 0x12) ^ param_2) & 1 ^ *(byte *)(param_1 + 0x12);
    uVar6 = (ulonglong)
            *(byte *)(*(longlong *)(param_1 + 8) + 0x19 +
                     (longlong)*(char *)(param_1 + 0x10) + (ulonglong)DAT_149e40e88 * 6);
    if (((uVar6 != 0x1e) &&
        (lVar3 = *(longlong *)(*(longlong *)(param_1 + 8) + 0xa0 + uVar6 * 8), lVar3 != 0)) &&
       (bVar1 = *(byte *)(lVar3 + 0x12), (bVar1 & 4) == 0)) {
      *(byte *)(lVar3 + 0x12) = (bVar1 ^ param_2) & 1 ^ bVar1;
    }
    *(byte *)(param_1 + 0x24) = param_3;
    if (param_2 == 0) {
      (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10 + (ulonglong)param_3 * 8))();
    }
  }
  return;
}

