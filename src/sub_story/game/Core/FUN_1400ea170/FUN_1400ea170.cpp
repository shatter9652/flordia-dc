// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400ea170  size: 175 bytes
// Name:    FUN_1400ea170
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400ea170(longlong param_1,longlong param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar4;
  float fVar5;
  undefined1 auVar3 [16];
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  auVar9._0_12_ = ZEXT812(0);
  auVar9._12_4_ = 0;
  fVar1 = *(float *)(param_1 + 0x2c);
  fVar4 = *(float *)(param_1 + 0x28) - *(float *)(param_1 + 0x2c);
  auVar8._0_4_ = *param_4 * _DAT_14615cd80;
  auVar8._4_4_ = param_4[1] * _UNK_14615cd84;
  auVar8._8_4_ = param_4[2] * _UNK_14615cd88;
  auVar8._12_4_ = param_4[3] * _UNK_14615cd8c;
  auVar3 = vblendps_avx(auVar8,auVar9,8);
  auVar3 = vhaddps_avx(auVar3,auVar3);
  auVar8 = vhaddps_avx(auVar3,auVar3);
  auVar3._0_4_ = ((-(_DAT_14615af60 * fVar4) - *(float *)(param_2 + 0x30)) + *param_3) * *param_4;
  auVar3._4_4_ = ((-(_UNK_14615af64 * fVar4) - *(float *)(param_2 + 0x34)) + param_3[1]) *
                 param_4[1];
  auVar3._8_4_ = ((-(_UNK_14615af68 * fVar4) - *(float *)(param_2 + 0x38)) + param_3[2]) *
                 param_4[2];
  auVar3._12_4_ =
       ((-(_UNK_14615af6c * fVar4) - *(float *)(param_2 + 0x3c)) + param_3[3]) * param_4[3];
  auVar3 = vblendps_avx(auVar3,auVar9,8);
  auVar3 = vhaddps_avx(auVar3,auVar3);
  auVar7._0_4_ = (uint)auVar8._0_4_ ^ _DAT_145fc6f10;
  auVar7._4_4_ = (uint)auVar8._4_4_ ^ _DAT_145fc6f10;
  auVar7._8_4_ = (uint)auVar8._8_4_ ^ _DAT_145fc6f10;
  auVar7._12_4_ = (uint)auVar8._12_4_ ^ _DAT_145fc6f10;
  auVar9 = vhaddps_avx(auVar3,auVar3);
  auVar3 = vrcpps_avx(auVar8);
  fVar2 = auVar3._0_4_;
  fVar4 = auVar3._4_4_;
  fVar5 = auVar3._8_4_;
  fVar6 = auVar3._12_4_;
  auVar3 = vcmpps_avx(auVar8,auVar7,4);
  fVar4 = _UNK_14615af64 *
          (float)(auVar3._4_4_ &
                 (uint)((-((auVar8._4_4_ * fVar4 - _DAT_145fc6ed8) * fVar4) + fVar4) *
                       (auVar9._4_4_ + fVar1)));
  fVar5 = _UNK_14615af68 *
          (float)(auVar3._8_4_ &
                 (uint)((-((auVar8._8_4_ * fVar5 - _DAT_145fc6ed8) * fVar5) + fVar5) *
                       (auVar9._8_4_ + fVar1)));
  fVar6 = _UNK_14615af6c *
          (float)(auVar3._12_4_ &
                 (uint)((-((auVar8._12_4_ * fVar6 - _DAT_145fc6ed8) * fVar6) + fVar6) *
                       (auVar9._12_4_ + fVar1)));
  *(float *)(param_2 + 0x30) =
       _DAT_14615af60 *
       (float)(auVar3._0_4_ &
              (uint)((-((auVar8._0_4_ * fVar2 - _DAT_145fc6ed8) * fVar2) + fVar2) *
                    (auVar9._0_4_ + fVar1))) + *(float *)(param_2 + 0x30);
  *(float *)(param_2 + 0x34) = fVar4 + *(float *)(param_2 + 0x34);
  *(float *)(param_2 + 0x38) = fVar5 + *(float *)(param_2 + 0x38);
  *(float *)(param_2 + 0x3c) = fVar6 + *(float *)(param_2 + 0x3c);
  return;
}

