// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400b6d40  size: 363 bytes
// Name:    FUN_1400b6d40
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14118ece0, FUN_145214ca0, FUN_1400b5d50
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_1400b6d40(longlong *param_1,longlong param_2,undefined8 param_3)

{
  float fVar1;
  char cVar2;
  byte bVar3;
  longlong lVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar7 [16];
  undefined1 auVar11 [16];
  undefined4 uStack_1c;
  
  FUN_14118ece0();
  auVar11._4_4_ = _DAT_145fc6f48;
  auVar11._0_4_ = _DAT_145fc6f48;
  auVar11._8_4_ = _DAT_145fc6f48;
  auVar11._12_4_ = _DAT_145fc6f48;
  *param_1 = (longlong)&UNK_14646d6d0;
  *(undefined1 (*) [32])(param_1 + 0x5c) = ZEXT1232(ZEXT812(0));
  *(undefined1 (*) [32])(param_1 + 0x60) = ZEXT1232(ZEXT812(0));
  param_1[100] = 0;
  lVar4 = vmovlps_avx(auVar11);
  param_1[0x65] = lVar4;
  *(undefined4 *)(param_1 + 0x66) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x67) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x33c) = 0;
  *(byte *)((longlong)param_1 + 0x33d) = *(byte *)((longlong)param_1 + 0x33d) & 0xc0;
  *(byte *)((longlong)param_1 + 0x33c) = *(byte *)(param_2 + 0x99) & 0x80;
  lVar4 = FUN_1400b5d50(*(undefined8 *)(param_2 + 0x60));
  if (lVar4 == 0) {
    *(undefined4 *)(param_1 + 0x67) = 0xffffffff;
    cVar2 = func_0x000140452090(*(undefined8 *)(param_2 + 0x60));
    bVar3 = cVar2 << 2;
  }
  else {
    *(undefined4 *)(param_1 + 0x67) = *(undefined4 *)(lVar4 + 0xc);
    bVar3 = 4;
  }
  fVar1 = _DAT_145fc6f08;
  fVar10 = _DAT_145fc6edc;
  *(byte *)((longlong)param_1 + 0x33d) = *(byte *)((longlong)param_1 + 0x33d) & 0xfb | bVar3;
  auVar11 = vsubps_avx(*(undefined1 (*) [16])(param_2 + 0x40),*(undefined1 (*) [16])(param_2 + 0x30)
                      );
  fVar5 = auVar11._0_4_ * fVar10;
  fVar8 = auVar11._4_4_ * fVar10;
  fVar9 = auVar11._8_4_ * fVar10;
  fVar10 = auVar11._12_4_ * fVar10;
  auVar7._0_4_ = fVar5 * fVar5;
  auVar7._4_4_ = fVar8 * fVar8;
  auVar7._8_4_ = fVar9 * fVar9;
  auVar7._12_4_ = fVar10 * fVar10;
  auVar7 = vhaddps_avx(auVar7,auVar7);
  auVar11 = vrsqrtss_avx(auVar7,auVar7);
  fVar10 = auVar11._0_4_;
  auVar11 = vcmpss_avx(ZEXT416(_DAT_146159bfc),auVar7,2);
  *(uint *)((longlong)param_1 + 700) =
       auVar11._0_4_ &
       (uint)(((fVar10 * fVar10 * auVar7._0_4_ * fVar1 + _DAT_145fc6edc) * fVar10 + fVar10) *
             auVar7._0_4_);
  FUN_145214ca0(param_1 + 0x44,0,param_2,param_3,0,0);
  (**(code **)(*param_1 + 0x58))(param_1,&uStack_1c);
  uVar6 = func_0x0001455b0330(uStack_1c);
  *(undefined4 *)((longlong)param_1 + 0x334) = uVar6;
  return param_1;
}

