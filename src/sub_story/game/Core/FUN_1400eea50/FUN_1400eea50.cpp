// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400eea50  size: 245 bytes
// Name:    FUN_1400eea50
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400eedf0, FUN_144fb81a0, FUN_1400eeb70
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400eea50(longlong param_1,longlong param_2,longlong param_3)

{
  float fVar1;
  undefined1 auVar2 [16];
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  FUN_1400eeb70();
  auVar2 = *(undefined1 (*) [16])(param_3 + 0xff0);
  auVar7._4_4_ = _DAT_145fc6f70;
  auVar7._0_4_ = _DAT_145fc6f70;
  auVar7._8_4_ = _DAT_145fc6f70;
  auVar7._12_4_ = _DAT_145fc6f70;
  auVar6._0_4_ = auVar2._0_4_ & _DAT_145fc6f4c;
  auVar6._4_4_ = auVar2._4_4_ & _DAT_145fc6f4c;
  auVar6._8_4_ = auVar2._8_4_ & _DAT_145fc6f4c;
  auVar6._12_4_ = auVar2._12_4_ & _DAT_145fc6f4c;
  auVar6 = vcmpps_avx(auVar6,auVar7,0x11);
  uVar3 = vmovmskps_avx(auVar6);
  if ((~(byte)uVar3 & 7) == 0) {
    *(undefined1 (*) [16])(param_1 + 0x70) = auVar2;
  }
  func_0x0001400eeb50(param_1 + 0x90);
  FUN_1400eedf0(*(undefined8 *)(param_1 + 8),&fStack_38,param_2);
  *(ulonglong *)(param_1 + 0x90) = CONCAT44(fStack_34,fStack_38);
  *(ulonglong *)(param_1 + 0x98) = CONCAT44(fStack_2c,fStack_30);
  lVar4 = func_0x000144d9f7c0(*(undefined4 *)(param_2 + 0x9c));
  if (lVar4 != 0) {
    uVar5 = func_0x000144edcb10(lVar4);
    FUN_144fb81a0(uVar5,&fStack_38,1);
    *(ulonglong *)(param_1 + 0xa0) = CONCAT44(fStack_34,fStack_38);
    *(ulonglong *)(param_1 + 0xa8) = CONCAT44(fStack_2c,fStack_30);
    uStack_28 = *(undefined8 *)(param_2 + 0x70);
    uStack_20 = *(undefined8 *)(param_2 + 0x78);
    func_0x000144dc3790(&uStack_28,&fStack_38);
    fVar1 = *(float *)(*(longlong *)(param_1 + 8) + 0x24);
    *(float *)(param_1 + 0xb0) = fVar1 * *(float *)(param_1 + 0xa0) + fStack_38;
    *(float *)(param_1 + 0xb4) = fVar1 * *(float *)(param_1 + 0xa4) + fStack_34;
    *(float *)(param_1 + 0xb8) = fVar1 * *(float *)(param_1 + 0xa8) + fStack_30;
    *(float *)(param_1 + 0xbc) = fVar1 * *(float *)(param_1 + 0xac) + fStack_2c;
  }
  return;
}

