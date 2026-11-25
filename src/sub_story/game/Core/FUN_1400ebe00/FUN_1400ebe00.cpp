// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400ebe00  size: 153 bytes
// Name:    FUN_1400ebe00
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400ebea0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_1400ebe00(void)

{
  uint uVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  undefined1 auVar9 [64];
  
  lVar4 = func_0x000144f70230();
  uVar1 = *(uint *)(lVar4 + 0x6c);
  if ((ulonglong)uVar1 == 0) {
    uVar8 = 0;
  }
  else {
    auVar9 = ZEXT864(0);
    lVar5 = 0;
    do {
      plVar2 = *(longlong **)(lVar4 + 0x70 + lVar5);
      iVar3 = (**(code **)(*plVar2 + 0x18))(plVar2);
      if (iVar3 == 6) {
        fVar6 = (float)FUN_1400ebea0(plVar2);
        fVar7 = auVar9._0_4_;
LAB_1400ebe5d:
        auVar9 = ZEXT464((uint)(fVar6 + fVar7));
      }
      else {
        iVar3 = (**(code **)(*plVar2 + 0x18))(plVar2);
        if (iVar3 == 7) {
          fVar6 = (float)FUN_1400ebea0(plVar2);
          fVar7 = auVar9._0_4_;
          goto LAB_1400ebe5d;
        }
        iVar3 = (**(code **)(*plVar2 + 0x18))(plVar2);
        if (iVar3 == 2) {
          auVar9 = ZEXT464((uint)(auVar9._0_4_ + *(float *)(plVar2 + 9)));
        }
      }
      uVar8 = auVar9._0_8_;
      lVar5 = lVar5 + 8;
    } while ((ulonglong)uVar1 << 3 != lVar5);
  }
  return uVar8;
}

