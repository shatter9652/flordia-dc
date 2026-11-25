// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140018380  size: 800 bytes
// Name:    FUN_140018380
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144dde6d0, FUN_1406e1320, FUN_140c8b8e0, FUN_141712920, FUN_144de13e0, FUN_145181df0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140018380(undefined8 *param_1)

{
  longlong lVar1;
  code *pcVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  
  *param_1 = &UNK_1465f9580;
  if (*(int *)((longlong)param_1 + 0x184) != 0) {
    uVar6 = 0;
    do {
      lVar8 = (longlong)(int)uVar6;
      uVar3 = (uint)*(ushort *)((longlong)param_1 + lVar8 * 2 + 0xb4);
      if (((uVar3 != 0xffff) && (_DAT_14ab73aa0 != 0)) &&
         (lVar1 = *(longlong *)
                   (_DAT_14ab73aa0 + 0x8ab8 +
                   (ulonglong)*(byte *)((longlong)param_1 + 0x7e) * 0x8ad0), lVar1 != 0)) {
        uVar4 = (ulonglong)(uVar3 * _DAT_14ab73a88);
        pcVar2 = *(code **)(*(longlong *)(lVar1 + uVar4) + 0x50);
        if (pcVar2 == FUN_144de13e0) {
          FUN_144de13e0(lVar1 + uVar4,1);
        }
        else if (pcVar2 == FUN_144dde6d0) {
          FUN_144dde6d0();
        }
        else {
          (*pcVar2)();
        }
        func_0x000144ed3190(param_1,uVar6,0);
      }
      if (*(short *)((longlong)param_1 + lVar8 * 2 + 0x108) != -1) {
        uVar5 = func_0x0001443d31c0(param_1,uVar6);
        FUN_1406e1320(uVar5);
        FUN_140c8b8e0(*(undefined1 *)((longlong)param_1 + 0x7e),
                      *(undefined2 *)((longlong)param_1 + lVar8 * 2 + 0x108));
        *(undefined2 *)((longlong)param_1 + lVar8 * 2 + 0x108) = 0xffff;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(uint *)((longlong)param_1 + 0x184));
  }
  if (*(char *)((longlong)param_1 + 0x1c7) != '\0') {
    lVar8 = FUN_145181df0(*(undefined2 *)((longlong)param_1 + 0x7c));
    func_0x000145026810(*(undefined2 *)(lVar8 + 0xb4));
  }
  if (param_1[0x20] != 0) {
    func_0x0001420cdfb0(param_1[0x20],*(undefined4 *)(param_1 + 0x30));
    param_1[0x20] = 0;
  }
  if ((ulonglong)*(uint *)((longlong)param_1 + 0x19c) != 0) {
    lVar8 = (ulonglong)*(uint *)((longlong)param_1 + 0x19c) << 3;
    puVar7 = param_1 + 0x34;
    do {
      FUN_141712920(puVar7);
      puVar7 = puVar7 + 1;
      lVar8 = lVar8 + -8;
    } while (lVar8 != 0);
  }
  param_1[0x36] = 0xbff0000000000000;
  *(undefined2 *)(param_1 + 0x37) = 1;
  param_1[0x33] = 2;
  func_0x000144ddb0c0(*(undefined2 *)(param_1 + 0x32));
  func_0x000144de1380((longlong)param_1 + 0x166);
  func_0x000144de1380((longlong)param_1 + 0x164);
  func_0x000144de1380((longlong)param_1 + 0x162);
  func_0x000144de1380(param_1 + 0x2c);
  func_0x000144de1380((longlong)param_1 + 0x15e);
  func_0x000144de1380((longlong)param_1 + 0x15c);
  func_0x000144de1380((longlong)param_1 + 0x15a);
  func_0x000144de1380(param_1 + 0x2b);
  func_0x000144de1380((longlong)param_1 + 0x156);
  func_0x000144de1380((longlong)param_1 + 0x154);
  func_0x000144de1380((longlong)param_1 + 0x152);
  func_0x000144de1380(param_1 + 0x2a);
  func_0x000144de1380((longlong)param_1 + 0x14e);
  func_0x000144de1380((longlong)param_1 + 0x14c);
  func_0x000144de1380((longlong)param_1 + 0x14a);
  func_0x000144de1380(param_1 + 0x29);
  func_0x000144de1380((longlong)param_1 + 0x146);
  func_0x000144de1380((longlong)param_1 + 0x144);
  func_0x000144de1380((longlong)param_1 + 0x142);
  func_0x000144de1380(param_1 + 0x28);
  func_0x000144de1380((longlong)param_1 + 0x13e);
  func_0x000144de1380((longlong)param_1 + 0x13c);
  func_0x000144de1380((longlong)param_1 + 0x13a);
  func_0x000144de1380(param_1 + 0x27);
  func_0x000144de1380((longlong)param_1 + 0x136);
  func_0x000144de1380((longlong)param_1 + 0x134);
  func_0x000144de1380((longlong)param_1 + 0x132);
  func_0x000144de1380(param_1 + 0x26);
  func_0x000144de1380((longlong)param_1 + 0x12e);
  func_0x000144de1380((longlong)param_1 + 300);
  func_0x000144de1380((longlong)param_1 + 0x12a);
  func_0x000144de1380(param_1 + 0x25);
  *param_1 = &UNK_1465f9120;
  (**(code **)(_DAT_146cee318 + 8))(&DAT_146cee318,param_1);
  if (((*(byte *)((longlong)param_1 + 0xf9) & 2) != 0) &&
     (*(ushort *)((longlong)param_1 + 0xd4) != 0xffff)) {
    FUN_1406e1320((ulonglong)((uint)*(ushort *)((longlong)param_1 + 0xd4) * _DAT_14ab73a8c) +
                  *(longlong *)
                   (_DAT_14ab73aa0 + 0x8ac0 +
                   (ulonglong)*(byte *)((longlong)param_1 + 0x7e) * 0x8ad0));
    FUN_140c8b8e0(*(undefined1 *)((longlong)param_1 + 0x7e),
                  *(undefined2 *)((longlong)param_1 + 0xd4));
    *(undefined2 *)((longlong)param_1 + 0xd4) = 0xffff;
  }
  if (*(ushort *)((longlong)param_1 + 0x72) != 0xffff) {
    if (_DAT_14ab73aa0 == 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = (ulonglong)((uint)*(ushort *)((longlong)param_1 + 0x72) * _DAT_14ab73a88) +
              *(longlong *)
               (_DAT_14ab73aa0 + 0x8ab8 + (ulonglong)*(byte *)((longlong)param_1 + 0x7e) * 0x8ad0);
    }
    FUN_144dde700(lVar8);
    *(undefined2 *)((longlong)param_1 + 0x72) = 0xffff;
  }
  if (*(ushort *)((longlong)param_1 + 0x74) != 0xffff) {
    if (_DAT_14ab73aa0 == 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = (ulonglong)((uint)*(ushort *)((longlong)param_1 + 0x74) * _DAT_14ab73a88) +
              *(longlong *)
               (_DAT_14ab73aa0 + 0x8ab8 + (ulonglong)*(byte *)((longlong)param_1 + 0x7e) * 0x8ad0);
    }
    FUN_144dde700(lVar8);
    *(undefined2 *)((longlong)param_1 + 0x74) = 0xffff;
  }
  FUN_145385d40(param_1);
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  if (param_1[2] != 0) {
    func_0x000144d9c130();
  }
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  return;
}

