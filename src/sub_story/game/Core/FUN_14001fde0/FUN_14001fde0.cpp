// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14001fde0  size: 198 bytes
// Name:    FUN_14001fde0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144da0e70
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14001fde0(longlong param_1,undefined8 param_2,byte param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 in_ZMM3 [64];
  undefined1 auVar4 [64];
  
  if (param_3 != 2) {
    auVar1 = in_ZMM3._0_16_;
    if (param_3 - 3 < 2) {
      auVar2 = vcmpss_avx(auVar1,ZEXT416(_DAT_145fc6f48),1);
      auVar3._4_4_ = _DAT_145fc6f48;
      auVar3._0_4_ = _DAT_145fc6f48;
      auVar3._8_4_ = _DAT_145fc6f48;
      auVar3._12_4_ = _DAT_145fc6f48;
      auVar1 = vminss_avx(ZEXT416(_DAT_145fc6ed8),auVar1);
      goto LAB_14001fe14;
    }
    if (param_3 != 0) {
      if (param_3 != 1) {
        return 0;
      }
      auVar4 = ZEXT1664(auVar1);
      func_0x000144e15690(*(undefined8 *)(param_1 + 8));
      FUN_144da0e70(param_1);
      in_ZMM3 = ZEXT1664(auVar4._0_16_);
    }
  }
  auVar3._4_4_ = _DAT_146159be0;
  auVar3._0_4_ = _DAT_146159be0;
  auVar3._8_4_ = _DAT_146159be0;
  auVar3._12_4_ = _DAT_146159be0;
  auVar2 = ZEXT416((uint)(in_ZMM3._0_4_ * _DAT_145fc6f80));
  auVar1 = vminss_avx(ZEXT416((uint)_DAT_145fc6f80),auVar2);
  auVar2 = vcmpss_avx(auVar2,ZEXT416(_DAT_146159be0),1);
LAB_14001fe14:
  auVar1 = vblendvps_avx(auVar1,auVar3,auVar2);
  return auVar1._0_8_;
}

