// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140027c40  size: 277 bytes
// Name:    FUN_140027c40
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140026bd0, FUN_140026890, FUN_140026b10, FUN_14505ef20, FUN_140027d80
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140027c40(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  char cVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [88];
  
  *param_3 = 0xffffffff;
  puVar2 = (undefined8 *)param_1[4];
  uVar6 = FUN_140026890(puVar2);
  cVar4 = FUN_140026bd0(param_2,*puVar2);
  if (cVar4 == '\0') {
    cVar4 = FUN_140026b10(param_2,*(undefined8 *)param_1[4]);
    if (cVar4 != '\0') {
      *param_3 = 0xfffffffd;
    }
  }
  else {
    (**(code **)(*param_1 + 0x138))(param_1,auStack_98);
    FUN_14505ef20(auStack_98,auStack_a8);
    uVar7 = (**(code **)(*param_1 + 0x140))(param_1);
    uVar1 = *(undefined4 *)(param_2 + 0x18);
    lVar3 = param_1[6];
    uVar5 = func_0x00014003a5f0((int)param_1[5]);
    func_0x000140027d60(uVar6,uVar5,(int)lVar3,uVar7);
    func_0x000144e46ba0(param_1[4],auStack_88);
    FUN_140027d80(uVar6,uVar1,auStack_88,auStack_98);
    func_0x000144e46ba0(param_1[4],auStack_88);
    FUN_140027d80(uVar6,uVar1,auStack_88,auStack_a8);
  }
  return;
}

