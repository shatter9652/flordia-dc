// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14000c210  size: 149 bytes
// Name:    FUN_14000c210
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14000d780, FUN_14000c2b0, FUN_145647140, FUN_14000cc40
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_14000c210(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStackX_8 [32];
  undefined8 uStack_30;
  
  uStack_30 = 0x14000c221;
  lVar3 = FUN_145647140();
  lVar3 = -lVar3;
  puVar1 = &stack0x00000318 + lVar3;
  *(undefined8 *)(&stack0xfffffffffffffff8 + lVar3) = 0x30;
  *(undefined8 *)((longlong)&uStack_30 + lVar3) = 0x14000c249;
  func_0x000140bb1850(puVar1);
  *(undefined8 *)((longlong)&uStack_30 + lVar3) = 0x14000c25a;
  FUN_14000cc40(puVar1,param_1,8);
  *(undefined8 *)((longlong)&uStack_30 + lVar3) = 0x14000c265;
  FUN_14000d780(puVar1,&stack0xfffffffffffffff8 + lVar3);
  iVar2 = *(int *)(&stack0xfffffffffffffffc + lVar3);
  if (3 < iVar2) {
    *(undefined8 *)((longlong)&uStack_30 + lVar3) = 0x14000c27d;
    FUN_14000c2b0(auStackX_8 + lVar3,iVar2,param_3);
    *(undefined8 *)((longlong)&uStack_30 + lVar3) = 0x14000c290;
    func_0x000144dc8a90(param_3,param_2,_DAT_145fc6ed8);
  }
  return 3 < iVar2;
}

