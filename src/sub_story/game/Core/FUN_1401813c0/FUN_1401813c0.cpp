// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401813c0  size: 148 bytes
// Name:    FUN_1401813c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1402b8320, FUN_140181f60
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1401813c0(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auVar4 [16];
  undefined8 *puVar5;
  undefined1 auVar6 [64];
  undefined1 extraout_var [56];
  
  *param_1 = &UNK_146632880;
  if ((undefined8 *)param_1[0x16] != (undefined8 *)0x146d328f8) {
    FUN_1402b8320(*(undefined8 *)param_1[0x16]);
  }
  if (param_1[0x13] != 0) {
    func_0x00014503e5b0();
    uVar1 = param_1[0x13];
    FUN_140181f60(uVar1,param_1 + 0xe);
    func_0x00014503e5c0(uVar1);
    if (param_1[0x13] != 0) {
      func_0x00014503e5c0();
    }
  }
  auVar6._0_8_ = (**(code **)(*(longlong *)param_1[0x11] + 0x10))
                           ((longlong *)param_1[0x11],param_1[0x12]);
  auVar6._8_56_ = extraout_var;
  *param_1 = &UNK_1466327a0;
  if (param_1[2] == 0) {
    lVar2 = param_1[6];
    if (lVar2 != 0) {
      *(undefined8 *)(lVar2 + 0x40) = 0;
      *(byte *)(lVar2 + 0x4a) = *(byte *)(lVar2 + 0x4a) & 0xef;
    }
  }
  else {
    lVar2 = param_1[3];
    auVar4 = vpcmpeqd_avx(auVar6._0_16_,auVar6._0_16_);
    *(longlong *)(param_1[2] + 0x18) = lVar2;
    *(undefined8 *)(lVar2 + 0x10) = param_1[2];
    *(undefined1 (*) [16])(param_1 + 2) = auVar4;
  }
  if (param_1[8] != 0) {
    FUN_140182870(param_1[8],0);
  }
  puVar5 = (undefined8 *)param_1[7];
  while (puVar5 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)puVar5[1];
    (**(code **)*puVar5)(puVar5,1);
    puVar5 = puVar3;
  }
  return;
}

