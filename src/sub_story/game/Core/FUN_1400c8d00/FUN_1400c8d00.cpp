// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400c8d00  size: 184 bytes
// Name:    FUN_1400c8d00
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400c8d00(longlong param_1)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  char cVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  cVar4 = func_0x00014527f5c0(*(undefined8 *)(param_1 + 0x2f8),0,0,0);
  if (*(char *)(param_1 + 0x388) != cVar4) {
    *(char *)(param_1 + 0x388) = cVar4;
    uVar3 = _DAT_145fc6f10;
    if (cVar4 == '\0') {
      uVar1 = *(uint *)(param_1 + 0x280);
      *(undefined4 *)(param_1 + 0x280) = 0;
      fVar6 = (float)(uVar1 ^ uVar3);
      fVar5 = *(float *)(param_1 + 0x284);
    }
    else {
      fVar5 = *(float *)(param_1 + 0x284);
      auVar8._4_4_ = _DAT_14617073c;
      auVar8._0_4_ = _DAT_14617073c;
      auVar8._8_4_ = _DAT_14617073c;
      auVar8._12_4_ = _DAT_14617073c;
      auVar7 = ZEXT416((uint)(fVar5 + *(float *)(param_1 + 0x9c)));
      auVar2 = vminss_avx(ZEXT416(_DAT_14615d7e0),auVar7);
      auVar7 = vcmpss_avx(auVar7,ZEXT416(_DAT_14617073c),1);
      auVar7 = vblendvps_avx(auVar2,auVar8,auVar7);
      fVar6 = auVar7._0_4_ - fVar5;
      *(float *)(param_1 + 0x280) = fVar6;
    }
    *(float *)(param_1 + 0x284) = fVar5 + fVar6;
    *(undefined4 *)(param_1 + 0x374) = 0;
  }
  return;
}

