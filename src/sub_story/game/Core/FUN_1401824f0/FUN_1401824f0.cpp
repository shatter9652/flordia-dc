// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401824f0  size: 105 bytes
// Name:    FUN_1401824f0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1401824f0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auVar6 [16];
  undefined1 in_ZMM0 [64];
  undefined1 extraout_var [56];
  undefined1 extraout_var_00 [56];
  undefined1 auVar7 [64];
  
  *param_1 = &UNK_146632990;
  puVar2 = (undefined8 *)param_1[0xf];
  while (puVar2 != param_1 + 0xc) {
    lVar3 = puVar2[3];
    *(longlong *)(puVar2[2] + 0x18) = lVar3;
    *(undefined8 *)(lVar3 + 0x10) = puVar2[2];
    puVar2[3] = 0xffffffffffffffff;
    puVar2[2] = 0;
    puVar2[6] = 0;
    in_ZMM0._0_8_ = (**(code **)*puVar2)(puVar2,1);
    in_ZMM0._8_56_ = extraout_var;
    puVar2 = (undefined8 *)param_1[0xf];
  }
  auVar6 = in_ZMM0._0_16_;
  *param_1 = &UNK_146632810;
  if (param_1 + 0xc != (longlong *)param_1[0xf]) {
    auVar7 = ZEXT1264(ZEXT812(0));
    plVar5 = (longlong *)param_1[0xf];
    do {
      plVar4 = (longlong *)plVar5[3];
      plVar5[6] = 0;
      *(undefined1 (*) [16])(plVar5 + 2) = auVar7._0_16_;
      if (plVar5[4] != 0) {
        in_ZMM0._0_8_ = (**(code **)(*plVar5 + 0x18))(plVar5);
        in_ZMM0._8_56_ = extraout_var_00;
      }
      auVar6 = in_ZMM0._0_16_;
      plVar5 = plVar4;
    } while (param_1 + 0xc != plVar4);
  }
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
    auVar6 = vpcmpeqd_avx(auVar6,auVar6);
    *(longlong *)(param_1[2] + 0x18) = lVar3;
    *(undefined8 *)(lVar3 + 0x10) = param_1[2];
    *(undefined1 (*) [16])(param_1 + 2) = auVar6;
  }
  if (param_1[8] != 0) {
    FUN_140182870(param_1[8],0);
  }
  puVar2 = (undefined8 *)param_1[7];
  while (puVar2 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)puVar2[1];
    (**(code **)*puVar2)(puVar2,1);
    puVar2 = puVar1;
  }
  return;
}

