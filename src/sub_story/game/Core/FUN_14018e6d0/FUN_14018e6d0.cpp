// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14018e6d0  size: 382 bytes
// Name:    FUN_14018e6d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144ec3460
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14018e6d0(longlong param_1,char param_2,char param_3)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auVar11 [64];
  
  uVar3 = 0;
  auVar5._0_12_ = ZEXT812(0);
  auVar5._12_4_ = 0;
  fVar7 = _DAT_145fc6ed8;
  if (param_3 == '\0') {
    fVar7 = 0.0;
  }
  uVar10 = 0;
  uVar9 = 0;
  uVar8 = 0;
  auVar5 = vcmpss_avx(auVar5,ZEXT416(*(uint *)(param_1 + 0x62c)),1);
  auVar11 = ZEXT1664(auVar5);
  *(undefined4 *)(param_1 + 0x654) = 0x3f800000;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x10);
  if (*(int *)(param_1 + 0x648) != 3) {
    auVar6._0_4_ = _DAT_145fc6ed8 / (float)*(uint *)(lVar1 + 0x100);
    auVar6._4_12_ = SUB6012((undefined1  [60])0x0,0);
    uVar3 = func_0x000144ef0d70(param_1 + 0x560,auVar6._0_8_,
                                _DAT_145fc6ed8 / (float)*(uint *)(lVar1 + 0x104));
  }
  uVar3 = func_0x000144da3240(uVar3);
  iVar2 = FUN_144ec3460(uVar3,9);
  if (((iVar2 == -0x678dcdb4) || (iVar2 == 0x5534050d)) || (iVar2 == 0x20f1cded)) {
    uVar8 = *(uint *)(param_1 + 0x5f0);
    auVar11 = ZEXT464(uVar8);
    if (*(int *)(param_1 + 0x648) - 1U < 2) {
      uVar9 = _DAT_145fc6f98;
      fVar7 = _DAT_145fc6ed8;
      if ((iVar2 == 0x20f1cded) ||
         (auVar5 = ZEXT416(uVar8), uVar9 = _DAT_14615a220, fVar7 = _DAT_145fc6edc,
         iVar2 == -0x678dcdb4)) {
        auVar11 = ZEXT464(uVar9);
        func_0x000144ef0d70(param_1 + 0x560,fVar7 / (float)*(uint *)(lVar1 + 0x100),
                            _DAT_145fc6ed8 / (float)*(uint *)(lVar1 + 0x104));
        auVar5 = auVar11._0_16_;
        uVar8 = *(uint *)(param_1 + 0x5f0);
      }
      auVar5 = vmaxss_avx(ZEXT416(uVar8),auVar5);
      auVar11 = ZEXT1664(auVar5);
    }
    *(int *)(param_1 + 0x654) = auVar11._0_4_;
  }
  else {
    auVar11 = ZEXT1664(CONCAT412(auVar11._12_4_ & uVar10,
                                 CONCAT48(auVar11._8_4_ & uVar9,
                                          CONCAT44(auVar11._4_4_ & uVar8,auVar11._0_4_ & (uint)fVar7
                                                  ))));
  }
  uVar4 = func_0x000145123bd0(param_1 + 0x560,auVar11._0_8_,_DAT_14abbef40);
  uVar3 = auVar11._0_8_;
  if (param_2 == '\0') {
    uVar3 = uVar4;
  }
  return uVar3;
}

