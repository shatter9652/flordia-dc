// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401719b0  size: 851 bytes
// Name:    FUN_1401719b0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145028490, FUN_144f82240, FUN_14016e2f0, FUN_14016dc20, FUN_144ff9810, FUN_14016e290, FUN_14016e250
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1401719b0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined1 auStack_68 [16];
  undefined8 *puStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  undefined8 *puStack_30;
  
  cVar2 = FUN_145028490(*(undefined8 *)(param_1 + 0x328));
  if (cVar2 == '\0') {
    puVar4 = (undefined8 *)(param_1 + 0x328);
    cVar2 = func_0x000145281cb0(*(undefined1 *)(param_1 + 0x482));
    puVar3 = (undefined8 *)0x14abbd330;
    if (cVar2 != '\0') {
      puVar3 = (undefined8 *)0x14abbd338;
    }
    FUN_14016e290(*puVar3,auStack_68,param_3,param_3);
    FUN_14016e250(param_2,&puStack_30);
    func_0x000140acbf50(puVar4);
    if (puStack_30 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puStack_30 + 2);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puStack_30)();
      }
    }
    if (puStack_48 != (undefined8 *)0x0) {
      (**(code **)*puStack_48)();
    }
    if (puStack_50 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puStack_50 + 2);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puStack_50)();
      }
    }
    if (puStack_58 != (undefined8 *)0x0) {
      puVar3 = (undefined8 *)puStack_58[3];
      LOCK();
      piVar1 = (int *)(puStack_58 + 2);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puStack_58)();
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
    if ((ulonglong)(uint)auStack_68._0_4_ != 0) {
      lVar5 = 0;
      do {
        if (!SBORROW1('\0',*(char *)(auStack_68._8_8_ + lVar5))) {
          *(undefined1 *)(auStack_68._8_8_ + lVar5) = 0x80;
        }
        if (!SBORROW1('\0',*(char *)(auStack_68._8_8_ + 1 + lVar5))) {
          *(undefined1 *)(auStack_68._8_8_ + 1 + lVar5) = 0x80;
        }
        if (!SBORROW1('\0',*(char *)(auStack_68._8_8_ + 2 + lVar5))) {
          *(undefined1 *)(auStack_68._8_8_ + 2 + lVar5) = 0x80;
        }
        if (!SBORROW1('\0',*(char *)(auStack_68._8_8_ + 3 + lVar5))) {
          *(undefined1 *)(auStack_68._8_8_ + 3 + lVar5) = 0x80;
        }
        if (!SBORROW1('\0',*(char *)(auStack_68._8_8_ + 4 + lVar5))) {
          *(undefined1 *)(auStack_68._8_8_ + 4 + lVar5) = 0x80;
        }
        if (!SBORROW1('\0',*(char *)(auStack_68._8_8_ + 5 + lVar5))) {
          *(undefined1 *)(auStack_68._8_8_ + 5 + lVar5) = 0x80;
        }
        if (!SBORROW1('\0',*(char *)(auStack_68._8_8_ + 6 + lVar5))) {
          *(undefined1 *)(auStack_68._8_8_ + 6 + lVar5) = 0x80;
        }
        if (!SBORROW1('\0',*(char *)(auStack_68._8_8_ + 7 + lVar5))) {
          *(undefined1 *)(auStack_68._8_8_ + 7 + lVar5) = 0x80;
        }
        if (!SBORROW1('\0',*(char *)(auStack_68._8_8_ + 8 + lVar5))) {
          *(undefined1 *)(auStack_68._8_8_ + 8 + lVar5) = 0x80;
        }
        if (!SBORROW1('\0',*(char *)(auStack_68._8_8_ + 9 + lVar5))) {
          *(undefined1 *)(auStack_68._8_8_ + 9 + lVar5) = 0x80;
        }
        if (!SBORROW1('\0',*(char *)(auStack_68._8_8_ + 10 + lVar5))) {
          *(undefined1 *)(auStack_68._8_8_ + 10 + lVar5) = 0x80;
        }
        if (!SBORROW1('\0',*(char *)(auStack_68._8_8_ + 0xb + lVar5))) {
          *(undefined1 *)(auStack_68._8_8_ + 0xb + lVar5) = 0x80;
        }
        if (!SBORROW1('\0',*(char *)(auStack_68._8_8_ + 0xc + lVar5))) {
          *(undefined1 *)(auStack_68._8_8_ + 0xc + lVar5) = 0x80;
        }
        if (!SBORROW1('\0',*(char *)(auStack_68._8_8_ + 0xd + lVar5))) {
          *(undefined1 *)(auStack_68._8_8_ + 0xd + lVar5) = 0x80;
        }
        if (!SBORROW1('\0',*(char *)(auStack_68._8_8_ + 0xe + lVar5))) {
          *(undefined1 *)(auStack_68._8_8_ + 0xe + lVar5) = 0x80;
        }
        if (!SBORROW1('\0',*(char *)(auStack_68._8_8_ + 0xf + lVar5))) {
          *(undefined1 *)(auStack_68._8_8_ + 0xf + lVar5) = 0x80;
        }
        lVar5 = lVar5 + 0x50;
      } while ((ulonglong)(uint)auStack_68._0_4_ * 0x50 != lVar5);
    }
    auStack_68._4_4_ = 0;
    if (auStack_68._8_8_ != 0) {
      func_0x000144d9c130();
    }
    cVar2 = FUN_145028490(*puVar4);
    if (cVar2 != '\0') {
      FUN_14016e2f0(puVar4,0x733d19e3);
      FUN_14016dc20(puVar4,0xb72a0d99);
      auStack_68._0_12_ = ZEXT812(0);
      auStack_68._12_4_ = 0;
      FUN_144ff9810(param_4,0x2deefadd733d19e3,auStack_68,2);
      FUN_144f82240(param_4,0x2deefaddb72a0d99,0,2);
    }
  }
  return;
}

