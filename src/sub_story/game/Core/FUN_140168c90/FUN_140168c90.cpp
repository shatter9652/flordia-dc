// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140168c90  size: 397 bytes
// Name:    FUN_140168c90
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1452afc90, FUN_145024b00
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140168c90(void)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  longlong unaff_GS_OFFSET;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if (_DAT_1492964d4 == 0) {
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      func_0x0001455db994();
    }
    lVar2 = FUN_145024b00();
    if (lVar2 != 0) {
      _DAT_1492964d4 = *(int *)(lVar2 + 0x14);
    }
  }
  auVar4._0_12_ = ZEXT812(0);
  auVar4._12_4_ = 0;
  auVar1 = vsubps_avx(_DAT_14a15dff0,_DAT_1492964e0);
  auVar3._0_4_ = auVar1._0_4_ * auVar1._0_4_;
  auVar3._4_4_ = auVar1._4_4_ * auVar1._4_4_;
  auVar3._8_4_ = auVar1._8_4_ * auVar1._8_4_;
  auVar3._12_4_ = auVar1._12_4_ * auVar1._12_4_;
  auVar1 = vblendps_avx(auVar3,auVar4,8);
  auVar1 = vhaddps_avx(auVar1,auVar1);
  auVar1 = vhaddps_avx(auVar1,auVar1);
  if (_DAT_14615a7f8 < auVar1._0_4_) {
    _DAT_1492964d0 = 0;
    _DAT_1492964e0 = _DAT_14a15dff0;
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      func_0x0001455db994();
    }
    lVar2 = FUN_1452afc90();
    if (lVar2 != 0) {
      _DAT_1492964d0 = *(undefined4 *)(lVar2 + 0x14);
    }
  }
  return;
}

