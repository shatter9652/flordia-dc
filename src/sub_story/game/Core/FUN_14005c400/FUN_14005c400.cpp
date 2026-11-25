// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14005c400  size: 206 bytes
// Name:    FUN_14005c400
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14005c400(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 auVar7 [16];
  undefined1 in_ZMM1 [64];
  
  uVar1 = *(uint *)(param_1 + 8);
  lVar2 = param_2[5];
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x28);
  *(uint *)(param_1 + 8) = uVar1 + 1;
  puVar5 = (undefined8 *)func_0x0001400f2070(param_1,1);
  auVar4 = vpcmpeqd_avx(in_ZMM1._0_16_,in_ZMM1._0_16_);
  *puVar5 = FUN_1448adb00;
  *(undefined4 *)(puVar5 + 1) = 0;
  *(undefined2 *)((longlong)puVar5 + 0xc) = 0x500;
  *(uint *)(puVar5 + 5) = uVar1;
  puVar5[6] = *param_2;
  lVar6 = *param_3;
  *(bool *)(puVar5 + 8) = lVar2 == lVar3;
  if (lVar6 != 0) {
    lVar6 = lVar6 + 0x20;
  }
  puVar5[7] = lVar6;
  *(undefined1 *)(puVar5 + 9) = 0;
  *(undefined4 *)(puVar5 + 10) = *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x34);
  puVar5[0xb] = *(longlong *)(param_1 + 0x20) + 0xb0;
  *(undefined8 **)(param_1 + 0x13dc8 + (ulonglong)uVar1 * 8) = puVar5;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = *(ulonglong *)(param_1 + 0x10);
  auVar4 = vpsubd_avx(auVar7,auVar4);
  *(uint *)(param_1 + 0x156c8 + (ulonglong)auVar4._4_4_ * 4) = uVar1;
  *(longlong *)(param_1 + 0x10) = auVar4._0_8_;
  *(undefined8 **)(param_1 + 0x13148 + (ulonglong)auVar4._0_4_ * 8) = puVar5;
  return;
}

