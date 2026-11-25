// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140017870  size: 332 bytes
// Name:    FUN_140017870
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144dde6d0, FUN_144de13e0, FUN_144dde700
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140017870(undefined8 *param_1)

{
  longlong lVar1;
  code *pcVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  *param_1 = &UNK_1465f9ee0;
  if (((((*(byte *)(param_1 + 0x1f) & 0x40) == 0) &&
       (*(ushort *)((longlong)param_1 + 0xb4) != 0xffff)) && (_DAT_14ab73aa0 != 0)) &&
     (lVar4 = *(longlong *)
               (_DAT_14ab73aa0 + 0x8ab8 + (ulonglong)*(byte *)((longlong)param_1 + 0x7e) * 0x8ad0),
     lVar4 != 0)) {
    uVar3 = (ulonglong)((uint)*(ushort *)((longlong)param_1 + 0xb4) * _DAT_14ab73a88);
    lVar1 = lVar4 + uVar3;
    pcVar2 = *(code **)(*(longlong *)(lVar4 + uVar3) + 0x50);
    if (pcVar2 == FUN_144de13e0) {
      FUN_144de13e0(lVar1,1);
    }
    else if (pcVar2 == FUN_144dde6d0) {
      FUN_144dde6d0(lVar1,1);
    }
    else {
      (*pcVar2)(lVar1,1);
    }
    func_0x000144ed3190(param_1,0,0);
  }
  if (*(ushort *)(param_1 + 0x3c) != 0xffff) {
    if (_DAT_14ab73aa0 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = (ulonglong)((uint)*(ushort *)(param_1 + 0x3c) * _DAT_14ab73a88) +
              *(longlong *)
               (_DAT_14ab73aa0 + 0x8ab8 + (ulonglong)*(byte *)((longlong)param_1 + 0x7e) * 0x8ad0);
    }
    FUN_144dde700(lVar4);
    *(undefined2 *)(param_1 + 0x3c) = 0xffff;
  }
  if (*(ushort *)((longlong)param_1 + 0x1e2) != 0xffff) {
    if (_DAT_14ab73aa0 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = (ulonglong)((uint)*(ushort *)((longlong)param_1 + 0x1e2) * _DAT_14ab73a88) +
              *(longlong *)
               (_DAT_14ab73aa0 + 0x8ab8 + (ulonglong)*(byte *)((longlong)param_1 + 0x7e) * 0x8ad0);
    }
    FUN_144dde700(lVar4);
    *(undefined2 *)((longlong)param_1 + 0x1e2) = 0xffff;
  }
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
      lVar4 = 0;
    }
    else {
      lVar4 = (ulonglong)((uint)*(ushort *)((longlong)param_1 + 0x72) * _DAT_14ab73a88) +
              *(longlong *)
               (_DAT_14ab73aa0 + 0x8ab8 + (ulonglong)*(byte *)((longlong)param_1 + 0x7e) * 0x8ad0);
    }
    FUN_144dde700(lVar4);
    *(undefined2 *)((longlong)param_1 + 0x72) = 0xffff;
  }
  if (*(ushort *)((longlong)param_1 + 0x74) != 0xffff) {
    if (_DAT_14ab73aa0 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = (ulonglong)((uint)*(ushort *)((longlong)param_1 + 0x74) * _DAT_14ab73a88) +
              *(longlong *)
               (_DAT_14ab73aa0 + 0x8ab8 + (ulonglong)*(byte *)((longlong)param_1 + 0x7e) * 0x8ad0);
    }
    FUN_144dde700(lVar4);
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

