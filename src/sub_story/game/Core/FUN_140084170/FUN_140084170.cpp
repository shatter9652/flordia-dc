// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140084170  size: 71 bytes
// Name:    FUN_140084170
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140080650
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140084170(longlong param_1,undefined8 param_2,undefined1 (*param_3) [16],float *param_4,
                  undefined8 param_5,undefined4 *param_6)

{
  float fVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  float fVar5;
  float fVar6;
  undefined1 auVar4 [16];
  float fVar7;
  undefined8 uStack_28;
  
  uStack_28 = uStack_28 & 0xffffffffffff;
  FUN_140080650((longlong)&uStack_28 + 6,*(undefined8 *)(param_1 + 0x30),param_2);
  uVar2 = uStack_28;
  fVar1 = _DAT_146159b38;
  if ((*(char *)(param_1 + 0x310) == '\x01') && ((*(byte *)(param_1 + 0x311) & 1) != 0)) {
    fVar5 = _DAT_146159b38 * *(float *)(param_1 + 0x2e0);
    fVar6 = _DAT_146159b38 * *(float *)(param_1 + 0x2e4);
    fVar7 = _DAT_146159b38 * *(float *)(param_1 + 0x2e8);
    *(float *)*param_3 = _DAT_146159b38 * *(float *)(param_1 + 0x2dc);
    *(float *)(*param_3 + 4) = fVar5;
    *(float *)(*param_3 + 8) = fVar6;
    *(float *)(*param_3 + 0xc) = fVar7;
    fVar5 = *(float *)(param_1 + 0x2f0);
    fVar6 = *(float *)(param_1 + 0x2f4);
    fVar7 = *(float *)(param_1 + 0x2f8);
    *param_4 = fVar1 * *(float *)(param_1 + 0x2ec);
    param_4[1] = fVar1 * fVar5;
    param_4[2] = fVar1 * fVar6;
    param_4[3] = fVar1 * fVar7;
    uVar3 = *(undefined4 *)(param_1 + 0x304);
  }
  else {
    auVar4._0_4_ = _DAT_146159b38 * *(float *)(param_1 + 0xa4);
    auVar4._4_4_ = _DAT_146159b38 * *(float *)(param_1 + 0xa8);
    auVar4._8_4_ = _DAT_146159b38 * *(float *)(param_1 + 0xac);
    auVar4._12_4_ = _DAT_146159b38 * *(float *)(param_1 + 0xb0);
    *param_3 = auVar4;
    fVar5 = *(float *)(param_1 + 0xb8);
    fVar6 = *(float *)(param_1 + 0xbc);
    fVar7 = *(float *)(param_1 + 0xc0);
    *param_4 = fVar1 * *(float *)(param_1 + 0xb4);
    param_4[1] = fVar1 * fVar5;
    param_4[2] = fVar1 * fVar6;
    param_4[3] = fVar1 * fVar7;
    uStack_28 = *(undefined8 *)(param_1 + 200);
    func_0x000140cb3e20(&uStack_28,param_5);
    uVar3 = 2;
    if (((*(byte *)(param_1 + 0x313) | *(byte *)(param_1 + 0x312)) & 1) != 0) {
      uVar3 = *(undefined4 *)(param_1 + 0x24c);
    }
    if ((uVar2 & 0xc0000000000000) == 0) {
      uVar3 = *(undefined4 *)(param_1 + 0x24c);
    }
  }
  *param_6 = uVar3;
  return;
}

