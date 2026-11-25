// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14004a900  size: 115 bytes
// Name:    FUN_14004a900
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14004a900(float *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  undefined1 in_ZMM1 [64];
  undefined1 auVar5 [16];
  undefined1 auVar6 [64];
  
  if (*(char *)(param_1 + 4) == '\x01') {
    fVar4 = *param_1;
    auVar6 = ZEXT1664(in_ZMM1._0_16_);
    fVar3 = (float)func_0x00014004a9b0(param_1[2],param_3);
    if (fVar3 * fVar4 < param_1[1]) {
      auVar6._0_4_ = -(auVar6._0_4_ * param_1[3]) + param_1[1];
      auVar1 = vmaxss_avx(auVar6._0_16_,ZEXT416((uint)(fVar3 * fVar4)));
      auVar5._0_12_ = ZEXT812(0);
      auVar5._12_4_ = 0;
      auVar2 = vminss_avx(ZEXT416((uint)*param_1),auVar1);
      auVar1 = vcmpss_avx(auVar1,auVar5,1);
      fVar4 = (float)(~auVar1._0_4_ & auVar2._0_4_);
      *(bool *)((longlong)param_1 + 0x11) = param_1[1] < fVar4;
      param_1[1] = fVar4;
      return;
    }
  }
  return;
}

