// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14013fd50  size: 199 bytes
// Name:    FUN_14013fd50
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f2b280
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14013fd50(longlong param_1,undefined1 (*param_2) [16],undefined1 param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  auVar3._4_4_ = _DAT_145fc6f50;
  auVar3._0_4_ = _DAT_145fc6f50;
  auVar3._8_4_ = _DAT_145fc6f50;
  auVar3._12_4_ = _DAT_145fc6f50;
  auVar4._4_4_ = _DAT_145fc6f54;
  auVar4._0_4_ = _DAT_145fc6f54;
  auVar4._8_4_ = _DAT_145fc6f54;
  auVar4._12_4_ = _DAT_145fc6f54;
  *param_2 = auVar3;
  param_2[1] = auVar4;
  func_0x00014013fe20(**(undefined8 **)(*(longlong *)(param_1 + 0x20) + 0xf8),
                      *(undefined4 *)(param_1 + 0x9c),param_2,0,param_3);
  lVar1 = **(longlong **)(*(longlong *)(param_1 + 0x20) + 0xf8);
  if (-1 < *(short *)(lVar1 + 0xbe)) {
    func_0x00014013fe20(lVar1,*(undefined4 *)(param_1 + 0x9c),param_2,0x5f,param_3);
  }
  auVar3 = vcmpps_avx(*param_2,param_2[1],2);
  uVar2 = vmovmskps_avx(auVar3);
  if ((~(byte)uVar2 & 7) != 0) {
    FUN_144f2b280(param_1,&uStack_48);
    *(undefined8 *)*param_2 = uStack_48;
    *(undefined8 *)(*param_2 + 8) = uStack_40;
    *(undefined8 *)param_2[1] = uStack_38;
    *(undefined8 *)(param_2[1] + 8) = uStack_30;
  }
  return;
}

