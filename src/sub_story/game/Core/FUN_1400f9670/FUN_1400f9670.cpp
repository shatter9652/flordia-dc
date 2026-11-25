// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400f9670  size: 261 bytes
// Name:    FUN_1400f9670
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f94120, FUN_144f94160, FUN_142056490, FUN_1400f9780, FUN_1401a3430
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400f9670(undefined4 *param_1,longlong param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong unaff_GS_OFFSET;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  if ((*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
                8) == '\0') &&
     (func_0x0001455db994(),
     *(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8
              ) == '\0')) {
    func_0x0001455db994();
  }
  FUN_1400f9780(&uStack_1c,param_2,param_3);
  *param_1 = uStack_1c;
  uVar1 = *(undefined4 *)(param_2 + 0x9c);
  puVar2 = (undefined4 *)FUN_144f94120(uVar1);
  param_1[1] = *puVar2;
  lVar5 = *(longlong *)(param_2 + 0x20);
  if (lVar5 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(lVar5 + 0x60);
  }
  *(undefined8 *)(param_1 + 4) = uVar4;
  lVar3 = func_0x000144fc04a0(uVar1);
  if (lVar3 == 0) {
    lVar3 = FUN_144f94160(uVar1);
    if (lVar3 == 0) {
      lVar5 = FUN_142056490(*(undefined4 *)(lVar5 + 0x5c));
      uStack_20 = 0;
      if (((lVar5 == 0) || (*(int *)(lVar5 + 0x218) == 0)) || (lVar3 = FUN_1401a3430(), lVar3 == 0))
      goto LAB_1400f96ee;
    }
    uStack_20 = *(undefined4 *)(lVar3 + 0x90);
  }
  else {
    func_0x000140019da0(*(undefined4 *)(lVar3 + 0x14),&uStack_20);
  }
LAB_1400f96ee:
  param_1[2] = uStack_20;
  return;
}

