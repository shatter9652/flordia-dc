// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140185080  size: 99 bytes
// Name:    FUN_140185080
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14503e0d0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140185080(longlong param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 extraout_XMM0_Qa;
  undefined1 in_ZMM0 [64];
  undefined1 extraout_var [56];
  undefined1 auVar5 [64];
  undefined1 auVar7 [64];
  undefined1 extraout_var_00 [56];
  undefined1 auVar6 [16];
  
  auVar6 = in_ZMM0._0_16_;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    lVar2 = FUN_14503e0d0();
    auVar7._8_56_ = extraout_var;
    auVar7._0_8_ = extraout_XMM0_Qa;
    auVar6 = auVar7._0_16_;
    if (param_3 == 0xc) {
      param_3 = 0xc;
    }
    else if ((*(ushort *)(lVar2 + 10) & 0xc) != 0) {
      param_3 = *(ushort *)(lVar2 + 10) & 0xc;
    }
  }
  if ((*(ushort *)(param_1 + 0x4a) & 0xc) != param_3) {
    *(ushort *)(param_1 + 0x4a) = *(ushort *)(param_1 + 0x4a) & 0xfff3 | (ushort)param_3;
    uVar1 = *(uint *)(param_1 + 0xf0);
    if ((uVar1 & 6) != 0) {
      *(uint *)(param_1 + 0xf0) = uVar1 & 0xfffffffd;
      if ((uVar1 & 4) != 0) {
        *(uint *)(param_1 + 0xf0) = uVar1 & 0xfffffff9;
        auVar5._0_8_ = FUN_140718800(param_1 + 0xd0);
        auVar5._8_56_ = extraout_var_00;
        auVar6 = auVar5._0_16_;
      }
      lVar2 = *(longlong *)(param_1 + 0xe0);
      auVar6 = vpcmpeqd_avx(auVar6,auVar6);
      *(longlong *)(*(longlong *)(param_1 + 0xd8) + 0x10) = lVar2;
      *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(param_1 + 0xd8);
      *(undefined1 (*) [16])(param_1 + 0xd8) = auVar6;
    }
    if (*(longlong *)(param_1 + 0x160) != 0) {
      FUN_1412643b0(*(longlong *)(param_1 + 0x160),*(undefined8 *)(param_1 + 0x168));
      *(undefined1 (*) [16])(param_1 + 0x160) = (undefined1  [16])0x0;
    }
    FUN_141264270(param_1 + 0xd0);
    lVar2 = *(longlong *)(param_1 + 0x118);
    lVar3 = *(longlong *)(param_1 + 0x120);
    if (lVar3 != 0) {
      plVar4 = (longlong *)(lVar3 * 0x30 + -0x28 + lVar2);
      do {
        if (*plVar4 != 0) {
          func_0x00014503e5c0();
        }
        plVar4 = plVar4 + -6;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
      lVar2 = *(longlong *)*(undefined1 (*) [16])(param_1 + 0x118);
    }
    (**(code **)(*_DAT_14abcc310 + 0x60))(_DAT_14abcc310,lVar2);
    auVar6._0_12_ = ZEXT812(0);
    auVar6._12_4_ = 0;
    auVar7 = ZEXT1664(auVar6);
    *(undefined8 *)(param_1 + 0x128) = 0;
    *(undefined1 (*) [16])(param_1 + 0x118) = auVar6;
    lVar2 = *(longlong *)(param_1 + 0x138);
    lVar3 = *(longlong *)(param_1 + 0x140);
    if (lVar3 != 0) {
      plVar4 = (longlong *)(lVar3 * 0x40 + -0x10 + lVar2);
      do {
        if (*plVar4 != 0) {
          func_0x00014503e5c0();
        }
        if ((undefined8 *)plVar4[-1] != (undefined8 *)0x146d328f8) {
          FUN_1402b8320(*(undefined8 *)plVar4[-1]);
        }
        lVar2 = plVar4[-2];
        if (lVar2 != 0) {
          (**(code **)(*(longlong *)(lVar2 + 0x10) + 0x10))(lVar2 + 0x10);
        }
        if (plVar4[-3] != 0) {
          FUN_1402b8500();
        }
        if (plVar4[-4] != 0) {
          func_0x00014503e5c0();
        }
        plVar4 = plVar4 + -8;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
      lVar2 = *(longlong *)*(undefined1 (*) [16])(param_1 + 0x138);
    }
    (**(code **)(*_DAT_14abcc310 + 0x60))(_DAT_14abcc310,lVar2);
    *(undefined1 (*) [16])(param_1 + 0x138) = auVar7._0_16_;
    *(undefined8 *)(param_1 + 0x148) = 0;
    return;
  }
  return;
}

