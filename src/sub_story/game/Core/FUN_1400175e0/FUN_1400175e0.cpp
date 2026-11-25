// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400175e0  size: 320 bytes
// Name:    FUN_1400175e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1406e1320, FUN_140c8b8e0, FUN_144dde700, FUN_145385d40
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400175e0(undefined8 *param_1)

{
  longlong lVar1;
  
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
      lVar1 = 0;
    }
    else {
      lVar1 = (ulonglong)((uint)*(ushort *)((longlong)param_1 + 0x72) * _DAT_14ab73a88) +
              *(longlong *)
               (_DAT_14ab73aa0 + 0x8ab8 + (ulonglong)*(byte *)((longlong)param_1 + 0x7e) * 0x8ad0);
    }
    FUN_144dde700(lVar1);
    *(undefined2 *)((longlong)param_1 + 0x72) = 0xffff;
  }
  if (*(ushort *)((longlong)param_1 + 0x74) != 0xffff) {
    if (_DAT_14ab73aa0 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = (ulonglong)((uint)*(ushort *)((longlong)param_1 + 0x74) * _DAT_14ab73a88) +
              *(longlong *)
               (_DAT_14ab73aa0 + 0x8ab8 + (ulonglong)*(byte *)((longlong)param_1 + 0x7e) * 0x8ad0);
    }
    FUN_144dde700(lVar1);
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

