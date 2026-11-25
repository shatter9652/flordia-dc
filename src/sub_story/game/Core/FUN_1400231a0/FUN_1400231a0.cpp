// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400231a0  size: 304 bytes
// Name:    FUN_1400231a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144df4930
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400231a0(undefined8 *param_1,longlong param_2,longlong param_3)

{
  undefined1 auVar1 [16];
  longlong *plVar2;
  float fVar3;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar4 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [64];
  undefined1 auStack_80 [8];
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  
  FUN_144df4930(param_2,*param_1);
  plVar2 = (longlong *)(**(code **)(*(longlong *)*param_1 + 200))();
  if ((int)plVar2[5] == 0xd) {
    plVar2 = (longlong *)plVar2[8];
  }
  func_0x000144e0acd0(auStack_80);
  fStack_70 = 3.4028235e+38;
  (**(code **)(*plVar2 + 0xa0))(plVar2,&fStack_68,auStack_80);
  if ((fStack_70 != _DAT_145fc6f50) || (NAN(fStack_70) || NAN(_DAT_145fc6f50))) {
    fStack_74 = *(float *)((longlong)param_1 + 0x1c) * fStack_74;
    fStack_70 = fStack_70 * (*(float *)(param_1 + 4) + *(float *)(param_1 + 4));
    fStack_78 = *(float *)(param_1 + 3) * fStack_78;
  }
  else {
    auVar1 = vshufps_avx(*(undefined1 (*) [16])(param_2 + 0x10),
                         *(undefined1 (*) [16])(param_2 + 0x20),0x33);
    auVar1 = vshufps_avx(*(undefined1 (*) [16])(param_2 + 0x10),auVar1,0x2f);
    auVar12 = ZEXT1664(CONCAT412(auVar1._12_4_ + _DAT_145fc6ed8,
                                 CONCAT48(auVar1._8_4_ + _DAT_145fc6ed8,
                                          CONCAT44(auVar1._4_4_ + _DAT_145fc6ed8,
                                                   auVar1._0_4_ + _DAT_145fc6ed8))));
    fVar8 = _DAT_145fc6ed8;
    fVar9 = _DAT_145fc6ed8;
    fVar10 = _DAT_145fc6ed8;
    fVar11 = _DAT_145fc6ed8;
    (**(code **)(*(longlong *)*param_1 + 0x58))((longlong *)*param_1,&fStack_68);
    auVar1 = vrcpps_avx(auVar12._0_16_);
    fVar3 = auVar1._0_4_;
    fVar5 = auVar1._4_4_;
    fVar6 = auVar1._8_4_;
    fVar7 = auVar1._12_4_;
    auVar4._0_4_ = (-((fVar3 * auVar12._0_4_ - fVar8) * fVar3) + fVar3) * fStack_68;
    auVar4._4_4_ = (-((fVar5 * auVar12._4_4_ - fVar9) * fVar5) + fVar5) * fStack_64;
    auVar4._8_4_ = (-((fVar6 * auVar12._8_4_ - fVar10) * fVar6) + fVar6) * fStack_60;
    auVar4._12_4_ = (-((fVar7 * auVar12._12_4_ - fVar11) * fVar7) + fVar7) * fStack_5c;
    auVar1 = vshufpd_avx(auVar4,auVar4,1);
    auVar1 = vmaxss_avx(auVar4,auVar1);
    auVar4 = vmovshdup_avx(auVar4);
    fStack_78 = auVar1._0_4_ * *(float *)(param_1 + 3);
    fStack_70 = auVar4._0_4_ * *(float *)(param_1 + 4);
    fStack_74 = auVar1._0_4_ * *(float *)((longlong)param_1 + 0x1c);
  }
  *(float *)(param_3 + 0x10) = fStack_70;
  *(float *)(param_3 + 8) = fStack_78;
  *(float *)(param_3 + 0xc) = fStack_74;
  return;
}

