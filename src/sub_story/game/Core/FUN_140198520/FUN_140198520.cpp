// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140198520  size: 251 bytes
// Name:    FUN_140198520
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e258f0, FUN_144baa960
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140198520(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [64];
  undefined1 auVar8 [64];
  float fVar9;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  if ((((*param_1 != 0) && (lVar2 = FUN_144e258f0(), lVar2 != 0)) &&
      (lVar2 = *(longlong *)(lVar2 + 0x170), lVar2 != 0)) &&
     (uVar1 = *(uint *)(lVar2 + 0x1b4), (ulonglong)uVar1 != 0)) {
    lVar2 = *(longlong *)(lVar2 + 0x1b8);
    fVar6 = 0.0;
    lVar4 = 0;
    auVar7 = ZEXT1264(ZEXT812(0));
    do {
      if (((*(short *)(lVar2 + 0x40 + lVar4) != -1) && (lVar3 = FUN_144baa960(), lVar3 != 0)) &&
         (fVar9 = *(float *)(lVar3 + 0x144), fVar6 < fVar9)) {
        lVar3 = *(longlong *)(lVar3 + 0x100);
        uStack_78 = *(undefined8 *)(lVar3 + 0x30);
        uStack_70 = *(undefined8 *)(lVar3 + 0x38);
        uStack_88 = *(undefined8 *)(lVar3 + 0x40);
        uStack_80 = *(undefined8 *)(lVar3 + 0x48);
        fVar5 = (float)func_0x000144b98270(&uStack_78,&uStack_88);
        auVar8._4_60_ = auVar7._4_60_;
        auVar8._0_4_ = fVar9 * fVar5 + auVar7._0_4_;
        auVar7 = ZEXT1664(auVar8._0_16_);
        *(float *)((longlong)param_1 + 0x1c) = auVar8._0_4_;
      }
      lVar4 = lVar4 + 0x50;
    } while ((ulonglong)uVar1 * 0x50 != lVar4);
  }
  return;
}

