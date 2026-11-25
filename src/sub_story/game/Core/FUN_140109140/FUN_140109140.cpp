// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140109140  size: 567 bytes
// Name:    FUN_140109140
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144fb0380, FUN_140109420, FUN_144faf870
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140109140(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  ushort uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong unaff_GS_OFFSET;
  undefined8 auStack_80 [6];
  undefined8 uStack_50;
  
  *param_1 = &UNK_1466d0f60;
  uVar3 = *(ushort *)(param_1 + 0x32);
  if (uVar3 != 0) {
    uVar4 = 0;
    do {
      puVar1 = *(undefined8 **)(param_1[0x31] + uVar4 * 8);
      if (puVar1 != (undefined8 *)0x0) {
        uStack_50 = 0x14010917e;
        (**(code **)*puVar1)(puVar1,1);
        uVar3 = *(ushort *)(param_1 + 0x32);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
  }
  *(undefined2 *)(param_1 + 0x32) = 0;
  if (param_1[0x37] != 0) {
    uStack_50 = 0x1401092b9;
    FUN_144fb0380();
    param_1[0x37] = 0;
  }
  param_1[0x7c] = 7;
  if ((*(short *)((longlong)param_1 + 0x3da) != 0) && (param_1[0x7a] != 0)) {
    uStack_50 = 0x140109323;
    func_0x000144d9c130();
  }
  if ((*(short *)((longlong)param_1 + 0x3ca) != 0) && (param_1[0x78] != 0)) {
    uStack_50 = 0x14010933d;
    func_0x000144d9c130();
  }
  uVar3 = *(ushort *)((longlong)param_1 + 0x3ba);
  if (uVar3 != 0) {
    lVar2 = param_1[0x76];
    lVar5 = 0;
    do {
      uStack_50 = 0x140109358;
      func_0x000144fb0750(*(undefined8 *)(lVar2 + lVar5));
      lVar5 = lVar5 + 0x20;
    } while ((ulonglong)uVar3 * 0x20 != lVar5);
    if (lVar2 != 0) {
      uStack_50 = 0x140109372;
      func_0x000144d9c130(lVar2);
    }
  }
  uStack_50 = 0x1401091ec;
  FUN_140109420(param_1 + 0x3c);
  uVar3 = *(ushort *)((longlong)param_1 + 0x1ca);
  if ((ulonglong)uVar3 != 0) {
    lVar2 = param_1[0x38];
    lVar5 = 0;
    do {
      if ((*(short *)(lVar2 + 0x4a + lVar5) != 0) && (*(longlong *)(lVar2 + 0x40 + lVar5) != 0)) {
        uStack_50 = 0x1401092ef;
        func_0x000144d9c130();
      }
      lVar5 = lVar5 + 0x58;
    } while ((ulonglong)uVar3 * 0x58 - lVar5 != 0);
    if (lVar2 != 0) {
      uStack_50 = 0x140109309;
      func_0x000144d9c130(lVar2);
    }
  }
  if ((*(short *)((longlong)param_1 + 0x192) != 0) && (param_1[0x31] != 0)) {
    uStack_50 = 0x140109217;
    func_0x000144d9c130();
  }
  uStack_50 = 0x140109223;
  func_0x000144fb0750(param_1[0x2f]);
  param_1[0x1f] = &UNK_1466d0b10;
  uStack_50 = 0x140109244;
  func_0x000144fb0750(param_1[0x2a]);
  param_1[0x1f] = &UNK_146209118;
  uStack_50 = 0x14010925a;
  FUN_144faf870(param_1 + 0x1f);
  param_1[0x11] = &UNK_1466d0b10;
  uStack_50 = 0x140109274;
  func_0x000144fb0750(param_1[0x1c]);
  param_1[0x11] = &UNK_146209118;
  uStack_50 = 0x140109283;
  FUN_144faf870(param_1 + 0x11);
  param_1[3] = &UNK_1466d0b10;
  uStack_50 = 0x140109294;
  func_0x000144fb0750(param_1[0xe]);
  param_1[3] = &UNK_146209118;
  uStack_50 = 0x1401092a0;
  FUN_144faf870(param_1 + 3);
  *param_1 = &UNK_146209118;
  if (param_1[1] != 0) {
    auStack_80[0] = 0;
    FUN_140108550(param_1[1],auStack_80);
    FUN_144faf900(auStack_80);
    *(undefined8 **)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x880) = param_1;
  }
  return;
}

