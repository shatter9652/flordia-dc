// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14004a750  size: 144 bytes
// Name:    FUN_14004a750
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e68650
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_14004a750(uint param_1,uint *param_2)

{
  uint *puVar1;
  float fVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [64];
  float fVar6;
  uint uVar7;
  float fVar8;
  
  if (param_1 == 0) {
    uVar3 = 0;
  }
  else {
    fVar6 = 0.0;
    fVar8 = 0.0;
    puVar1 = param_2 + (ulonglong)param_1 * 5;
    do {
      auVar5 = ZEXT464(*param_2);
      fVar2 = (float)FUN_144e68650(*param_2,param_2[1]);
      fVar6 = fVar2 + fVar6;
      uVar7 = 0;
      fVar2 = (float)func_0x000144e68690(auVar5._0_8_);
      fVar8 = fVar8 + fVar2;
      param_2 = param_2 + 5;
    } while (param_2 != puVar1);
    auVar4._0_12_ = ZEXT812(0);
    auVar4._12_4_ = 0;
    auVar4 = vcmpss_avx(auVar4,ZEXT416((uint)fVar8),1);
    uVar3 = CONCAT44(auVar4._4_4_ & uVar7,auVar4._0_4_ & (uint)(fVar6 / fVar8));
  }
  return uVar3;
}

