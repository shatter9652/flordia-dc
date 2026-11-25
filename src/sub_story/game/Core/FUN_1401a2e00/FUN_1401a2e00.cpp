// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401a2e00  size: 183 bytes
// Name:    FUN_1401a2e00
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140898120, FUN_1401a30f0, FUN_144dd9c70
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_1401a2e00(longlong *param_1)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auVar8 [64];
  longlong alStack_40 [6];
  int iStack_10;
  
  iStack_10 = 0;
  uVar3 = (**(code **)(*param_1 + 0x160))();
  lVar4 = FUN_144dd9c70(uVar3);
  if (lVar4 == 0) {
    uVar3 = FUN_140898120(param_1);
    FUN_1401a30f0(param_1[0x16],uVar3,alStack_40);
    lVar4 = (longlong)iStack_10;
    if (lVar4 == 0) {
      return 0;
    }
  }
  else {
    uVar1 = *(uint *)(lVar4 + 0x74);
    if ((ulonglong)uVar1 == 0) {
      return 0;
    }
    lVar6 = 0;
    lVar7 = 0;
    do {
      plVar5 = (longlong *)(lVar4 + 0xc0 + lVar6);
      lVar6 = lVar6 + 0x90;
      alStack_40[lVar7] = *plVar5;
      lVar7 = lVar7 + 1;
    } while ((ulonglong)uVar1 * 0x90 != lVar6);
    lVar4 = (longlong)(int)lVar7;
  }
  auVar8 = ZEXT1264(ZEXT812(0));
  plVar5 = alStack_40;
  do {
    if (*plVar5 != 0) {
      auVar2 = vmaxss_avx(auVar8._0_16_,ZEXT416(*(uint *)(*plVar5 + 0x48)));
      auVar8 = ZEXT1664(auVar2);
    }
    plVar5 = plVar5 + 1;
  } while (plVar5 != alStack_40 + lVar4);
  return auVar8._0_8_;
}

