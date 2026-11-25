// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14002b730  size: 321 bytes
// Name:    FUN_14002b730
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14478dee0, FUN_14002af10
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_14002b730(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [16];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  cVar1 = *(char *)(*(longlong *)(param_1 + 0x88) + 0x1bd);
  if (cVar1 == '\x03') {
    lVar4 = *param_2;
    (**(code **)(lVar4 + 0x18))(param_2,auStack_78,&uStack_68);
    uStack_28 = uStack_68;
    uStack_20 = uStack_60;
    lVar2 = *(longlong *)(param_1 + 0x88);
    uStack_38 = *(undefined8 *)(lVar2 + 0x120);
    uStack_30 = *(undefined8 *)(lVar2 + 0x128);
    uVar3 = CONCAT71((int7)((ulonglong)lVar4 >> 8),*(undefined1 *)(lVar2 + 0x1c1)) &
            0xffffffffffffff02;
    FUN_14002af10(&uStack_88,*(undefined8 *)(param_1 + 0x10),&uStack_38,
                  CONCAT71((int7)(uVar3 >> 8),(byte)uVar3 >> 1),*(undefined4 *)(param_1 + 0x7c),
                  &uStack_28,*(undefined4 *)(param_1 + 0x80));
  }
  else {
    if (cVar1 != '\x05') {
      return 0;
    }
    lVar4 = *param_2;
    (**(code **)(lVar4 + 0x18))(param_2,auStack_78,&uStack_68);
    uStack_48 = uStack_68;
    uStack_40 = uStack_60;
    lVar2 = *(longlong *)(param_1 + 0x88);
    uStack_58 = *(undefined8 *)(lVar2 + 0x130);
    uStack_50 = *(undefined8 *)(lVar2 + 0x138);
    uVar3 = CONCAT71((int7)((ulonglong)lVar4 >> 8),*(undefined1 *)(lVar2 + 0x1c1)) &
            0xffffffffffffff02;
    FUN_14478dee0(&uStack_88,*(undefined8 *)(param_1 + 0x10),&uStack_58,
                  CONCAT71((int7)(uVar3 >> 8),(byte)uVar3 >> 1),*(undefined4 *)(param_1 + 0x7c),
                  &uStack_48,*(undefined4 *)(param_1 + 0x80));
  }
  *param_3 = uStack_88;
  param_3[1] = uStack_80;
  return 1;
}

