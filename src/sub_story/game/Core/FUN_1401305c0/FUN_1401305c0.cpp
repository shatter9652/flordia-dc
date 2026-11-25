// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401305c0  size: 271 bytes
// Name:    FUN_1401305c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1450caf90, FUN_1450cb0e0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


longlong FUN_1401305c0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lStack_50;
  undefined4 uStack_48;
  longlong lStack_40;
  undefined4 uStack_38;
  
  lStack_50 = *param_2;
  if (lStack_50 == 0) {
    uStack_48 = (undefined4)param_2[1];
    lStack_40 = 0;
  }
  else {
    FUN_1450caf90(lStack_50,&lStack_50);
    uStack_48 = (undefined4)param_2[1];
    lStack_40 = lStack_50;
    if (lStack_50 != 0) {
      FUN_1450caf90(lStack_50,&lStack_40);
      lVar4 = lStack_40;
      goto LAB_14013061d;
    }
  }
  lVar4 = 0;
LAB_14013061d:
  uVar2 = uStack_48;
  plVar5 = *(longlong **)(param_1 + 0x50);
  uVar7 = (ulonglong)*(uint *)(param_1 + 0x4c);
  plVar6 = plVar5;
  uStack_38 = uStack_48;
  if (uVar7 != 0) {
    plVar1 = plVar5 + uVar7;
    lVar8 = uVar7 << 3;
    do {
      cVar3 = func_0x0001401306d0(*(undefined8 *)*plVar5,*(undefined4 *)((undefined8 *)*plVar5 + 1),
                                  lVar4,uVar2);
      plVar6 = plVar5;
      if (cVar3 != '\0') break;
      plVar5 = plVar5 + 1;
      lVar8 = lVar8 + -8;
      plVar6 = plVar1;
    } while (lVar8 != 0);
  }
  if (lVar4 != 0) {
    FUN_1450cb0e0(lVar4,&lStack_40);
  }
  lStack_40 = 0;
  if (lStack_50 != 0) {
    FUN_1450cb0e0(lStack_50,&lStack_50);
  }
  if (plVar6 == (longlong *)
                ((ulonglong)*(uint *)(param_1 + 0x4c) * 8 + *(longlong *)(param_1 + 0x50))) {
    lVar4 = 0;
  }
  else {
    lVar4 = *plVar6;
  }
  return lVar4;
}

