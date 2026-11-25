// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400d3680  size: 73 bytes
// Name:    FUN_1400d3680
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1400d3680(ulonglong param_1)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  ulonglong uVar3;
  undefined1 auVar4 [64];
  
  uVar3 = 0;
  auVar4 = ZEXT1264(ZEXT812(0));
  if ((param_1 & 0xfffffffffffffff0) != 0) {
    lVar1 = func_0x000144dd1230(*(undefined4 *)((param_1 & 0xfffffffffffffff0) + 0x9c));
    uVar3 = auVar4._0_8_;
    if (lVar1 != 0) {
      auVar2._0_12_ = ZEXT812(0);
      auVar2._12_4_ = 0;
      auVar2 = vcmpss_avx(auVar2,ZEXT416(*(uint *)(lVar1 + 0x44)),4);
      uVar3 = (ulonglong)(auVar2._0_4_ & _DAT_145fc6ed8);
    }
  }
  return uVar3;
}

