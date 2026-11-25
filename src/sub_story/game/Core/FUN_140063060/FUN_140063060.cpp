// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140063060  size: 44 bytes
// Name:    FUN_140063060
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144ff2a50
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Removing unreachable block (ram,0x0001400631c4) */

void FUN_140063060(undefined8 *param_1,undefined8 *param_2)

{
  short *psVar1;
  short sVar2;
  uint uVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 *puStack_40;
  undefined4 uStack_38;
  undefined1 auStack_30 [8];
  
  *(short *)((longlong)param_2 + 10) = *(short *)((longlong)param_2 + 10) + 1;
  puStack_40 = (undefined1 *)0x140063078;
  FUN_144ff2a50(param_2);
  func_0x000140092750(auStack_30);
  uStack_38 = 0x110015;
  puStack_40 = auStack_30;
  if ((longlong *)param_1[6] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[6];
    do {
      plVar4 = (longlong *)plVar5[2];
      (**(code **)(*plVar5 + 0x10))(plVar5,&puStack_40);
      plVar5 = plVar4;
    } while (plVar4 != (longlong *)0x0);
  }
  *(byte *)(param_2 + 1) = *(byte *)(param_2 + 1) & 0xdf;
  uVar3 = *(uint *)(param_1 + 4);
  if ((uVar3 & 0x7fffffff) == 0) {
    *(undefined8 **)(param_1[7] + 0x90) = param_2;
    *(undefined4 *)(param_2 + 4) = 0;
    psVar1 = (short *)((longlong)param_1 + 10);
    *psVar1 = *psVar1 + -1;
    sVar2 = *psVar1;
    param_2 = param_1;
  }
  else {
    plVar5 = (longlong *)&DAT_149fe64f0;
    if (-1 < (int)uVar3) {
      plVar5 = (longlong *)&DAT_149fe5f78;
    }
    FUN_1451771f0(((ulonglong)uVar3 & 0x7fffffff) + *plVar5,param_1,param_2,0);
    psVar1 = (short *)((longlong)param_2 + 10);
    *psVar1 = *psVar1 + -1;
    sVar2 = *psVar1;
  }
  if (sVar2 == 0) {
    (**(code **)*param_2)(param_2,1);
  }
  return;
}

