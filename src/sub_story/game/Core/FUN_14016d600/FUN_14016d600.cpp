// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14016d600  size: 1558 bytes
// Name:    FUN_14016d600
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145028490, FUN_145029a10, FUN_144f82240, FUN_140acbc40, FUN_14016dd90, FUN_14016e2f0, FUN_14016dcf0, FUN_14016dc20, FUN_144ff9810, FUN_140acbc00, FUN_140279610, FUN_140279660
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14016d600(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  char cVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined1 auStack_78 [16];
  undefined8 *puStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  undefined8 *puStack_38;
  
  cVar4 = FUN_145029a10();
  if (cVar4 == '\0') {
    return;
  }
  cVar4 = FUN_145028490(*(undefined8 *)(param_1 + 0x330));
  if (cVar4 != '\0') {
    return;
  }
  puVar2 = (undefined8 *)(param_1 + 0x330);
  cVar4 = func_0x000145281cb0(*(undefined1 *)(param_1 + 0x482));
  if (cVar4 == '\0') {
    FUN_14016dd90(_DAT_14abbd358,auStack_78,param_3,param_3);
    FUN_14016dcf0(param_2,&puStack_38);
    func_0x000140acbf50(puVar2);
    if (puStack_38 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puStack_38 + 2);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puStack_38)();
      }
    }
    if (puStack_58 != (undefined8 *)0x0) {
      (**(code **)*puStack_58)();
    }
    if (puStack_60 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puStack_60 + 2);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puStack_60)();
      }
    }
    if (puStack_68 != (undefined8 *)0x0) {
      puVar3 = (undefined8 *)puStack_68[3];
      LOCK();
      piVar1 = (int *)(puStack_68 + 2);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puStack_68)();
      }
      if (puVar3 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar3 + 2);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar3)(puVar3);
        }
      }
    }
    lVar6 = auStack_78._8_8_;
    if ((ulonglong)(uint)auStack_78._0_4_ == 0) goto LAB_14016d7c1;
    lVar6 = 0;
    do {
      if (!SBORROW1('\0',*(char *)(auStack_78._8_8_ + lVar6))) {
        *(undefined1 *)(auStack_78._8_8_ + lVar6) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(auStack_78._8_8_ + 1 + lVar6))) {
        *(undefined1 *)(auStack_78._8_8_ + 1 + lVar6) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(auStack_78._8_8_ + 2 + lVar6))) {
        *(undefined1 *)(auStack_78._8_8_ + 2 + lVar6) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(auStack_78._8_8_ + 3 + lVar6))) {
        *(undefined1 *)(auStack_78._8_8_ + 3 + lVar6) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(auStack_78._8_8_ + 4 + lVar6))) {
        *(undefined1 *)(auStack_78._8_8_ + 4 + lVar6) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(auStack_78._8_8_ + 5 + lVar6))) {
        *(undefined1 *)(auStack_78._8_8_ + 5 + lVar6) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(auStack_78._8_8_ + 6 + lVar6))) {
        *(undefined1 *)(auStack_78._8_8_ + 6 + lVar6) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(auStack_78._8_8_ + 7 + lVar6))) {
        *(undefined1 *)(auStack_78._8_8_ + 7 + lVar6) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(auStack_78._8_8_ + 8 + lVar6))) {
        *(undefined1 *)(auStack_78._8_8_ + 8 + lVar6) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(auStack_78._8_8_ + 9 + lVar6))) {
        *(undefined1 *)(auStack_78._8_8_ + 9 + lVar6) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(auStack_78._8_8_ + 10 + lVar6))) {
        *(undefined1 *)(auStack_78._8_8_ + 10 + lVar6) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(auStack_78._8_8_ + 0xb + lVar6))) {
        *(undefined1 *)(auStack_78._8_8_ + 0xb + lVar6) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(auStack_78._8_8_ + 0xc + lVar6))) {
        *(undefined1 *)(auStack_78._8_8_ + 0xc + lVar6) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(auStack_78._8_8_ + 0xd + lVar6))) {
        *(undefined1 *)(auStack_78._8_8_ + 0xd + lVar6) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(auStack_78._8_8_ + 0xe + lVar6))) {
        *(undefined1 *)(auStack_78._8_8_ + 0xe + lVar6) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(auStack_78._8_8_ + 0xf + lVar6))) {
        *(undefined1 *)(auStack_78._8_8_ + 0xf + lVar6) = 0x80;
      }
      lVar6 = lVar6 + 0x50;
    } while ((ulonglong)(uint)auStack_78._0_4_ * 0x50 != lVar6);
  }
  else {
    FUN_14016dd90(_DAT_14abbd368,auStack_78,param_3,param_3);
    FUN_14016dcf0(param_2,&puStack_38);
    func_0x000140acbf50(puVar2);
    if (puStack_38 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puStack_38 + 2);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puStack_38)();
      }
    }
    if (puStack_58 != (undefined8 *)0x0) {
      (**(code **)*puStack_58)();
    }
    if (puStack_60 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puStack_60 + 2);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puStack_60)();
      }
    }
    if (puStack_68 != (undefined8 *)0x0) {
      puVar3 = (undefined8 *)puStack_68[3];
      LOCK();
      piVar1 = (int *)(puStack_68 + 2);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puStack_68)();
      }
      if (puVar3 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar3 + 2);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar3)(puVar3);
        }
      }
    }
    lVar6 = auStack_78._8_8_;
    if ((ulonglong)(uint)auStack_78._0_4_ == 0) goto LAB_14016d7c1;
    lVar6 = 0;
    do {
      if (!SBORROW1('\0',*(char *)(auStack_78._8_8_ + lVar6))) {
        *(undefined1 *)(auStack_78._8_8_ + lVar6) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(auStack_78._8_8_ + 1 + lVar6))) {
        *(undefined1 *)(auStack_78._8_8_ + 1 + lVar6) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(auStack_78._8_8_ + 2 + lVar6))) {
        *(undefined1 *)(auStack_78._8_8_ + 2 + lVar6) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(auStack_78._8_8_ + 3 + lVar6))) {
        *(undefined1 *)(auStack_78._8_8_ + 3 + lVar6) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(auStack_78._8_8_ + 4 + lVar6))) {
        *(undefined1 *)(auStack_78._8_8_ + 4 + lVar6) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(auStack_78._8_8_ + 5 + lVar6))) {
        *(undefined1 *)(auStack_78._8_8_ + 5 + lVar6) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(auStack_78._8_8_ + 6 + lVar6))) {
        *(undefined1 *)(auStack_78._8_8_ + 6 + lVar6) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(auStack_78._8_8_ + 7 + lVar6))) {
        *(undefined1 *)(auStack_78._8_8_ + 7 + lVar6) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(auStack_78._8_8_ + 8 + lVar6))) {
        *(undefined1 *)(auStack_78._8_8_ + 8 + lVar6) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(auStack_78._8_8_ + 9 + lVar6))) {
        *(undefined1 *)(auStack_78._8_8_ + 9 + lVar6) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(auStack_78._8_8_ + 10 + lVar6))) {
        *(undefined1 *)(auStack_78._8_8_ + 10 + lVar6) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(auStack_78._8_8_ + 0xb + lVar6))) {
        *(undefined1 *)(auStack_78._8_8_ + 0xb + lVar6) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(auStack_78._8_8_ + 0xc + lVar6))) {
        *(undefined1 *)(auStack_78._8_8_ + 0xc + lVar6) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(auStack_78._8_8_ + 0xd + lVar6))) {
        *(undefined1 *)(auStack_78._8_8_ + 0xd + lVar6) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(auStack_78._8_8_ + 0xe + lVar6))) {
        *(undefined1 *)(auStack_78._8_8_ + 0xe + lVar6) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(auStack_78._8_8_ + 0xf + lVar6))) {
        *(undefined1 *)(auStack_78._8_8_ + 0xf + lVar6) = 0x80;
      }
      lVar6 = lVar6 + 0x50;
    } while ((ulonglong)(uint)auStack_78._0_4_ * 0x50 != lVar6);
  }
  lVar6 = auStack_78._8_8_;
LAB_14016d7c1:
  auStack_78._4_4_ = 0;
  if (lVar6 != 0) {
    func_0x000144d9c130();
  }
  cVar4 = FUN_145028490(*puVar2);
  if (cVar4 != '\0') {
    FUN_14016e2f0(puVar2,0x825fd49b);
    FUN_14016dc20(puVar2,0x1330d64c);
    auStack_78._0_12_ = ZEXT812(0);
    auStack_78._12_4_ = 0;
    FUN_144ff9810(param_4,0x2deefadd825fd49b,auStack_78,2);
    FUN_144f82240(param_4,0x2deefadd1330d64c,0,2);
    cVar4 = func_0x00014546d4f0(param_1);
    if (cVar4 != '\0') {
      lVar6 = (ulonglong)(*(int *)(param_1 + 0x38c) - 1) * 8 + *(longlong *)(param_1 + 0x390);
      uVar5 = FUN_140279610(lVar6);
      FUN_140acbc00(puVar2,uVar5);
      uVar5 = FUN_140279660(lVar6);
      FUN_140acbc40(puVar2,uVar5);
    }
  }
  return;
}

