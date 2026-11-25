// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140068600  size: 197 bytes
// Name:    FUN_140068600
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145376080
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140068600(longlong param_1,undefined1 (*param_2) [32],undefined1 (*param_3) [16],
                  undefined1 (*param_4) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 auVar7 [32];
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  char cVar11;
  undefined1 in_ZMM0 [64];
  int iVar12;
  
  auVar1 = *param_4;
  auVar2 = *param_3;
  auVar7 = vpcmpeqd_avx2(in_ZMM0._0_32_,in_ZMM0._0_32_);
  *param_2 = auVar7;
  *(undefined2 *)param_2[1] = 0;
  param_2[1][2] = 0;
  if ((*(byte *)(param_1 + 0xa0) & 1) != 0) {
    param_2[1][2] = 1;
    vmovshdup_avx(auVar2);
    iVar12 = *(int *)(param_1 + 0xc);
    uVar8 = *(undefined4 *)(param_1 + 0x10);
    uVar9 = *(undefined4 *)(param_1 + 0x14);
    uVar10 = *(undefined4 *)(param_1 + 0x18);
    iVar3 = *(int *)(param_1 + 0x18);
    iVar4 = *(int *)(param_1 + 0x10);
    iVar5 = *(int *)(param_1 + 0x14);
    uVar6 = vextractps_avx(auVar1,1);
    *(int *)(*param_2 + 0x10) = iVar12;
    *(undefined4 *)(*param_2 + 0x14) = uVar8;
    *(undefined4 *)(*param_2 + 0x18) = uVar9;
    *(undefined4 *)(*param_2 + 0x1c) = uVar10;
    cVar11 = FUN_145376080(param_1,param_2,param_3,param_4,uVar6,param_2,*param_2 + 8,*param_2 + 4,
                           *param_2 + 0xc);
    if ((((cVar11 == '\0') || (param_2[1][0] = 1, *(int *)*param_2 == iVar12)) ||
        (*(int *)(*param_2 + 8) == iVar5)) ||
       ((*(int *)(*param_2 + 4) == iVar4 || (*(int *)(*param_2 + 0xc) == iVar3)))) {
      param_2[1][1] = 1;
    }
  }
  return;
}

