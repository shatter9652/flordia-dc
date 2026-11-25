// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140185570  size: 341 bytes
// Name:    FUN_140185570
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_140185570(undefined8 *param_1,longlong param_2,longlong *param_3,undefined1 param_4,
             undefined8 *param_5,undefined2 param_6,undefined8 param_7)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  auVar6._0_12_ = ZEXT812(0);
  auVar6._12_4_ = 0;
  *(undefined4 *)(param_1 + 1) = 1;
  param_1[4] = 0;
  *(undefined1 (*) [16])(param_1 + 2) = auVar6;
  *param_1 = &UNK_146597b40;
  if (param_2 != 0) {
    func_0x00014503e5b0(param_2);
  }
  param_1[5] = param_2;
  param_1[6] = param_7;
  param_1[7] = *param_5;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x44) = param_4;
  *(undefined1 *)((longlong)param_1 + 0x45) = 1;
  *(undefined2 *)((longlong)param_1 + 0x46) = param_6;
  *(undefined1 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  param_1[0xb] = param_3;
  *param_1 = &UNK_14658da80;
  *(undefined1 (*) [32])(param_1 + 0xc) = ZEXT1232(ZEXT812(0));
  *(undefined1 (*) [32])(param_1 + 0xf) = ZEXT1232(ZEXT812(0));
  *(undefined4 *)((longlong)param_1 + 0x74) = 0xfffffff;
  *(undefined4 *)(param_1 + 0xf) = 0x80000000;
  uVar1 = (**(code **)(*param_3 + 8))(param_3);
  uVar2 = func_0x0001406fedb0(uVar1);
  *(char *)((longlong)param_1 + 0x45) = (char)uVar2;
  if (uVar2 < 2) {
    puVar3 = param_1 + 0xd;
  }
  else {
    puVar3 = (undefined8 *)
             (**(code **)(*_DAT_14abcc310 + 0x70))(_DAT_14abcc310,param_1,uVar2 * 0x30,0);
    uVar2 = (uint)*(byte *)((longlong)param_1 + 0x45);
  }
  param_1[0xc] = puVar3;
  if ((char)uVar2 != '\0') {
    auVar7._0_12_ = ZEXT812(0);
    auVar7._12_4_ = 0;
    lVar4 = 0;
    uVar5 = 0;
    do {
      *(undefined8 *)((longlong)puVar3 + lVar4) = 0;
      *(undefined4 *)((longlong)puVar3 + lVar4 + 8) = 0;
      uVar5 = uVar5 + 1;
      puVar3 = (undefined8 *)param_1[0xc];
      *(undefined8 *)((longlong)puVar3 + lVar4 + 0x28) = 0;
      *(undefined1 (*) [16])((longlong)puVar3 + lVar4 + 0x18) = auVar7;
      lVar4 = lVar4 + 0x30;
    } while (uVar5 < *(byte *)((longlong)param_1 + 0x45));
  }
  func_0x0001406fefd0(param_1);
  return param_1;
}

