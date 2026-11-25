// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140181460  size: 118 bytes
// Name:    FUN_140181460
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140182870
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140181460(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  undefined8 *puVar4;
  undefined1 in_ZMM0 [64];
  
  *param_1 = &UNK_1466327a0;
  if (param_1[2] == 0) {
    lVar1 = param_1[6];
    if (lVar1 != 0) {
      *(undefined8 *)(lVar1 + 0x40) = 0;
      *(byte *)(lVar1 + 0x4a) = *(byte *)(lVar1 + 0x4a) & 0xef;
    }
  }
  else {
    lVar1 = param_1[3];
    auVar3 = vpcmpeqd_avx(in_ZMM0._0_16_,in_ZMM0._0_16_);
    *(longlong *)(param_1[2] + 0x18) = lVar1;
    *(undefined8 *)(lVar1 + 0x10) = param_1[2];
    *(undefined1 (*) [16])(param_1 + 2) = auVar3;
  }
  if (param_1[8] != 0) {
    FUN_140182870(param_1[8],0);
  }
  puVar4 = (undefined8 *)param_1[7];
  while (puVar4 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)puVar4[1];
    (**(code **)*puVar4)(puVar4,1);
    puVar4 = puVar2;
  }
  return;
}

