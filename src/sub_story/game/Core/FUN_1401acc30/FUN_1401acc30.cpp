// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401acc30  size: 189 bytes
// Name:    FUN_1401acc30
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1401acc30(longlong param_1,float param_2,float param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  if (*(longlong **)(param_1 + 0x18) != (longlong *)0x0) {
    fVar6 = 0.0;
    if (0.0 < *(float *)(param_1 + 0x10)) {
      fVar4 = (float)(**(code **)(**(longlong **)(param_1 + 0x18) + 0x20))();
      fVar5 = (float)(**(code **)(**(longlong **)(param_1 + 0x18) + 0x20))();
      uVar1 = *(ulonglong *)(param_1 + 0x20);
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar1;
      auVar7 = vhaddps_avx(auVar7,auVar7);
      fVar3 = auVar7._0_4_ + *(float *)(param_1 + 0x28);
      if ((fVar6 < fVar3) &&
         (fVar6 = (fVar4 * param_3 - param_2 * fVar5) / *(float *)(param_1 + 0x10), fVar6 < fVar3))
      {
        fVar6 = fVar6 / fVar3;
        auVar8._0_4_ = fVar6 * (float)uVar1;
        auVar8._4_4_ = fVar6 * (float)(uVar1 >> 0x20);
        auVar8._8_4_ = fVar6 * 0.0;
        auVar8._12_4_ = fVar6 * 0.0;
        uVar2 = vmovlps_avx(auVar8);
        *(undefined8 *)(param_1 + 0x20) = uVar2;
        *(float *)(param_1 + 0x28) = fVar6 * *(float *)(param_1 + 0x28);
      }
    }
  }
  return;
}

