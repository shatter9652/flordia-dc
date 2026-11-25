// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14019fa90  size: 417 bytes
// Name:    FUN_14019fa90
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144da5ae0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14019fa90(longlong param_1,int param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uVar3 = _UNK_145fc6ee8;
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *param_3 = _DAT_145fc6ee0;
    param_3[1] = uVar3;
    *(undefined1 (*) [16])(param_3 + 2) = ZEXT816(0) << 0x20;
  }
  else {
    if (param_2 == -1) {
      lVar5 = *plVar2 + (ulonglong)*(uint *)(plVar2 + 0x3b) * 0x30;
      uVar3 = *(undefined8 *)(lVar5 + 0x18);
      param_3[2] = *(undefined8 *)(lVar5 + 0x10);
      param_3[3] = uVar3;
      puVar1 = (undefined8 *)(*plVar2 + (ulonglong)*(uint *)(plVar2 + 0x3b) * 0x30);
      uStack_58 = *puVar1;
      uStack_50 = puVar1[1];
    }
    else {
      lVar5 = (longlong)
              *(short *)((longlong)(int)*(uint *)(plVar2 + 0x3b) * 0x60 + *plVar2 + 0x30 +
                        (longlong)param_2 * 2);
      if (lVar5 == -1) {
        FUN_144da5ae0(plVar2,&uStack_58,param_2);
      }
      else {
        lVar5 = lVar5 * 0x30;
        lVar4 = *plVar2 + (ulonglong)*(uint *)(plVar2 + 0x3b) * 0x30;
        puVar1 = (undefined8 *)(lVar5 + 0x30 + lVar4);
        uStack_58 = *puVar1;
        uStack_50 = puVar1[1];
        uStack_48 = puVar1[2];
        uStack_40 = puVar1[3];
        lVar4 = lVar5 + 0x40 + lVar4;
        uStack_38 = *(undefined8 *)(lVar4 + 0x10);
        uStack_30 = *(undefined8 *)(lVar4 + 0x18);
      }
      param_3[2] = uStack_48;
      param_3[3] = uStack_40;
      lVar5 = (longlong)
              *(short *)((longlong)(int)*(uint *)(plVar2 + 0x3b) * 0x60 + *plVar2 + 0x30 +
                        (longlong)param_2 * 2);
      if (lVar5 == -1) {
        FUN_144da5ae0(plVar2,&uStack_58,param_2);
      }
      else {
        puVar1 = (undefined8 *)
                 (lVar5 * 0x30 + 0x30 + *plVar2 + (ulonglong)*(uint *)(plVar2 + 0x3b) * 0x30);
        uStack_58 = *puVar1;
        uStack_50 = puVar1[1];
      }
    }
    *param_3 = uStack_58;
    param_3[1] = uStack_50;
  }
  return;
}

