// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140065ec0  size: 181 bytes
// Name:    FUN_140065ec0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_140065ec0(char param_1,char param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  longlong lVar3;
  longlong unaff_GS_OFFSET;
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 in_ZMM2 [64];
  undefined1 auVar8 [64];
  
  auVar7 = in_ZMM2._0_16_;
  auVar8 = ZEXT1664(auVar7);
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
    auVar7 = auVar8._0_16_;
  }
  lVar3 = 0x14ab4a400;
  auVar4._0_4_ = (float)((uint)auVar7._0_4_ ^ _DAT_145fc6f10);
  auVar4._4_4_ = auVar7._4_4_ ^ _DAT_145fc6f10;
  auVar4._8_4_ = auVar7._8_4_ ^ _DAT_145fc6f10;
  auVar4._12_4_ = auVar7._12_4_ ^ _DAT_145fc6f10;
  if ((*(byte *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x12d8) & 6) == 0) {
    lVar3 = 0x14ab48d40;
  }
  uVar2 = (ulonglong)(auVar7._0_4_ < auVar4._0_4_);
  fVar6 = *(float *)(lVar3 + 0x3d0 + uVar2 * 8);
  fVar5 = *(float *)(lVar3 + 0x3d4 + uVar2 * 8);
  if (param_1 == '\0') {
    auVar1 = vmaxss_avx(ZEXT416((uint)fVar6),ZEXT416((uint)fVar5));
    fVar6 = auVar1._0_4_;
  }
  if (param_2 == '\0') {
    fVar5 = fVar6;
  }
  auVar7 = vmaxss_avx(auVar4,auVar7);
  return auVar7._0_4_ * (fVar5 + _DAT_145fc6f48) + _DAT_145fc6ed8;
}

