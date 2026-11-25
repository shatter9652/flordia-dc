// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140172580  size: 3503 bytes
// Name:    FUN_140172580
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145028490, FUN_1401735f0, FUN_14016e2f0, FUN_140173aa0, FUN_1401736a0, FUN_140173710, FUN_144f64ca0, FUN_14016dd30, FUN_1401737a0, FUN_144f82240, FUN_14016dc90, FUN_140173330, FUN_140173850, FUN_14016e200, FUN_14016dc20, FUN_144ff9810, FUN_140173450, FUN_14016e250, FUN_140173a20
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140172580(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar8;
  undefined1 auVar7 [64];
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  undefined1 auStack_148 [16];
  undefined8 *puStack_138;
  undefined8 *puStack_130;
  undefined8 *puStack_128;
  uint uStack_100;
  undefined4 uStack_fc;
  longlong lStack_f8;
  uint uStack_e8;
  undefined4 uStack_e4;
  longlong lStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 *puStack_b0;
  undefined1 auStack_a8 [16];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [16];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  cVar4 = FUN_145028490(*(undefined8 *)(param_1 + 0x340));
  if (cVar4 == '\0') {
    puVar2 = (undefined8 *)(param_1 + 0x340);
    cVar4 = func_0x000145281cb0(*(undefined1 *)(param_1 + 0x482));
    if (cVar4 == '\0') {
      FUN_140173450(auStack_148,0x13187d06);
      FUN_140173330(auStack_148,1,0);
      if (param_3 != 0) {
        FUN_1401735f0(auStack_148,param_3);
      }
      uStack_68 = _DAT_145fc6ee0;
      uStack_60 = _UNK_145fc6ee8;
      uVar6 = _DAT_145fc6ee0;
      uVar8 = _UNK_145fc6ee8;
      FUN_140173710(&puStack_150,0x275822c4,&uStack_68,0);
      uStack_78 = uVar6;
      uStack_70 = uVar8;
      FUN_1401736a0(&puStack_158,*(undefined4 *)(param_1 + 0x348));
      FUN_1401737a0(&uStack_e8,auStack_148,&puStack_158,0x216b0232,&puStack_150,0);
      FUN_14016dc90(param_2,&puStack_b0);
      func_0x000140acbf50(puVar2);
      if (puStack_b0 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puStack_b0 + 2);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puStack_b0)();
        }
      }
      if (puStack_c8 != (undefined8 *)0x0) {
        (**(code **)*puStack_c8)();
      }
      if (puStack_d0 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puStack_d0 + 2);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puStack_d0)();
        }
      }
      if (puStack_d8 != (undefined8 *)0x0) {
        puVar3 = (undefined8 *)puStack_d8[3];
        LOCK();
        piVar1 = (int *)(puStack_d8 + 2);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puStack_d8)();
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
      if ((ulonglong)uStack_e8 != 0) {
        lVar5 = 0;
        do {
          if (!SBORROW1('\0',*(char *)(lStack_e0 + lVar5))) {
            *(undefined1 *)(lStack_e0 + lVar5) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(lStack_e0 + 1 + lVar5))) {
            *(undefined1 *)(lStack_e0 + 1 + lVar5) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(lStack_e0 + 2 + lVar5))) {
            *(undefined1 *)(lStack_e0 + 2 + lVar5) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(lStack_e0 + 3 + lVar5))) {
            *(undefined1 *)(lStack_e0 + 3 + lVar5) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(lStack_e0 + 4 + lVar5))) {
            *(undefined1 *)(lStack_e0 + 4 + lVar5) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(lStack_e0 + 5 + lVar5))) {
            *(undefined1 *)(lStack_e0 + 5 + lVar5) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(lStack_e0 + 6 + lVar5))) {
            *(undefined1 *)(lStack_e0 + 6 + lVar5) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(lStack_e0 + 7 + lVar5))) {
            *(undefined1 *)(lStack_e0 + 7 + lVar5) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(lStack_e0 + 8 + lVar5))) {
            *(undefined1 *)(lStack_e0 + 8 + lVar5) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(lStack_e0 + 9 + lVar5))) {
            *(undefined1 *)(lStack_e0 + 9 + lVar5) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(lStack_e0 + 10 + lVar5))) {
            *(undefined1 *)(lStack_e0 + 10 + lVar5) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(lStack_e0 + 0xb + lVar5))) {
            *(undefined1 *)(lStack_e0 + 0xb + lVar5) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(lStack_e0 + 0xc + lVar5))) {
            *(undefined1 *)(lStack_e0 + 0xc + lVar5) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(lStack_e0 + 0xd + lVar5))) {
            *(undefined1 *)(lStack_e0 + 0xd + lVar5) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(lStack_e0 + 0xe + lVar5))) {
            *(undefined1 *)(lStack_e0 + 0xe + lVar5) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(lStack_e0 + 0xf + lVar5))) {
            *(undefined1 *)(lStack_e0 + 0xf + lVar5) = 0x80;
          }
          lVar5 = lVar5 + 0x50;
        } while ((ulonglong)uStack_e8 * 0x50 != lVar5);
      }
      uStack_e4 = 0;
      if (lStack_e0 != 0) {
        func_0x000144d9c130();
      }
      if (puStack_158 != (undefined8 *)0x0) {
        (**(code **)*puStack_158)();
      }
      if (puStack_150 != (undefined8 *)0x0) {
        (**(code **)*puStack_150)();
      }
      if ((ulonglong)uStack_100 != 0) {
        lVar5 = 0;
        do {
          if (!SBORROW1('\0',*(char *)(lStack_f8 + lVar5))) {
            *(undefined1 *)(lStack_f8 + lVar5) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(lStack_f8 + 1 + lVar5))) {
            *(undefined1 *)(lStack_f8 + 1 + lVar5) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(lStack_f8 + 2 + lVar5))) {
            *(undefined1 *)(lStack_f8 + 2 + lVar5) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(lStack_f8 + 3 + lVar5))) {
            *(undefined1 *)(lStack_f8 + 3 + lVar5) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(lStack_f8 + 4 + lVar5))) {
            *(undefined1 *)(lStack_f8 + 4 + lVar5) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(lStack_f8 + 5 + lVar5))) {
            *(undefined1 *)(lStack_f8 + 5 + lVar5) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(lStack_f8 + 6 + lVar5))) {
            *(undefined1 *)(lStack_f8 + 6 + lVar5) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(lStack_f8 + 7 + lVar5))) {
            *(undefined1 *)(lStack_f8 + 7 + lVar5) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(lStack_f8 + 8 + lVar5))) {
            *(undefined1 *)(lStack_f8 + 8 + lVar5) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(lStack_f8 + 9 + lVar5))) {
            *(undefined1 *)(lStack_f8 + 9 + lVar5) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(lStack_f8 + 10 + lVar5))) {
            *(undefined1 *)(lStack_f8 + 10 + lVar5) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(lStack_f8 + 0xb + lVar5))) {
            *(undefined1 *)(lStack_f8 + 0xb + lVar5) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(lStack_f8 + 0xc + lVar5))) {
            *(undefined1 *)(lStack_f8 + 0xc + lVar5) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(lStack_f8 + 0xd + lVar5))) {
            *(undefined1 *)(lStack_f8 + 0xd + lVar5) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(lStack_f8 + 0xe + lVar5))) {
            *(undefined1 *)(lStack_f8 + 0xe + lVar5) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(lStack_f8 + 0xf + lVar5))) {
            *(undefined1 *)(lStack_f8 + 0xf + lVar5) = 0x80;
          }
          lVar5 = lVar5 + 0x50;
        } while ((ulonglong)uStack_100 * 0x50 != lVar5);
      }
      uStack_fc = 0;
      if (lStack_f8 != 0) {
        func_0x000144d9c130();
      }
      uStack_100 = 0;
      lStack_f8 = 0;
      if ((undefined8 *)auStack_148._0_8_ != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(auStack_148._0_8_ + 0x10);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (*(code *)**(undefined8 **)auStack_148._0_8_)(auStack_148._0_8_,1);
        }
      }
    }
    else {
      FUN_14016dd30(_DAT_14abbd348,auStack_148,param_3,param_3);
      FUN_14016dc90(param_2,&uStack_e8);
      func_0x000140acbf50(puVar2);
      puVar3 = (undefined8 *)CONCAT44(uStack_e4,uStack_e8);
      if (puVar3 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar3 + 2);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar3)();
        }
      }
      if (puStack_128 != (undefined8 *)0x0) {
        (**(code **)*puStack_128)();
      }
      if (puStack_130 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puStack_130 + 2);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puStack_130)();
        }
      }
      if (puStack_138 != (undefined8 *)0x0) {
        puVar3 = (undefined8 *)puStack_138[3];
        LOCK();
        piVar1 = (int *)(puStack_138 + 2);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puStack_138)();
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
      if ((ulonglong)(uint)auStack_148._0_4_ != 0) {
        lVar5 = 0;
        do {
          if (!SBORROW1('\0',*(char *)(auStack_148._8_8_ + lVar5))) {
            *(undefined1 *)(auStack_148._8_8_ + lVar5) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(auStack_148._8_8_ + 1 + lVar5))) {
            *(undefined1 *)(auStack_148._8_8_ + 1 + lVar5) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(auStack_148._8_8_ + 2 + lVar5))) {
            *(undefined1 *)(auStack_148._8_8_ + 2 + lVar5) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(auStack_148._8_8_ + 3 + lVar5))) {
            *(undefined1 *)(auStack_148._8_8_ + 3 + lVar5) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(auStack_148._8_8_ + 4 + lVar5))) {
            *(undefined1 *)(auStack_148._8_8_ + 4 + lVar5) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(auStack_148._8_8_ + 5 + lVar5))) {
            *(undefined1 *)(auStack_148._8_8_ + 5 + lVar5) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(auStack_148._8_8_ + 6 + lVar5))) {
            *(undefined1 *)(auStack_148._8_8_ + 6 + lVar5) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(auStack_148._8_8_ + 7 + lVar5))) {
            *(undefined1 *)(auStack_148._8_8_ + 7 + lVar5) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(auStack_148._8_8_ + 8 + lVar5))) {
            *(undefined1 *)(auStack_148._8_8_ + 8 + lVar5) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(auStack_148._8_8_ + 9 + lVar5))) {
            *(undefined1 *)(auStack_148._8_8_ + 9 + lVar5) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(auStack_148._8_8_ + 10 + lVar5))) {
            *(undefined1 *)(auStack_148._8_8_ + 10 + lVar5) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(auStack_148._8_8_ + 0xb + lVar5))) {
            *(undefined1 *)(auStack_148._8_8_ + 0xb + lVar5) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(auStack_148._8_8_ + 0xc + lVar5))) {
            *(undefined1 *)(auStack_148._8_8_ + 0xc + lVar5) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(auStack_148._8_8_ + 0xd + lVar5))) {
            *(undefined1 *)(auStack_148._8_8_ + 0xd + lVar5) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(auStack_148._8_8_ + 0xe + lVar5))) {
            *(undefined1 *)(auStack_148._8_8_ + 0xe + lVar5) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(auStack_148._8_8_ + 0xf + lVar5))) {
            *(undefined1 *)(auStack_148._8_8_ + 0xf + lVar5) = 0x80;
          }
          lVar5 = lVar5 + 0x50;
        } while ((ulonglong)(uint)auStack_148._0_4_ * 0x50 != lVar5);
      }
      auStack_148._4_4_ = 0;
      if (auStack_148._8_8_ != 0) {
        func_0x000144d9c130();
      }
    }
    cVar4 = FUN_145028490(*puVar2);
    if (cVar4 != '\0') {
      FUN_14016e200(puVar2,0x444e113a);
      FUN_14016dc20(puVar2,0x24945b0a);
      auStack_148._8_8_ = _UNK_145fc6ee8;
      auStack_148._0_8_ = _DAT_145fc6ee0;
      FUN_144f64ca0(param_4,0x2deefadd444e113a,auStack_148,2);
      FUN_144f82240(param_4,0x2deefadd24945b0a,0,2);
    }
  }
  if (*(char *)(param_1 + 0x34c) == '\x01') {
    puVar2 = (undefined8 *)(param_1 + 0x338);
    cVar4 = FUN_145028490(*puVar2);
    if (cVar4 == '\0') {
      FUN_140173450(auStack_148,0x13187d06);
      FUN_140173330(auStack_148,1,1);
      if (param_3 != 0) {
        FUN_1401735f0(auStack_148,param_3);
      }
      auStack_88._0_12_ = ZEXT812(0);
      auStack_88._12_4_ = 0;
      auVar7 = ZEXT1664(auStack_88);
      FUN_140173850(&puStack_150,0x275822c4);
      auStack_a8 = auVar7._0_16_;
      uStack_98 = _DAT_146159bc0;
      uStack_90 = 0;
      FUN_140173a20(&puStack_158,*(undefined4 *)(param_1 + 0x348));
      FUN_140173aa0(&uStack_e8,auStack_148,&puStack_158,0x216b0232,&puStack_150);
      FUN_14016e250(param_2,&puStack_b0);
      func_0x000140acbf50(puVar2);
      if (puStack_b0 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puStack_b0 + 2);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puStack_b0)();
        }
      }
      if (puStack_c8 != (undefined8 *)0x0) {
        (**(code **)*puStack_c8)();
      }
      if (puStack_d0 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puStack_d0 + 2);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puStack_d0)();
        }
      }
      if (puStack_d8 != (undefined8 *)0x0) {
        puVar3 = (undefined8 *)puStack_d8[3];
        LOCK();
        piVar1 = (int *)(puStack_d8 + 2);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puStack_d8)();
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
      if ((ulonglong)uStack_e8 != 0) {
        lVar5 = 0;
        do {
          if (!SBORROW1('\0',*(char *)(lStack_e0 + lVar5))) {
            *(undefined1 *)(lStack_e0 + lVar5) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(lStack_e0 + 1 + lVar5))) {
            *(undefined1 *)(lStack_e0 + 1 + lVar5) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(lStack_e0 + 2 + lVar5))) {
            *(undefined1 *)(lStack_e0 + 2 + lVar5) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(lStack_e0 + 3 + lVar5))) {
            *(undefined1 *)(lStack_e0 + 3 + lVar5) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(lStack_e0 + 4 + lVar5))) {
            *(undefined1 *)(lStack_e0 + 4 + lVar5) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(lStack_e0 + 5 + lVar5))) {
            *(undefined1 *)(lStack_e0 + 5 + lVar5) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(lStack_e0 + 6 + lVar5))) {
            *(undefined1 *)(lStack_e0 + 6 + lVar5) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(lStack_e0 + 7 + lVar5))) {
            *(undefined1 *)(lStack_e0 + 7 + lVar5) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(lStack_e0 + 8 + lVar5))) {
            *(undefined1 *)(lStack_e0 + 8 + lVar5) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(lStack_e0 + 9 + lVar5))) {
            *(undefined1 *)(lStack_e0 + 9 + lVar5) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(lStack_e0 + 10 + lVar5))) {
            *(undefined1 *)(lStack_e0 + 10 + lVar5) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(lStack_e0 + 0xb + lVar5))) {
            *(undefined1 *)(lStack_e0 + 0xb + lVar5) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(lStack_e0 + 0xc + lVar5))) {
            *(undefined1 *)(lStack_e0 + 0xc + lVar5) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(lStack_e0 + 0xd + lVar5))) {
            *(undefined1 *)(lStack_e0 + 0xd + lVar5) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(lStack_e0 + 0xe + lVar5))) {
            *(undefined1 *)(lStack_e0 + 0xe + lVar5) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(lStack_e0 + 0xf + lVar5))) {
            *(undefined1 *)(lStack_e0 + 0xf + lVar5) = 0x80;
          }
          lVar5 = lVar5 + 0x50;
        } while ((ulonglong)uStack_e8 * 0x50 != lVar5);
      }
      uStack_e4 = 0;
      if (lStack_e0 != 0) {
        func_0x000144d9c130();
      }
      if (puStack_158 != (undefined8 *)0x0) {
        (**(code **)*puStack_158)();
      }
      if (puStack_150 != (undefined8 *)0x0) {
        (**(code **)*puStack_150)();
      }
      if ((ulonglong)uStack_100 != 0) {
        lVar5 = 0;
        do {
          if (!SBORROW1('\0',*(char *)(lStack_f8 + lVar5))) {
            *(undefined1 *)(lStack_f8 + lVar5) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(lStack_f8 + 1 + lVar5))) {
            *(undefined1 *)(lStack_f8 + 1 + lVar5) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(lStack_f8 + 2 + lVar5))) {
            *(undefined1 *)(lStack_f8 + 2 + lVar5) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(lStack_f8 + 3 + lVar5))) {
            *(undefined1 *)(lStack_f8 + 3 + lVar5) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(lStack_f8 + 4 + lVar5))) {
            *(undefined1 *)(lStack_f8 + 4 + lVar5) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(lStack_f8 + 5 + lVar5))) {
            *(undefined1 *)(lStack_f8 + 5 + lVar5) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(lStack_f8 + 6 + lVar5))) {
            *(undefined1 *)(lStack_f8 + 6 + lVar5) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(lStack_f8 + 7 + lVar5))) {
            *(undefined1 *)(lStack_f8 + 7 + lVar5) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(lStack_f8 + 8 + lVar5))) {
            *(undefined1 *)(lStack_f8 + 8 + lVar5) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(lStack_f8 + 9 + lVar5))) {
            *(undefined1 *)(lStack_f8 + 9 + lVar5) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(lStack_f8 + 10 + lVar5))) {
            *(undefined1 *)(lStack_f8 + 10 + lVar5) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(lStack_f8 + 0xb + lVar5))) {
            *(undefined1 *)(lStack_f8 + 0xb + lVar5) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(lStack_f8 + 0xc + lVar5))) {
            *(undefined1 *)(lStack_f8 + 0xc + lVar5) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(lStack_f8 + 0xd + lVar5))) {
            *(undefined1 *)(lStack_f8 + 0xd + lVar5) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(lStack_f8 + 0xe + lVar5))) {
            *(undefined1 *)(lStack_f8 + 0xe + lVar5) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(lStack_f8 + 0xf + lVar5))) {
            *(undefined1 *)(lStack_f8 + 0xf + lVar5) = 0x80;
          }
          lVar5 = lVar5 + 0x50;
        } while ((ulonglong)uStack_100 * 0x50 != lVar5);
      }
      uStack_fc = 0;
      if (lStack_f8 != 0) {
        func_0x000144d9c130();
      }
      uStack_100 = 0;
      lStack_f8 = 0;
      if ((undefined8 *)auStack_148._0_8_ != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(auStack_148._0_8_ + 0x10);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (*(code *)**(undefined8 **)auStack_148._0_8_)(auStack_148._0_8_,1);
        }
      }
    }
    cVar4 = FUN_145028490(*puVar2);
    if (cVar4 != '\0') {
      FUN_14016e2f0(puVar2,0x8a5370);
      FUN_14016dc20(puVar2,0x24945b0a);
      auStack_148._0_12_ = ZEXT812(0);
      auStack_148._12_4_ = 0;
      FUN_144ff9810(param_4,0x2deefadd008a5370,auStack_148,2);
      FUN_144f82240(param_4,0x2deefadd24945b0a,0,2);
    }
  }
  return;
}

