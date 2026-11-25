// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14000dc50  size: 136 bytes
// Name:    FUN_14000dc50
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14000dc50(longlong param_1,float param_2)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  longlong lVar6;
  undefined1 in_register_00001244 [12];
  undefined1 auVar7 [16];
  
  uVar4 = _DAT_14615a220;
  uVar3 = _DAT_145fc6f4c;
  fVar2 = _DAT_145fc6f00;
  fVar1 = _DAT_145fc6edc;
  bVar5 = *(byte *)(param_1 + 0x1618);
  lVar6 = 0xae;
  do {
    if ((*(byte *)(param_1 + lVar6) & 1) != 0) {
      auVar7._0_4_ = param_2 / (fVar1 * *(float *)(param_1 + -0x22 + lVar6));
      auVar7._4_12_ = in_register_00001244;
      auVar7 = vmaxss_avx(auVar7,ZEXT416(uVar4));
      bVar5 = bVar5 | fVar2 < (float)((uint)(*(float *)(param_1 + -10 + lVar6) - auVar7._0_4_) &
                                     uVar3);
      *(byte *)(param_1 + 0x1618) = bVar5;
      *(float *)(param_1 + -10 + lVar6) = auVar7._0_4_;
    }
    lVar6 = lVar6 + 0xa0;
  } while (lVar6 != 0x15ee);
  return;
}

