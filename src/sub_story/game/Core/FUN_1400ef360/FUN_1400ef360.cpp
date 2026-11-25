// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400ef360  size: 135 bytes
// Name:    FUN_1400ef360
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1453ef2d0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined4
FUN_1400ef360(longlong param_1,undefined8 param_2,undefined1 (*param_3) [16],float *param_4)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  undefined1 auStack_38 [16];
  
  if (((~*(uint *)(param_1 + 0x70) & 0x1ffff) == 0) || (lVar3 = func_0x000144de7c70(), lVar3 != 0))
  {
    FUN_1453ef2d0(param_1,auStack_38,param_2);
    auVar1 = *(undefined1 (*) [16])(param_1 + 0x60);
    auVar4._0_4_ = auVar1._0_4_ + *param_4;
    auVar4._4_4_ = auVar1._4_4_ + param_4[1];
    auVar4._8_4_ = auVar1._8_4_ + param_4[2];
    auVar4._12_4_ = auVar1._12_4_ + param_4[3];
    auVar4 = vcmpps_avx(auStack_38,auVar4,2);
    uVar2 = vmovmskps_avx(auVar4);
    if ((~(byte)uVar2 & 7) == 0) {
      auVar1 = vsubps_avx(*param_3,auVar1);
      auVar1 = vcmpps_avx(auVar1,auStack_38,2);
      uVar2 = vmovmskps_avx(auVar1);
      return CONCAT31((int3)((uint)uVar2 >> 8),(~(byte)uVar2 & 7) == 0);
    }
  }
  return 0;
}

