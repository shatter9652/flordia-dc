// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400cd280  size: 876 bytes
// Name:    FUN_1400cd280
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14016e200, FUN_14016dd30, FUN_14016dc90, FUN_14016dc20, FUN_145028490, FUN_1450283f0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400cd280(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  char cVar8;
  longlong lVar9;
  uint *puVar10;
  undefined1 auStack_b8 [4];
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  uint auStack_a0 [2];
  longlong lStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  ulonglong uStack_68;
  uint auStack_60 [8];
  
  uStack_68 = 8;
  uStack_b0 = param_2;
  func_0x0001400c7e20(param_1,&uStack_68,param_4);
  uVar7 = uStack_68 >> 0x20;
  if (uVar7 != 0) {
    puVar10 = auStack_60;
    do {
      uVar3 = *puVar10;
      puVar2 = (undefined8 *)(param_1 + 0x128 + (longlong)(int)uVar3 * 8);
      cVar8 = FUN_145028490(*puVar2);
      if (cVar8 == '\0') {
        FUN_14016dd30((ulonglong)uVar3 * 0x20 + 0x14875f2a0,auStack_a0,param_3,param_3);
        FUN_14016dc90(uStack_b0,&puStack_a8);
        func_0x000140acbf50(puVar2,&puStack_a8);
        if (puStack_a8 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(puStack_a8 + 2);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puStack_a8)(puStack_a8,1);
          }
        }
        func_0x0001400d7820(&uStack_b4,(ulonglong)uVar3);
        FUN_14016e200(puVar2,uStack_b4);
        func_0x0001400cd5f0(auStack_b8,uVar3);
        FUN_14016dc20(puVar2);
        if (puStack_80 != (undefined8 *)0x0) {
          (**(code **)*puStack_80)();
        }
        if (puStack_88 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(puStack_88 + 2);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puStack_88)();
          }
        }
        if (puStack_90 != (undefined8 *)0x0) {
          puVar6 = (undefined8 *)puStack_90[3];
          LOCK();
          piVar1 = (int *)(puStack_90 + 2);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puStack_90)();
          }
          if (puVar6 != (undefined8 *)0x0) {
            LOCK();
            piVar1 = (int *)(puVar6 + 2);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)*puVar6)(puVar6);
            }
          }
        }
        if ((ulonglong)auStack_a0[0] != 0) {
          lVar9 = 0;
          do {
            if (!SBORROW1('\0',*(char *)(lStack_98 + lVar9))) {
              *(undefined1 *)(lStack_98 + lVar9) = 0x80;
            }
            if (!SBORROW1('\0',*(char *)(lStack_98 + 1 + lVar9))) {
              *(undefined1 *)(lStack_98 + 1 + lVar9) = 0x80;
            }
            if (!SBORROW1('\0',*(char *)(lStack_98 + 2 + lVar9))) {
              *(undefined1 *)(lStack_98 + 2 + lVar9) = 0x80;
            }
            if (!SBORROW1('\0',*(char *)(lStack_98 + 3 + lVar9))) {
              *(undefined1 *)(lStack_98 + 3 + lVar9) = 0x80;
            }
            if (!SBORROW1('\0',*(char *)(lStack_98 + 4 + lVar9))) {
              *(undefined1 *)(lStack_98 + 4 + lVar9) = 0x80;
            }
            if (!SBORROW1('\0',*(char *)(lStack_98 + 5 + lVar9))) {
              *(undefined1 *)(lStack_98 + 5 + lVar9) = 0x80;
            }
            if (!SBORROW1('\0',*(char *)(lStack_98 + 6 + lVar9))) {
              *(undefined1 *)(lStack_98 + 6 + lVar9) = 0x80;
            }
            if (!SBORROW1('\0',*(char *)(lStack_98 + 7 + lVar9))) {
              *(undefined1 *)(lStack_98 + 7 + lVar9) = 0x80;
            }
            if (!SBORROW1('\0',*(char *)(lStack_98 + 8 + lVar9))) {
              *(undefined1 *)(lStack_98 + 8 + lVar9) = 0x80;
            }
            if (!SBORROW1('\0',*(char *)(lStack_98 + 9 + lVar9))) {
              *(undefined1 *)(lStack_98 + 9 + lVar9) = 0x80;
            }
            if (!SBORROW1('\0',*(char *)(lStack_98 + 10 + lVar9))) {
              *(undefined1 *)(lStack_98 + 10 + lVar9) = 0x80;
            }
            if (!SBORROW1('\0',*(char *)(lStack_98 + 0xb + lVar9))) {
              *(undefined1 *)(lStack_98 + 0xb + lVar9) = 0x80;
            }
            if (!SBORROW1('\0',*(char *)(lStack_98 + 0xc + lVar9))) {
              *(undefined1 *)(lStack_98 + 0xc + lVar9) = 0x80;
            }
            if (!SBORROW1('\0',*(char *)(lStack_98 + 0xd + lVar9))) {
              *(undefined1 *)(lStack_98 + 0xd + lVar9) = 0x80;
            }
            if (!SBORROW1('\0',*(char *)(lStack_98 + 0xe + lVar9))) {
              *(undefined1 *)(lStack_98 + 0xe + lVar9) = 0x80;
            }
            if (!SBORROW1('\0',*(char *)(lStack_98 + 0xf + lVar9))) {
              *(undefined1 *)(lStack_98 + 0xf + lVar9) = 0x80;
            }
            lVar9 = lVar9 + 0x50;
          } while ((ulonglong)auStack_a0[0] * 0x50 != lVar9);
        }
        auStack_a0[1] = 0;
        if (lStack_98 != 0) {
          func_0x000144d9c130();
        }
      }
      uVar5 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x28);
      uVar4 = *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0xc);
      func_0x000144f63820(uVar5);
      FUN_1450283f0(puVar2,uVar5,uVar4);
      puVar10 = puVar10 + 1;
    } while (puVar10 != auStack_60 + uVar7);
  }
  return;
}

