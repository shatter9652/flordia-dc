// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14004ef80  size: 1323 bytes
// Name:    FUN_14004ef80
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14004f4e0, FUN_14004f8c0, FUN_14004f510, FUN_14047d790, FUN_14004fa70, FUN_14004f840, FUN_14094c670, FUN_144edcc50, FUN_145221720, FUN_144e2d0f0, FUN_14004f730
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14004ef80(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined4 uVar3;
  char cVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [64];
  undefined1 auStack_68 [16];
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  auStack_68._0_12_ = ZEXT812(0);
  auStack_68._12_4_ = 0;
  auVar8 = ZEXT1664(auStack_68);
  uStack_58 = 0x3f00000000000000;
  uStack_50 = 2;
  FUN_144e2d0f0(auStack_68,0);
  func_0x0001452216f0(param_1,auStack_68);
  auStack_68 = auVar8._0_16_;
  uStack_58 = 0x3f00000000000000;
  uStack_50 = 2;
  FUN_144e2d0f0(auStack_68,0);
  FUN_145221720(param_1,auStack_68);
  func_0x00014004f4b0(param_1);
  FUN_14004f510(param_1);
  FUN_14004f840(param_1);
  func_0x00014004f4c0(param_1);
  puVar5 = (undefined8 *)func_0x000144ecfea0(param_1);
  uStack_48 = *puVar5;
  uStack_40 = puVar5[1];
  uVar6 = FUN_144edcc50(&uStack_48,*(undefined4 *)(puVar5 + 2),1);
  FUN_14004fa70(param_1 + 0x14b0,uVar6);
  if ((undefined8 *)(param_1 + 0x1290) != puVar5) {
    uVar6 = puVar5[1];
    *(undefined8 *)(param_1 + 0x1290) = *puVar5;
    *(undefined8 *)(param_1 + 0x1298) = uVar6;
    *(undefined8 *)(param_1 + 0x12a0) = puVar5[2];
    *(undefined1 *)(param_1 + 0x12a8) = *(undefined1 *)(puVar5 + 3);
  }
  *(undefined4 *)(param_1 + 0x1318) = 0;
  *(undefined4 *)(param_1 + 0x1330) = 0;
  *(undefined1 (*) [16])(param_1 + 0x12c0) = auVar8._0_16_;
  *(undefined4 *)(param_1 + 0x1280) = 0x417b53d2;
  *(undefined1 (*) [16])(param_1 + 0x1d30) = auVar8._0_16_;
  FUN_14004f4e0(auStack_68,3);
  *(undefined8 *)(param_1 + 0x1340) = auStack_68._0_8_;
  if ((*(uint *)(param_1 + 0x1404) & 0x7fffffff) < 0x7f800000) {
    *(uint *)(param_1 + 0x1408) = *(uint *)(param_1 + 0x1404);
  }
  uVar3 = _DAT_145fc6ed8;
  *(undefined4 *)(param_1 + 0x1250) = _DAT_145fc6ed8;
  *(undefined4 *)(param_1 + 0x1254) = uVar3;
  *(undefined4 *)(param_1 + 0x1258) = uVar3;
  *(undefined4 *)(param_1 + 0x125c) = uVar3;
  *(undefined8 *)(param_1 + 0x1220) = 0;
  *(undefined8 *)(param_1 + 0x1228) = 0;
  *(undefined8 *)(param_1 + 0x1230) = 0;
  *(undefined8 *)(param_1 + 0x1238) = 0;
  *(undefined8 *)(param_1 + 0x141c) = 0;
  *(undefined1 (*) [16])(param_1 + 0x140c) = (undefined1  [16])0x0;
  *(undefined4 *)(param_1 + 0x1240) = uVar3;
  *(undefined4 *)(param_1 + 0x1244) = uVar3;
  *(undefined4 *)(param_1 + 0x1248) = uVar3;
  *(undefined4 *)(param_1 + 0x124c) = uVar3;
  if (param_1 != 0x14aaf2b08) {
    *(undefined8 *)(param_1 + 0x1490) = _DAT_14aaf3f98;
    *(undefined8 *)(param_1 + 0x1498) = _DAT_14aaf3fa0;
  }
  *(undefined4 *)(param_1 + 0x14a0) = 0;
  *(undefined8 *)(param_1 + 0x1630) = 0;
  *(undefined4 *)(param_1 + 0x1638) = 0;
  *(undefined1 (*) [16])(param_1 + 0x1650) = (undefined1  [16])0x0;
  *(undefined4 *)(param_1 + 0x1660) = 0;
  *(undefined8 *)(param_1 + 0x16f0) = 0x4ee717723;
  *(undefined4 *)(param_1 + 0x16f8) = 0;
  *(undefined1 *)(param_1 + 0x16fc) = 0;
  *(undefined4 *)(param_1 + 0x166c) = 0;
  *(undefined1 *)(param_1 + 0x1cf4) = 0;
  *(undefined4 *)(param_1 + 0x1cf8) = 0;
  *(undefined2 *)(param_1 + 0x1d14) = 0;
  *(byte *)(param_1 + 0x1708) = *(byte *)(param_1 + 0x1708) & 0xf9;
  FUN_14047d790(param_1);
  *(undefined1 *)(param_1 + 0x1e60) = 0;
  *(uint *)(param_1 + 0x1708) = *(uint *)(param_1 + 0x1708) & 0xfffffe0e;
  *(undefined4 *)(param_1 + 0x1d18) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1cfc) = 0;
  *(undefined1 *)(param_1 + 0xec9) = 0;
  if (*(char *)(param_1 + 0x1d20) == '\0') {
    *(undefined4 *)(param_1 + 0x1d1c) = 0x3f800000;
  }
  *(undefined8 *)(param_1 + 0x1d40) = 0;
  *(undefined4 *)(param_1 + 0x1d48) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1704) = 0;
  *(undefined8 *)(param_1 + 0x1e58) = 0;
  *(undefined8 *)(param_1 + 0x1d4c) = 0;
  *(undefined8 *)(param_1 + 0x1d51) = 0;
  *(undefined1 *)(param_1 + 0x131c) = 1;
  *(undefined1 (*) [16])(param_1 + 0x1320) = (undefined1  [16])0x0;
  if (*(longlong *)(param_1 + 0x1e68) != 0) {
    func_0x000144d9c130(*(longlong *)(param_1 + 0x1e68),0x90);
  }
  *(undefined8 *)(param_1 + 0x1e68) = 0;
  if (*(longlong *)(param_1 + 0x1ee8) != 0) {
    func_0x000144d9c130(*(longlong *)(param_1 + 0x1ee8),2);
  }
  *(undefined8 *)(param_1 + 0x1ee8) = 0;
  *(undefined4 *)(param_1 + 0x1ee0) = 0;
  *(undefined4 *)(param_1 + 0x1ef0) = 0;
  FUN_14004f8c0(param_1 + 0x1e70);
  if (*(longlong *)(param_1 + 0x1f20) != 0) {
    func_0x000144d9c130(*(longlong *)(param_1 + 0x1f20),1);
  }
  *(undefined8 *)(param_1 + 0x1f20) = 0;
  *(undefined4 *)(param_1 + 0x1f18) = 0;
  *(undefined4 *)(param_1 + 0x1f28) = 0;
  lVar1 = *(longlong *)(param_1 + 0x1f38);
  if (lVar1 != 0) {
    FUN_14094c670(lVar1);
    func_0x000144d9c130(lVar1,0x1d8);
  }
  *(undefined8 *)(param_1 + 0x1f38) = 0;
  plVar2 = *(longlong **)(param_1 + 0x1f30);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x30))(plVar2,*(ulonglong *)(param_1 + 8) & 0xfffffffffffffff0);
    puVar5 = *(undefined8 **)(param_1 + 0x1f30);
    if (puVar5 != (undefined8 *)0x0) {
      (**(code **)*puVar5)(puVar5,1);
    }
    *(undefined8 *)(param_1 + 0x1f30) = 0;
  }
  *(undefined8 *)(param_1 + 0x1664) = 0;
  *(undefined4 *)(param_1 + 0x6dec) = 0;
  *(undefined4 *)(param_1 + 0x166c) = 0;
  *(undefined1 *)(param_1 + 0x1670) = 1;
  *(undefined4 *)(param_1 + 0x1674) = 0;
  FUN_14004f730(param_1,0);
  auVar7._4_4_ = _DAT_145fc6f70;
  auVar7._0_4_ = _DAT_145fc6f70;
  auVar7._8_4_ = _DAT_145fc6f70;
  auVar7._12_4_ = _DAT_145fc6f70;
  *(undefined1 *)(param_1 + 0x6de8) = 0;
  *(undefined4 *)(param_1 + 0x168) = 0;
  *(undefined4 *)(param_1 + 0x6e04) = 0;
  *(undefined1 (*) [16])(param_1 + 0x6df4) = (undefined1  [16])0x0;
  *(byte *)(param_1 + 0x172) = *(byte *)(param_1 + 0x172) | 0xc;
  *(undefined1 (*) [16])(param_1 + 0x6e10) = auVar7;
  *(undefined1 (*) [16])(param_1 + 0x6e20) = auVar7;
  *(undefined1 (*) [16])(param_1 + 0x6e30) = auVar7;
  *(undefined1 (*) [16])(param_1 + 0x1d5c) = (undefined1  [16])0x0;
  *(undefined4 *)(param_1 + 0x1d6c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1cf0) = 0xbf800000;
  *(byte *)(param_1 + 0x1688) = *(byte *)(param_1 + 0x1688) & 0x80;
  if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x100)) {
    *(int *)(param_1 + 0x100) = *(int *)(param_1 + 0x18);
  }
  if (*(char *)(param_1 + 0xd0) != '\0') {
    *(undefined1 *)(param_1 + 0xd0) = 0;
  }
  if (*(char *)(param_1 + 0xe8) != '\0') {
    *(undefined1 *)(param_1 + 0xe8) = 0;
  }
  *(undefined8 *)(param_1 + 0x6e98) = 0;
  *(undefined2 *)(param_1 + 0x6ed4) = 0x101;
  cVar4 = func_0x000144ef3230(*(undefined4 *)
                               ((*(ulonglong *)(param_1 + 8) & 0xfffffffffffffff0) + 0x9c));
  if (cVar4 == '\0') {
    cVar4 = '\0';
    *(undefined1 *)(param_1 + 0xec8) = 0;
  }
  else {
    cVar4 = *(char *)(param_1 + 0xec8);
  }
  if (*(char *)(param_1 + 0xb8) != cVar4) {
    *(char *)(param_1 + 0xb8) = cVar4;
  }
  *(undefined4 *)(param_1 + 0x54) = 0;
  return;
}

