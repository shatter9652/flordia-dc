// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400cedf0  size: 453 bytes
// Name:    FUN_1400cedf0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400d04b0, FUN_1400d2070, FUN_144f64050, FUN_1400dd220
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400cedf0(longlong param_1,longlong param_2,undefined4 param_3,longlong param_4,
                  undefined4 param_5)

{
  undefined8 uVar1;
  undefined1 uVar2;
  float fVar3;
  undefined4 uVar4;
  undefined1 auVar5 [16];
  undefined1 extraout_var [56];
  undefined1 auVar6 [64];
  undefined1 auVar7 [64];
  undefined1 auVar8 [64];
  undefined1 (*pauVar9) [16];
  undefined1 auStack_d8 [16];
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [16];
  undefined1 aauStack_88 [4] [16];
  
  auVar6._0_8_ = func_0x000144f63fd0(*(undefined4 *)(param_1 + 0x94));
  auVar6._8_56_ = extraout_var;
  auVar5 = vinsertps_avx(auVar6._0_16_,auVar6._0_16_,0x2b);
  auVar6 = ZEXT1664(auVar5);
  fVar3 = (float)FUN_1400d04b0(*(undefined4 *)(param_1 + 0x98),param_2);
  auVar5 = ZEXT416((uint)(fVar3 - *(float *)(param_2 + 0xe8)));
  auVar5 = vinsertps_avx(auVar5,auVar5,0x2b);
  auVar7 = ZEXT1664(auVar5);
  uVar4 = func_0x0001400d01e0(param_2,param_3);
  auVar8 = ZEXT1664(CONCAT412(uVar4,CONCAT48(uVar4,CONCAT44(uVar4,uVar4))));
  if ((*(byte *)(param_1 + 0x91) & 4) != 0) {
    FUN_144f64050(param_1 + 0x2a0,param_5);
  }
  pauVar9 = aauStack_88;
  aauStack_88[0] = auVar8._0_16_;
  auStack_98 = auVar6._0_16_;
  auStack_a8 = auVar7._0_16_;
  uVar1 = func_0x000144f63b60(param_1 + 0x2a0,param_5,0);
  FUN_1400d2070(param_1,param_2,param_4,uVar1,auStack_a8,auStack_98,pauVar9);
  aauStack_88[0] = auVar8._0_16_;
  auStack_98 = auVar6._0_16_;
  auStack_a8 = auVar7._0_16_;
  uVar1 = func_0x000144f63b60(param_1 + 0x2a0,param_5,1);
  FUN_1400d2070(param_1,param_2,param_4 + 0x30,uVar1,auStack_a8,auStack_98,pauVar9);
  uVar4 = (undefined4)((ulonglong)pauVar9 >> 0x20);
  auStack_d8 = auVar6._0_16_;
  auStack_c8 = auVar7._0_16_;
  auStack_b8 = auVar8._0_16_;
  if ((*(byte *)(param_2 + 0x141) & 4) == 0) {
    uVar2 = func_0x0001400ca280(param_2);
    auStack_d8 = auVar6._0_16_;
    auStack_c8 = auVar7._0_16_;
    auStack_b8 = auVar8._0_16_;
  }
  else {
    uVar2 = 1;
  }
  FUN_1400dd220(param_1,param_2,param_4,auStack_d8,auStack_c8,auStack_b8,CONCAT44(uVar4,param_5),
                uVar2);
  return;
}

