// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140109a60  size: 333 bytes
// Name:    FUN_140109a60
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140769300
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140109a60(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong unaff_GS_OFFSET;
  undefined8 auStack_80 [8];
  undefined8 uStack_40;
  
  *param_1 = &UNK_1461fd2a8;
  puVar1 = (undefined8 *)param_1[0xe];
  if (puVar1 != (undefined8 *)0x0) {
    uStack_40 = 0x140109a86;
    (**(code **)*puVar1)(puVar1,1);
    param_1[0xe] = 0;
  }
  if (param_1[0xf] != 0) {
    uStack_40 = 0x140109ba0;
    func_0x000144d9c130();
    param_1[0xf] = 0;
  }
  puVar1 = (undefined8 *)param_1[0x13];
  if (puVar1 != (undefined8 *)0x0) {
    uStack_40 = 0x140109ab1;
    (**(code **)*puVar1)(puVar1,1);
    param_1[0x13] = 0;
  }
  puVar1 = (undefined8 *)param_1[0x10];
  if (puVar1 != (undefined8 *)0x0) {
    uStack_40 = 0x140109ad2;
    (**(code **)*puVar1)(puVar1,1);
    param_1[0x10] = 0;
  }
  puVar1 = (undefined8 *)param_1[0x11];
  if (puVar1 != (undefined8 *)0x0) {
    uStack_40 = 0x140109af3;
    (**(code **)*puVar1)(puVar1,1);
    param_1[0x11] = 0;
  }
  lVar2 = param_1[0x14];
  if (lVar2 != 0) {
    uStack_40 = 0x140109b12;
    FUN_140769300(lVar2);
    uStack_40 = 0x140109b1f;
    func_0x000144d9c130(lVar2,0x60);
    param_1[0x14] = 0;
  }
  if (param_1[0x15] != 0) {
    uStack_40 = 0x140109b3b;
    func_0x000144d9c130();
    param_1[0x15] = 0;
  }
  if (param_1[0x16] != 0) {
    uStack_40 = 0x140109b57;
    func_0x000144d9c130();
    param_1[0x16] = 0;
  }
  if (param_1[0x1c] != 0) {
    uStack_40 = 0x140109b78;
    func_0x000144d9c130(param_1[0x1c],0x30);
    param_1[0x1c] = 0;
  }
  *param_1 = &UNK_146209118;
  if (param_1[1] != 0) {
    auStack_80[0] = 0;
    FUN_140108550(param_1[1],auStack_80);
    FUN_144faf900(auStack_80);
    *(undefined8 **)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x880) = param_1;
  }
  return;
}

