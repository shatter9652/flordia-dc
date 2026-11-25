// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140190430  size: 547 bytes
// Name:    FUN_140190430
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1452b3070, FUN_145213ee0, FUN_1404a7310, FUN_140190660, FUN_14040a820, FUN_14018f470
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140190430(longlong param_1,char param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined8 uStack_3e0;
  int aiStack_3d8 [2];
  int aiStack_3d0 [2];
  ulonglong auStack_3c8 [111];
  undefined1 auStack_4e [22];
  undefined1 uStack_38;
  byte bStack_32;
  
  if ((*(char *)(param_1 + 0x64c) == '\x01') && (param_2 == '\0')) {
    if (*(char *)(param_1 + 0xad8) == '\x01') {
      FUN_140190660(param_1);
      *(undefined4 *)(param_1 + 0x5a8) = 4;
    }
    if (*(char *)(param_1 + 0x59c) != '\0') {
      return;
    }
    uStack_3e0 = CONCAT44(0xffffffff,_DAT_14ab4344c);
    lVar1 = func_0x000144da31b0(param_1 + 0x5a0);
    if (((lVar1 == 0) && (*(int *)(param_1 + 0x5a8) != 0)) &&
       (lVar1 = FUN_14018f470(*(undefined8 *)(param_1 + 0x40)), lVar1 != 0)) {
      switch(*(undefined4 *)(param_1 + 0x5a8)) {
      case 1:
        func_0x0001445469a0(*(undefined8 *)(*(longlong *)(lVar1 + 0x48) + 0x10),&uStack_3e0);
        break;
      case 2:
        func_0x0001445469d0(*(undefined8 *)(*(longlong *)(lVar1 + 0x48) + 0x10),&uStack_3e0);
        break;
      case 3:
        func_0x000144546a00(*(undefined8 *)(*(longlong *)(lVar1 + 0x48) + 0x10),&uStack_3e0);
        break;
      case 4:
        uStack_3e0 = (ulonglong)_DAT_14ab4344c | 0xffffffff00000000;
      }
    }
    uVar3 = (ulonglong)_DAT_14ab4344c;
    FUN_145213ee0(&uStack_3e0,auStack_3c8);
    if ((int)auStack_3c8[0] - 1U < 0xfffffffd) {
      auStack_3c8[0] = uVar3 | 0xffffffff00000000;
      FUN_145213ee0(auStack_3c8,aiStack_3d0);
      FUN_145213ee0(&uStack_3e0,aiStack_3d8);
      if (aiStack_3d0[0] != aiStack_3d8[0]) {
        FUN_1452b3070(auStack_3c8);
        bStack_32 = bStack_32 | 0x80;
        uStack_38 = 0;
        FUN_1404a7310(param_1,uStack_3e0,param_1 + 0x5a0,auStack_3c8,1);
        func_0x000144de1380(auStack_4e);
      }
    }
    if ((*(uint *)(param_1 + 0x5a8) & 0xfffffffe) == 2) {
      uVar2 = func_0x000144da3240(*(undefined8 *)(param_1 + 0x40));
      FUN_14040a820(uVar2,4,0);
      *(undefined1 *)(param_1 + 0x59c) = 1;
      return;
    }
  }
  else {
    FUN_140190660(param_1);
    *(undefined1 *)(param_1 + 0x59c) = 0;
  }
  *(undefined4 *)(param_1 + 0x5a8) = 0;
  return;
}

