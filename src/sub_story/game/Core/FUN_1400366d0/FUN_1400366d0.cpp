// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400366d0  size: 605 bytes
// Name:    FUN_1400366d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140037930, FUN_144e3e310, FUN_1404e7310, FUN_144feae70
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400366d0(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 uStack_14;
  undefined2 uStack_10;
  undefined4 uStack_e;
  undefined2 uStack_a;
  
  lVar1 = FUN_144e3e310();
  if (*param_1 == 0) {
    uStack_10 = *(undefined2 *)(lVar1 + 0x16);
    uStack_14 = *(undefined4 *)(lVar1 + 0x12);
    (*(code *)param_1[1])
              (*(undefined8 *)(lVar1 + 8),&uStack_14,
               CONCAT62((int6)((ulonglong)&uStack_14 >> 0x10),1),1);
  }
  else {
    uStack_10 = *(undefined2 *)(lVar1 + 0x16);
    uStack_14 = *(undefined4 *)(lVar1 + 0x12);
    (*(code *)param_1[1])();
  }
  lVar1 = FUN_140037930(0);
  if (*param_1 == 0) {
    uStack_10 = *(undefined2 *)(lVar1 + 0x16);
    uStack_14 = *(undefined4 *)(lVar1 + 0x12);
    (*(code *)param_1[1])
              (*(undefined8 *)(lVar1 + 8),&uStack_14,
               CONCAT62((int6)((ulonglong)&uStack_14 >> 0x10),1),1);
  }
  else {
    uStack_10 = *(undefined2 *)(lVar1 + 0x16);
    uStack_14 = *(undefined4 *)(lVar1 + 0x12);
    (*(code *)param_1[1])();
  }
  uVar2 = FUN_144feae70();
  if (*param_1 == 0) {
    uStack_14 = 0xffffffff;
    uStack_10 = 0xffff;
    (*(code *)param_1[1])(uVar2,&uStack_14,1,1);
  }
  else {
    uStack_14 = 0xffffffff;
    uStack_10 = 0xffff;
    (*(code *)param_1[1])(*param_1,uVar2,&uStack_14,1,1);
  }
  if (*param_1 == 0) {
    uStack_14 = 0xffffffff;
    uStack_10 = 0xffff;
    (*(code *)param_1[1])(_DAT_148d44b70,&uStack_14,1,1);
  }
  else {
    uStack_14 = 0xffffffff;
    uStack_10 = 0xffff;
    (*(code *)param_1[1])();
  }
  FUN_1404e7310(param_1);
  if (*param_1 == 0) {
    uStack_e = 0xffffffff;
    uStack_a = 0xffff;
    (*(code *)param_1[1])(_DAT_148562638,&uStack_e,5,0);
  }
  else {
    uStack_14 = 0xffffffff;
    uStack_10 = 0xffff;
    (*(code *)param_1[1])();
  }
  if (*param_1 == 0) {
    uStack_e = 0xffffffff;
    uStack_a = 0xffff;
    (*(code *)param_1[1])(_DAT_148562660,&uStack_e,5,0);
  }
  else {
    uStack_14 = 0xffffffff;
    uStack_10 = 0xffff;
    (*(code *)param_1[1])();
  }
  return;
}

