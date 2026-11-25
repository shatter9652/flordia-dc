// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140085ec0  size: 40 bytes
// Name:    FUN_140085ec0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140128c60
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140085ec0(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uStack_a0;
  undefined1 auStack_98 [88];
  undefined8 uStack_40;
  
  uStack_40 = 0x140085ed4;
  iVar1 = FUN_140128c60(param_3);
  FUN_14037d8d0();
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 1;
  uVar2 = func_0x000144fd53c0();
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar2;
  uVar5 = 0;
  uVar3 = (uint)((ulonglong)(param_2 - *_DAT_14abbe8c8) / (ulonglong)*(uint *)(_DAT_14abbe8c8 + 1))
          & 0x1ffff;
  *(uint *)((longlong)param_1 + 0x1c) =
       *(uint *)(_DAT_14abbe8c8[5] + (ulonglong)uVar3 * 4) & 0xfffe0000 | uVar3;
  if (*(longlong *)(param_2 + 0x20) != 0) {
    uVar5 = *(undefined8 *)(*(longlong *)(param_2 + 0x20) + 0x60);
  }
  *param_1 = uVar5;
  FUN_14037d920(auStack_98,param_2);
  lVar4 = func_0x00014037d870(auStack_98);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(lVar4 + 0x18);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)(lVar4 + 0x14);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(lVar4 + 0x20);
  *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)(lVar4 + 0x28);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(lVar4 + 0x2c);
  if (*(longlong *)(param_2 + 0x20) == 0) {
    uStack_a0 = 0;
  }
  else {
    uStack_a0 = *(undefined8 *)(*(longlong *)(param_2 + 0x20) + 0x60);
  }
  uVar2 = func_0x000144dd1920(&uStack_a0,8,*(undefined4 *)(param_1 + 6));
  *(undefined4 *)(param_1 + 6) = uVar2;
  if (iVar1 < 1) {
    lVar4 = func_0x000144ec8c40(*(undefined4 *)(param_2 + 0x9c));
    if (lVar4 != 0) {
      lVar4 = func_0x00014037d880(*(undefined8 *)(lVar4 + 8));
      if (lVar4 != 0) {
        *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 2;
        func_0x000140198500(*(undefined8 *)(lVar4 + 0x80),param_1 + 7);
      }
    }
  }
  *(uint *)(param_1 + 6) =
       ((uint)(*(int *)(param_1 + 6) * 9) >> 0xb ^ *(int *)(param_1 + 6) * 9) * 0x8001;
  lVar4 = FUN_14542fc00(*(undefined4 *)(param_2 + 0x9c));
  *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)(lVar4 + 0x18);
  return;
}

