// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401a3710  size: 6558 bytes
// Name:    FUN_1401a3710
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140134d70, FUN_1401a51d0, FUN_144feae70, FUN_1401a51b0, FUN_144e6cf90, FUN_1401a5220, FUN_1400095a0, FUN_1401a5190, FUN_1401a5150, FUN_1401a5170
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401a3710(longlong *param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,longlong param_6,longlong param_7,undefined8 param_8)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined4 uStack_20;
  undefined2 uStack_1c;
  
  if (*param_1 == 0) {
    uStack_1c = *(undefined2 *)(param_2 + 0x1c);
    uStack_20 = *(undefined4 *)(param_2 + 0x18);
    (*(code *)param_1[1])
              (*(undefined8 *)(param_2 + 8),&uStack_20,
               CONCAT62((int6)((ulonglong)&uStack_20 >> 0x10),1),1);
  }
  else {
    uStack_1c = *(undefined2 *)(param_2 + 0x1c);
    uStack_20 = *(undefined4 *)(param_2 + 0x18);
    (*(code *)param_1[1])();
  }
  if (*param_1 == 0) {
    uStack_1c = *(undefined2 *)(param_3 + 0x1c);
    uStack_20 = *(undefined4 *)(param_3 + 0x18);
    (*(code *)param_1[1])(*(undefined8 *)(param_3 + 8),&uStack_20,1,1);
  }
  else {
    uStack_1c = *(undefined2 *)(param_3 + 0x1c);
    uStack_20 = *(undefined4 *)(param_3 + 0x18);
    (*(code *)param_1[1])();
  }
  if (*param_1 == 0) {
    uStack_1c = *(undefined2 *)(param_4 + 0x1c);
    uStack_20 = *(undefined4 *)(param_4 + 0x18);
    (*(code *)param_1[1])(*(undefined8 *)(param_4 + 8),&uStack_20,1,1);
  }
  else {
    uStack_1c = *(undefined2 *)(param_4 + 0x1c);
    uStack_20 = *(undefined4 *)(param_4 + 0x18);
    (*(code *)param_1[1])();
  }
  if (*param_1 == 0) {
    uStack_1c = *(undefined2 *)(param_5 + 0x1c);
    uStack_20 = *(undefined4 *)(param_5 + 0x18);
    (*(code *)param_1[1])(*(undefined8 *)(param_5 + 8),&uStack_20,1,1);
  }
  else {
    uStack_1c = *(undefined2 *)(param_5 + 0x1c);
    uStack_20 = *(undefined4 *)(param_5 + 0x18);
    (*(code *)param_1[1])();
  }
  if (*param_1 == 0) {
    uStack_1c = *(undefined2 *)(param_6 + 0x1c);
    uStack_20 = *(undefined4 *)(param_6 + 0x18);
    (*(code *)param_1[1])(*(undefined8 *)(param_6 + 8),&uStack_20,1,1);
  }
  else {
    uStack_1c = *(undefined2 *)(param_6 + 0x1c);
    uStack_20 = *(undefined4 *)(param_6 + 0x18);
    (*(code *)param_1[1])();
  }
  if (*param_1 == 0) {
    uStack_1c = *(undefined2 *)(param_7 + 0x1c);
    uStack_20 = *(undefined4 *)(param_7 + 0x18);
    (*(code *)param_1[1])(*(undefined8 *)(param_7 + 8),&uStack_20,1,1);
  }
  else {
    uStack_1c = *(undefined2 *)(param_7 + 0x1c);
    uStack_20 = *(undefined4 *)(param_7 + 0x18);
    (*(code *)param_1[1])();
  }
  if (*param_1 == 0) {
    uStack_20 = 0xffffffff;
    uStack_1c = 0xffff;
    (*(code *)param_1[1])(param_8,&uStack_20,7,1);
  }
  else {
    uStack_20 = 0xffffffff;
    uStack_1c = 0xffff;
    (*(code *)param_1[1])();
  }
  uVar2 = FUN_144feae70();
  if (*param_1 == 0) {
    uStack_20 = 0xffffffff;
    uStack_1c = 0xffff;
    (*(code *)param_1[1])(uVar2,&uStack_20,1,1);
  }
  else {
    uStack_20 = 0xffffffff;
    uStack_1c = 0xffff;
    (*(code *)param_1[1])(*param_1,uVar2,&uStack_20,1,1);
  }
  uVar2 = func_0x0001450ccad0();
  if (*param_1 == 0) {
    uStack_20 = 0xffffffff;
    uStack_1c = 0xffff;
    (*(code *)param_1[1])(uVar2,&uStack_20,1,1);
  }
  else {
    uStack_20 = 0xffffffff;
    uStack_1c = 0xffff;
    (*(code *)param_1[1])(*param_1,uVar2,&uStack_20,1,1);
  }
  uVar2 = func_0x0001450ccaf0();
  if (*param_1 == 0) {
    uStack_20 = 0xffffffff;
    uStack_1c = 0xffff;
    (*(code *)param_1[1])(uVar2,&uStack_20,1,1);
  }
  else {
    uStack_20 = 0xffffffff;
    uStack_1c = 0xffff;
    (*(code *)param_1[1])(*param_1,uVar2,&uStack_20,1,1);
  }
  if (*param_1 == 0) {
    uStack_20 = 0xffffffff;
    uStack_1c = 0xffff;
    (*(code *)param_1[1])(0x147b9a168,&uStack_20,7,1);
  }
  else {
    uStack_20 = 0xffffffff;
    uStack_1c = 0xffff;
    (*(code *)param_1[1])(*param_1,0x147b9a168,&uStack_20,7,1);
  }
  puVar4 = (undefined4 *)(_DAT_147b99f50 + 0x18);
  if (*param_1 == 0) {
    uStack_1c = *(undefined2 *)(_DAT_147b99f50 + 0x1c);
    uStack_20 = *puVar4;
    (*(code *)param_1[1])
              (*(undefined8 *)(_DAT_147b99f50 + 8),&uStack_20,1,
               CONCAT71((int7)((ulonglong)puVar4 >> 8),1));
  }
  else {
    uStack_1c = *(undefined2 *)(_DAT_147b99f50 + 0x1c);
    uStack_20 = *puVar4;
    (*(code *)param_1[1])();
  }
  lVar3 = func_0x000145098370();
  if (*param_1 == 0) {
    uStack_1c = *(undefined2 *)(lVar3 + 0x1c);
    uStack_20 = *(undefined4 *)(lVar3 + 0x18);
    (*(code *)param_1[1])
              (*(undefined8 *)(lVar3 + 8),&uStack_20,
               CONCAT62((int6)((ulonglong)&uStack_20 >> 0x10),1),1);
  }
  else {
    uStack_1c = *(undefined2 *)(lVar3 + 0x1c);
    uStack_20 = *(undefined4 *)(lVar3 + 0x18);
    (*(code *)param_1[1])();
  }
  lVar3 = func_0x000144e6b070();
  if (*param_1 == 0) {
    uStack_1c = *(undefined2 *)(lVar3 + 0x1c);
    uStack_20 = *(undefined4 *)(lVar3 + 0x18);
    (*(code *)param_1[1])
              (*(undefined8 *)(lVar3 + 8),&uStack_20,
               CONCAT62((int6)((ulonglong)&uStack_20 >> 0x10),1),1);
  }
  else {
    uStack_1c = *(undefined2 *)(lVar3 + 0x1c);
    uStack_20 = *(undefined4 *)(lVar3 + 0x18);
    (*(code *)param_1[1])();
  }
  puVar4 = (undefined4 *)(_DAT_148d7a9a8 + 0x18);
  if (*param_1 == 0) {
    uStack_1c = *(undefined2 *)(_DAT_148d7a9a8 + 0x1c);
    uStack_20 = *puVar4;
    (*(code *)param_1[1])
              (*(undefined8 *)(_DAT_148d7a9a8 + 8),&uStack_20,1,
               CONCAT71((int7)((ulonglong)puVar4 >> 8),1));
  }
  else {
    uStack_1c = *(undefined2 *)(_DAT_148d7a9a8 + 0x1c);
    uStack_20 = *puVar4;
    (*(code *)param_1[1])();
  }
  lVar3 = func_0x0001452b8c10();
  if (*param_1 == 0) {
    uStack_20 = 0xffffffff;
    uStack_1c = 0xffff;
    (*(code *)param_1[1])(*(undefined8 *)(lVar3 + 8),&uStack_20,1,1);
  }
  else {
    uStack_20 = 0xffffffff;
    uStack_1c = 0xffff;
    (*(code *)param_1[1])();
  }
  lVar3 = FUN_1401a5190();
  if (*param_1 == 0) {
    uStack_1c = *(undefined2 *)(lVar3 + 0x1c);
    uStack_20 = *(undefined4 *)(lVar3 + 0x18);
    (*(code *)param_1[1])
              (*(undefined8 *)(lVar3 + 8),&uStack_20,
               CONCAT62((int6)((ulonglong)&uStack_20 >> 0x10),1),1);
  }
  else {
    uStack_1c = *(undefined2 *)(lVar3 + 0x1c);
    uStack_20 = *(undefined4 *)(lVar3 + 0x18);
    (*(code *)param_1[1])();
  }
  lVar3 = func_0x0001401a50c0();
  if (*param_1 == 0) {
    uStack_1c = *(undefined2 *)(lVar3 + 0x1c);
    uStack_20 = *(undefined4 *)(lVar3 + 0x18);
    (*(code *)param_1[1])
              (*(undefined8 *)(lVar3 + 8),&uStack_20,
               CONCAT62((int6)((ulonglong)&uStack_20 >> 0x10),1),1);
  }
  else {
    uStack_1c = *(undefined2 *)(lVar3 + 0x1c);
    uStack_20 = *(undefined4 *)(lVar3 + 0x18);
    (*(code *)param_1[1])();
  }
  uVar2 = func_0x0001401a50d0();
  if (*param_1 == 0) {
    uStack_20 = 0xffffffff;
    uStack_1c = 0xffff;
    (*(code *)param_1[1])(uVar2,&uStack_20,1,1);
  }
  else {
    uStack_20 = 0xffffffff;
    uStack_1c = 0xffff;
    (*(code *)param_1[1])(*param_1,uVar2,&uStack_20,1,1);
  }
  lVar3 = func_0x0001401a50e0();
  lVar3 = *(longlong *)(lVar3 + 0x28);
  puVar4 = (undefined4 *)(lVar3 + 0x12);
  if (*param_1 == 0) {
    uStack_1c = *(undefined2 *)(lVar3 + 0x16);
    uStack_20 = *puVar4;
    (*(code *)param_1[1])
              (*(undefined8 *)(lVar3 + 8),&uStack_20,1,CONCAT71((int7)((ulonglong)puVar4 >> 8),1));
  }
  else {
    uStack_1c = *(undefined2 *)(lVar3 + 0x16);
    uStack_20 = *puVar4;
    (*(code *)param_1[1])();
  }
  uVar2 = func_0x0001401a50f0();
  if (*param_1 == 0) {
    uStack_20 = 0xffffffff;
    uStack_1c = 0xffff;
    (*(code *)param_1[1])(uVar2,&uStack_20,6,1);
  }
  else {
    uStack_20 = 0xffffffff;
    uStack_1c = 0xffff;
    (*(code *)param_1[1])(*param_1,uVar2,&uStack_20,6,1);
  }
  if (*param_1 == 0) {
    uStack_1c = *(undefined2 *)(_DAT_147b9a060 + 0x1c);
    uStack_20 = *(undefined4 *)(_DAT_147b9a060 + 0x18);
    (*(code *)param_1[1])(*(undefined8 *)(_DAT_147b9a060 + 8),&uStack_20,5,0);
  }
  else {
    uStack_1c = *(undefined2 *)(_DAT_147b9a060 + 0x1c);
    uStack_20 = *(undefined4 *)(_DAT_147b9a060 + 0x18);
    (*(code *)param_1[1])();
  }
  if (*param_1 == 0) {
    uStack_1c = *(undefined2 *)(_DAT_147b9a070 + 0x1c);
    uStack_20 = *(undefined4 *)(_DAT_147b9a070 + 0x18);
    (*(code *)param_1[1])(*(undefined8 *)(_DAT_147b9a070 + 8),&uStack_20,5,0);
  }
  else {
    uStack_1c = *(undefined2 *)(_DAT_147b9a070 + 0x1c);
    uStack_20 = *(undefined4 *)(_DAT_147b9a070 + 0x18);
    (*(code *)param_1[1])();
  }
  uVar2 = func_0x000140689160();
  if (*param_1 == 0) {
    uStack_20 = 0xffffffff;
    uStack_1c = 0xffff;
    (*(code *)param_1[1])(uVar2,&uStack_20,1,0);
  }
  else {
    uStack_20 = 0xffffffff;
    uStack_1c = 0xffff;
    (*(code *)param_1[1])(*param_1,uVar2,&uStack_20,1,0);
  }
  uVar1 = FUN_144e6cf90(0x147b9a098);
  if (*param_1 == 0) {
    uStack_20 = 0xffffffff;
    uStack_1c = 0xffff;
    (*(code *)param_1[1])(*(undefined8 *)((ulonglong)uVar1 * 8 + 0x147b9a098),&uStack_20,1,0);
  }
  else {
    uStack_20 = 0xffffffff;
    uStack_1c = 0xffff;
    (*(code *)param_1[1])();
  }
  if (*param_1 == 0) {
    uStack_1c = *(undefined2 *)(_DAT_147b9a080 + 0x1c);
    uStack_20 = *(undefined4 *)(_DAT_147b9a080 + 0x18);
    (*(code *)param_1[1])(*(undefined8 *)(_DAT_147b9a080 + 8),&uStack_20,5,0);
  }
  else {
    uStack_1c = *(undefined2 *)(_DAT_147b9a080 + 0x1c);
    uStack_20 = *(undefined4 *)(_DAT_147b9a080 + 0x18);
    (*(code *)param_1[1])();
  }
  lVar3 = func_0x0001401a50b0();
  if (*param_1 == 0) {
    uStack_1c = *(undefined2 *)(lVar3 + 0x1c);
    uStack_20 = *(undefined4 *)(lVar3 + 0x18);
    (*(code *)param_1[1])
              (*(undefined8 *)(lVar3 + 8),&uStack_20,
               CONCAT62((int6)((ulonglong)&uStack_20 >> 0x10),1),1);
  }
  else {
    uStack_1c = *(undefined2 *)(lVar3 + 0x1c);
    uStack_20 = *(undefined4 *)(lVar3 + 0x18);
    (*(code *)param_1[1])();
  }
  if (*param_1 == 0) {
    uStack_20 = 0xffffffff;
    uStack_1c = 0xffff;
    (*(code *)param_1[1])(_DAT_148fdc540,&uStack_20,1,1);
  }
  else {
    uStack_20 = 0xffffffff;
    uStack_1c = 0xffff;
    (*(code *)param_1[1])();
  }
  lVar3 = *(longlong *)(_DAT_148d41eb8 + 0x28);
  puVar4 = (undefined4 *)(lVar3 + 0x12);
  if (*param_1 == 0) {
    uStack_1c = *(undefined2 *)(lVar3 + 0x16);
    uStack_20 = *puVar4;
    (*(code *)param_1[1])
              (*(undefined8 *)(lVar3 + 8),&uStack_20,1,CONCAT71((int7)((ulonglong)puVar4 >> 8),1));
  }
  else {
    uStack_1c = *(undefined2 *)(lVar3 + 0x16);
    uStack_20 = *puVar4;
    (*(code *)param_1[1])();
  }
  lVar3 = *(longlong *)(*(longlong *)(_DAT_148fdc548 + 8) + 0x28);
  puVar4 = (undefined4 *)(lVar3 + 0x12);
  if (*param_1 == 0) {
    uStack_1c = *(undefined2 *)(lVar3 + 0x16);
    uStack_20 = *puVar4;
    (*(code *)param_1[1])
              (*(undefined8 *)(lVar3 + 8),&uStack_20,1,CONCAT71((int7)((ulonglong)puVar4 >> 8),1));
  }
  else {
    uStack_1c = *(undefined2 *)(lVar3 + 0x16);
    uStack_20 = *puVar4;
    (*(code *)param_1[1])();
  }
  lVar3 = *(longlong *)(_DAT_148fdc538 + 0x28);
  puVar4 = (undefined4 *)(lVar3 + 0x12);
  if (*param_1 == 0) {
    uStack_1c = *(undefined2 *)(lVar3 + 0x16);
    uStack_20 = *puVar4;
    (*(code *)param_1[1])
              (*(undefined8 *)(lVar3 + 8),&uStack_20,1,CONCAT71((int7)((ulonglong)puVar4 >> 8),1));
  }
  else {
    uStack_1c = *(undefined2 *)(lVar3 + 0x16);
    uStack_20 = *puVar4;
    (*(code *)param_1[1])();
  }
  lVar3 = _DAT_148fdc530;
  uVar1 = FUN_144e6cf90(_DAT_148fdc530);
  if (*param_1 == 0) {
    uStack_20 = 0xffffffff;
    uStack_1c = 0xffff;
    (*(code *)param_1[1])(*(undefined8 *)(lVar3 + (ulonglong)uVar1 * 8),&uStack_20,1,1);
  }
  else {
    uStack_20 = 0xffffffff;
    uStack_1c = 0xffff;
    (*(code *)param_1[1])();
  }
  if (*param_1 == 0) {
    uStack_20 = 0xffffffff;
    uStack_1c = 0xffff;
    (*(code *)param_1[1])(_DAT_148fdc528,&uStack_20,1,1);
  }
  else {
    uStack_20 = 0xffffffff;
    uStack_1c = 0xffff;
    (*(code *)param_1[1])();
  }
  if (*param_1 == 0) {
    uStack_1c = *(undefined2 *)(_DAT_147b99ff0 + 0x1c);
    uStack_20 = *(undefined4 *)(_DAT_147b99ff0 + 0x18);
    (*(code *)param_1[1])(*(undefined8 *)(_DAT_147b99ff0 + 8),&uStack_20,5,0);
  }
  else {
    uStack_1c = *(undefined2 *)(_DAT_147b99ff0 + 0x1c);
    uStack_20 = *(undefined4 *)(_DAT_147b99ff0 + 0x18);
    (*(code *)param_1[1])();
  }
  if (*param_1 == 0) {
    uStack_1c = *(undefined2 *)(_DAT_147b9a000 + 0x1c);
    uStack_20 = *(undefined4 *)(_DAT_147b9a000 + 0x18);
    (*(code *)param_1[1])(*(undefined8 *)(_DAT_147b9a000 + 8),&uStack_20,1,0);
  }
  else {
    uStack_1c = *(undefined2 *)(_DAT_147b9a000 + 0x1c);
    uStack_20 = *(undefined4 *)(_DAT_147b9a000 + 0x18);
    (*(code *)param_1[1])();
  }
  lVar3 = *(longlong *)((ulonglong)_DAT_147b99eb4 * 8 + 0x147b99fb0);
  if (*param_1 == 0) {
    uStack_1c = *(undefined2 *)(lVar3 + 0x1c);
    uStack_20 = *(undefined4 *)(lVar3 + 0x18);
    (*(code *)param_1[1])(*(undefined8 *)(lVar3 + 8),&uStack_20,5,0);
  }
  else {
    uStack_1c = *(undefined2 *)(lVar3 + 0x1c);
    uStack_20 = *(undefined4 *)(lVar3 + 0x18);
    (*(code *)param_1[1])();
  }
  lVar3 = *(longlong *)((ulonglong)((1 - _DAT_147b99eb4) * 8) + 0x147b99fb0);
  if (*param_1 == 0) {
    uStack_1c = *(undefined2 *)(lVar3 + 0x1c);
    uStack_20 = *(undefined4 *)(lVar3 + 0x18);
    (*(code *)param_1[1])(*(undefined8 *)(lVar3 + 8),&uStack_20,1,0);
  }
  else {
    uStack_1c = *(undefined2 *)(lVar3 + 0x1c);
    uStack_20 = *(undefined4 *)(lVar3 + 0x18);
    (*(code *)param_1[1])();
  }
  if (*param_1 == 0) {
    uStack_20 = 0xffffffff;
    uStack_1c = 0xffff;
    (*(code *)param_1[1])(_DAT_147b99fe0,&uStack_20,5,0);
  }
  else {
    uStack_20 = 0xffffffff;
    uStack_1c = 0xffff;
    (*(code *)param_1[1])();
  }
  if (*param_1 == 0) {
    uStack_20 = 0xffffffff;
    uStack_1c = 0xffff;
    (*(code *)param_1[1])(_DAT_147b99fd0,&uStack_20,5,0);
  }
  else {
    uStack_20 = 0xffffffff;
    uStack_1c = 0xffff;
    (*(code *)param_1[1])();
  }
  if (*param_1 == 0) {
    uStack_1c = *(undefined2 *)(_DAT_147b99ec0 + 0x1c);
    uStack_20 = *(undefined4 *)(_DAT_147b99ec0 + 0x18);
    (*(code *)param_1[1])(*(undefined8 *)(_DAT_147b99ec0 + 8),&uStack_20,5,0);
  }
  else {
    uStack_1c = *(undefined2 *)(_DAT_147b99ec0 + 0x1c);
    uStack_20 = *(undefined4 *)(_DAT_147b99ec0 + 0x18);
    (*(code *)param_1[1])();
  }
  if (*param_1 == 0) {
    uStack_1c = *(undefined2 *)(_DAT_147b99ef0 + 0x1c);
    uStack_20 = *(undefined4 *)(_DAT_147b99ef0 + 0x18);
    (*(code *)param_1[1])(*(undefined8 *)(_DAT_147b99ef0 + 8),&uStack_20,5,0);
  }
  else {
    uStack_1c = *(undefined2 *)(_DAT_147b99ef0 + 0x1c);
    uStack_20 = *(undefined4 *)(_DAT_147b99ef0 + 0x18);
    (*(code *)param_1[1])();
  }
  if (*param_1 == 0) {
    uStack_1c = *(undefined2 *)(_DAT_147b99f30 + 0x1c);
    uStack_20 = *(undefined4 *)(_DAT_147b99f30 + 0x18);
    (*(code *)param_1[1])(*(undefined8 *)(_DAT_147b99f30 + 8),&uStack_20,5,0);
  }
  else {
    uStack_1c = *(undefined2 *)(_DAT_147b99f30 + 0x1c);
    uStack_20 = *(undefined4 *)(_DAT_147b99f30 + 0x18);
    (*(code *)param_1[1])();
  }
  if (*param_1 == 0) {
    uStack_1c = *(undefined2 *)(_DAT_147b99f40 + 0x1c);
    uStack_20 = *(undefined4 *)(_DAT_147b99f40 + 0x18);
    (*(code *)param_1[1])(*(undefined8 *)(_DAT_147b99f40 + 8),&uStack_20,5,0);
  }
  else {
    uStack_1c = *(undefined2 *)(_DAT_147b99f40 + 0x1c);
    uStack_20 = *(undefined4 *)(_DAT_147b99f40 + 0x18);
    (*(code *)param_1[1])();
  }
  lVar3 = *(longlong *)((ulonglong)_DAT_147b99eb4 * 8 + 0x147b99f10);
  if (*param_1 == 0) {
    uStack_1c = *(undefined2 *)(lVar3 + 0x16);
    uStack_20 = *(undefined4 *)(lVar3 + 0x12);
    (*(code *)param_1[1])(*(undefined8 *)(lVar3 + 8),&uStack_20,5,0);
  }
  else {
    uStack_1c = *(undefined2 *)(lVar3 + 0x16);
    uStack_20 = *(undefined4 *)(lVar3 + 0x12);
    (*(code *)param_1[1])();
  }
  lVar3 = *(longlong *)((ulonglong)((1 - _DAT_147b99eb4) * 8) + 0x147b99f20);
  if (*param_1 == 0) {
    uStack_1c = *(undefined2 *)(lVar3 + 0x16);
    uStack_20 = *(undefined4 *)(lVar3 + 0x12);
    (*(code *)param_1[1])(*(undefined8 *)(lVar3 + 8),&uStack_20,1,0);
  }
  else {
    uStack_1c = *(undefined2 *)(lVar3 + 0x16);
    uStack_20 = *(undefined4 *)(lVar3 + 0x12);
    (*(code *)param_1[1])();
  }
  if (*param_1 == 0) {
    uStack_1c = *(undefined2 *)(_DAT_147b99ee8 + 0x16);
    uStack_20 = *(undefined4 *)(_DAT_147b99ee8 + 0x12);
    (*(code *)param_1[1])(*(undefined8 *)(_DAT_147b99ee8 + 8),&uStack_20,5,0);
  }
  else {
    uStack_1c = *(undefined2 *)(_DAT_147b99ee8 + 0x16);
    uStack_20 = *(undefined4 *)(_DAT_147b99ee8 + 0x12);
    (*(code *)param_1[1])();
  }
  if (*param_1 == 0) {
    uStack_20 = 0xffffffff;
    uStack_1c = 0xffff;
    (*(code *)param_1[1])(_DAT_147b9a030,&uStack_20,5,0);
  }
  else {
    uStack_20 = 0xffffffff;
    uStack_1c = 0xffff;
    (*(code *)param_1[1])();
  }
  if (*param_1 == 0) {
    uStack_20 = 0xffffffff;
    uStack_1c = 0xffff;
    (*(code *)param_1[1])(_DAT_147b9a040,&uStack_20,5,0);
  }
  else {
    uStack_20 = 0xffffffff;
    uStack_1c = 0xffff;
    (*(code *)param_1[1])();
  }
  if (*param_1 == 0) {
    uStack_1c = *(undefined2 *)(_DAT_147b9a050 + 0x1c);
    uStack_20 = *(undefined4 *)(_DAT_147b9a050 + 0x18);
    (*(code *)param_1[1])(*(undefined8 *)(_DAT_147b9a050 + 8),&uStack_20,5,0);
  }
  else {
    uStack_1c = *(undefined2 *)(_DAT_147b9a050 + 0x1c);
    uStack_20 = *(undefined4 *)(_DAT_147b9a050 + 0x18);
    (*(code *)param_1[1])();
  }
  if (*param_1 == 0) {
    uStack_20 = 0xffffffff;
    uStack_1c = 0xffff;
    (*(code *)param_1[1])(_DAT_147b9a010,&uStack_20,5,0);
  }
  else {
    uStack_20 = 0xffffffff;
    uStack_1c = 0xffff;
    (*(code *)param_1[1])();
  }
  if (*param_1 == 0) {
    uStack_20 = 0xffffffff;
    uStack_1c = 0xffff;
    (*(code *)param_1[1])(_DAT_147b9a020,&uStack_20,5,0);
  }
  else {
    uStack_20 = 0xffffffff;
    uStack_1c = 0xffff;
    (*(code *)param_1[1])();
  }
  uVar2 = FUN_1401a51b0();
  if (*param_1 == 0) {
    uStack_20 = 0xffffffff;
    uStack_1c = 0xffff;
    (*(code *)param_1[1])(uVar2,&uStack_20,1,1);
  }
  else {
    uStack_20 = 0xffffffff;
    uStack_1c = 0xffff;
    (*(code *)param_1[1])(*param_1,uVar2,&uStack_20,1,1);
  }
  uVar2 = func_0x000144dbcdb0();
  if (*param_1 == 0) {
    uStack_20 = 0xffffffff;
    uStack_1c = 0xffff;
    (*(code *)param_1[1])(uVar2,&uStack_20,1,1);
  }
  else {
    uStack_20 = 0xffffffff;
    uStack_1c = 0xffff;
    (*(code *)param_1[1])(*param_1,uVar2,&uStack_20,1,1);
  }
  lVar3 = FUN_1400095a0(0);
  if (*param_1 == 0) {
    uStack_1c = *(undefined2 *)(lVar3 + 0x16);
    uStack_20 = *(undefined4 *)(lVar3 + 0x12);
    (*(code *)param_1[1])
              (*(undefined8 *)(lVar3 + 8),&uStack_20,
               CONCAT62((int6)((ulonglong)&uStack_20 >> 0x10),1),0);
  }
  else {
    uStack_1c = *(undefined2 *)(lVar3 + 0x16);
    uStack_20 = *(undefined4 *)(lVar3 + 0x12);
    (*(code *)param_1[1])();
  }
  uVar2 = FUN_1401a51d0();
  if (*param_1 == 0) {
    uStack_20 = 0xffffffff;
    uStack_1c = 0xffff;
    (*(code *)param_1[1])(uVar2,&uStack_20,7,1);
  }
  else {
    uStack_20 = 0xffffffff;
    uStack_1c = 0xffff;
    (*(code *)param_1[1])(*param_1,uVar2,&uStack_20,7,1);
  }
  uVar2 = func_0x0001401a5100(_DAT_148fdc570);
  if (*param_1 == 0) {
    uStack_20 = 0xffffffff;
    uStack_1c = 0xffff;
    (*(code *)param_1[1])(uVar2,&uStack_20,7,1);
  }
  else {
    uStack_20 = 0xffffffff;
    uStack_1c = 0xffff;
    (*(code *)param_1[1])(*param_1,uVar2,&uStack_20,7,1);
  }
  lVar3 = func_0x00014525c170(_DAT_148fdc570);
  if (*param_1 == 0) {
    uStack_1c = *(undefined2 *)(lVar3 + 0x16);
    uStack_20 = *(undefined4 *)(lVar3 + 0x12);
    (*(code *)param_1[1])
              (*(undefined8 *)(lVar3 + 8),&uStack_20,
               CONCAT62((int6)((ulonglong)&uStack_20 >> 0x10),1),0);
  }
  else {
    uStack_1c = *(undefined2 *)(lVar3 + 0x16);
    uStack_20 = *(undefined4 *)(lVar3 + 0x12);
    (*(code *)param_1[1])();
  }
  lVar3 = *(longlong *)(*(longlong *)(*(longlong *)(_DAT_148fdc570 + 0x2e8) + 8) + 0x28);
  puVar4 = (undefined4 *)(lVar3 + 0x12);
  if (*param_1 == 0) {
    uStack_1c = *(undefined2 *)(lVar3 + 0x16);
    uStack_20 = *puVar4;
    (*(code *)param_1[1])
              (*(undefined8 *)(lVar3 + 8),&uStack_20,1,CONCAT71((int7)((ulonglong)puVar4 >> 8),1));
  }
  else {
    uStack_1c = *(undefined2 *)(lVar3 + 0x16);
    uStack_20 = *puVar4;
    (*(code *)param_1[1])();
  }
  uVar2 = FUN_140134d70();
  if (*param_1 == 0) {
    uStack_20 = 0xffffffff;
    uStack_1c = 0xffff;
    (*(code *)param_1[1])(uVar2,&uStack_20,1,1);
  }
  else {
    uStack_20 = 0xffffffff;
    uStack_1c = 0xffff;
    (*(code *)param_1[1])(*param_1,uVar2,&uStack_20,1,1);
  }
  uVar2 = func_0x0001450cc3e0(0);
  if (*param_1 == 0) {
    uStack_20 = 0xffffffff;
    uStack_1c = 0xffff;
    (*(code *)param_1[1])(uVar2,&uStack_20,1,0);
  }
  else {
    uStack_20 = 0xffffffff;
    uStack_1c = 0xffff;
    (*(code *)param_1[1])(*param_1,uVar2,&uStack_20,1,0);
  }
  lVar3 = FUN_1401a5150();
  if (*param_1 == 0) {
    uStack_1c = *(undefined2 *)(lVar3 + 0x16);
    uStack_20 = *(undefined4 *)(lVar3 + 0x12);
    (*(code *)param_1[1])
              (*(undefined8 *)(lVar3 + 8),&uStack_20,
               CONCAT62((int6)((ulonglong)&uStack_20 >> 0x10),1),1);
  }
  else {
    uStack_1c = *(undefined2 *)(lVar3 + 0x16);
    uStack_20 = *(undefined4 *)(lVar3 + 0x12);
    (*(code *)param_1[1])();
  }
  lVar3 = FUN_1401a5170();
  if (*param_1 == 0) {
    uStack_1c = *(undefined2 *)(lVar3 + 0x16);
    uStack_20 = *(undefined4 *)(lVar3 + 0x12);
    (*(code *)param_1[1])
              (*(undefined8 *)(lVar3 + 8),&uStack_20,
               CONCAT62((int6)((ulonglong)&uStack_20 >> 0x10),1),1);
  }
  else {
    uStack_1c = *(undefined2 *)(lVar3 + 0x16);
    uStack_20 = *(undefined4 *)(lVar3 + 0x12);
    (*(code *)param_1[1])();
  }
  FUN_1401a5220(param_1,0,0);
  lVar3 = func_0x0001401a5110();
  if (*param_1 == 0) {
    uStack_1c = *(undefined2 *)(lVar3 + 0x16);
    uStack_20 = *(undefined4 *)(lVar3 + 0x12);
    (*(code *)param_1[1])
              (*(undefined8 *)(lVar3 + 8),&uStack_20,
               CONCAT62((int6)((ulonglong)&uStack_20 >> 0x10),5),0);
  }
  else {
    uStack_1c = *(undefined2 *)(lVar3 + 0x16);
    uStack_20 = *(undefined4 *)(lVar3 + 0x12);
    (*(code *)param_1[1])();
  }
  lVar3 = func_0x0001401a5130();
  if (*param_1 == 0) {
    uStack_1c = *(undefined2 *)(lVar3 + 0x16);
    uStack_20 = *(undefined4 *)(lVar3 + 0x12);
    (*(code *)param_1[1])
              (*(undefined8 *)(lVar3 + 8),&uStack_20,
               CONCAT62((int6)((ulonglong)&uStack_20 >> 0x10),5),0);
  }
  else {
    uStack_1c = *(undefined2 *)(lVar3 + 0x16);
    uStack_20 = *(undefined4 *)(lVar3 + 0x12);
    (*(code *)param_1[1])();
  }
  return;
}

