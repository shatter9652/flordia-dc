// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140173b30  size: 3666 bytes
// Name:    FUN_140173b30
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401735f0, FUN_144f82240, FUN_140173aa0, FUN_145028490, FUN_1401736a0, FUN_140173710, FUN_14016e200, FUN_1401737a0, FUN_14016dc90, FUN_140173330, FUN_14016e290, FUN_144f64ca0, FUN_14016dd30, FUN_144ff9810, FUN_140173850, FUN_14016dc20, FUN_14016e2f0, FUN_140173450, FUN_14016e250, FUN_140173a20
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140173b30(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar8;
  undefined1 auVar7 [64];
  undefined8 *puStack_148;
  undefined8 *puStack_140;
  undefined1 auStack_138 [16];
  undefined8 *puStack_128;
  undefined8 *puStack_120;
  undefined8 *puStack_118;
  uint uStack_f0;
  undefined4 uStack_ec;
  longlong lStack_e8;
  uint uStack_d8;
  undefined4 uStack_d4;
  longlong lStack_d0;
  undefined8 *puStack_c8;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  undefined8 *puStack_a0;
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [16];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  cVar4 = FUN_145028490(*(undefined8 *)(param_1 + 0x358));
  if (cVar4 == '\0') {
    puVar2 = (undefined8 *)(param_1 + 0x358);
    cVar4 = func_0x000145281cb0(*(undefined1 *)(param_1 + 0x482));
    if (cVar4 == '\0') {
      FUN_140173450(auStack_138,0x13187d06);
      FUN_140173330(auStack_138,0,0);
      if (param_3 != 0) {
        FUN_1401735f0(auStack_138,param_3);
      }
      uStack_58 = _DAT_145fc6ee0;
      uStack_50 = _UNK_145fc6ee8;
      uVar6 = _DAT_145fc6ee0;
      uVar8 = _UNK_145fc6ee8;
      FUN_140173710(&puStack_140,0x275822c4,&uStack_58,0);
      uStack_68 = uVar6;
      uStack_60 = uVar8;
      FUN_1401736a0(&puStack_148,*(undefined4 *)(param_1 + 0x360));
      FUN_1401737a0(&uStack_d8,auStack_138,&puStack_148,0x9e0fb7af,&puStack_140,0);
      FUN_14016dc90(param_2,&puStack_a0);
      func_0x000140acbf50(puVar2);
      if (puStack_a0 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puStack_a0 + 2);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puStack_a0)();
        }
      }
      if (puStack_b8 != (undefined8 *)0x0) {
        (**(code **)*puStack_b8)();
      }
      if (puStack_c0 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puStack_c0 + 2);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puStack_c0)();
        }
      }
      if (puStack_c8 != (undefined8 *)0x0) {
        puVar3 = (undefined8 *)puStack_c8[3];
        LOCK();
        piVar1 = (int *)(puStack_c8 + 2);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puStack_c8)();
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
      if ((ulonglong)uStack_d8 != 0) {
        lVar5 = 0;
        do {
          if (!SBORROW1('\0',*(char *)(lStack_d0 + lVar5))) {
            *(undefined1 *)(lStack_d0 + lVar5) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(lStack_d0 + 1 + lVar5))) {
            *(undefined1 *)(lStack_d0 + 1 + lVar5) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(lStack_d0 + 2 + lVar5))) {
            *(undefined1 *)(lStack_d0 + 2 + lVar5) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(lStack_d0 + 3 + lVar5))) {
            *(undefined1 *)(lStack_d0 + 3 + lVar5) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(lStack_d0 + 4 + lVar5))) {
            *(undefined1 *)(lStack_d0 + 4 + lVar5) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(lStack_d0 + 5 + lVar5))) {
            *(undefined1 *)(lStack_d0 + 5 + lVar5) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(lStack_d0 + 6 + lVar5))) {
            *(undefined1 *)(lStack_d0 + 6 + lVar5) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(lStack_d0 + 7 + lVar5))) {
            *(undefined1 *)(lStack_d0 + 7 + lVar5) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(lStack_d0 + 8 + lVar5))) {
            *(undefined1 *)(lStack_d0 + 8 + lVar5) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(lStack_d0 + 9 + lVar5))) {
            *(undefined1 *)(lStack_d0 + 9 + lVar5) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(lStack_d0 + 10 + lVar5))) {
            *(undefined1 *)(lStack_d0 + 10 + lVar5) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(lStack_d0 + 0xb + lVar5))) {
            *(undefined1 *)(lStack_d0 + 0xb + lVar5) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(lStack_d0 + 0xc + lVar5))) {
            *(undefined1 *)(lStack_d0 + 0xc + lVar5) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(lStack_d0 + 0xd + lVar5))) {
            *(undefined1 *)(lStack_d0 + 0xd + lVar5) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(lStack_d0 + 0xe + lVar5))) {
            *(undefined1 *)(lStack_d0 + 0xe + lVar5) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(lStack_d0 + 0xf + lVar5))) {
            *(undefined1 *)(lStack_d0 + 0xf + lVar5) = 0x80;
          }
          lVar5 = lVar5 + 0x50;
        } while ((ulonglong)uStack_d8 * 0x50 != lVar5);
      }
      uStack_d4 = 0;
      if (lStack_d0 != 0) {
        func_0x000144d9c130();
      }
      if (puStack_148 != (undefined8 *)0x0) {
        (**(code **)*puStack_148)();
      }
      if (puStack_140 != (undefined8 *)0x0) {
        (**(code **)*puStack_140)();
      }
      if ((ulonglong)uStack_f0 != 0) {
        lVar5 = 0;
        do {
          if (!SBORROW1('\0',*(char *)(lStack_e8 + lVar5))) {
            *(undefined1 *)(lStack_e8 + lVar5) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(lStack_e8 + 1 + lVar5))) {
            *(undefined1 *)(lStack_e8 + 1 + lVar5) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(lStack_e8 + 2 + lVar5))) {
            *(undefined1 *)(lStack_e8 + 2 + lVar5) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(lStack_e8 + 3 + lVar5))) {
            *(undefined1 *)(lStack_e8 + 3 + lVar5) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(lStack_e8 + 4 + lVar5))) {
            *(undefined1 *)(lStack_e8 + 4 + lVar5) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(lStack_e8 + 5 + lVar5))) {
            *(undefined1 *)(lStack_e8 + 5 + lVar5) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(lStack_e8 + 6 + lVar5))) {
            *(undefined1 *)(lStack_e8 + 6 + lVar5) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(lStack_e8 + 7 + lVar5))) {
            *(undefined1 *)(lStack_e8 + 7 + lVar5) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(lStack_e8 + 8 + lVar5))) {
            *(undefined1 *)(lStack_e8 + 8 + lVar5) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(lStack_e8 + 9 + lVar5))) {
            *(undefined1 *)(lStack_e8 + 9 + lVar5) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(lStack_e8 + 10 + lVar5))) {
            *(undefined1 *)(lStack_e8 + 10 + lVar5) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(lStack_e8 + 0xb + lVar5))) {
            *(undefined1 *)(lStack_e8 + 0xb + lVar5) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(lStack_e8 + 0xc + lVar5))) {
            *(undefined1 *)(lStack_e8 + 0xc + lVar5) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(lStack_e8 + 0xd + lVar5))) {
            *(undefined1 *)(lStack_e8 + 0xd + lVar5) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(lStack_e8 + 0xe + lVar5))) {
            *(undefined1 *)(lStack_e8 + 0xe + lVar5) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(lStack_e8 + 0xf + lVar5))) {
            *(undefined1 *)(lStack_e8 + 0xf + lVar5) = 0x80;
          }
          lVar5 = lVar5 + 0x50;
        } while ((ulonglong)uStack_f0 * 0x50 != lVar5);
      }
      uStack_ec = 0;
      if (lStack_e8 != 0) {
        func_0x000144d9c130();
      }
      uStack_f0 = 0;
      lStack_e8 = 0;
      if ((undefined8 *)auStack_138._0_8_ != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(auStack_138._0_8_ + 0x10);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (*(code *)**(undefined8 **)auStack_138._0_8_)(auStack_138._0_8_,1);
        }
      }
    }
    else {
      FUN_14016dd30(_DAT_14abbd350,auStack_138,param_3,param_3);
      FUN_14016dc90(param_2,&uStack_d8);
      func_0x000140acbf50(puVar2);
      puVar3 = (undefined8 *)CONCAT44(uStack_d4,uStack_d8);
      if (puVar3 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar3 + 2);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar3)();
        }
      }
      if (puStack_118 != (undefined8 *)0x0) {
        (**(code **)*puStack_118)();
      }
      if (puStack_120 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puStack_120 + 2);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puStack_120)();
        }
      }
      if (puStack_128 != (undefined8 *)0x0) {
        puVar3 = (undefined8 *)puStack_128[3];
        LOCK();
        piVar1 = (int *)(puStack_128 + 2);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puStack_128)();
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
      if ((ulonglong)(uint)auStack_138._0_4_ != 0) {
        lVar5 = 0;
        do {
          if (!SBORROW1('\0',*(char *)(auStack_138._8_8_ + lVar5))) {
            *(undefined1 *)(auStack_138._8_8_ + lVar5) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(auStack_138._8_8_ + 1 + lVar5))) {
            *(undefined1 *)(auStack_138._8_8_ + 1 + lVar5) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(auStack_138._8_8_ + 2 + lVar5))) {
            *(undefined1 *)(auStack_138._8_8_ + 2 + lVar5) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(auStack_138._8_8_ + 3 + lVar5))) {
            *(undefined1 *)(auStack_138._8_8_ + 3 + lVar5) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(auStack_138._8_8_ + 4 + lVar5))) {
            *(undefined1 *)(auStack_138._8_8_ + 4 + lVar5) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(auStack_138._8_8_ + 5 + lVar5))) {
            *(undefined1 *)(auStack_138._8_8_ + 5 + lVar5) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(auStack_138._8_8_ + 6 + lVar5))) {
            *(undefined1 *)(auStack_138._8_8_ + 6 + lVar5) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(auStack_138._8_8_ + 7 + lVar5))) {
            *(undefined1 *)(auStack_138._8_8_ + 7 + lVar5) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(auStack_138._8_8_ + 8 + lVar5))) {
            *(undefined1 *)(auStack_138._8_8_ + 8 + lVar5) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(auStack_138._8_8_ + 9 + lVar5))) {
            *(undefined1 *)(auStack_138._8_8_ + 9 + lVar5) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(auStack_138._8_8_ + 10 + lVar5))) {
            *(undefined1 *)(auStack_138._8_8_ + 10 + lVar5) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(auStack_138._8_8_ + 0xb + lVar5))) {
            *(undefined1 *)(auStack_138._8_8_ + 0xb + lVar5) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(auStack_138._8_8_ + 0xc + lVar5))) {
            *(undefined1 *)(auStack_138._8_8_ + 0xc + lVar5) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(auStack_138._8_8_ + 0xd + lVar5))) {
            *(undefined1 *)(auStack_138._8_8_ + 0xd + lVar5) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(auStack_138._8_8_ + 0xe + lVar5))) {
            *(undefined1 *)(auStack_138._8_8_ + 0xe + lVar5) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(auStack_138._8_8_ + 0xf + lVar5))) {
            *(undefined1 *)(auStack_138._8_8_ + 0xf + lVar5) = 0x80;
          }
          lVar5 = lVar5 + 0x50;
        } while ((ulonglong)(uint)auStack_138._0_4_ * 0x50 != lVar5);
      }
      auStack_138._4_4_ = 0;
      if (auStack_138._8_8_ != 0) {
        func_0x000144d9c130();
      }
    }
    cVar4 = FUN_145028490(*puVar2);
    if (cVar4 != '\0') {
      FUN_14016e200(puVar2,0xa51d7d53);
      FUN_14016dc20(puVar2,0x31f3a122);
      auStack_138._8_8_ = _UNK_145fc6ee8;
      auStack_138._0_8_ = _DAT_145fc6ee0;
      FUN_144f64ca0(param_4,0x2deefadda51d7d53,auStack_138,2);
      FUN_144f82240(param_4,0x2deefadd31f3a122,0,2);
    }
  }
  if (*(char *)(param_1 + 0x364) == '\x01') {
    puVar2 = (undefined8 *)(param_1 + 0x350);
    cVar4 = FUN_145028490(*puVar2);
    if (cVar4 == '\0') {
      cVar4 = func_0x000145281cb0(*(undefined1 *)(param_1 + 0x482));
      if (cVar4 == '\0') {
        FUN_140173450(auStack_138,0x13187d06);
        FUN_140173330(auStack_138,0,1);
        if (param_3 != 0) {
          FUN_1401735f0(auStack_138,param_3);
        }
        auStack_78._0_12_ = ZEXT812(0);
        auStack_78._12_4_ = 0;
        auVar7 = ZEXT1664(auStack_78);
        FUN_140173850(&puStack_140,0x275822c4);
        auStack_98 = auVar7._0_16_;
        auStack_88 = ZEXT416(_DAT_145fc6ed8);
        FUN_140173a20(&puStack_148,*(undefined4 *)(param_1 + 0x360));
        FUN_140173aa0(&uStack_d8,auStack_138,&puStack_148,0x9e0fb7af,&puStack_140);
        FUN_14016e250(param_2,&puStack_a0);
        func_0x000140acbf50(puVar2);
        if (puStack_a0 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(puStack_a0 + 2);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puStack_a0)();
          }
        }
        if (puStack_b8 != (undefined8 *)0x0) {
          (**(code **)*puStack_b8)();
        }
        if (puStack_c0 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(puStack_c0 + 2);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puStack_c0)();
          }
        }
        if (puStack_c8 != (undefined8 *)0x0) {
          puVar3 = (undefined8 *)puStack_c8[3];
          LOCK();
          piVar1 = (int *)(puStack_c8 + 2);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puStack_c8)();
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
        if ((ulonglong)uStack_d8 != 0) {
          lVar5 = 0;
          do {
            if (!SBORROW1('\0',*(char *)(lStack_d0 + lVar5))) {
              *(undefined1 *)(lStack_d0 + lVar5) = 0x80;
            }
            if (!SBORROW1('\0',*(char *)(lStack_d0 + 1 + lVar5))) {
              *(undefined1 *)(lStack_d0 + 1 + lVar5) = 0x80;
            }
            if (!SBORROW1('\0',*(char *)(lStack_d0 + 2 + lVar5))) {
              *(undefined1 *)(lStack_d0 + 2 + lVar5) = 0x80;
            }
            if (!SBORROW1('\0',*(char *)(lStack_d0 + 3 + lVar5))) {
              *(undefined1 *)(lStack_d0 + 3 + lVar5) = 0x80;
            }
            if (!SBORROW1('\0',*(char *)(lStack_d0 + 4 + lVar5))) {
              *(undefined1 *)(lStack_d0 + 4 + lVar5) = 0x80;
            }
            if (!SBORROW1('\0',*(char *)(lStack_d0 + 5 + lVar5))) {
              *(undefined1 *)(lStack_d0 + 5 + lVar5) = 0x80;
            }
            if (!SBORROW1('\0',*(char *)(lStack_d0 + 6 + lVar5))) {
              *(undefined1 *)(lStack_d0 + 6 + lVar5) = 0x80;
            }
            if (!SBORROW1('\0',*(char *)(lStack_d0 + 7 + lVar5))) {
              *(undefined1 *)(lStack_d0 + 7 + lVar5) = 0x80;
            }
            if (!SBORROW1('\0',*(char *)(lStack_d0 + 8 + lVar5))) {
              *(undefined1 *)(lStack_d0 + 8 + lVar5) = 0x80;
            }
            if (!SBORROW1('\0',*(char *)(lStack_d0 + 9 + lVar5))) {
              *(undefined1 *)(lStack_d0 + 9 + lVar5) = 0x80;
            }
            if (!SBORROW1('\0',*(char *)(lStack_d0 + 10 + lVar5))) {
              *(undefined1 *)(lStack_d0 + 10 + lVar5) = 0x80;
            }
            if (!SBORROW1('\0',*(char *)(lStack_d0 + 0xb + lVar5))) {
              *(undefined1 *)(lStack_d0 + 0xb + lVar5) = 0x80;
            }
            if (!SBORROW1('\0',*(char *)(lStack_d0 + 0xc + lVar5))) {
              *(undefined1 *)(lStack_d0 + 0xc + lVar5) = 0x80;
            }
            if (!SBORROW1('\0',*(char *)(lStack_d0 + 0xd + lVar5))) {
              *(undefined1 *)(lStack_d0 + 0xd + lVar5) = 0x80;
            }
            if (!SBORROW1('\0',*(char *)(lStack_d0 + 0xe + lVar5))) {
              *(undefined1 *)(lStack_d0 + 0xe + lVar5) = 0x80;
            }
            if (!SBORROW1('\0',*(char *)(lStack_d0 + 0xf + lVar5))) {
              *(undefined1 *)(lStack_d0 + 0xf + lVar5) = 0x80;
            }
            lVar5 = lVar5 + 0x50;
          } while ((ulonglong)uStack_d8 * 0x50 != lVar5);
        }
        uStack_d4 = 0;
        if (lStack_d0 != 0) {
          func_0x000144d9c130();
        }
        if (puStack_148 != (undefined8 *)0x0) {
          (**(code **)*puStack_148)();
        }
        if (puStack_140 != (undefined8 *)0x0) {
          (**(code **)*puStack_140)();
        }
        if ((ulonglong)uStack_f0 != 0) {
          lVar5 = 0;
          do {
            if (!SBORROW1('\0',*(char *)(lStack_e8 + lVar5))) {
              *(undefined1 *)(lStack_e8 + lVar5) = 0x80;
            }
            if (!SBORROW1('\0',*(char *)(lStack_e8 + 1 + lVar5))) {
              *(undefined1 *)(lStack_e8 + 1 + lVar5) = 0x80;
            }
            if (!SBORROW1('\0',*(char *)(lStack_e8 + 2 + lVar5))) {
              *(undefined1 *)(lStack_e8 + 2 + lVar5) = 0x80;
            }
            if (!SBORROW1('\0',*(char *)(lStack_e8 + 3 + lVar5))) {
              *(undefined1 *)(lStack_e8 + 3 + lVar5) = 0x80;
            }
            if (!SBORROW1('\0',*(char *)(lStack_e8 + 4 + lVar5))) {
              *(undefined1 *)(lStack_e8 + 4 + lVar5) = 0x80;
            }
            if (!SBORROW1('\0',*(char *)(lStack_e8 + 5 + lVar5))) {
              *(undefined1 *)(lStack_e8 + 5 + lVar5) = 0x80;
            }
            if (!SBORROW1('\0',*(char *)(lStack_e8 + 6 + lVar5))) {
              *(undefined1 *)(lStack_e8 + 6 + lVar5) = 0x80;
            }
            if (!SBORROW1('\0',*(char *)(lStack_e8 + 7 + lVar5))) {
              *(undefined1 *)(lStack_e8 + 7 + lVar5) = 0x80;
            }
            if (!SBORROW1('\0',*(char *)(lStack_e8 + 8 + lVar5))) {
              *(undefined1 *)(lStack_e8 + 8 + lVar5) = 0x80;
            }
            if (!SBORROW1('\0',*(char *)(lStack_e8 + 9 + lVar5))) {
              *(undefined1 *)(lStack_e8 + 9 + lVar5) = 0x80;
            }
            if (!SBORROW1('\0',*(char *)(lStack_e8 + 10 + lVar5))) {
              *(undefined1 *)(lStack_e8 + 10 + lVar5) = 0x80;
            }
            if (!SBORROW1('\0',*(char *)(lStack_e8 + 0xb + lVar5))) {
              *(undefined1 *)(lStack_e8 + 0xb + lVar5) = 0x80;
            }
            if (!SBORROW1('\0',*(char *)(lStack_e8 + 0xc + lVar5))) {
              *(undefined1 *)(lStack_e8 + 0xc + lVar5) = 0x80;
            }
            if (!SBORROW1('\0',*(char *)(lStack_e8 + 0xd + lVar5))) {
              *(undefined1 *)(lStack_e8 + 0xd + lVar5) = 0x80;
            }
            if (!SBORROW1('\0',*(char *)(lStack_e8 + 0xe + lVar5))) {
              *(undefined1 *)(lStack_e8 + 0xe + lVar5) = 0x80;
            }
            if (!SBORROW1('\0',*(char *)(lStack_e8 + 0xf + lVar5))) {
              *(undefined1 *)(lStack_e8 + 0xf + lVar5) = 0x80;
            }
            lVar5 = lVar5 + 0x50;
          } while ((ulonglong)uStack_f0 * 0x50 != lVar5);
        }
        uStack_ec = 0;
        if (lStack_e8 != 0) {
          func_0x000144d9c130();
        }
        uStack_f0 = 0;
        lStack_e8 = 0;
        if ((undefined8 *)auStack_138._0_8_ != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(auStack_138._0_8_ + 0x10);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (*(code *)**(undefined8 **)auStack_138._0_8_)(auStack_138._0_8_,1);
          }
        }
      }
      else {
        FUN_14016e290(_DAT_14abbd340,auStack_138,param_3,param_3);
        FUN_14016e250(param_2,&uStack_d8);
        func_0x000140acbf50(puVar2);
        puVar3 = (undefined8 *)CONCAT44(uStack_d4,uStack_d8);
        if (puVar3 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(puVar3 + 2);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar3)();
          }
        }
        if (puStack_118 != (undefined8 *)0x0) {
          (**(code **)*puStack_118)();
        }
        if (puStack_120 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(puStack_120 + 2);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puStack_120)();
          }
        }
        if (puStack_128 != (undefined8 *)0x0) {
          puVar3 = (undefined8 *)puStack_128[3];
          LOCK();
          piVar1 = (int *)(puStack_128 + 2);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puStack_128)();
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
        if ((ulonglong)(uint)auStack_138._0_4_ != 0) {
          lVar5 = 0;
          do {
            if (!SBORROW1('\0',*(char *)(auStack_138._8_8_ + lVar5))) {
              *(undefined1 *)(auStack_138._8_8_ + lVar5) = 0x80;
            }
            if (!SBORROW1('\0',*(char *)(auStack_138._8_8_ + 1 + lVar5))) {
              *(undefined1 *)(auStack_138._8_8_ + 1 + lVar5) = 0x80;
            }
            if (!SBORROW1('\0',*(char *)(auStack_138._8_8_ + 2 + lVar5))) {
              *(undefined1 *)(auStack_138._8_8_ + 2 + lVar5) = 0x80;
            }
            if (!SBORROW1('\0',*(char *)(auStack_138._8_8_ + 3 + lVar5))) {
              *(undefined1 *)(auStack_138._8_8_ + 3 + lVar5) = 0x80;
            }
            if (!SBORROW1('\0',*(char *)(auStack_138._8_8_ + 4 + lVar5))) {
              *(undefined1 *)(auStack_138._8_8_ + 4 + lVar5) = 0x80;
            }
            if (!SBORROW1('\0',*(char *)(auStack_138._8_8_ + 5 + lVar5))) {
              *(undefined1 *)(auStack_138._8_8_ + 5 + lVar5) = 0x80;
            }
            if (!SBORROW1('\0',*(char *)(auStack_138._8_8_ + 6 + lVar5))) {
              *(undefined1 *)(auStack_138._8_8_ + 6 + lVar5) = 0x80;
            }
            if (!SBORROW1('\0',*(char *)(auStack_138._8_8_ + 7 + lVar5))) {
              *(undefined1 *)(auStack_138._8_8_ + 7 + lVar5) = 0x80;
            }
            if (!SBORROW1('\0',*(char *)(auStack_138._8_8_ + 8 + lVar5))) {
              *(undefined1 *)(auStack_138._8_8_ + 8 + lVar5) = 0x80;
            }
            if (!SBORROW1('\0',*(char *)(auStack_138._8_8_ + 9 + lVar5))) {
              *(undefined1 *)(auStack_138._8_8_ + 9 + lVar5) = 0x80;
            }
            if (!SBORROW1('\0',*(char *)(auStack_138._8_8_ + 10 + lVar5))) {
              *(undefined1 *)(auStack_138._8_8_ + 10 + lVar5) = 0x80;
            }
            if (!SBORROW1('\0',*(char *)(auStack_138._8_8_ + 0xb + lVar5))) {
              *(undefined1 *)(auStack_138._8_8_ + 0xb + lVar5) = 0x80;
            }
            if (!SBORROW1('\0',*(char *)(auStack_138._8_8_ + 0xc + lVar5))) {
              *(undefined1 *)(auStack_138._8_8_ + 0xc + lVar5) = 0x80;
            }
            if (!SBORROW1('\0',*(char *)(auStack_138._8_8_ + 0xd + lVar5))) {
              *(undefined1 *)(auStack_138._8_8_ + 0xd + lVar5) = 0x80;
            }
            if (!SBORROW1('\0',*(char *)(auStack_138._8_8_ + 0xe + lVar5))) {
              *(undefined1 *)(auStack_138._8_8_ + 0xe + lVar5) = 0x80;
            }
            if (!SBORROW1('\0',*(char *)(auStack_138._8_8_ + 0xf + lVar5))) {
              *(undefined1 *)(auStack_138._8_8_ + 0xf + lVar5) = 0x80;
            }
            lVar5 = lVar5 + 0x50;
          } while ((ulonglong)(uint)auStack_138._0_4_ * 0x50 != lVar5);
        }
        auStack_138._4_4_ = 0;
        if (auStack_138._8_8_ != 0) {
          func_0x000144d9c130();
        }
      }
    }
    cVar4 = FUN_145028490(*puVar2);
    if (cVar4 != '\0') {
      FUN_14016e2f0(puVar2,0xfcd31dca);
      FUN_14016dc20(puVar2,0x31f3a122);
      auStack_138._0_12_ = ZEXT812(0);
      auStack_138._12_4_ = 0;
      FUN_144ff9810(param_4,0x2deefaddfcd31dca,auStack_138,2);
      FUN_144f82240(param_4,0x2deefadd31f3a122,0,2);
    }
  }
  return;
}

