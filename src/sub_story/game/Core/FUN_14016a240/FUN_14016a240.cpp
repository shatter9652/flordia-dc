// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14016a240  size: 220 bytes
// Name:    FUN_14016a240
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14016a240(int *param_1,longlong param_2,float *param_3)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  if ((*(byte *)(param_2 + 0x10) & 1) != 0) {
    if ((*(byte *)(param_2 + 0x10) & 2) == 0) {
      *(undefined1 *)(param_1 + 0xd) = 0;
      func_0x0001452e4470();
    }
    if (*param_1 < param_1[0xc]) {
      *(undefined1 *)(param_1 + 0xd) = 1;
    }
    else if ((char)param_1[0xd] == '\0') {
      auVar4._0_4_ = *param_3 * *param_3;
      auVar4._4_4_ = param_3[1] * param_3[1];
      auVar4._8_4_ = param_3[2] * param_3[2];
      auVar4._12_4_ = param_3[3] * param_3[3];
      auVar6._0_4_ = (float)param_1[8] * (float)param_1[8];
      auVar6._4_4_ = (float)param_1[9] * (float)param_1[9];
      auVar6._8_4_ = (float)param_1[10] * (float)param_1[10];
      auVar6._12_4_ = (float)param_1[0xb] * (float)param_1[0xb];
      auVar2 = ZEXT816(0) << 0x20;
      auVar4 = vblendps_avx(auVar4,auVar2,8);
      auVar6 = vblendps_avx(auVar6,auVar2,8);
      auVar4 = vhaddps_avx(auVar4,auVar4);
      auVar6 = vhaddps_avx(auVar6,auVar6);
      auVar4 = vhaddps_avx(auVar4,auVar4);
      auVar6 = vhaddps_avx(auVar6,auVar6);
      fVar3 = auVar4._0_4_;
      if (auVar6._0_4_ < fVar3) {
        uVar1 = *(undefined8 *)(param_3 + 2);
        *(undefined8 *)(param_1 + 8) = *(undefined8 *)param_3;
        *(undefined8 *)(param_1 + 10) = uVar1;
        auVar5._0_4_ = *param_3 * *param_3;
        auVar5._4_4_ = param_3[1] * param_3[1];
        auVar5._8_4_ = param_3[2] * param_3[2];
        auVar5._12_4_ = param_3[3] * param_3[3];
        auVar4 = vblendps_avx(auVar5,auVar2,8);
        auVar4 = vhaddps_avx(auVar4,auVar4);
        auVar4 = vhaddps_avx(auVar4,auVar4);
        fVar3 = auVar4._0_4_;
      }
      auVar7._0_4_ = (float)param_1[4] * (float)param_1[4];
      auVar7._4_4_ = (float)param_1[5] * (float)param_1[5];
      auVar7._8_4_ = (float)param_1[6] * (float)param_1[6];
      auVar7._12_4_ = (float)param_1[7] * (float)param_1[7];
      auVar4 = vblendps_avx(auVar7,auVar2,8);
      auVar4 = vhaddps_avx(auVar4,auVar4);
      auVar4 = vhaddps_avx(auVar4,auVar4);
      if (fVar3 < auVar4._0_4_) {
        uVar1 = *(undefined8 *)(param_3 + 2);
        *(undefined8 *)(param_1 + 4) = *(undefined8 *)param_3;
        *(undefined8 *)(param_1 + 6) = uVar1;
      }
      param_1[0xc] = param_1[0xc] + _DAT_14abbef50;
    }
  }
  return;
}

