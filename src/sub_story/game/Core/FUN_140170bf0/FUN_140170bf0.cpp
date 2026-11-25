// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140170bf0  size: 1083 bytes
// Name:    FUN_140170bf0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145028490, FUN_14016dd30, FUN_140171030, FUN_140acbc40, FUN_14016dc90, FUN_1408f6480, FUN_140acbc00, FUN_140279610, FUN_140279660, FUN_140171090, FUN_1401b4170
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140170bf0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong lVar8;
  bool bVar9;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  uint auStack_78 [2];
  longlong lStack_70;
  undefined8 *puStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  
  lVar8 = 0;
  bVar2 = true;
  do {
    bVar9 = bVar2;
    cVar3 = FUN_145028490(*(undefined8 *)(param_1 + 0x318 + lVar8 * 8));
    if (cVar3 == '\0') {
      puVar7 = (undefined8 *)(param_1 + 0x318 + lVar8 * 8);
      FUN_14016dd30(lVar8 * 0x20 + 0x14abbd2f0,auStack_78,param_3,param_3);
      uStack_80 = param_2;
      FUN_14016dc90(param_2,&uStack_90,auStack_78);
      puStack_88 = puVar7;
      func_0x000140acbf50(puVar7);
      puVar7 = (undefined8 *)CONCAT44(uStack_8c,uStack_90);
      if (puVar7 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar7 + 2);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar7)();
        }
      }
      if (puStack_58 != (undefined8 *)0x0) {
        (**(code **)*puStack_58)();
      }
      param_2 = uStack_80;
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
        puVar7 = (undefined8 *)puStack_68[3];
        LOCK();
        piVar1 = (int *)(puStack_68 + 2);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puStack_68)();
        }
        if (puVar7 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(puVar7 + 2);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar7)(puVar7);
          }
        }
      }
      if ((ulonglong)auStack_78[0] != 0) {
        lVar8 = 0;
        do {
          if (!SBORROW1('\0',*(char *)(lStack_70 + lVar8))) {
            *(undefined1 *)(lStack_70 + lVar8) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(lStack_70 + 1 + lVar8))) {
            *(undefined1 *)(lStack_70 + 1 + lVar8) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(lStack_70 + 2 + lVar8))) {
            *(undefined1 *)(lStack_70 + 2 + lVar8) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(lStack_70 + 3 + lVar8))) {
            *(undefined1 *)(lStack_70 + 3 + lVar8) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(lStack_70 + 4 + lVar8))) {
            *(undefined1 *)(lStack_70 + 4 + lVar8) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(lStack_70 + 5 + lVar8))) {
            *(undefined1 *)(lStack_70 + 5 + lVar8) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(lStack_70 + 6 + lVar8))) {
            *(undefined1 *)(lStack_70 + 6 + lVar8) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(lStack_70 + 7 + lVar8))) {
            *(undefined1 *)(lStack_70 + 7 + lVar8) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(lStack_70 + 8 + lVar8))) {
            *(undefined1 *)(lStack_70 + 8 + lVar8) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(lStack_70 + 9 + lVar8))) {
            *(undefined1 *)(lStack_70 + 9 + lVar8) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(lStack_70 + 10 + lVar8))) {
            *(undefined1 *)(lStack_70 + 10 + lVar8) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(lStack_70 + 0xb + lVar8))) {
            *(undefined1 *)(lStack_70 + 0xb + lVar8) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(lStack_70 + 0xc + lVar8))) {
            *(undefined1 *)(lStack_70 + 0xc + lVar8) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(lStack_70 + 0xd + lVar8))) {
            *(undefined1 *)(lStack_70 + 0xd + lVar8) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(lStack_70 + 0xe + lVar8))) {
            *(undefined1 *)(lStack_70 + 0xe + lVar8) = 0x80;
          }
          if (!SBORROW1('\0',*(char *)(lStack_70 + 0xf + lVar8))) {
            *(undefined1 *)(lStack_70 + 0xf + lVar8) = 0x80;
          }
          lVar8 = lVar8 + 0x50;
        } while ((ulonglong)auStack_78[0] * 0x50 != lVar8);
      }
      auStack_78[1] = 0;
      if (lStack_70 != 0) {
        func_0x000144d9c130();
      }
      cVar3 = FUN_145028490(*puStack_88);
      if (cVar3 != '\0') {
        cVar3 = func_0x00014546d4f0(param_1);
        puVar7 = puStack_88;
        if (cVar3 == '\0') {
          FUN_140acbc00(puStack_88,0x5bdfa752);
          uVar4 = func_0x0001401735a0(0,1);
          FUN_140acbc40(puVar7,uVar4);
          auStack_78[0] = 0x4ba50c4a;
          uStack_90 = 0xb2dc7bd0;
          iVar6 = FUN_1401b4170(0x5bdfa752,0xe07f9912);
          FUN_1408f6480(auStack_78,&uStack_90,iVar6 + -1);
          FUN_140171030(puVar7,auStack_78[0]);
        }
        else {
          lVar8 = (ulonglong)(*(int *)(param_1 + 0x36c) - 1) * 8 + *(longlong *)(param_1 + 0x370);
          auStack_78[0] = 0x4ba50c4a;
          uStack_90 = 0xb2dc7bd0;
          uVar4 = FUN_140279660(lVar8);
          uVar5 = FUN_140279610(lVar8);
          iVar6 = func_0x000145077dc0(uVar5,uVar4);
          FUN_1408f6480(auStack_78,&uStack_90,iVar6 + 1);
          puVar7 = puStack_88;
          FUN_140acbc00(puStack_88,auStack_78[0]);
          FUN_140acbc40(puVar7,uStack_90);
          FUN_1408f6480(auStack_78,&uStack_90,0xa9);
          FUN_140171030(puVar7,auStack_78[0]);
        }
        FUN_140171090(puVar7,uStack_90);
        param_2 = uStack_80;
      }
    }
    lVar8 = 1;
    bVar2 = false;
  } while (bVar9);
  return;
}

