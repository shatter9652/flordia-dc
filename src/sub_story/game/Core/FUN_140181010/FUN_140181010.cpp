// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140181010  size: 82 bytes
// Name:    FUN_140181010
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1402b8500
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140181010(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auVar5 [16];
  undefined8 *puVar6;
  undefined1 auVar7 [64];
  undefined1 extraout_var [56];
  
  *param_1 = &UNK_146632a00;
  plVar1 = (longlong *)param_1[0x19];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  if (param_1[0x18] != 0) {
    FUN_1402b8500(param_1[0x18]);
  }
  *param_1 = &UNK_146632880;
  if ((undefined8 *)param_1[0x16] != (undefined8 *)0x146d328f8) {
    FUN_1402b8320(*(undefined8 *)param_1[0x16]);
  }
  if (param_1[0x13] != 0) {
    func_0x00014503e5b0();
    uVar2 = param_1[0x13];
    FUN_140181f60(uVar2,param_1 + 0xe);
    func_0x00014503e5c0(uVar2);
    if (param_1[0x13] != 0) {
      func_0x00014503e5c0();
    }
  }
  auVar7._0_8_ = (**(code **)(*(longlong *)param_1[0x11] + 0x10))
                           ((longlong *)param_1[0x11],param_1[0x12]);
  auVar7._8_56_ = extraout_var;
  *param_1 = &UNK_1466327a0;
  if (param_1[2] == 0) {
    lVar3 = param_1[6];
    if (lVar3 != 0) {
      *(undefined8 *)(lVar3 + 0x40) = 0;
      *(byte *)(lVar3 + 0x4a) = *(byte *)(lVar3 + 0x4a) & 0xef;
    }
  }
  else {
    lVar3 = param_1[3];
    auVar5 = vpcmpeqd_avx(auVar7._0_16_,auVar7._0_16_);
    *(longlong *)(param_1[2] + 0x18) = lVar3;
    *(undefined8 *)(lVar3 + 0x10) = param_1[2];
    *(undefined1 (*) [16])(param_1 + 2) = auVar5;
  }
  if (param_1[8] != 0) {
    FUN_140182870(param_1[8],0);
  }
  puVar6 = (undefined8 *)param_1[7];
  while (puVar6 != (undefined8 *)0x0) {
    puVar4 = (undefined8 *)puVar6[1];
    (**(code **)*puVar6)(puVar6,1);
    puVar6 = puVar4;
  }
  return;
}

