// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400360a0  size: 1029 bytes
// Name:    FUN_1400360a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e3abd0, FUN_144e3ac00
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400360a0(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  ushort in_stack_ffffffffffffffd8;
  undefined2 uVar5;
  undefined1 uVar7;
  ushort uVar6;
  undefined4 uStack_10;
  undefined2 uStack_c;
  
  if (*param_1 == 0) {
    uStack_10 = 0xffffffff;
    uStack_c = 0xffff;
    (*(code *)param_1[1])(_DAT_147c177f0,&uStack_10,5,0);
  }
  else {
    in_stack_ffffffffffffffd8 = in_stack_ffffffffffffffd8 & 0xff00;
    uStack_10 = 0xffffffff;
    uStack_c = 0xffff;
    (*(code *)param_1[1])();
  }
  if (*param_1 == 0) {
    uStack_10 = 0xffffffff;
    uStack_c = 0xffff;
    (*(code *)param_1[1])(_DAT_147c177e0,&uStack_10,5,0);
  }
  else {
    in_stack_ffffffffffffffd8 = in_stack_ffffffffffffffd8 & 0xff00;
    uStack_10 = 0xffffffff;
    uStack_c = 0xffff;
    (*(code *)param_1[1])();
  }
  uVar7 = (undefined1)(in_stack_ffffffffffffffd8 >> 8);
  if (_DAT_147c17528 != 0) {
    if (_DAT_147c17530 != 0) {
      if (param_1[4] == 0) {
        uVar6 = in_stack_ffffffffffffffd8 & 0xff00;
        (*(code *)param_1[5])
                  (_DAT_147c17528,_DAT_147c17530,
                   CONCAT62((uint6)(ushort)((uint)_DAT_147c17530 >> 0x10),1),5,uVar6);
        uVar7 = (undefined1)(uVar6 >> 8);
      }
      else {
        uVar7 = 0;
        (*(code *)param_1[5])();
      }
    }
  }
  puVar4 = (undefined4 *)(_DAT_1485642e0 + 0x12);
  if (*param_1 == 0) {
    uStack_c = *(undefined2 *)(_DAT_1485642e0 + 0x16);
    uStack_10 = *puVar4;
    (*(code *)param_1[1])
              (*(undefined8 *)(_DAT_1485642e0 + 8),&uStack_10,1,
               CONCAT71((int7)((ulonglong)puVar4 >> 8),1));
  }
  else {
    uStack_c = *(undefined2 *)(_DAT_1485642e0 + 0x16);
    uStack_10 = *puVar4;
    (*(code *)param_1[1])();
  }
  cVar1 = func_0x000144e3abc0();
  if (cVar1 != '\0') {
    if (*param_1 == 0) {
      uStack_c = *(undefined2 *)(_DAT_14855f508 + 0x16);
      uStack_10 = *(undefined4 *)(_DAT_14855f508 + 0x12);
      (*(code *)param_1[1])(*(undefined8 *)(_DAT_14855f508 + 8),&uStack_10,5,0);
    }
    else {
      uStack_c = *(undefined2 *)(_DAT_14855f508 + 0x16);
      uStack_10 = *(undefined4 *)(_DAT_14855f508 + 0x12);
      (*(code *)param_1[1])();
    }
    lVar2 = func_0x0001450cf1d0();
    if (*param_1 == 0) {
      uStack_c = *(undefined2 *)(lVar2 + 0x16);
      uStack_10 = *(undefined4 *)(lVar2 + 0x12);
      (*(code *)param_1[1])
                (*(undefined8 *)(lVar2 + 8),&uStack_10,
                 CONCAT62((int6)((ulonglong)&uStack_10 >> 0x10),1),0);
    }
    else {
      uStack_c = *(undefined2 *)(lVar2 + 0x16);
      uStack_10 = *(undefined4 *)(lVar2 + 0x12);
      (*(code *)param_1[1])();
    }
  }
  if (_DAT_14ab1a598 != 0) {
    if (*param_1 == 0) {
      uStack_10 = 0xffffffff;
      uStack_c = 0xffff;
      (*(code *)param_1[1])(_DAT_14ab1a598,&uStack_10,1,1);
    }
    else {
      uStack_10 = 0xffffffff;
      uStack_c = 0xffff;
      (*(code *)param_1[1])();
    }
  }
  if (_DAT_14aaf6b68 != 0) {
    puVar4 = (undefined4 *)(_DAT_14aaf6b68 + 0x18);
    if (*param_1 == 0) {
      uStack_c = *(undefined2 *)(_DAT_14aaf6b68 + 0x1c);
      uStack_10 = *puVar4;
      (*(code *)param_1[1])
                (*(undefined8 *)(_DAT_14aaf6b68 + 8),&uStack_10,1,
                 CONCAT71((int7)((ulonglong)puVar4 >> 8),1));
    }
    else {
      uStack_c = *(undefined2 *)(_DAT_14aaf6b68 + 0x1c);
      uStack_10 = *puVar4;
      (*(code *)param_1[1])();
    }
  }
  lVar2 = FUN_144e3abd0();
  if (lVar2 != 0) {
    uVar3 = FUN_144e3abd0();
    if (*param_1 == 0) {
      uStack_10 = 0xffffffff;
      uStack_c = 0xffff;
      (*(code *)param_1[1])(uVar3,&uStack_10,1,1);
    }
    else {
      uVar5 = CONCAT11(uVar7,1);
      uStack_10 = 0xffffffff;
      uStack_c = 0xffff;
      (*(code *)param_1[1])(*param_1,uVar3,&uStack_10,1,uVar5);
      uVar7 = (undefined1)((ushort)uVar5 >> 8);
    }
  }
  lVar2 = FUN_144e3ac00();
  if (lVar2 != 0) {
    uVar3 = FUN_144e3ac00();
    if (*param_1 == 0) {
      uStack_10 = 0xffffffff;
      uStack_c = 0xffff;
      (*(code *)param_1[1])(uVar3,&uStack_10,1,1);
    }
    else {
      uStack_10 = 0xffffffff;
      uStack_c = 0xffff;
      (*(code *)param_1[1])(*param_1,uVar3,&uStack_10,1,CONCAT11(uVar7,1));
    }
  }
  return;
}

