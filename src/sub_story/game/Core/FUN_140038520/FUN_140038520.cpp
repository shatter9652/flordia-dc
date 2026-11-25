// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140038520  size: 304 bytes
// Name:    FUN_140038520
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e40400
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140038520(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,uint param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  float fVar5;
  float fVar6;
  
  uVar1 = *param_1;
  lVar2 = FUN_144e40400(*param_2);
  lVar3 = FUN_144e40400(uVar1);
  uVar4 = (ulonglong)(param_4 & 0xff);
  fVar6 = _DAT_145fc6f50;
  if (lVar2 != 0) {
    fVar6 = *(float *)(lVar2 + 0xe20 + uVar4 * 0x1e0);
  }
  fVar5 = _DAT_145fc6f50;
  if (lVar3 != 0) {
    fVar5 = *(float *)(lVar3 + 0xe20 + uVar4 * 0x1e0);
  }
  if (fVar6 < fVar5) {
    uVar1 = *param_2;
    *param_2 = *param_1;
    *param_1 = uVar1;
  }
  uVar1 = *param_2;
  lVar2 = FUN_144e40400(*param_3);
  lVar3 = FUN_144e40400(uVar1);
  fVar6 = _DAT_145fc6f50;
  if (lVar2 != 0) {
    fVar6 = *(float *)(lVar2 + 0xe20 + uVar4 * 0x1e0);
  }
  fVar5 = _DAT_145fc6f50;
  if (lVar3 != 0) {
    fVar5 = *(float *)(lVar3 + 0xe20 + uVar4 * 0x1e0);
  }
  if (fVar6 < fVar5) {
    uVar1 = *param_3;
    *param_3 = *param_2;
    *param_2 = uVar1;
    uVar1 = *param_1;
    lVar2 = FUN_144e40400();
    lVar3 = FUN_144e40400(uVar1);
    fVar6 = _DAT_145fc6f50;
    if (lVar2 != 0) {
      fVar6 = *(float *)(lVar2 + 0xe20 + uVar4 * 0x1e0);
    }
    fVar5 = _DAT_145fc6f50;
    if (lVar3 != 0) {
      fVar5 = *(float *)(lVar3 + 0xe20 + uVar4 * 0x1e0);
    }
    if (fVar6 < fVar5) {
      uVar1 = *param_2;
      *param_2 = *param_1;
      *param_1 = uVar1;
    }
  }
  return;
}

