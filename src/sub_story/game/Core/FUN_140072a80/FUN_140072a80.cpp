// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140072a80  size: 199 bytes
// Name:    FUN_140072a80
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140072980, FUN_144ed5a70, FUN_1400729e0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_140072a80(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  undefined1 in_ZMM1 [64];
  undefined1 auVar7 [64];
  undefined1 auVar8 [64];
  
  if (param_1 != 0) {
    auVar8 = ZEXT464(_DAT_149e43f40);
    auVar7 = ZEXT1664(in_ZMM1._0_16_);
    lVar4 = func_0x000144f1bf10(*(undefined4 *)(param_1 + 0x9c));
    if ((lVar4 != 0) && (iVar3 = FUN_144ed5a70(param_1,9), iVar3 != -1)) {
      lVar5 = FUN_140072980(lVar4,iVar3);
      lVar4 = FUN_1400729e0(lVar4,iVar3);
      if (lVar4 != 0 && lVar5 != 0) {
        auVar6._0_12_ = ZEXT812(0);
        auVar6._12_4_ = 0;
        auVar6 = vcmpss_avx(auVar7._0_16_,auVar6,1);
        auVar6 = vblendvps_avx(auVar7._0_16_,auVar8._0_16_,auVar6);
        auVar7 = ZEXT1664(auVar6);
        bVar1 = func_0x000140072a40(lVar5,auVar6._0_8_,param_3);
        bVar2 = func_0x000140072a40(lVar4,auVar7._0_8_,param_3);
        return bVar2 ^ bVar1;
      }
    }
  }
  return 0;
}

