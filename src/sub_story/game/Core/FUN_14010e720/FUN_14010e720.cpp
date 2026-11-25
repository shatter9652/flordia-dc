// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14010e720  size: 612 bytes
// Name:    FUN_14010e720
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144da6330, FUN_1450e6cc0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong *
FUN_14010e720(undefined8 param_1,undefined2 *param_2,longlong *param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  uint uVar3;
  float fVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  switch(*(byte *)((longlong)param_2 + 3) & 7) {
  case 0:
    FUN_144da6330(param_3);
    lVar5 = _UNK_14615b278;
    lVar1 = _DAT_14615b270;
    uVar2 = _DAT_145fc6ed8;
    *param_3 = (longlong)&UNK_14667af70;
    *(undefined4 *)(param_3 + 2) = 0x1ff;
    *(undefined8 *)((longlong)param_3 + 0x14) = 0;
    *(undefined1 (*) [32])(param_3 + 6) = ZEXT1232(ZEXT812(0));
    *(undefined1 (*) [32])(param_3 + 8) = ZEXT1232(ZEXT812(0));
    *(undefined4 *)(param_3 + 0xc) = uVar2;
    *(undefined4 *)((longlong)param_3 + 100) = uVar2;
    *(undefined4 *)(param_3 + 0xd) = uVar2;
    *(undefined4 *)((longlong)param_3 + 0x6c) = uVar2;
    param_3[4] = lVar1;
    param_3[5] = lVar5;
    *(undefined4 *)((longlong)param_3 + 0x3c) = 1;
    *param_3 = (longlong)&UNK_14667c280;
    *(undefined1 *)(param_3 + 2) = 7;
    FUN_1455d13d0(param_1,param_2,param_3,param_4);
    break;
  case 1:
    FUN_1401054b0(param_3,_DAT_145fc6ed8);
    FUN_142116d40(param_1,*param_2,*(undefined4 *)(param_2 + 2),param_3,param_4);
    break;
  case 2:
    FUN_14052c5a0(param_3);
    FUN_142116df0(param_1,param_2,param_3,param_4);
    break;
  case 3:
    FUN_1402a9b90(param_3);
    FUN_144fda1a0(param_1,param_2,param_3,param_4);
    break;
  default:
    FUN_144da6330(param_3);
    lVar5 = _UNK_14615b278;
    lVar1 = _DAT_14615b270;
    fVar4 = _DAT_146159ca4;
    *param_3 = (longlong)&UNK_14667af70;
    *(undefined4 *)(param_3 + 2) = 0x1ff;
    *(undefined8 *)((longlong)param_3 + 0x14) = 0;
    *(undefined1 (*) [32])(param_3 + 6) = ZEXT1232(ZEXT812(0));
    *(undefined1 (*) [32])(param_3 + 8) = ZEXT1232(ZEXT812(0));
    auVar6._4_4_ = _DAT_145fc6ed8;
    auVar6._0_4_ = _DAT_145fc6ed8;
    auVar6._8_4_ = _DAT_145fc6ed8;
    auVar6._12_4_ = _DAT_145fc6ed8;
    *(undefined1 (*) [16])(param_3 + 0xc) = auVar6;
    param_3[4] = lVar1;
    param_3[5] = lVar5;
    auVar9 = vminps_avx(auVar6,auVar6);
    *(undefined4 *)((longlong)param_3 + 0x3c) = 1;
    *param_3 = (longlong)&UNK_14667c1b0;
    *(undefined1 *)(param_3 + 2) = 9;
    auVar8._0_4_ = auVar9._0_4_ * fVar4;
    auVar8._4_4_ = auVar9._4_4_ * fVar4;
    auVar8._8_4_ = auVar9._8_4_ * fVar4;
    auVar8._12_4_ = auVar9._12_4_ * fVar4;
    auVar9._4_4_ = _DAT_146159c24;
    auVar9._0_4_ = _DAT_146159c24;
    auVar9._8_4_ = _DAT_146159c24;
    auVar9._12_4_ = _DAT_146159c24;
    auVar8 = vminps_avx(auVar9,auVar8);
    auVar9 = vcmpps_avx(ZEXT416(0) << 0x20,auVar8,2);
    if (auVar9 == (undefined1  [16])0x0) {
      *(undefined4 *)((longlong)param_3 + 0x2c) = 0x3d23d70a;
      auVar9 = *(undefined1 (*) [16])(param_3 + 4);
    }
    else {
      auVar9 = vblendps_avx(ZEXT416(0) << 0x20,auVar8,8);
    }
    uVar3 = _DAT_146159bd4;
    auVar10._4_4_ = _DAT_145fc6f48;
    auVar10._0_4_ = _DAT_145fc6f48;
    auVar10._8_4_ = _DAT_145fc6f48;
    auVar10._12_4_ = _DAT_145fc6f48;
    auVar9 = vblendps_avx(auVar6,auVar9,8);
    lVar1 = vmovlps_avx(auVar10);
    param_3[6] = lVar1;
    *(undefined4 *)(param_3 + 7) = 0xbf800000;
    *(undefined1 (*) [16])(param_3 + 4) = auVar9;
    auVar9 = vrsqrtss_avx(ZEXT416(uVar3),ZEXT416(uVar3));
    auVar9 = vrcpss_avx(auVar9,auVar9);
    *(int *)((longlong)param_3 + 0x14) = auVar9._0_4_;
    func_0x0001450e6ed0();
    *(undefined4 *)((longlong)param_3 + 0x6c) = 0x40c90fdb;
    (**(code **)(*param_3 + 0x60))(param_3,0,0xffffffff);
    auVar7._0_12_ = ZEXT812(0);
    auVar7._12_4_ = 0;
    auVar9 = vblendps_avx(auVar7,*(undefined1 (*) [16])(param_3 + 8),8);
    *(undefined1 (*) [16])(param_3 + 8) = auVar9;
    *(undefined1 (*) [16])(param_3 + 0xe) = auVar7;
    FUN_1450e6cc0(param_1,param_2,param_3,param_4);
  }
  return param_3;
}

