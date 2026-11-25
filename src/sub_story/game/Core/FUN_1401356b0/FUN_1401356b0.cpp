// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401356b0  size: 1423 bytes
// Name:    FUN_1401356b0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1450ce180, FUN_1450ce1d0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1401356b0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 uStack_1c;
  undefined2 uStack_18;
  undefined4 uStack_16;
  undefined2 uStack_12;
  
  if (*param_2 == 0) {
    uStack_1c = 0xffffffff;
    uStack_18 = 0xffff;
    (*(code *)param_2[1])(*(undefined8 *)(param_1 + 0x120),&uStack_1c,6,0);
  }
  else {
    uStack_1c = 0xffffffff;
    uStack_18 = 0xffff;
    (*(code *)param_2[1])();
  }
  lVar1 = *(longlong *)(param_1 + 0xa8);
  if (*param_2 == 0) {
    uStack_18 = *(undefined2 *)(lVar1 + 0x1c);
    uStack_1c = *(undefined4 *)(lVar1 + 0x18);
    (*(code *)param_2[1])(*(undefined8 *)(lVar1 + 8),&uStack_1c,5,0);
  }
  else {
    uStack_18 = *(undefined2 *)(lVar1 + 0x1c);
    uStack_1c = *(undefined4 *)(lVar1 + 0x18);
    (*(code *)param_2[1])();
  }
  if (*param_2 == 0) {
    uStack_1c = 0xffffffff;
    uStack_18 = 0xffff;
    (*(code *)param_2[1])(*(undefined8 *)(param_1 + 0x100),&uStack_1c,1,0);
  }
  else {
    uStack_1c = 0xffffffff;
    uStack_18 = 0xffff;
    (*(code *)param_2[1])();
  }
  if (*param_2 == 0) {
    uStack_16 = 0xffffffff;
    uStack_12 = 0xffff;
    (*(code *)param_2[1])(*(undefined8 *)(param_1 + 0x40),&uStack_16,1,1);
  }
  else {
    uStack_1c = 0xffffffff;
    uStack_18 = 0xffff;
    (*(code *)param_2[1])();
  }
  if (*param_2 == 0) {
    uStack_16 = 0xffffffff;
    uStack_12 = 0xffff;
    (*(code *)param_2[1])(*(undefined8 *)(param_1 + 0x70),&uStack_16,1,1);
  }
  else {
    uStack_1c = 0xffffffff;
    uStack_18 = 0xffff;
    (*(code *)param_2[1])();
  }
  if (*param_2 == 0) {
    uStack_16 = 0xffffffff;
    uStack_12 = 0xffff;
    (*(code *)param_2[1])(*(undefined8 *)(param_1 + 0x48),&uStack_16,1,1);
  }
  else {
    uStack_1c = 0xffffffff;
    uStack_18 = 0xffff;
    (*(code *)param_2[1])();
  }
  if (*param_2 == 0) {
    uStack_16 = 0xffffffff;
    uStack_12 = 0xffff;
    (*(code *)param_2[1])(*(undefined8 *)(param_1 + 0x78),&uStack_16,1,1);
  }
  else {
    uStack_1c = 0xffffffff;
    uStack_18 = 0xffff;
    (*(code *)param_2[1])();
  }
  if (*param_2 == 0) {
    uStack_16 = 0xffffffff;
    uStack_12 = 0xffff;
    (*(code *)param_2[1])(*(undefined8 *)(param_1 + 0x50),&uStack_16,1,1);
  }
  else {
    uStack_1c = 0xffffffff;
    uStack_18 = 0xffff;
    (*(code *)param_2[1])();
  }
  if (*param_2 == 0) {
    uStack_16 = 0xffffffff;
    uStack_12 = 0xffff;
    (*(code *)param_2[1])(*(undefined8 *)(param_1 + 0x80),&uStack_16,1,1);
  }
  else {
    uStack_1c = 0xffffffff;
    uStack_18 = 0xffff;
    (*(code *)param_2[1])();
  }
  if (*param_2 == 0) {
    uStack_1c = 0xffffffff;
    uStack_18 = 0xffff;
    (*(code *)param_2[1])(*(undefined8 *)(param_1 + 0xc0),&uStack_1c,2,0);
  }
  else {
    uStack_1c = 0xffffffff;
    uStack_18 = 0xffff;
    (*(code *)param_2[1])();
  }
  if (*param_2 == 0) {
    uStack_1c = 0xffffffff;
    uStack_18 = 0xffff;
    (*(code *)param_2[1])(*(undefined8 *)(param_1 + 0xd0),&uStack_1c,1,0);
  }
  else {
    uStack_1c = 0xffffffff;
    uStack_18 = 0xffff;
    (*(code *)param_2[1])();
  }
  if (*param_2 == 0) {
    uStack_1c = 0xffffffff;
    uStack_18 = 0xffff;
    (*(code *)param_2[1])(*(undefined8 *)(param_1 + 0xe0),&uStack_1c,1,0);
  }
  else {
    uStack_1c = 0xffffffff;
    uStack_18 = 0xffff;
    (*(code *)param_2[1])();
  }
  uVar2 = FUN_1450ce180();
  if (*param_2 == 0) {
    uStack_1c = 0xffffffff;
    uStack_18 = 0xffff;
    (*(code *)param_2[1])(uVar2,&uStack_1c,1,1);
  }
  else {
    uStack_1c = 0xffffffff;
    uStack_18 = 0xffff;
    (*(code *)param_2[1])(*param_2,uVar2,&uStack_1c,1,1);
  }
  uVar2 = FUN_1450ce1d0();
  if (*param_2 == 0) {
    uStack_1c = 0xffffffff;
    uStack_18 = 0xffff;
    (*(code *)param_2[1])(uVar2,&uStack_1c,1,1);
  }
  else {
    uStack_1c = 0xffffffff;
    uStack_18 = 0xffff;
    (*(code *)param_2[1])(*param_2,uVar2,&uStack_1c,1,1);
  }
  uVar2 = func_0x0001450d16f0(0);
  if (*param_2 == 0) {
    uStack_1c = 0xffffffff;
    uStack_18 = 0xffff;
    (*(code *)param_2[1])(uVar2,&uStack_1c,1,1);
  }
  else {
    uStack_1c = 0xffffffff;
    uStack_18 = 0xffff;
    (*(code *)param_2[1])(*param_2,uVar2,&uStack_1c,1,1);
  }
  return;
}

