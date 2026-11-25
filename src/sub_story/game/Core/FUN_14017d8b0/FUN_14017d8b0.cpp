// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14017d8b0  size: 826 bytes
// Name:    FUN_14017d8b0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_14017d8b0(undefined4 param_1)

{
  longlong lVar1;
  uint uVar2;
  float fVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  switch(param_1) {
  case 0:
    plVar5 = (longlong *)func_0x000144d9c160(0x70,0x10);
    if (plVar5 != (longlong *)0x0) {
      FUN_1401054b0(plVar5,_DAT_145fc6ed8);
      return plVar5;
    }
    break;
  case 1:
    plVar5 = (longlong *)func_0x000144d9c160(0x80,0x10);
    if (plVar5 != (longlong *)0x0) {
      FUN_14052c5a0(plVar5);
      return plVar5;
    }
    break;
  case 2:
    plVar5 = (longlong *)func_0x000144d9c160(0x90,0x10);
    if (plVar5 != (longlong *)0x0) {
      FUN_1447c2910(plVar5);
      return plVar5;
    }
    break;
  case 3:
    plVar5 = (longlong *)func_0x000144d9c160(0x70,0x10);
    if (plVar5 != (longlong *)0x0) {
      FUN_1402a9b90(plVar5);
      return plVar5;
    }
    break;
  case 4:
    plVar5 = (longlong *)func_0x000144d9c160(0x130,0x10);
    if (plVar5 != (longlong *)0x0) {
      FUN_140299f30(plVar5);
      return plVar5;
    }
    break;
  case 5:
    plVar5 = (longlong *)func_0x000144d9c160(0x150,0x10);
    if (plVar5 != (longlong *)0x0) {
      FUN_145e71520(plVar5);
      return plVar5;
    }
    break;
  case 6:
    plVar5 = (longlong *)func_0x000144d9c160(0xb0,0x10);
    if (plVar5 != (longlong *)0x0) {
      FUN_14017d740(plVar5);
      return plVar5;
    }
    break;
  case 8:
    plVar5 = (longlong *)func_0x000144d9c160(0x80,0x10);
    if (plVar5 != (longlong *)0x0) {
      FUN_1447c2a60(plVar5);
      return plVar5;
    }
    break;
  case 9:
    plVar5 = (longlong *)func_0x000144d9c160(0x80,0x10);
    if (plVar5 != (longlong *)0x0) {
      FUN_144da6330(plVar5);
      lVar4 = _UNK_14615b278;
      lVar1 = _DAT_14615b270;
      fVar3 = _DAT_146159ca4;
      *plVar5 = (longlong)&UNK_14667af70;
      *(undefined4 *)(plVar5 + 2) = 0x1ff;
      *(undefined8 *)((longlong)plVar5 + 0x14) = 0;
      *(undefined1 (*) [32])(plVar5 + 6) = ZEXT1232(ZEXT812(0));
      *(undefined1 (*) [32])(plVar5 + 8) = ZEXT1232(ZEXT812(0));
      auVar6._4_4_ = _DAT_145fc6ed8;
      auVar6._0_4_ = _DAT_145fc6ed8;
      auVar6._8_4_ = _DAT_145fc6ed8;
      auVar6._12_4_ = _DAT_145fc6ed8;
      *(undefined1 (*) [16])(plVar5 + 0xc) = auVar6;
      plVar5[4] = lVar1;
      plVar5[5] = lVar4;
      auVar9 = vminps_avx(auVar6,auVar6);
      *(undefined4 *)((longlong)plVar5 + 0x3c) = 1;
      *plVar5 = (longlong)&UNK_14667c1b0;
      *(undefined1 *)(plVar5 + 2) = 9;
      auVar8._0_4_ = auVar9._0_4_ * fVar3;
      auVar8._4_4_ = auVar9._4_4_ * fVar3;
      auVar8._8_4_ = auVar9._8_4_ * fVar3;
      auVar8._12_4_ = auVar9._12_4_ * fVar3;
      auVar9._4_4_ = _DAT_146159c24;
      auVar9._0_4_ = _DAT_146159c24;
      auVar9._8_4_ = _DAT_146159c24;
      auVar9._12_4_ = _DAT_146159c24;
      auVar8 = vminps_avx(auVar9,auVar8);
      auVar9 = vcmpps_avx(ZEXT416(0) << 0x20,auVar8,2);
      if (auVar9 == (undefined1  [16])0x0) {
        *(undefined4 *)((longlong)plVar5 + 0x2c) = 0x3d23d70a;
        auVar9 = *(undefined1 (*) [16])(plVar5 + 4);
      }
      else {
        auVar9 = vblendps_avx(ZEXT416(0) << 0x20,auVar8,8);
      }
      uVar2 = _DAT_146159bd4;
      auVar10._4_4_ = _DAT_145fc6f48;
      auVar10._0_4_ = _DAT_145fc6f48;
      auVar10._8_4_ = _DAT_145fc6f48;
      auVar10._12_4_ = _DAT_145fc6f48;
      auVar9 = vblendps_avx(auVar6,auVar9,8);
      lVar1 = vmovlps_avx(auVar10);
      plVar5[6] = lVar1;
      *(undefined4 *)(plVar5 + 7) = 0xbf800000;
      *(undefined1 (*) [16])(plVar5 + 4) = auVar9;
      auVar9 = vrsqrtss_avx(ZEXT416(uVar2),ZEXT416(uVar2));
      auVar9 = vrcpss_avx(auVar9,auVar9);
      *(int *)((longlong)plVar5 + 0x14) = auVar9._0_4_;
      func_0x0001450e6ed0();
      *(undefined4 *)((longlong)plVar5 + 0x6c) = 0x40c90fdb;
      (**(code **)(*plVar5 + 0x60))(plVar5,0,0xffffffff);
      auVar7._0_12_ = ZEXT812(0);
      auVar7._12_4_ = 0;
      auVar9 = vblendps_avx(auVar7,*(undefined1 (*) [16])(plVar5 + 8),8);
      *(undefined1 (*) [16])(plVar5 + 8) = auVar9;
      *(undefined1 (*) [16])(plVar5 + 0xe) = auVar7;
      return plVar5;
    }
    break;
  case 0xb:
    plVar5 = (longlong *)func_0x000144d9c160(0xb0,0x10);
    if (plVar5 != (longlong *)0x0) {
      FUN_1447c2b20(plVar5);
      return plVar5;
    }
    break;
  case 0xd:
    plVar5 = (longlong *)func_0x000144d9c160(0x100,0x10);
    if (plVar5 != (longlong *)0x0) {
      FUN_1447c29a0(plVar5);
      return plVar5;
    }
    break;
  case 0xe:
    plVar5 = (longlong *)func_0x000144d9c160(0x90,0x10);
    if (plVar5 != (longlong *)0x0) {
      func_0x0001413b9500(plVar5);
      return plVar5;
    }
  }
  return (longlong *)0x0;
}

