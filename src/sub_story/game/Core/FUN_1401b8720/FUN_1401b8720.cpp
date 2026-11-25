// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401b8720  size: 207 bytes
// Name:    FUN_1401b8720
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401b9210, FUN_14438ac50, FUN_1450b1cd0, FUN_1401b87f0, FUN_1401ba330
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_1401b8720(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  
  puVar4 = &stack0xfffffffffffffff0;
  iVar1 = *(int *)((longlong)param_2 + 0x24);
  if (iVar1 == 0x15) {
    lVar2 = FUN_1450b1cd0(*(undefined8 *)(*(longlong *)(*param_1 + 8) + 0x40));
    if (lVar2 != 0) {
      uVar3 = FUN_1401b9210(param_1,*(undefined4 *)((longlong)param_2 + 0x24),lVar2);
      return uVar3;
    }
    uVar3 = *param_2;
    uVar5 = param_2[1];
    puVar4 = (undefined1 *)register0x00000020;
LAB_1401b8752:
    *(undefined8 *)(puVar4 + -0x48) = uVar3;
    *(undefined8 *)(puVar4 + -0x40) = uVar5;
    uVar3 = FUN_1401b87f0(param_1);
  }
  else {
    if (iVar1 - 0x16U < 6) {
      lVar2 = FUN_1450b1cd0(*(undefined8 *)(*(longlong *)(*param_1 + 8) + 0x40));
      if (lVar2 != 0) {
        uVar3 = FUN_1401ba330(param_1,*(undefined4 *)((longlong)param_2 + 0x24),lVar2);
        return uVar3;
      }
    }
    else {
      if (iVar1 == 1) {
        uVar3 = *param_2;
        uVar5 = param_2[1];
        goto LAB_1401b8752;
      }
      if (iVar1 == 0) {
        uVar3 = FUN_14438ac50(param_1);
        return uVar3;
      }
    }
    uVar3 = 0;
  }
  return uVar3;
}

