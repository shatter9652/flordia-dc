// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140135120  size: 1418 bytes
// Name:    FUN_140135120
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e6cf90, FUN_144f244b0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140135120(longlong *param_1)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uStack_28;
  undefined2 uStack_24;
  
  lVar1 = *(longlong *)(((ulonglong)_DAT_14a92d658 ^ 1) * 8 + 0x14a9253e8);
  if (*param_1 == 0) {
    uStack_24 = *(undefined2 *)(lVar1 + 0x16);
    uStack_28 = *(undefined4 *)(lVar1 + 0x12);
    (*(code *)param_1[1])(*(undefined8 *)(lVar1 + 8),&uStack_28,5,0);
  }
  else {
    uStack_24 = *(undefined2 *)(lVar1 + 0x16);
    uStack_28 = *(undefined4 *)(lVar1 + 0x12);
    (*(code *)param_1[1])();
  }
  if (*param_1 == 0) {
    uStack_24 = *(undefined2 *)(_DAT_14a925400 + 0x16);
    uStack_28 = *(undefined4 *)(_DAT_14a925400 + 0x12);
    (*(code *)param_1[1])(*(undefined8 *)(_DAT_14a925400 + 8),&uStack_28,5,0);
  }
  else {
    uStack_24 = *(undefined2 *)(_DAT_14a925400 + 0x16);
    uStack_28 = *(undefined4 *)(_DAT_14a925400 + 0x12);
    (*(code *)param_1[1])();
  }
  if (*param_1 == 0) {
    uStack_24 = *(undefined2 *)(_DAT_14a92d4f8 + 0x16);
    uStack_28 = *(undefined4 *)(_DAT_14a92d4f8 + 0x12);
    (*(code *)param_1[1])(*(undefined8 *)(_DAT_14a92d4f8 + 8),&uStack_28,5,0);
  }
  else {
    uStack_24 = *(undefined2 *)(_DAT_14a92d4f8 + 0x16);
    uStack_28 = *(undefined4 *)(_DAT_14a92d4f8 + 0x12);
    (*(code *)param_1[1])();
  }
  if (*param_1 == 0) {
    uStack_24 = *(undefined2 *)(_DAT_14a92d4e8 + 0x16);
    uStack_28 = *(undefined4 *)(_DAT_14a92d4e8 + 0x12);
    (*(code *)param_1[1])(*(undefined8 *)(_DAT_14a92d4e8 + 8),&uStack_28,5,0);
  }
  else {
    uStack_24 = *(undefined2 *)(_DAT_14a92d4e8 + 0x16);
    uStack_28 = *(undefined4 *)(_DAT_14a92d4e8 + 0x12);
    (*(code *)param_1[1])();
  }
  if (*param_1 == 0) {
    uStack_24 = *(undefined2 *)(_DAT_14a925410 + 0x16);
    uStack_28 = *(undefined4 *)(_DAT_14a925410 + 0x12);
    (*(code *)param_1[1])(*(undefined8 *)(_DAT_14a925410 + 8),&uStack_28,5,0);
  }
  else {
    uStack_24 = *(undefined2 *)(_DAT_14a925410 + 0x16);
    uStack_28 = *(undefined4 *)(_DAT_14a925410 + 0x12);
    (*(code *)param_1[1])();
  }
  if (*param_1 == 0) {
    uStack_24 = *(undefined2 *)(_DAT_14a92d4d8 + 0x16);
    uStack_28 = *(undefined4 *)(_DAT_14a92d4d8 + 0x12);
    (*(code *)param_1[1])(*(undefined8 *)(_DAT_14a92d4d8 + 8),&uStack_28,5,0);
  }
  else {
    uStack_24 = *(undefined2 *)(_DAT_14a92d4d8 + 0x16);
    uStack_28 = *(undefined4 *)(_DAT_14a92d4d8 + 0x12);
    (*(code *)param_1[1])();
  }
  lVar1 = _DAT_14a92d460;
  uVar2 = FUN_144e6cf90(_DAT_14a92d460);
  if (*param_1 == 0) {
    uStack_28 = 0xffffffff;
    uStack_24 = 0xffff;
    (*(code *)param_1[1])(*(undefined8 *)(lVar1 + (ulonglong)uVar2 * 8),&uStack_28,1,0);
  }
  else {
    uStack_28 = 0xffffffff;
    uStack_24 = 0xffff;
    (*(code *)param_1[1])();
  }
  lVar1 = _DAT_14a925418;
  uVar2 = *(uint *)(_DAT_14a925418 + 0x50);
  uVar3 = uVar2;
  if (((int)uVar2 < 0) && (((_DAT_14a9437ac << 4 ^ uVar2) & 0x7ffffff0) != 0)) {
    uVar3 = FUN_144f244b0(*(undefined4 *)(_DAT_14a925418 + 0x54),uVar2 + 1 & 0xf);
    LOCK();
    if (uVar2 == *(uint *)(lVar1 + 0x50)) {
      *(uint *)(lVar1 + 0x50) = uVar3;
    }
    UNLOCK();
  }
  uVar2 = FUN_144f244b0(*(undefined4 *)(lVar1 + 0x54),uVar3 & 0xf);
  lVar1 = *(longlong *)(lVar1 + 0x58 + (ulonglong)uVar2 * 8);
  if (*param_1 == 0) {
    uStack_24 = *(undefined2 *)(lVar1 + 0x16);
    uStack_28 = *(undefined4 *)(lVar1 + 0x12);
    (*(code *)param_1[1])(*(undefined8 *)(lVar1 + 8),&uStack_28,5,0);
  }
  else {
    uStack_24 = *(undefined2 *)(lVar1 + 0x16);
    uStack_28 = *(undefined4 *)(lVar1 + 0x12);
    (*(code *)param_1[1])();
  }
  lVar1 = *(longlong *)(((ulonglong)_DAT_14a92d658 ^ 1) * 8 + 0x14a9253a8);
  if (*param_1 == 0) {
    uStack_24 = *(undefined2 *)(lVar1 + 0x16);
    uStack_28 = *(undefined4 *)(lVar1 + 0x12);
    (*(code *)param_1[1])(*(undefined8 *)(lVar1 + 8),&uStack_28,5,0);
  }
  else {
    uStack_24 = *(undefined2 *)(lVar1 + 0x16);
    uStack_28 = *(undefined4 *)(lVar1 + 0x12);
    (*(code *)param_1[1])();
  }
  if (*param_1 == 0) {
    uStack_24 = *(undefined2 *)(_DAT_14a9253c0 + 0x16);
    uStack_28 = *(undefined4 *)(_DAT_14a9253c0 + 0x12);
    (*(code *)param_1[1])(*(undefined8 *)(_DAT_14a9253c0 + 8),&uStack_28,5,0);
  }
  else {
    uStack_24 = *(undefined2 *)(_DAT_14a9253c0 + 0x16);
    uStack_28 = *(undefined4 *)(_DAT_14a9253c0 + 0x12);
    (*(code *)param_1[1])();
  }
  lVar1 = *(longlong *)((ulonglong)_DAT_14a92d658 * 8 + 0x14a9253a8);
  if (*param_1 == 0) {
    uStack_24 = *(undefined2 *)(lVar1 + 0x16);
    uStack_28 = *(undefined4 *)(lVar1 + 0x12);
    (*(code *)param_1[1])(*(undefined8 *)(lVar1 + 8),&uStack_28,5,0);
  }
  else {
    uStack_24 = *(undefined2 *)(lVar1 + 0x16);
    uStack_28 = *(undefined4 *)(lVar1 + 0x12);
    (*(code *)param_1[1])();
  }
  lVar1 = *(longlong *)((ulonglong)_DAT_14a92d658 * 8 + 0x14a9253e8);
  if (*param_1 == 0) {
    uStack_24 = *(undefined2 *)(lVar1 + 0x16);
    uStack_28 = *(undefined4 *)(lVar1 + 0x12);
    (*(code *)param_1[1])(*(undefined8 *)(lVar1 + 8),&uStack_28,5,0);
  }
  else {
    uStack_24 = *(undefined2 *)(lVar1 + 0x16);
    uStack_28 = *(undefined4 *)(lVar1 + 0x12);
    (*(code *)param_1[1])();
  }
  return;
}

