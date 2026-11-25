// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14007c860  size: 477 bytes
// Name:    FUN_14007c860
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14007c860(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [64];
  undefined1 auVar7 [16];
  undefined1 auVar8 [64];
  
  uVar5 = _DAT_14617cd20;
  uVar2 = _DAT_14615eb10;
  *(undefined4 *)(param_1 + 1) = 0x10101;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd) = uVar2;
  *(undefined1 *)((longlong)param_1 + 0x15) = 1;
  *(undefined8 *)((longlong)param_1 + 0x16) = uVar5;
  *(undefined1 *)((longlong)param_1 + 0x1e) = 4;
  *(undefined4 *)((longlong)param_1 + 0x1f) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x23) = 0;
  func_0x00014007c3b0(param_1 + 5);
  *(undefined1 (*) [32])(param_1 + 0x16) = ZEXT1232(ZEXT812(0));
  *(undefined1 (*) [32])(param_1 + 0x18) = ZEXT1232(ZEXT812(0));
  func_0x00014007b770((longlong)param_1 + 0xe4);
  func_0x00014007b770(param_1 + 0x20);
  func_0x00014007b770((longlong)param_1 + 0x11c);
  puVar1 = param_1 + 0x27;
  func_0x00014007b770(puVar1);
  uVar5 = _DAT_14617cd30;
  uVar3 = _DAT_146159ef4;
  uVar2 = _DAT_146159bc0;
  auVar6 = ZEXT464(_DAT_146159ef4);
  *(undefined4 *)((longlong)param_1 + 0x19c) = 0xffffffff;
  auVar7._4_4_ = _DAT_145fc6ed8;
  auVar7._0_4_ = _DAT_145fc6ed8;
  auVar7._8_4_ = _DAT_145fc6ed8;
  auVar7._12_4_ = _DAT_145fc6ed8;
  auVar8 = ZEXT1664(auVar7);
  *param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 0x18c) = uVar2;
  *(byte *)(param_1 + 0x35) = *(byte *)(param_1 + 0x35) & 0xf0;
  param_1[0x30] = uVar5;
  uVar4 = _DAT_14615cd00;
  *(undefined4 *)((longlong)param_1 + 0x1a4) = 0x100;
  *(undefined8 *)((longlong)param_1 + 0x16c) = 0xffffffffffffffff;
  *(undefined1 (*) [16])((longlong)param_1 + 0x15c) = auVar7;
  func_0x00014007b780((longlong)param_1 + 0x11c,uVar4,uVar3,0,0x3f800000);
  uVar2 = vmovlps_avx(auVar8._0_16_);
  *(undefined8 *)((longlong)param_1 + 0x154) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x174) = 0x3f800000;
  func_0x00014007b780((longlong)param_1 + 0xe4,*(undefined4 *)(param_1 + 0x30),
                      *(undefined4 *)(param_1 + 0x30),_DAT_14615af00,0x42c80000);
  func_0x00014007b780(param_1 + 0x20,auVar6._0_8_,auVar6._0_8_,0,0x3f800000);
  func_0x00014007ca40(puVar1,_DAT_145fc6ed8,_DAT_145fc6ed8);
  func_0x000144f5f270(puVar1,0);
  param_1[0x2f] = 0;
  *(undefined4 *)(param_1 + 0x31) = 0;
  *(undefined8 *)((longlong)param_1 + 0x194) = 0;
  *(byte *)(param_1 + 0x35) = *(byte *)(param_1 + 0x35) & 0xef;
  return param_1;
}

