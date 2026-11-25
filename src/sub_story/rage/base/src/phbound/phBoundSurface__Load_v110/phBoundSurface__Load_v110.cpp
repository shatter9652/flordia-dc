// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1447d0fc0  size: 373 bytes
// Name:    phBoundSurface::Load_v110
// Subsystem: physics
// Class:   phBoundSurface
//
// Evidence:
//   GTAVSRC: phBoundSurface::Load_v110  (rage/base/src/phbound/boundsurface.cpp)
//   literal: BoundingBoxMax:
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1447c2870, FUN_1428ca730
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"
#include "gta6decomp/phBoundSurface.h"


void phBoundSurface__Load_v110(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  char cVar4;
  undefined2 uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar5 = (**(code **)(*param_2 + 0x68))(param_2,&UNK_14678883d);
  *(undefined2 *)((longlong)param_1 + 0x12) = uVar5;
  uVar8 = (**(code **)(*param_2 + 0x70))(param_2,&UNK_146788ab2);
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar8;
  (**(code **)(*param_2 + 0x80))(param_2,&UNK_1467889dc,&uStack_28);
  auVar2._8_8_ = uStack_20;
  auVar2._0_8_ = uStack_28;
  lVar1 = vmovlps_avx(auVar2);
  param_1[6] = lVar1;
  uVar8 = vextractps_avx(auVar2,2);
  *(undefined4 *)(param_1 + 7) = uVar8;
  (**(code **)(*param_2 + 0x80))(param_2,&UNK_146788848,&uStack_28);
  auVar3._8_8_ = uStack_20;
  auVar3._0_8_ = uStack_28;
  auVar2 = vblendps_avx(auVar3,*(undefined1 (*) [16])(param_1 + 4),8);
  *(undefined1 (*) [16])(param_1 + 4) = auVar2;
  (**(code **)(*param_2 + 0x80))(param_2,&UNK_146788aa8,&uStack_28);
  (**(code **)(*param_1 + 0x20))(param_1);
  (**(code **)(*param_2 + 0x80))(param_2,&UNK_146788a3c,&uStack_28);
  func_0x000144ee47b0(param_1);
  (**(code **)(*param_2 + 0x78))(param_2,&UNK_146788994,param_1 + 0xc);
  auVar9._0_4_ = (**(code **)(*param_2 + 0x70))(param_2,&UNK_1467889d4);
  auVar9._4_4_ = auVar9._0_4_;
  auVar9._8_4_ = auVar9._0_4_;
  auVar9._12_4_ = auVar9._0_4_;
  auVar10._0_12_ = ZEXT812(0);
  auVar10._12_4_ = 0;
  auVar2 = vcmpps_avx(auVar10,auVar9,2);
  if (auVar2 == (undefined1  [16])0x0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x3d23d70a;
  }
  else {
    auVar2 = vblendps_avx(auVar9,*(undefined1 (*) [16])(param_1 + 4),7);
    *(undefined1 (*) [16])(param_1 + 4) = auVar2;
  }
  cVar4 = FUN_1428ca730(param_2,&UNK_1467888df,1);
  if (cVar4 != '\0') {
    iVar6 = (**(code **)(*param_2 + 0x28))(param_2,1);
    if (0 < iVar6) {
      uVar7 = FUN_1447c2870(param_2);
      (**(code **)(*param_1 + 0x60))(param_1,uVar7,0xffffffff);
    }
  }
  return;
}

