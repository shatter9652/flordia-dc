// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400c8190  size: 351 bytes
// Name:    FUN_1400c8190
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400e5660, FUN_144f634b0, FUN_14505b100
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400c8190(longlong param_1,undefined4 param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  byte bVar3;
  uint uVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  char cVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint *puVar13;
  undefined1 auStack_b8 [4];
  undefined4 uStack_b4;
  longlong lStack_b0;
  undefined8 *puStack_a8;
  uint auStack_a0 [2];
  longlong lStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  ulonglong uStack_68;
  uint auStack_60 [4];
  undefined8 uStack_50;
  
  lVar12 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x38) + 0x98);
  lVar12 = *(longlong *)
            (*(longlong *)
              (lVar12 + 0x10 + (ulonglong)*(byte *)(lVar12 + 0xc0 + (ulonglong)DAT_14a952378) * 8) +
            0x30);
  uVar11 = (ulonglong)*(byte *)(lVar12 + 0xc0 + (ulonglong)DAT_14abc3b50);
  if (uVar11 == 0xff) {
    return;
  }
  lVar6 = *(longlong *)(lVar12 + 0x10 + uVar11 * 8);
  if (lVar6 == 0) {
    return;
  }
  uVar11 = (ulonglong)*(byte *)(lVar12 + 0xc0 + (ulonglong)DAT_14abc3ac0);
  if (uVar11 == 0xff) {
    return;
  }
  if (*(longlong *)(lVar12 + 0x10 + uVar11 * 8) == 0) {
    return;
  }
  if ((*(byte *)(param_1 + 0x90) & 8) != 0) {
    uStack_50 = 0x1400c8229;
    cVar10 = FUN_14505b100(lVar6);
    if (cVar10 != '\0') {
      bVar3 = *(byte *)(param_1 + 0x391);
      if ((bVar3 == 0) && (*(char *)(param_1 + 0x38e) == '\0')) {
        uStack_50 = 0x1400c82e1;
        FUN_1400e5660(param_1);
        *(undefined1 *)(param_1 + 0x38e) = 1;
        return;
      }
      *(byte *)(param_1 + 0x38e) = bVar3 ^ 1;
      if (bVar3 == 0) {
        return;
      }
      goto LAB_1400c8234;
    }
  }
  *(undefined1 *)(param_1 + 0x38e) = 0;
