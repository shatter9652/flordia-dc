// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140103a80  size: 265 bytes
// Name:    FUN_140103a80
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e258f0, FUN_140103b90, FUN_144f399e0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140103a80(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined1 auVar6 [64];
  undefined1 auVar7 [16];
  undefined1 auVar8 [64];
  
  plVar3 = (longlong *)(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffff0);
  cVar1 = FUN_144f399e0(*(undefined4 *)((longlong)plVar3 + 0x9c));
  if (cVar1 != '\0') {
    return;
  }
  lVar2 = FUN_144e258f0(plVar3);
  if (lVar2 == 0) {
    bVar4 = plVar3[7] != 0;
    lVar2 = (**(code **)(*plVar3 + 0xa8))(plVar3);
  }
  else {
    lVar2 = func_0x000144e25940(*(undefined8 *)(lVar2 + 0x170),*(undefined8 *)(lVar2 + 0x1a0));
    bVar4 = true;
  }
  if (lVar2 == 0) {
    return;
  }
  if (!bVar4) {
    return;
  }
  auVar7._0_12_ = ZEXT812(0);
  auVar7._12_4_ = 0;
  auVar8 = ZEXT1664(auVar7);
  auVar7 = vcmpss_avx(ZEXT416((uint)_DAT_14abbef4c),auVar7,4);
  auVar6 = ZEXT1664(CONCAT412(auVar7._12_4_ & SUB124(SUB6012((undefined1  [60])0x0,0),8),
                              CONCAT84(0,auVar7._0_4_ & (uint)(_DAT_145fc6ed8 / _DAT_14abbef4c))));
  if (DAT_14abbe2e0 == '\0') {
    cVar1 = func_0x000144f7b6a0();
    uVar5 = auVar6._0_4_;
    if ((cVar1 == '\0') && (DAT_14abbe2e1 != '\x01')) goto LAB_140103b2f;
  }
  cVar1 = func_0x000144eec1e0(*_DAT_14a02d000);
  uVar5 = auVar8._0_4_;
  if (cVar1 == '\0') {
    uVar5 = auVar6._0_4_;
  }
LAB_140103b2f:
  FUN_140103b90(*(undefined4 *)(param_1 + 0x1c),*(undefined8 *)(param_1 + 0x20),lVar2,0,1,uVar5);
  return;
}

