// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14013d010  size: 349 bytes
// Name:    FUN_14013d010
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1455db934, FUN_1404e20c0, FUN_1455db8cc
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14013d010(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  undefined1 auVar1 [16];
  longlong unaff_GS_OFFSET;
  ulonglong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float fVar5;
  undefined1 auStack_48 [16];
  undefined1 aauStack_38 [2] [16];
  
  uVar2 = FUN_1404e20c0();
  if ((param_2 != (undefined8 *)0x0) && (*(char *)((longlong)param_1 + 0x5c) != '\0')) {
    func_0x0001455278f0(param_1,auStack_48,*param_2);
    fVar5 = (float)uVar2;
    if (*(int *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
                4) < _DAT_147c325fc) {
      FUN_1455db8cc(&DAT_147c325fc);
      if (_DAT_147c325fc == -1) {
        _DAT_147c325f8 = (float)(**(code **)(*param_1 + 0x80))(param_1);
        FUN_1455db934(&DAT_147c325fc);
      }
    }
    if (*(int *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
                4) < _DAT_147c32604) {
      FUN_1455db8cc(&DAT_147c32604);
      if (_DAT_147c32604 == -1) {
        _DAT_147c32600 = _DAT_145fc6f04 / (_DAT_147c325f8 * _DAT_147c325f8);
        FUN_1455db934(&DAT_147c32604);
      }
    }
    (**(code **)(*param_3 + 0x20))(param_3,aauStack_38);
    auVar4._0_12_ = ZEXT812(0);
    auVar4._12_4_ = 0;
    auVar1 = vsubps_avx(aauStack_38[0],auStack_48);
    auVar3._0_4_ = auVar1._0_4_ * auVar1._0_4_;
    auVar3._4_4_ = auVar1._4_4_ * auVar1._4_4_;
    auVar3._8_4_ = auVar1._8_4_ * auVar1._8_4_;
    auVar3._12_4_ = auVar1._12_4_ * auVar1._12_4_;
    auVar1 = vblendps_avx(auVar3,auVar4,8);
    auVar1 = vhaddps_avx(auVar1,auVar1);
    auVar1 = vhaddps_avx(auVar1,auVar1);
    uVar2 = (ulonglong)(uint)(auVar1._0_4_ * _DAT_147c32600 + fVar5 + _DAT_14614f808);
  }
  return uVar2;
}

