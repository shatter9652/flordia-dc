// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14014e2b0  size: 459 bytes
// Name:    FUN_14014e2b0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1404f4ef0, FUN_14501bc80, FUN_1452d2970, FUN_14501be10, FUN_14501bce0, FUN_14501bd50
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14014e2b0(longlong param_1,char param_2)

{
  undefined4 uVar1;
  char cVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  undefined1 extraout_var [56];
  undefined1 auVar10 [64];
  undefined1 auVar11 [64];
  undefined8 auStack_60 [5];
  
  lVar5 = *(longlong *)(param_1 + 8);
  lVar4 = func_0x0001450718b0(lVar5,1);
  if (lVar4 != 0) {
    lVar5 = func_0x000144da6540(*(undefined4 *)(lVar5 + 0x9c));
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = *(longlong *)(lVar5 + 0x10c8);
    }
    cVar2 = FUN_14501be10(*(undefined4 *)(*(longlong *)(param_1 + 8) + 0x9c));
    bVar3 = 0;
    if ((lVar5 != 0) && (cVar2 != '\0')) {
      bVar3 = func_0x00014501bbd0(*(undefined4 *)(lVar5 + 0x14f0),*(undefined1 *)(lVar5 + 0x1540));
    }
    FUN_14501bd50(lVar4,auStack_60);
    lVar4 = func_0x00014501bc50(auStack_60[0]);
    if ((bVar3 != 0) || (((*(byte *)(lVar4 + 0x46) ^ 1) & *(byte *)(lVar4 + 0x45)) != 0)) {
      lVar4 = func_0x00014501bc50(auStack_60[0]);
      uVar1 = _DAT_14a9b3f50;
      auVar10 = ZEXT1264(ZEXT812(0));
      auVar9._0_12_ = ZEXT812(0);
      auVar9._12_4_ = 0;
      if ((*(char *)(lVar4 + 0x45) == '\x01') && ((*(byte *)(lVar4 + 0x46) & 1) == 0)) {
        uVar6 = func_0x00014501bc50(auStack_60[0]);
        auVar11._0_8_ = FUN_14501bc80(uVar6,uVar1);
        auVar11._8_56_ = extraout_var;
        auVar9 = auVar11._0_16_;
      }
      if (((lVar5 != 0) && (*(char *)(lVar5 + 0x15ba) == '\0')) &&
         (auVar10 = ZEXT1264(ZEXT812(0)), *(char *)(param_1 + 0x5a) == '\0')) {
        auVar10 = ZEXT1664(auVar9);
      }
      lVar5 = func_0x00014501bc50(auStack_60[0]);
      uVar1 = _DAT_14a9b3f50;
      fVar7 = auVar10._0_4_;
      fVar8 = fVar7;
      if ((*(char *)(lVar5 + 0x45) == '\x01') && ((*(byte *)(lVar5 + 0x46) & 1) == 0)) {
        uVar6 = func_0x00014501bc50(auStack_60[0]);
        auVar11 = ZEXT1264(ZEXT812(0));
        cVar2 = FUN_14501bce0(uVar6,0,0,uVar1);
        fVar7 = auVar10._0_4_;
        fVar8 = fVar7;
        if (cVar2 == '\0') {
          cVar2 = FUN_1452d2970(uVar6,0,0,uVar1);
          fVar7 = auVar10._0_4_;
          fVar8 = auVar11._0_4_;
          if (cVar2 == '\0') {
            fVar8 = fVar7;
          }
        }
      }
      if (param_2 == '\0') {
        fVar8 = fVar7;
      }
      if (((bVar3 | 0.0 < fVar8) == 1) && (cVar2 = FUN_1404f4ef0(param_1,0), cVar2 != '\0')) {
        return 1;
      }
    }
  }
  return 0;
}

