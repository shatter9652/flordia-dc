// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14013edf0  size: 134 bytes
// Name:    FUN_14013edf0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14013edf0(longlong param_1,undefined1 (*param_2) [16],undefined4 *param_3,
                       undefined4 *param_4)

{
  undefined1 auVar1 [16];
  ushort uVar2;
  ulonglong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_38 [16];
  
  func_0x000144e46d90(*_DAT_14765ed18);
  auVar1 = *(undefined1 (*) [16])(param_1 + 0x10);
  auVar4 = vsubps_avx(auStack_38,*param_2);
  auVar5 = vrcpps_avx(auVar1);
  fVar6 = auVar5._0_4_;
  fVar7 = auVar5._4_4_;
  fVar8 = auVar5._8_4_;
  fVar9 = auVar5._12_4_;
  auVar5._0_4_ = ((fVar6 * auVar1._0_4_ - _DAT_145fc6ed8) * fVar6 - fVar6) * auVar4._0_4_;
  auVar5._4_4_ = ((fVar7 * auVar1._4_4_ - _DAT_145fc6ed8) * fVar7 - fVar7) * auVar4._4_4_;
  auVar5._8_4_ = ((fVar8 * auVar1._8_4_ - _DAT_145fc6ed8) * fVar8 - fVar8) * auVar4._8_4_;
  auVar5._12_4_ = ((fVar9 * auVar1._12_4_ - _DAT_145fc6ed8) * fVar9 - fVar9) * auVar4._12_4_;
  auVar1 = vmovshdup_avx(auVar5);
  *param_3 = (int)(((longlong)auVar5._0_4_ & 0xffffffffU) % (ulonglong)*(ushort *)(param_1 + 0x50));
  uVar2 = *(ushort *)(param_1 + 0x52);
  uVar3 = (longlong)auVar1._0_4_ & 0xffffffff;
  *param_4 = (int)(uVar3 % (ulonglong)uVar2);
  return uVar3 / uVar2;
}

