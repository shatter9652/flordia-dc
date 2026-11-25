// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14007b4d0  size: 329 bytes
// Name:    FUN_14007b4d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145366470, FUN_14007b620
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14007b4d0(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 auVar4 [64];
  
  *(byte *)(param_1 + 0x1a7) = *(byte *)(param_1 + 0x1a7) & 0xc0 | *(byte *)(param_2 + 0x77) >> 4;
  *(undefined1 *)(param_1 + 0x1a6) = *(undefined1 *)(param_2 + 0x75);
  lVar2 = FUN_145366470(*(undefined4 *)(param_2 + 0x70));
  if (lVar2 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (undefined4)((ulonglong)(lVar2 - _DAT_14a9246e8) / 0x868);
  }
  *(undefined4 *)(param_1 + 0x19c) = uVar1;
  *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_2 + 0x5c);
  *(undefined4 *)(param_1 + 0xd4) = 0;
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    func_0x000144d9c130();
  }
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  uVar1 = func_0x000144ef0c60(0);
  auVar4 = ZEXT464(_DAT_145fc6ed8);
  FUN_14007b620(param_1,uVar1,_DAT_145fc6ed8,0,1);
  uVar1 = func_0x000144ef0c60(1);
  FUN_14007b620(param_1,uVar1,auVar4._0_8_,0,1);
  uVar1 = func_0x000144ef0c60(2);
  FUN_14007b620(param_1,uVar1,auVar4._0_8_,0,1);
  if (*(int *)(param_2 + 0x2c) != 0) {
    uVar3 = 0;
    do {
      FUN_14007b620(param_1,*(undefined4 *)(param_2 + 0x34 + uVar3 * 8),
                    *(undefined4 *)(param_2 + 0x30 + uVar3 * 8),0,0);
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_2 + 0x2c));
  }
  return;
}

