// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14007d220  size: 241 bytes
// Name:    FUN_14007d220
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14007d220(longlong param_1,undefined4 param_2)

{
  uint uVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 in_ZMM2 [64];
  undefined1 auVar6 [64];
  
  fVar2 = in_ZMM2._0_4_;
  auVar3 = in_ZMM2._0_16_;
  switch(param_2) {
  case 0x5dc:
    auVar6 = ZEXT1664(auVar3);
    uVar1 = func_0x000145f40830(fVar2 * _DAT_14615b6c0);
    auVar4._0_12_ = ZEXT812(0);
    auVar4._12_4_ = 0;
    auVar3 = vcmpss_avx(auVar4,ZEXT416((uint)(auVar6._0_4_ + _DAT_14615b6b8)),2);
    *(uint *)(param_1 + 0x2ac) = auVar3._0_4_ & uVar1;
    break;
  case 0x5dd:
    auVar6 = ZEXT1664(auVar3);
    uVar1 = func_0x000145f40830(fVar2 * _DAT_14615b6c0);
    auVar5._0_12_ = ZEXT812(0);
    auVar5._12_4_ = 0;
    auVar3 = vcmpss_avx(auVar5,ZEXT416((uint)(auVar6._0_4_ + _DAT_14615b6b8)),2);
    *(uint *)(param_1 + 0x2b0) = auVar3._0_4_ & uVar1;
    break;
  case 0x5de:
    auVar6 = ZEXT1664(auVar3);
    uVar1 = func_0x000145f40830(fVar2 * _DAT_14615b6c0);
    auVar3._0_12_ = ZEXT812(0);
    auVar3._12_4_ = 0;
    auVar3 = vcmpss_avx(auVar3,ZEXT416((uint)(auVar6._0_4_ + _DAT_14615b6b8)),2);
    *(uint *)(param_1 + 0x2b4) = auVar3._0_4_ & uVar1;
    break;
  case 0x5df:
    auVar3 = vminss_avx(auVar3,ZEXT416(*(uint *)(param_1 + 0x2b8)));
    *(int *)(param_1 + 0x2a4) = auVar3._0_4_;
    break;
  case 0x5e0:
    auVar3 = vminss_avx(auVar3,ZEXT416(*(uint *)(param_1 + 0x2b8)));
    *(int *)(param_1 + 0x2a8) = auVar3._0_4_;
  }
  return;
}

