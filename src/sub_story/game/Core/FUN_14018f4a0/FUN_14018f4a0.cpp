// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14018f4a0  size: 190 bytes
// Name:    FUN_14018f4a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1453f5f90
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14018f4a0(longlong param_1)

{
  longlong lVar1;
  float fVar2;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  if (*(char *)(param_1 + 0xa08) == '\x01') {
    lVar1 = func_0x000144da3240(*(undefined8 *)(param_1 + 0x40));
    uStack_58 = *(undefined8 *)(lVar1 + 0x40);
    uStack_50 = *(undefined8 *)(lVar1 + 0x48);
    uStack_48 = *(undefined8 *)(lVar1 + 0x50);
    uStack_40 = *(undefined8 *)(lVar1 + 0x58);
    uStack_38 = *(undefined8 *)(lVar1 + 0x60);
    uStack_30 = *(undefined8 *)(lVar1 + 0x68);
    uStack_28 = *(undefined8 *)(param_1 + 0x160);
    uStack_20 = *(undefined8 *)(param_1 + 0x168);
    fVar2 = (float)FUN_1453f5f90(param_1 + 0x9b0,&uStack_58);
    *(float *)(param_1 + 0xacc) = fVar2;
    *(float *)(param_1 + 0x614) = fVar2 + *(float *)(param_1 + 0x614);
    uStack_28 = *(undefined8 *)(param_1 + 0x150);
    uStack_20 = *(undefined8 *)(param_1 + 0x158);
    fVar2 = (float)FUN_1453f5f90(param_1 + 0x790,&uStack_58,*(undefined4 *)(param_1 + 0x7f0));
    *(float *)(param_1 + 0xac0) = fVar2;
    *(float *)(param_1 + 0x61c) = fVar2 + *(float *)(param_1 + 0x61c);
  }
  return;
}

