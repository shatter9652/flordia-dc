// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140b8e130  size: 542 bytes
// Name:    CScenarioManager::GetScenarioName
// Subsystem: core
// Class:   CScenarioManager
//
// Evidence:
//   GTAVSRC: CScenarioManager::GetScenarioName  (game/task/Scenario/ScenarioManager.cpp)
//   literal: UNKNOWN_SCENARIO
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_141b25a60, FUN_1433e71f0, FUN_1441bc6c0, FUN_1411cb470, FUN_1416a9910, FUN_14120cf10, FUN_1441a9650
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"
#include "gta6decomp/CScenarioManager.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CScenarioManager__GetScenarioName(void)

{
  char *pcVar1;
  char *pcVar2;
  undefined8 uVar3;
  char cVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong unaff_GS_OFFSET;
  undefined1 extraout_var [56];
  undefined1 in_ZMM6 [64];
  undefined1 auVar12 [64];
  undefined8 uStack_e8;
  undefined1 auStack_dc [4];
  undefined1 auStack_d8 [16];
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [80];
  undefined1 auStack_58 [16];
  
  auStack_58 = in_ZMM6._0_16_;
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
  }
  if (*(longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1448) == 0) {
    auStack_b8._0_12_ = ZEXT812(0);
    auStack_b8._12_4_ = 0;
  }
  if (_DAT_14a94aca4 != 0) {
    lVar11 = -8;
    uVar10 = 0;
    lVar7 = _DAT_14a94aca8;
    uVar9 = _DAT_14a94aca4;
    do {
      pcVar2 = *(char **)(lVar7 + uVar10 * 8);
      if (((*pcVar2 == '\v') && (_DAT_14a945454 != _DAT_14a945450)) &&
         (cVar4 = func_0x000140bc10f0(*(undefined4 *)(pcVar2 + 0x29c0),
                                      *(undefined2 *)(pcVar2 + 0x2a14)), cVar4 != '\0')) {
        pcVar1 = pcVar2 + 0x29c0;
        uVar5 = func_0x000144fc2180(0,&UNK_14678719e);
        auVar12._0_8_ = FUN_14120cf10(pcVar1);
        auVar12._8_56_ = extraout_var;
        auVar12 = ZEXT1664(auVar12._0_16_);
        FUN_1411cb470(pcVar1,auStack_d8);
        auStack_c8 = vinsertps_avx(auStack_d8,auVar12._0_16_,0x30);
        FUN_1433e71f0(auStack_a8,uVar5,auStack_c8);
        FUN_1441bc6c0(auStack_a8,pcVar1);
        uVar3 = _DAT_14ab5d000;
        uVar6 = func_0x0001404e2c40(*(undefined4 *)(pcVar2 + 0x29c4));
        lVar7 = FUN_141b25a60(uVar3,auStack_a8,uVar6,0xc,auStack_dc);
        if (lVar7 != 0) {
          *(undefined4 *)(lVar7 + 0x50) = 0xa000000;
          *(undefined8 *)(lVar7 + 0x54) = 0;
          *(undefined4 *)(lVar7 + 0x5c) = 0x80;
          *(undefined8 *)(lVar7 + 0x60) = auStack_b8._0_8_;
          *(undefined8 *)(lVar7 + 0x68) = auStack_b8._8_8_;
          func_0x0001441bc810(&uStack_e8,lVar7);
          uVar8 = (ulonglong)_DAT_14a945454;
          _DAT_14a945454 = _DAT_14a945454 + 1;
          *(undefined8 *)(uVar8 * 8 + 0x14a945458) = uStack_e8;
        }
        FUN_1441a9650(pcVar2 + 0x40);
        func_0x000144d9c130(pcVar2,0x2a90);
        func_0x000145f40570(_DAT_14a94aca8 + uVar10 * 8,_DAT_14a94aca8 + 8 + uVar10 * 8,
                            lVar11 + (ulonglong)_DAT_14a94aca4 * 8);
        _DAT_14a94aca4 = _DAT_14a94aca4 - 1;
        FUN_1416a9910(auStack_a8);
        lVar7 = _DAT_14a94aca8;
        uVar9 = _DAT_14a94aca4;
      }
      uVar10 = uVar10 + 1;
      lVar11 = lVar11 + -8;
    } while (uVar10 < uVar9);
  }
  return;
}

