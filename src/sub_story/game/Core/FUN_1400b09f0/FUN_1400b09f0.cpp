// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400b09f0  size: 135 bytes
// Name:    FUN_1400b09f0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1453bc3d0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400b09f0(undefined8 param_1,undefined4 param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  longlong *plVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 extraout_XMM0_Qa;
  undefined1 extraout_var [56];
  undefined1 auVar9 [64];
  
  plVar5 = (longlong *)FUN_1453bc3d0();
  if ((plVar5 != (longlong *)0x0) && (plVar2 = (longlong *)plVar5[1], plVar2 != (longlong *)0x0)) {
    lVar3 = *plVar2;
    lVar6 = func_0x0001401cfe60(lVar3,(int)plVar2[6],0x2deefadd,param_2);
    auVar9._8_56_ = extraout_var;
    auVar9._0_8_ = extraout_XMM0_Qa;
    if (lVar6 != 0) {
      uVar7 = (ulonglong)(uint)((int)((ulonglong)(lVar6 - lVar3) >> 2) * -0x55555555);
      lVar6 = *plVar5;
      uVar8 = (ulonglong)*(ushort *)(lVar3 + 10 + uVar7 * 0xc);
      cVar1 = *(char *)(lVar3 + 8 + uVar7 * 0xc);
      if (cVar1 == '\x03') {
        *(undefined8 *)(lVar6 + uVar8 * 4) = 0xffffffffffffffff;
      }
      else if (cVar1 == '\x04') {
        *(undefined4 *)(lVar6 + uVar8 * 4) = 0xffffffff;
      }
      else {
        auVar4 = vpcmpeqd_avx(auVar9._0_16_,auVar9._0_16_);
        *(undefined1 (*) [16])(lVar6 + uVar8 * 4) = auVar4;
      }
    }
  }
  return;
}

