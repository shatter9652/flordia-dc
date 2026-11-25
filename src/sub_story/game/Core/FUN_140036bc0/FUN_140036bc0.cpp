// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140036bc0  size: 238 bytes
// Name:    FUN_140036bc0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140036bc0(longlong param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x000144e8a320();
  func_0x000144e8a9e0(param_1);
  auVar4._8_8_ = _DAT_14615a7f0;
  auVar4._0_8_ = _DAT_14615a7f0;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = _DAT_14a9438cc;
  auVar1 = vpmovzxdq_avx(auVar1);
  auVar1 = vpor_avx(auVar1,auVar4);
  auVar1 = vsubpd_avx(auVar1,auVar4);
  auVar1 = vcvtpd2ps_avx(auVar1);
  auVar4 = vunpcklpd_avx(ZEXT816(0),auVar1);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = _DAT_146159bc0 ^ *(ulonglong *)(param_1 + 0x12348);
  auVar1 = vpor_avx(auVar2,auVar4 ^ *(undefined1 (*) [16])(param_1 + 0x12338));
  if (auVar1 != (undefined1  [16])0x0) {
    *(ulonglong *)(param_1 + 0x12348) = _DAT_146159bc0;
    uStack_20 = auVar4._0_8_;
    uStack_18 = auVar4._8_8_;
    *(undefined8 *)(param_1 + 0x12338) = uStack_20;
    *(undefined8 *)(param_1 + 0x12340) = uStack_18;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = *(ulonglong *)(param_1 + 0x12348) ^ *(ulonglong *)(param_1 + 0x123c8);
    auVar1 = vpor_avx(auVar3,*(undefined1 (*) [16])(param_1 + 0x12338) ^
                             *(undefined1 (*) [16])(param_1 + 0x123b8));
    *(ulonglong *)(param_1 + 0x12520) =
         (ulonglong)((uint)(auVar1 != (undefined1  [16])0x0) << 0x1b) |
         *(ulonglong *)(param_1 + 0x12520) & 0xfffffffff7ffffff;
  }
  DAT_1475deff0 = 1;
  return;
}

