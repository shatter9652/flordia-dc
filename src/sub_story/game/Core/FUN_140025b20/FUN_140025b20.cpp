// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140025b20  size: 272 bytes
// Name:    FUN_140025b20
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140025b20(undefined1 (*param_1) [16],longlong param_2,longlong *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  int iVar3;
  float fVar4;
  float fVar7;
  float fVar8;
  undefined1 auVar5 [16];
  float fVar9;
  undefined1 auVar6 [16];
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  
  auVar5._0_12_ = ZEXT812(0);
  auVar5._12_4_ = 0;
  *param_1 = auVar5;
  iVar3 = (**(code **)(*param_3 + 8))(param_3);
  if (iVar3 == 0) {
    lVar2 = param_3[3];
    *(longlong *)(param_2 + 0x10) = param_3[2];
    *(longlong *)(param_2 + 0x18) = lVar2;
    return;
  }
  switch(iVar3) {
  case 1:
    uVar1 = (undefined4)param_3[1];
    *(undefined4 *)(param_2 + 0x10) = uVar1;
    *(undefined4 *)(param_2 + 0x14) = uVar1;
    *(undefined4 *)(param_2 + 0x18) = uVar1;
    *(undefined4 *)(param_2 + 0x1c) = uVar1;
    return;
  case 2:
    func_0x0001443759a0(param_2);
    break;
  case 3:
    goto code_r0x0001443759b0;
  case 4:
    func_0x0001443759a0(param_2);
    break;
  case 5:
    func_0x0001443759a0(param_2);
    break;
  case 6:
code_r0x0001443759b0:
    auVar6 = vmaxss_avx(ZEXT416(*(uint *)(param_3 + 1)),ZEXT416(*(uint *)((longlong)param_3 + 0xc)))
    ;
    auVar5 = vinsertps_avx(auVar6,ZEXT416(*(uint *)(param_3 + 2)),0x10);
    auVar5 = vshufps_avx(auVar5,auVar6,4);
    *(undefined1 (*) [16])(param_2 + 0x10) = auVar5;
    return;
  case 8:
    auVar5 = vmaxps_avx(*(undefined1 (*) [16])(param_3 + 2),*(undefined1 (*) [16])(param_3 + 4));
    auVar6 = vminps_avx(*(undefined1 (*) [16])(param_3 + 2),*(undefined1 (*) [16])(param_3 + 4));
    auVar5 = vmaxps_avx(auVar5,*(undefined1 (*) [16])(param_3 + 6));
    auVar6 = vminps_avx(auVar6,*(undefined1 (*) [16])(param_3 + 6));
    auVar5 = vmaxps_avx(auVar5,*(undefined1 (*) [16])(param_3 + 8));
    auVar6 = vminps_avx(auVar6,*(undefined1 (*) [16])(param_3 + 8));
    auVar5 = vmaxps_avx(auVar5,*(undefined1 (*) [16])(param_3 + 10));
    auVar6 = vminps_avx(auVar6,*(undefined1 (*) [16])(param_3 + 10));
    auVar5 = vmaxps_avx(auVar5,*(undefined1 (*) [16])(param_3 + 0xc));
    auVar6 = vminps_avx(auVar6,*(undefined1 (*) [16])(param_3 + 0xc));
    auVar5 = vmaxps_avx(auVar5,*(undefined1 (*) [16])(param_3 + 0xe));
    auVar6 = vminps_avx(auVar6,*(undefined1 (*) [16])(param_3 + 0xe));
    auVar5 = vmaxps_avx(auVar5,*(undefined1 (*) [16])(param_3 + 0x10));
    auVar6 = vminps_avx(auVar6,*(undefined1 (*) [16])(param_3 + 0x10));
    auVar10 = vsubps_avx(auVar5,auVar6);
    fVar11 = auVar10._4_4_ * _DAT_145fc6edc;
    fVar12 = auVar10._8_4_ * _DAT_145fc6edc;
    fVar13 = auVar10._12_4_ * _DAT_145fc6edc;
    fVar4 = (auVar6._0_4_ + auVar5._0_4_) * _DAT_145fc6edc;
    fVar7 = (auVar6._4_4_ + auVar5._4_4_) * _DAT_145fc6edc;
    fVar8 = (auVar6._8_4_ + auVar5._8_4_) * _DAT_145fc6edc;
    fVar9 = (auVar6._12_4_ + auVar5._12_4_) * _DAT_145fc6edc;
    *(float *)(param_2 + 0x10) = auVar10._0_4_ * _DAT_145fc6edc;
    *(float *)(param_2 + 0x14) = fVar11;
    *(float *)(param_2 + 0x18) = fVar12;
    *(float *)(param_2 + 0x1c) = fVar13;
    *(float *)*param_1 = fVar4;
    *(float *)(*param_1 + 4) = fVar7;
    *(float *)(*param_1 + 8) = fVar8;
    *(float *)(*param_1 + 0xc) = fVar9;
    return;
  case 9:
    auVar6._8_8_ = 0;
    auVar6._0_8_ = param_3[1];
    auVar10._8_8_ = 0;
    auVar10._0_8_ = param_3[2];
    auVar6 = vmaxps_avx(auVar6,auVar10);
    auVar5 = vinsertps_avx(auVar6,ZEXT416(*(uint *)(param_3 + 3)),0x10);
    auVar5 = vshufps_avx(auVar5,auVar6,0x14);
    *(undefined1 (*) [16])(param_2 + 0x10) = auVar5;
    return;
  case 10:
    auVar5 = vpshufb_avx(ZEXT416(*(uint *)(param_3 + 1)),_UNK_1461655a0);
    *(undefined1 (*) [16])(param_2 + 0x10) = auVar5;
    return;
  }
  return;
}

