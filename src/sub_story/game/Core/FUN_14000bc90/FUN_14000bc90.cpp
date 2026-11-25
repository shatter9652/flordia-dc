// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14000bc90  size: 185 bytes
// Name:    FUN_14000bc90
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140ac92d0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14000bc90(longlong param_1,undefined8 param_2,char param_3)

{
  undefined8 uVar1;
  undefined1 extraout_var [56];
  undefined1 auVar2 [64];
  undefined1 auVar3 [16];
  undefined1 auVar4 [64];
  undefined1 extraout_var_00 [56];
  
  auVar3 = ZEXT416((uint)_DAT_145fc6f50);
  if (((*(short *)(param_1 + 0xec) != -1) && (*(float *)(param_1 + 0x17c) < _DAT_145fc6f50)) &&
     ((param_3 != '\0' ||
      (auVar3 = ZEXT416((uint)_DAT_145fc6f50), *(char *)(param_1 + 0x198) != '\x01')))) {
    auVar4._0_8_ = FUN_140ac92d0(param_1 + 0xd0,param_2);
    auVar4._8_56_ = extraout_var;
    auVar3 = vminss_avx(ZEXT416((uint)_DAT_145fc6f50),auVar4._0_16_);
  }
  uVar1 = auVar3._0_8_;
  if (((*(short *)(param_1 + 0x1bc) != -1) && (*(float *)(param_1 + 0x24c) < _DAT_145fc6f50)) &&
     ((param_3 != '\0' || (*(char *)(param_1 + 0x268) != '\x01')))) {
    auVar4 = ZEXT1664(auVar3);
    auVar2._0_8_ = FUN_140ac92d0(param_1 + 0x1a0,param_2);
    auVar2._8_56_ = extraout_var_00;
    auVar3 = vminss_avx(auVar4._0_16_,auVar2._0_16_);
    uVar1 = auVar3._0_8_;
  }
  return uVar1;
}

