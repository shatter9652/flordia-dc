// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14000eac0  size: 387 bytes
// Name:    FUN_14000eac0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144eab9e0, FUN_140645130, FUN_140644ef0, FUN_140644920, FUN_140644b10, FUN_145480e30
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14000eac0(longlong param_1,longlong param_2,uint param_3,undefined8 param_4)

{
  undefined4 uVar1;
  ulonglong uVar2;
  undefined1 uStack_dd;
  undefined4 uStack_dc;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [8];
  undefined4 auStack_c8 [4];
  undefined8 uStack_b8;
  longlong lStack_b0;
  ulonglong uStack_a8;
  undefined4 *puStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_8c;
  uint uStack_88;
  undefined1 uStack_84;
  undefined8 **ppuStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  undefined1 *puStack_50;
  undefined4 *puStack_48;
  undefined4 *puStack_40;
  
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    uStack_d8 = param_4;
    uVar1 = func_0x000144eac4f0(*(undefined1 *)(*(longlong *)(param_1 + 0xa0) + 0xf0));
    FUN_140644b10(auStack_d0,uVar1);
    FUN_140644ef0();
    FUN_145480e30(*(undefined8 *)(param_1 + 0xa0));
    func_0x000144e96af0(&uStack_8c);
    uStack_8c = (undefined4)param_4;
    uStack_dd = (undefined1)((ulonglong)param_4 >> 0x20);
    uStack_88 = (uint)((ulonglong)param_4 >> 0x20) & 0xff;
    auStack_c8[0] = 4;
    uStack_dc = 0;
    lStack_b0 = param_1 + 0x20;
    uStack_84 = (char)((ulonglong)param_4 >> 0x28) != '\0';
    uStack_b8 = *(undefined8 *)(param_1 + 0x10);
    uStack_a8 = (ulonglong)param_3;
    uVar2 = (ulonglong)*(byte *)(*(longlong *)(param_2 + 0x98) + 0xc0 + (ulonglong)DAT_14a95df30);
    if (uVar2 == 0xff) {
      uStack_98 = 0;
    }
    else {
      uStack_98 = *(undefined8 *)(*(longlong *)(param_2 + 0x98) + 0x10 + uVar2 * 8);
    }
    puStack_60 = &uStack_98;
    ppuStack_80 = &puStack_60;
    puStack_58 = &uStack_d8;
    puStack_50 = &uStack_dd;
    puStack_48 = auStack_c8;
    puStack_40 = &uStack_dc;
    pcStack_78 = FUN_1448b4160;
    puStack_70 = &UNK_1422e66b0;
    puStack_68 = &SUB_140004380;
    puStack_a0 = &uStack_8c;
    FUN_144eab9e0(*(undefined8 *)(param_1 + 0xa0));
    FUN_140645130();
    FUN_140644920(auStack_d0);
  }
  return;
}

