// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400ea610  size: 353 bytes
// Name:    FUN_1400ea610
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f68c40, FUN_145647140
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400ea610(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined1 auStackX_10 [8];
  longlong alStackX_18 [2];
  undefined8 uStack_30;
  
  uStack_30 = 0x1400ea620;
  lVar2 = FUN_145647140();
  lVar2 = -lVar2;
  *(undefined8 *)((longlong)&uStack_30 + lVar2) = 0x1400ea638;
  func_0x0001400ea780(param_1 + 0x3230);
  auVar3._0_12_ = ZEXT812(0);
  auVar3._12_4_ = 0;
  *(longlong *)((longlong)alStackX_18 + lVar2) = param_1 + 8;
  *(undefined4 *)(&stack0x00000190 + lVar2) = 0x2000;
  *(undefined1 **)(&stack0x00000198 + lVar2) = &stack0x000001a8 + lVar2;
  *(undefined4 *)(&stack0x000001a0 + lVar2) = 0;
  *(longlong *)((longlong)alStackX_18 + lVar2 + 8) = param_1 + 0x48;
  *(undefined1 **)(&stack0x00000028 + lVar2) = &stack0x00000190 + lVar2;
  *(longlong *)(&stack0x00000030 + lVar2) = param_1 + 0xf8;
  *(undefined1 (*) [16])(&stack0x00000048 + lVar2) = auVar3;
  *(undefined1 (*) [16])(&stack0x00000054 + lVar2) = auVar3;
  *(undefined1 (*) [16])(&stack0x00000068 + lVar2) = auVar3;
  *(undefined1 (*) [16])(&stack0x00000074 + lVar2) = auVar3;
  (&stack0x00000084)[lVar2] = 1;
  *(undefined1 (*) [16])(&stack0x000000a0 + lVar2) = auVar3;
  *(undefined1 (*) [16])(&stack0x000000ac + lVar2) = auVar3;
  *(undefined1 (*) [16])(&stack0x000000c0 + lVar2) = auVar3;
  *(undefined1 (*) [16])(&stack0x000000cc + lVar2) = auVar3;
  (&stack0x000000dc)[lVar2] = 1;
  *(undefined1 (*) [16])(&stack0x000000f8 + lVar2) = auVar3;
  *(undefined1 (*) [16])(&stack0x00000104 + lVar2) = auVar3;
  *(undefined1 (*) [16])(&stack0x00000124 + lVar2) = auVar3;
  *(undefined1 (*) [16])(&stack0x00000118 + lVar2) = auVar3;
  (&stack0x00000134)[lVar2] = 1;
  *(undefined8 *)(&stack0x00000038 + lVar2) = 0;
  *(undefined8 *)(&stack0x00000090 + lVar2) = 0;
  *(undefined8 *)(&stack0x00000148 + lVar2) = _DAT_1461642f0;
  *(undefined2 *)(&stack0x00000150 + lVar2) = 0;
  uVar1 = vmovlps_avx(ZEXT416(_DAT_145fc6f50));
  *(undefined8 *)(&stack0x00000154 + lVar2) = uVar1;
  *(undefined8 *)(&stack0x00000140 + lVar2) = 0xffffffff7fffffff;
  *(undefined8 *)((longlong)&uStack_30 + lVar2) = 0x1400ea747;
  func_0x0001400ea790(auStackX_10 + lVar2);
  *(undefined1 *)((longlong)alStackX_18 + lVar2 + -0x18) = 1;
  (&stack0xfffffffffffffff8)[lVar2] = 1;
  *(undefined8 *)((longlong)&uStack_30 + lVar2) = 0x1400ea762;
  FUN_144f68c40(param_1,(longlong *)((longlong)alStackX_18 + lVar2),param_2,param_3);
  return;
}

