// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14012a890  size: 170 bytes
// Name:    FUN_14012a890
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14012a940
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14012a890(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  float fVar3;
  
  param_2[1] = *param_2;
  lVar1 = func_0x0001450572a0(*(undefined4 *)(param_1 + 0x9c));
  if (lVar1 == 0) {
    uVar2 = 0;
    *(undefined8 *)(param_2 + 3) = 0;
  }
  else {
    fVar3 = 0.0;
    uVar2 = 0;
    if (*(int *)(lVar1 + 0xc4) != 0) {
      fVar3 = 0.0;
      uVar2 = FUN_14012a940(*(int *)(lVar1 + 0xc4),*(undefined8 *)(lVar1 + 200));
    }
    param_2[3] = uVar2;
    if (fVar3 < *(float *)(lVar1 + 0xa8)) {
      fVar3 = *(float *)(lVar1 + 0xa4);
    }
    param_2[4] = fVar3;
    uVar2 = 0;
    if (0.0 < *(float *)(lVar1 + 0xb4)) {
      uVar2 = *(undefined4 *)(lVar1 + 0xb0);
    }
  }
  param_2[5] = uVar2;
  param_2[2] = 0;
  return;
}

