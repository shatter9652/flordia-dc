// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400f5150  size: 71 bytes
// Name:    FUN_1400f5150
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1400f5150(longlong param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined1 auVar3 [64];
  float fVar4;
  undefined1 extraout_var [56];
  
  uVar2 = 0;
  if ((DAT_14926e850 == '\0') && (uVar2 = 0, 0.0 < _DAT_14926e838)) {
    fVar4 = _DAT_14926e838;
    auVar3._0_8_ = func_0x0001400f51a0();
    auVar3._8_56_ = extraout_var;
    auVar1 = vminss_avx(ZEXT416((uint)(fVar4 * *(float *)(param_1 + 100))),auVar3._0_16_);
    uVar2 = auVar1._0_8_;
  }
  return uVar2;
}

