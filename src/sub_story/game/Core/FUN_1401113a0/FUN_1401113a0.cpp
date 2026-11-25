// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401113a0  size: 221 bytes
// Name:    FUN_1401113a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1455c7850
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1401113a0(longlong *param_1,longlong *param_2,undefined8 param_3,float param_4,char param_5
                  )

{
  float fVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar7;
  undefined1 in_ZMM2 [64];
  undefined1 auVar8 [64];
  uint uStack_30;
  float fStack_2c;
  
  uStack_30 = in_ZMM2._0_4_;
  fStack_2c = param_4;
  if ((short)param_1[3] != 0) {
    FUN_1455c7850(param_1[2],(short)param_1[3],&uStack_30,&fStack_2c);
    in_ZMM2 = ZEXT464(uStack_30);
  }
  lVar3 = *param_1;
  lVar4 = *param_2;
  if (lVar3 != 0) {
    fVar1 = *(float *)(param_1 + 5);
    uVar2 = *(uint *)((longlong)param_1 + 0x2c);
    auVar8._4_60_ = in_ZMM2._4_60_;
    auVar8._0_4_ = *(float *)(param_1 + 6) * in_ZMM2._0_4_ + fVar1;
    fVar7 = fStack_2c * *(float *)(param_1 + 6);
    auVar6 = vminss_avx(ZEXT416(uVar2),auVar8._0_16_);
    auVar5 = vcmpss_avx(auVar8._0_16_,ZEXT416((uint)fVar1),1);
    auVar5 = vblendvps_avx(auVar6,ZEXT416((uint)fVar1),auVar5);
    if (param_5 == '\0') {
      (**(code **)(lVar4 + 0x28))(param_2,lVar3,auVar5._0_8_,fVar7,fVar1,uVar2);
    }
    else {
      (**(code **)(lVar4 + 0x30))(param_2,lVar3,auVar5._0_8_,fVar7,fVar1,uVar2);
    }
    return;
  }
  if (param_5 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x00014011146a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar4 + 0x50))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000140111479. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 0x48))(param_2);
  return;
}

