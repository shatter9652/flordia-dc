// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400f50c0  size: 130 bytes
// Name:    FUN_1400f50c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400f5150
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400f50c0(longlong param_1,float *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)param_2 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_2 + 2) = uVar1;
  fVar3 = (float)FUN_1400f5150();
  if (0.0 < fVar3) {
    auVar9._4_4_ = _DAT_145fc6f70;
    auVar9._0_4_ = _DAT_145fc6f70;
    auVar9._8_4_ = _DAT_145fc6f70;
    auVar9._12_4_ = _DAT_145fc6f70;
    auVar7._0_4_ = (uint)_DAT_14926e840 & _DAT_145fc6f4c;
    auVar7._4_4_ = (uint)fRam000000014926e844 & _DAT_145fc6f4c;
    auVar7._8_4_ = (uint)fRam000000014926e848 & _DAT_145fc6f4c;
    auVar7._12_4_ = (uint)fRam000000014926e84c & _DAT_145fc6f4c;
    auVar7 = vcmpps_avx(auVar7,auVar9,0x11);
    uVar2 = vmovmskps_avx(auVar7);
    if ((~(byte)uVar2 & 7) == 0) {
      auVar8._0_4_ = _DAT_14926e840 * _DAT_14926e840;
      auVar8._4_4_ = fRam000000014926e844 * fRam000000014926e844;
      auVar8._8_4_ = fRam000000014926e848 * fRam000000014926e848;
      auVar8._12_4_ = fRam000000014926e84c * fRam000000014926e84c;
      fVar4 = fRam000000014926e844 * fVar3;
      fVar5 = fRam000000014926e848 * fVar3;
      fVar6 = fRam000000014926e84c * fVar3;
      auVar7 = vblendps_avx(auVar8,ZEXT416(0) << 0x20,8);
      auVar7 = vhaddps_avx(auVar7,auVar7);
      auVar7 = vhaddps_avx(auVar7,auVar7);
      auVar7 = vrsqrtps_avx(auVar7);
      *param_2 = auVar7._0_4_ * _DAT_14926e840 * fVar3 + *param_2;
      param_2[1] = auVar7._4_4_ * fVar4 + param_2[1];
      param_2[2] = auVar7._8_4_ * fVar5 + param_2[2];
      param_2[3] = auVar7._12_4_ * fVar6 + param_2[3];
    }
  }
  return;
}

