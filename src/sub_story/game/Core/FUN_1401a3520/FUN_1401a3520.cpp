// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401a3520  size: 189 bytes
// Name:    FUN_1401a3520
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401a35e0, FUN_1452d56f0, FUN_1400bf810, FUN_1452d5720, FUN_1452e2b10
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_1401a3520(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  uint uStack_c4;
  undefined *puStack_c0;
  uint uStack_b8;
  undefined2 uStack_a8;
  longlong lStack_a0;
  undefined4 uStack_98;
  undefined8 uStack_80;
  undefined1 auStack_30 [8];
  
  func_0x0001452d57b0(&puStack_c0);
  uStack_98 = *(undefined4 *)(param_1 + 0x23);
  uVar1 = 0;
  uStack_c4 = 0x3fffff;
  FUN_1400bf810(*param_1,&uStack_c4,0);
  uStack_b8 = uStack_c4;
  if ((~uStack_c4 & 0x3fffff) != 0) {
    uVar1 = FUN_1401a35e0(param_1,&puStack_c0,param_2);
  }
  puStack_c0 = &UNK_14652c0d8;
  FUN_1452d5720();
  FUN_1452d56f0(auStack_30);
  uStack_80 = 0x10;
  if (lStack_a0 != 0) {
    FUN_1452e2b10(lStack_a0,uStack_a8);
  }
  return uVar1;
}

