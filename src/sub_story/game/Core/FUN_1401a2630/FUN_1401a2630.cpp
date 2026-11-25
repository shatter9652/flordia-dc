// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401a2630  size: 85 bytes
// Name:    FUN_1401a2630
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401a2630(longlong param_1,longlong *param_2,uint param_3,undefined8 param_4,float param_5)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  bool bVar10;
  float fVar11;
  undefined1 in_ZMM3 [64];
  float fVar12;
  undefined8 unaff_XMM6_Qa;
  undefined8 unaff_XMM6_Qb;
  undefined1 auVar13 [64];
  undefined1 auStack_58 [16];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  auVar13 = ZEXT1664(in_ZMM3._0_16_);
  auStack_58._8_8_ = 0x1401a2652;
  uStack_28 = unaff_XMM6_Qa;
  uStack_20 = unaff_XMM6_Qb;
  fVar11 = (float)func_0x0001401a2690(param_3);
  fVar12 = auVar13._0_4_;
  if (fVar12 <= fVar11) {
    return;
  }
  uStack_38 = uStack_28;
  uStack_30 = uStack_20;
  if ((param_5 != _DAT_145fc6ed8) || (NAN(param_5) || NAN(_DAT_145fc6ed8))) {
    auStack_58._0_12_ = ZEXT812(0);
    auStack_58._12_4_ = 0;
    auVar13 = ZEXT1664(auVar13._0_16_);
    if (*(code **)(*param_2 + 0x220) == FUN_144ed48c0) {
      FUN_144ed48c0(param_2,auStack_58);
    }
    else {
      (**(code **)(*param_2 + 0x220))(param_2,auStack_58);
    }
    uStack_48 = auStack_58._0_8_;
    uStack_40 = auStack_58._8_8_;
    cVar6 = FUN_1453e1030();
    fVar12 = auVar13._0_4_;
    if (cVar6 == '\0') {
      fVar12 = param_5 * fVar12;
    }
  }
  if (*(float *)(*(longlong *)(param_1 + 0x10) + 0x548 + (ulonglong)param_3 * 0x550) < fVar12) {
    puVar9 = (uint *)(*(longlong *)(param_1 + 0x10) + (ulonglong)param_3 * 0x550);
    if (puVar9[1] != *puVar9) {
      bVar2 = *(byte *)(param_2 + 6);
      plVar4 = *(longlong **)((ulonglong)bVar2 * 8 + 0x14abbe7c0);
      uVar7 = (uint)((ulonglong)((longlong)param_2 - *plVar4) / (ulonglong)*(uint *)(plVar4 + 1)) &
              0x1ffff;
      uVar3 = *(uint *)(plVar4[5] + (ulonglong)uVar7 * 4);
      uVar8 = puVar9[1];
      do {
        if (uVar8 == *puVar9) {
          return;
        }
        LOCK();
        uVar1 = puVar9[1];
        bVar10 = uVar8 == uVar1;
        if (bVar10) {
          puVar9[1] = uVar8 + 1;
          uVar1 = uVar8;
        }
        uVar8 = uVar1;
        UNLOCK();
      } while (!bVar10);
      lVar5 = *(longlong *)(puVar9 + 2);
      if (lVar5 != 0) {
        *(uint *)(lVar5 + (ulonglong)uVar8 * 8) =
             (bVar2 & 0x1f) << 0x11 | uVar7 | (uVar3 & 0x7fe0000) << 5;
        *(float *)(lVar5 + 4 + (ulonglong)uVar8 * 8) = fVar12;
      }
    }
  }
  return;
}

