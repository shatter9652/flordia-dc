// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14018f730  size: 337 bytes
// Name:    FUN_14018f730
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1450487e0, FUN_14018f8b0, FUN_14018fbf0, FUN_14018fc80
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14018f730(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  lVar1 = func_0x000144da3240(*(undefined8 *)(param_1 + 0x40));
  lVar2 = func_0x000144da3240(*(undefined8 *)(param_1 + 0x40));
  lVar2 = func_0x000144ebbf10(*(undefined4 *)(lVar2 + 0x9c));
  lVar3 = func_0x000144da3240(*(undefined8 *)(param_1 + 0x40));
  if ((lVar2 != 0) && ((byte)(*(char *)(lVar3 + 0xfa) - 5U) < 2)) {
    uVar4 = func_0x00014018f890(*(undefined4 *)(lVar2 + 0x2c4),*(undefined8 *)(lVar2 + 0x2c8));
    *(undefined4 *)(param_1 + 0x5e4) = uVar4;
  }
  fVar5 = (float)FUN_14018fc80(*(undefined4 *)(lVar1 + 0x9c));
  fVar7 = *(float *)(param_1 + 0x5c0);
  *(float *)(param_1 + 0x5e8) = fVar7 * fVar5;
  fVar5 = *(float *)((ulonglong)DAT_149e2ea58 * 4 + 0x149e2ea4c);
  fVar6 = (float)FUN_14018fbf0(*(undefined4 *)(lVar1 + 0x9c));
  if ((fVar5 != 0.0) || (NAN(fVar5))) {
    fVar7 = *(float *)(param_1 + 0x5c4);
  }
  *(float *)(param_1 + 0x5f0) = fVar7 * fVar6;
  uVar4 = FUN_14018f8b0(*(undefined4 *)(lVar1 + 0x9c),1);
  *(undefined4 *)(param_1 + 0xaf0) = uVar4;
  uVar4 = FUN_14018f8b0(*(undefined4 *)(lVar1 + 0x9c),0);
  *(undefined4 *)(param_1 + 0xaf4) = uVar4;
  lVar1 = func_0x000144da3240(*(undefined8 *)(param_1 + 0x40));
  lVar1 = func_0x000144ec2d10(*(undefined4 *)(lVar1 + 0x9c));
  if (lVar1 != 0) {
    uVar4 = FUN_1450487e0(lVar1);
    *(undefined4 *)(param_1 + 0x5ec) = uVar4;
  }
  *(undefined4 *)(param_1 + 0x5f8) = *(undefined4 *)(param_1 + 0x5f0);
  return;
}

