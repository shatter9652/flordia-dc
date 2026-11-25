// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140134f30  size: 490 bytes
// Name:    FUN_140134f30
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140135120
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140134f30(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined2 param_4)

{
  undefined2 uVar1;
  undefined1 uVar2;
  undefined4 uStack_e;
  undefined2 uStack_a;
  
  uVar2 = (undefined1)((ushort)param_4 >> 8);
  FUN_140135120();
  if (*param_1 == 0) {
    uVar1 = CONCAT11(uVar2,1);
    uStack_e = 0xffffffff;
    uStack_a = 0xffff;
    (*(code *)param_1[1])(_DAT_14a92d4b0,&uStack_e,1,uVar1);
    uVar2 = (undefined1)((ushort)uVar1 >> 8);
  }
  else {
    uVar2 = 0;
    uStack_e = 0xffffffff;
    uStack_a = 0xffff;
    (*(code *)param_1[1])();
  }
  if (*param_1 == 0) {
    uVar1 = CONCAT11(uVar2,1);
    uStack_e = 0xffffffff;
    uStack_a = 0xffff;
    (*(code *)param_1[1])(_DAT_14a92d4b8,&uStack_e,1,uVar1);
    uVar2 = (undefined1)((ushort)uVar1 >> 8);
  }
  else {
    uVar2 = 0;
    uStack_e = 0xffffffff;
    uStack_a = 0xffff;
    (*(code *)param_1[1])();
  }
  if (*param_1 == 0) {
    uVar1 = CONCAT11(uVar2,1);
    uStack_e = 0xffffffff;
    uStack_a = 0xffff;
    (*(code *)param_1[1])(_DAT_14a92c430,&uStack_e,1,uVar1);
    uVar2 = (undefined1)((ushort)uVar1 >> 8);
  }
  else {
    uVar2 = 0;
    uStack_e = 0xffffffff;
    uStack_a = 0xffff;
    (*(code *)param_1[1])();
  }
  if (*param_1 == 0) {
    uVar1 = CONCAT11(uVar2,1);
    uStack_e = 0xffffffff;
    uStack_a = 0xffff;
    (*(code *)param_1[1])(_DAT_14a92d450,&uStack_e,1,uVar1);
    uVar2 = (undefined1)((ushort)uVar1 >> 8);
  }
  else {
    uVar2 = 0;
    uStack_e = 0xffffffff;
    uStack_a = 0xffff;
    (*(code *)param_1[1])();
  }
  if (*param_1 == 0) {
    uStack_e = 0xffffffff;
    uStack_a = 0xffff;
    (*(code *)param_1[1])(_DAT_14a9253c8,&uStack_e,1,CONCAT11(uVar2,1));
  }
  else {
    uStack_e = 0xffffffff;
    uStack_a = 0xffff;
    (*(code *)param_1[1])();
  }
  return;
}

