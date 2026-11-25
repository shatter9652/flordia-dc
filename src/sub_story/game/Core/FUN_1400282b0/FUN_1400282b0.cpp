// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400282b0  size: 211 bytes
// Name:    FUN_1400282b0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400282b0(longlong *param_1,ulonglong param_2)

{
  int *piVar1;
  undefined1 auVar2 [16];
  char cVar3;
  undefined8 *puVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [64];
  ulonglong uVar7;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 extraout_var [56];
  
  if ((~param_2 & 0x7ff0000000000000) != 0 || (param_2 & 0xfffffffffffff) == 0) {
    uVar7 = 0;
    if ((param_2 & 0x7fffffffffffffff) != 0x7ff0000000000000) {
      uVar7 = param_2;
    }
    (**(code **)(*param_1 + 0x1b0))(param_1,0);
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x18))(param_1);
    uStack_48 = *puVar4;
    uStack_40 = *(undefined4 *)(puVar4 + 1);
    uStack_38 = puVar4[2];
    uStack_30 = puVar4[3];
    piVar1 = (int *)param_1[10];
    auVar6._0_8_ = func_0x00014534a100(uVar7);
    auVar6._8_56_ = extraout_var;
    auVar2 = vroundsd_avx(auVar6._0_16_,auVar6._0_16_,9);
    auVar5._0_4_ = (int)auVar2._0_8_;
    auVar5._4_4_ = (int)auVar2._8_8_;
    auVar5._8_8_ = 0;
    auVar5 = vcvtdq2ps_avx(auVar5);
    *piVar1 = (int)auVar2._0_8_;
    uStack_3c = auVar5._0_4_;
    cVar3 = func_0x000140623b80(&uStack_48);
    if (cVar3 != '\0') {
      (**(code **)(*param_1 + 0x20))(param_1,&uStack_48);
    }
  }
  return;
}

