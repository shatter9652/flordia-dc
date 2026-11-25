// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140108c60  size: 253 bytes
// Name:    FUN_140108c60
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140108c60(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong unaff_GS_OFFSET;
  undefined8 auStack_80 [10];
  undefined8 uStack_30;
  
  *param_1 = &UNK_1466d0ca8;
  if ((*(short *)((longlong)param_1 + 0x2d2) != 0) && (param_1[0x59] != 0)) {
    uStack_30 = 0x140108c8d;
    func_0x000144d9c130();
  }
  uStack_30 = 0x140108c99;
  func_0x000144fb0760(param_1 + 0x51);
  uStack_30 = 0x140108ca5;
  func_0x000144fb0760(param_1 + 0x49);
  uStack_30 = 0x140108cb1;
  func_0x000144fb0760(param_1 + 0x41);
  uStack_30 = 0x140108cbd;
  func_0x000144fb0760(param_1 + 0x39);
  uStack_30 = 0x140108cc9;
  func_0x000144fb0760(param_1 + 0x31);
  uStack_30 = 0x140108cd5;
  func_0x000144fb0760(param_1 + 0x29);
  uStack_30 = 0x140108ce1;
  func_0x000144fb0760(param_1 + 0x21);
  uStack_30 = 0x140108ced;
  func_0x000144fb0760(param_1 + 0x19);
  uStack_30 = 0x140108cf9;
  func_0x000144fb0760(param_1 + 0x11);
  uStack_30 = 0x140108d02;
  func_0x000144fb0760(param_1 + 9);
  puVar1 = (undefined8 *)param_1[8];
  if (puVar1 != (undefined8 *)0x0) {
    uStack_30 = 0x140108d5b;
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = (undefined8 *)param_1[7];
  if (puVar1 != (undefined8 *)0x0) {
    uStack_30 = 0x140108d1e;
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = (undefined8 *)param_1[6];
  if (puVar1 != (undefined8 *)0x0) {
    uStack_30 = 0x140108d31;
    (**(code **)*puVar1)(puVar1,1);
  }
  uStack_30 = 0x140108d3a;
  func_0x000144fb0750(param_1[4]);
  *param_1 = &UNK_146209118;
  if (param_1[1] != 0) {
    auStack_80[0] = 0;
    FUN_140108550(param_1[1],auStack_80);
    FUN_144faf900(auStack_80);
    *(undefined8 **)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x880) = param_1;
  }
  return;
}