LAB_1400c8234:
  lVar12 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x38) + 0x98);
  lVar12 = *(longlong *)
            (*(longlong *)
              (lVar12 + 0x10 + (ulonglong)*(byte *)(lVar12 + 0xc0 + (ulonglong)DAT_14a952378) * 8) +
            0x30);
  uVar11 = (ulonglong)*(byte *)(lVar12 + 0xc0 + (ulonglong)DAT_14abc3b60);
  if (uVar11 == 0xff) {
    lVar12 = 0;
  }
  else {
    lVar12 = *(longlong *)(lVar12 + 0x10 + uVar11 * 8);
  }
  uStack_50 = 0x1400c828a;
  FUN_144f634b0(param_1,lVar6,*(undefined8 *)(lVar12 + 0x20),param_2);
  uVar7 = *(undefined8 *)(lVar12 + 0x20);
  uStack_68 = 8;
  lStack_b0 = lVar6;
  func_0x0001400c7e20(param_1,&uStack_68,param_2);
  uVar11 = uStack_68 >> 0x20;
  if (uVar11 != 0) {
    puVar13 = auStack_60;
    do {
      uVar4 = *puVar13;
      puVar2 = (undefined8 *)(param_1 + 0x128 + (longlong)(int)uVar4 * 8);
      cVar10 = FUN_145028490(*puVar2);
      if (cVar10 == '\0') {
        FUN_14016dd30((ulonglong)uVar4 * 0x20 + 0x14875f2a0,auStack_a0,uVar7,uVar7);
        FUN_14016dc90(lStack_b0,&puStack_a8);
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
        func_0x0001400d7820(&uStack_b4,(ulonglong)uVar4);
        FUN_14016e200(puVar2,uStack_b4);
        func_0x0001400cd5f0(auStack_b8,uVar4);
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
          puVar9 = (undefined8 *)puStack_90[3];
          LOCK();
          piVar1 = (int *)(puStack_90 + 2);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puStack_90)();
          }
          if (puVar9 != (undefined8 *)0x0) {
            LOCK();
            piVar1 = (int *)(puVar9 + 2);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)*puVar9)(puVar9);
            }
          }
        }
        if ((ulonglong)auStack_a0[0] != 0) {
          lVar12 = 0;
          do {
            if (!SBORROW1('\0',*(char *)(lStack_98 + lVar12))) {
              *(undefined1 *)(lStack_98 + lVar12) = 0x80;
            }
            if (!SBORROW1('\0',*(char *)(lStack_98 + 1 + lVar12))) {
              *(undefined1 *)(lStack_98 + 1 + lVar12) = 0x80;
            }
            if (!SBORROW1('\0',*(char *)(lStack_98 + 2 + lVar12))) {
              *(undefined1 *)(lStack_98 + 2 + lVar12) = 0x80;
            }
            if (!SBORROW1('\0',*(char *)(lStack_98 + 3 + lVar12))) {
              *(undefined1 *)(lStack_98 + 3 + lVar12) = 0x80;
            }
            if (!SBORROW1('\0',*(char *)(lStack_98 + 4 + lVar12))) {
              *(undefined1 *)(lStack_98 + 4 + lVar12) = 0x80;
            }
            if (!SBORROW1('\0',*(char *)(lStack_98 + 5 + lVar12))) {
              *(undefined1 *)(lStack_98 + 5 + lVar12) = 0x80;
            }
            if (!SBORROW1('\0',*(char *)(lStack_98 + 6 + lVar12))) {
              *(undefined1 *)(lStack_98 + 6 + lVar12) = 0x80;
            }
            if (!SBORROW1('\0',*(char *)(lStack_98 + 7 + lVar12))) {
              *(undefined1 *)(lStack_98 + 7 + lVar12) = 0x80;
            }
            if (!SBORROW1('\0',*(char *)(lStack_98 + 8 + lVar12))) {
              *(undefined1 *)(lStack_98 + 8 + lVar12) = 0x80;
            }
            if (!SBORROW1('\0',*(char *)(lStack_98 + 9 + lVar12))) {
              *(undefined1 *)(lStack_98 + 9 + lVar12) = 0x80;
            }
            if (!SBORROW1('\0',*(char *)(lStack_98 + 10 + lVar12))) {
              *(undefined1 *)(lStack_98 + 10 + lVar12) = 0x80;
            }
            if (!SBORROW1('\0',*(char *)(lStack_98 + 0xb + lVar12))) {
              *(undefined1 *)(lStack_98 + 0xb + lVar12) = 0x80;
            }
            if (!SBORROW1('\0',*(char *)(lStack_98 + 0xc + lVar12))) {
              *(undefined1 *)(lStack_98 + 0xc + lVar12) = 0x80;
            }
            if (!SBORROW1('\0',*(char *)(lStack_98 + 0xd + lVar12))) {
              *(undefined1 *)(lStack_98 + 0xd + lVar12) = 0x80;
            }
            if (!SBORROW1('\0',*(char *)(lStack_98 + 0xe + lVar12))) {
              *(undefined1 *)(lStack_98 + 0xe + lVar12) = 0x80;
            }
            if (!SBORROW1('\0',*(char *)(lStack_98 + 0xf + lVar12))) {
              *(undefined1 *)(lStack_98 + 0xf + lVar12) = 0x80;
            }
            lVar12 = lVar12 + 0x50;
          } while ((ulonglong)auStack_a0[0] * 0x50 != lVar12);
        }
        auStack_a0[1] = 0;
        if (lStack_98 != 0) {
          func_0x000144d9c130();
        }
      }
      uVar8 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x28);
      uVar5 = *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0xc);
      func_0x000144f63820(uVar8);
      FUN_1450283f0(puVar2,uVar8,uVar5);
      puVar13 = puVar13 + 1;
    } while (puVar13 != auStack_60 + uVar11);
  }
  return;
}

