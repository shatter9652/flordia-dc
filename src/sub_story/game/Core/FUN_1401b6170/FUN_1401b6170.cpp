// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401b6170  size: 212 bytes
// Name:    FUN_1401b6170
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14438bda0, FUN_1401b75b0, FUN_1401b6250, FUN_14438d530, FUN_1450b1cd0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_1401b6170(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  
  puVar4 = &stack0xfffffffffffffff0;
  iVar1 = *(int *)((longlong)param_2 + 0x14);
  if (iVar1 == 0x15) {
    lVar2 = FUN_1450b1cd0(*(undefined8 *)(*(longlong *)(*param_1 + 8) + 0x40));
    if (lVar2 != 0) {
      uVar3 = FUN_1401b75b0(param_1,*(undefined4 *)((longlong)param_2 + 0x14),lVar2);
      return uVar3;
    }
    uVar3 = *param_2;
    uVar5 = param_2[1];
    puVar4 = (undefined1 *)register0x00000020;
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 == 0) {
        uVar3 = FUN_14438bda0(param_1);
        return uVar3;
      }
      if ((iVar1 - 0x16U < 6) &&
         (lVar2 = FUN_1450b1cd0(*(undefined8 *)(*(longlong *)(*param_1 + 8) + 0x40)), lVar2 != 0)) {
        uVar3 = FUN_14438d530(param_1,*(undefined4 *)((longlong)param_2 + 0x14),lVar2);
        return uVar3;
      }
      return 0;
    }
    uVar3 = *param_2;
    uVar5 = param_2[1];
  }
  *(undefined8 *)(puVar4 + -0x48) = uVar3;
  *(undefined8 *)(puVar4 + -0x40) = uVar5;
  uVar3 = FUN_1401b6250(param_1);
  return uVar3;
}

