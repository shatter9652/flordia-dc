// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140028390  size: 196 bytes
// Name:    FUN_140028390
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140028390(undefined1 (*param_1) [16],longlong *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  int iVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  param_1[1][0] = 0xff;
  iVar4 = (**(code **)(*param_2 + 8))(param_2);
  if (iVar4 == 3) {
    auVar8._8_8_ = 0;
    auVar8._0_8_ = param_2[1];
    uVar3 = 2;
    auVar6 = vinsertps_avx(auVar8,ZEXT416((uint)(*(float *)(param_2 + 2) + *(float *)(param_2 + 2)))
                           ,0x28);
    goto code_r0x0001400283c4;
  }
  switch(iVar4) {
  case 0:
    auVar9._0_12_ = ZEXT812(0);
    auVar9._12_4_ = 0;
    uVar3 = 3;
    auVar7._0_4_ = *(float *)(param_2 + 2) + *(float *)(param_2 + 2);
    auVar7._4_4_ = *(float *)((longlong)param_2 + 0x14) + *(float *)((longlong)param_2 + 0x14);
    auVar7._8_4_ = *(float *)(param_2 + 3) + *(float *)(param_2 + 3);
    auVar7._12_4_ = *(float *)((longlong)param_2 + 0x1c) + *(float *)((longlong)param_2 + 0x1c);
    auVar6 = vblendps_avx(auVar7,auVar9,8);
    break;
  case 1:
    uVar2 = (undefined4)param_2[1];
    auVar6._4_4_ = uVar2;
    auVar6._0_4_ = uVar2;
    auVar6._8_4_ = uVar2;
    auVar6._12_4_ = uVar2;
    uVar3 = 0;
    break;
  case 2:
    fVar5 = *(float *)((longlong)param_2 + 0xc);
    uVar1 = *(uint *)(param_2 + 1);
    uVar3 = 1;
    goto code_r0x000140028424;
  default:
    goto LAB_1400283cb;
  case 5:
    fVar5 = *(float *)((longlong)param_2 + 0xc);
    uVar1 = *(uint *)(param_2 + 1);
    uVar3 = 9;
code_r0x000140028424:
    auVar6 = vinsertps_avx(ZEXT416(uVar1),ZEXT416((uint)(fVar5 + fVar5)),0x1c);
    break;
  case 7:
    uVar2 = *(undefined4 *)((longlong)param_2 + 0x14);
    auVar10._4_4_ = uVar2;
    auVar10._0_4_ = uVar2;
    auVar10._8_4_ = uVar2;
    auVar10._12_4_ = uVar2;
    uVar3 = 8;
    auVar6 = vinsertps_avx(auVar10,ZEXT416(*(uint *)((longlong)param_2 + 0x24)),0x10);
    auVar8 = vinsertps_avx(*(undefined1 (*) [16])(param_2 + 2),ZEXT416(*(uint *)(param_2 + 4)),0x10)
    ;
    auVar6 = vunpcklps_avx(auVar8,auVar6);
  }
code_r0x0001400283c4:
  *param_1 = auVar6;
  param_1[1][0] = uVar3;
LAB_1400283cb:
  return;
}

