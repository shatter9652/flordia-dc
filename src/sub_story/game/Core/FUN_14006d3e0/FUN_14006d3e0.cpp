// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14006d3e0  size: 126 bytes
// Name:    FUN_14006d3e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_14006d3e0(ulonglong param_1)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  undefined1 auVar6 [16];
  
  uVar1 = *(undefined4 *)((param_1 & 0xfffffffffffffff0) + 0x9c);
  lVar3 = func_0x00014006d460(uVar1);
  lVar4 = func_0x000144e2a320(uVar1);
  fVar5 = *(float *)(lVar4 + 0x1a4);
  if (lVar3 != 0) {
    auVar6._0_4_ = (float)((uint)fVar5 ^ _DAT_145fc6f10);
    auVar6._4_4_ = _DAT_145fc6f10;
    auVar6._8_4_ = _DAT_145fc6f10;
    auVar6._12_4_ = _DAT_145fc6f10;
    auVar2 = vmaxss_avx(auVar6,ZEXT416((uint)fVar5));
    if (_DAT_145fc6f00 < auVar2._0_4_) {
      return fVar5 < auVar6._0_4_;
    }
    fVar5 = *(float *)(lVar3 + 0x28);
    if ((fVar5 == 0.0) && (!NAN(fVar5))) {
      return *(char *)(lVar3 + 0x1c) == '\0';
    }
  }
  return fVar5 < 0.0;
}

