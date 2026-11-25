// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140117660  size: 214 bytes
// Name:    FUN_140117660
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144fc3c00, FUN_140117760, FUN_144fc3ce0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140117660(longlong param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 in_ZMM2 [64];
  undefined1 auVar4 [64];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  longlong alStack_40 [5];
  
  auVar4 = ZEXT1664(in_ZMM2._0_16_);
  FUN_144fc3ce0(&uStack_50,0);
  auVar3._4_4_ = _DAT_145fc6edc;
  auVar3._0_4_ = _DAT_145fc6edc;
  auVar3._8_4_ = _DAT_145fc6edc;
  auVar3._12_4_ = _DAT_145fc6edc;
  auVar1 = vminss_avx(ZEXT416(_DAT_145fc6ed8),auVar4._0_16_);
  auVar2 = vcmpss_avx(auVar4._0_16_,ZEXT816(0) << 0x20,1);
  auVar2 = vblendvps_avx(ZEXT416((uint)(auVar1._0_4_ * _DAT_146159f68 + _DAT_145fc6edc)),auVar3,
                         auVar2);
  uStack_50 = CONCAT13((char)(int)auVar2._0_4_,(undefined3)uStack_50);
  FUN_144fc3c00(&uStack_50);
  uStack_48 = param_2;
  FUN_144fc3c00(&uStack_50);
  FUN_140117760(_DAT_14ab83db8,alStack_40,*(undefined4 *)(param_1 + 0xd4),0x10,param_1 + 0xd0);
  if (alStack_40[0] != 0) {
    auVar2._0_12_ = ZEXT812(0);
    auVar2._12_4_ = 0;
    *(undefined1 (*) [16])(alStack_40[0] + 4) = auVar2;
    *(ulonglong *)(alStack_40[0] + 4) = CONCAT44(uStack_4c,uStack_50);
    *(undefined8 *)(alStack_40[0] + 0xc) = uStack_48;
  }
  func_0x000140117740(alStack_40);
  return;
}

